/**
 * @file send_plate_http.hpp
 * @author Nathan Litzinger (nlitz88@gmail.com)
 * @brief Provides types and declarations for sending plate image crops to hub
 * via HTTP.
 * @version 0.1
 * @date 2023-12-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "send_plate_common.hpp"

/**
 * @brief Struct type for defining the connection to an HTTP endpoint.
 * 
 */
typedef struct {
    char *ipv4_address;
    uint16_t port_number;
} connection_t;