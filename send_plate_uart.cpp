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


send_status_t send_plate_uart(plate_image_metadata_t *plate_metadata, uint8_t *plate_bytes) {

    // https://www.arduino.cc/reference/en/language/functions/communication/serial/write/
    // Looks like Serial.write would work best? And it looks like you can just
    // point it to a buffer as well?

    // ...

    return send_status_t::SUCCESS;

}