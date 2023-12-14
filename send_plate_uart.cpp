/**
 * @file send_plate_uart.cpp
 * @author Saumya Bhandarkar (ssbhanda@andrew.cmu.edu)
 * @brief Implementation of send_plate_uart.
 * @version 0.1
 * @date 2023-12-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "send_plate_uart.hpp"


send_status_t send_plate_uart(plate_image_metadata_t *plate_metadata, uint8_t *plate_bytes, size_t bb_x, size_t bb_y, size_t bb_width, size_t bb_height) {

    // https://www.arduino.cc/reference/en/language/functions/communication/serial/write/
    // Looks like Serial.write would work best? And it looks like you can just
    // point it to a buffer as well?

    // send size of image (size_t)
    int plate_bytes = sizeof(plate_bytes);
    mySerial.write(reinterpret_cast<byte*>(&plate_bytes), sizeof(plate_bytes));

    // Send bounding box information (size_t each)
    mySerial.write(reinterpret_cast<byte*>(&bb_x), sizeof(bb_x));
    mySerial.write(reinterpret_cast<byte*>(&bb_y), sizeof(bb_y));
    mySerial.write(reinterpret_cast<byte*>(&bb_width), sizeof(bb_width));
    mySerial.write(reinterpret_cast<byte*>(&bb_height), sizeof(bb_height));

    // send just the bounding box data (should be able to plan for size using
    // previous measurements)
    for (int y = bb_y; y < bb_y + bb_height; y++) {
        for (int x = bb_x; x < bb_x + bb_width; x++) {
            int pixelIndex = y * cols + x;
            mySerial.write(imageData[pixelIndex]);
        }
    }

    return send_status_t::SUCCESS;

}