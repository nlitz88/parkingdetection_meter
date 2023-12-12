/**
 * @file send_plate_uart.hpp
 * @author Nathan Litzinger (nlitz88@gmail.com)
 * @brief Contains types and any other declarations for sending plate image
 * crops over uart.
 * @version 0.1
 * @date 2023-12-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "send_plate_common.hpp"

/**
 * @brief Struct type containing all fields needed to communicate via UART.
 * https://en.wikipedia.org/wiki/Universal_asynchronous_receiver-transmitter and
 * a recap on
 * https://www.deviceplus.com/arduino/arduino-communication-protocols-tutorial/#3protocols 
 * 
 */

/**
 * @brief Sends an image of a license plate to a hub via UART.
 * 
 * @param plate_metadata Struct containing the metadata of the plate's image
 * crop.
 * @param plate_bytes Buffer containing the bytes.
 * @param uart_connection Struct containing the details necessary to communicate
 * over UART.
 * @return send_status_t Returns SUCCESS upon a successul transmission, FAILURE
 * otherwise.
 */
send_status_t send_plate_uart(plate_image_metadata_t *plate_metadata, uint8_t *plate_bytes);