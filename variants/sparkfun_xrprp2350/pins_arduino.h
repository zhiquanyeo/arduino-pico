#pragma once

#include <cyw43_wrappers.h>


// LEDs
#define PIN_LED        (64u)

// Serial
#define PIN_SERIAL1_TX (0u)
#define PIN_SERIAL1_RX (1u)

#define PIN_SERIAL2_TX (31u)
#define PIN_SERIAL2_RX (31u)

// SPI
#define PIN_SPI0_MISO  (16u)
#define PIN_SPI0_MOSI  (19u)
#define PIN_SPI0_SCK   (18u)
#define PIN_SPI0_SS    (17u)

#define PIN_SPI1_MISO  (31u)
#define PIN_SPI1_MOSI  (31u)
#define PIN_SPI1_SCK   (31u)
#define PIN_SPI1_SS    (31u)

// Wire
#define PIN_WIRE0_SDA  (4u)
#define PIN_WIRE0_SCL  (5u)

#define PIN_WIRE1_SDA  (26u)
#define PIN_WIRE1_SCL  (27u)

#define SERIAL_HOWMANY (3u)
#define SPI_HOWMANY    (1u)
#define WIRE_HOWMANY   (1u)

// PSRAM
#define RP2350_PSRAM_CS         (8u)
#define RP2350_PSRAM_MAX_SCK_HZ (109*1000*1000)

#define PICO_RP2350B 1

#include "../generic/common.h"
