/**
 * @file send_plate_common.hpp
 * @author Nathan Litzinger (nlitz88@gmail.com)
 * @brief Defines shared interfaces and types used for sending plates from meter
 * devices to hub devices.
 * @version 0.1
 * @date 2023-12-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <cstdint>

/**
 * @brief Type definition for return statuses used by send_plate.
 * 
 */
typedef enum {
    SUCCESS = 0,
    FAILURE = 1
} send_status_t;

/**
 * @brief Type used for number of bytes.
 * 
 */
typedef uint32_t plate_byte_count_t;

/**
 * @brief Types used for height and width of the license plate image crops.
 * 
 */
typedef uint8_t height_t;
typedef uint8_t width_t;

/**
 * @brief Struct type containing the metadata associated with the cropped image
 * of a license plate. Contains the number of bytes in the array of plate bytes
 * and the height and width of the plate image in # pixels. 
 * 
 */
typedef struct {
    plate_byte_count_t num_bytes;
    height_t plate_height_px;
    width_t plate_width_px;
} plate_image_metadata_t;