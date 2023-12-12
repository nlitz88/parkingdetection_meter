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
 * @brief Struct type definining a uart receiver. Fields defined according to
 * https://en.wikipedia.org/wiki/Universal_asynchronous_receiver-transmitter and
 * a recap on
 * https://www.deviceplus.com/arduino/arduino-communication-protocols-tutorial/#3protocols 
 * 
 */
typedef struct {
    uint32_t baud_rate;
} receiver_t;