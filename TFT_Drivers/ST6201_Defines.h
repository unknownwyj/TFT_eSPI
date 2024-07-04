#ifndef TFT_WIDTH
  #define TFT_WIDTH  480
#endif
#ifndef TFT_HEIGHT
  #define TFT_HEIGHT 272
#endif

#define TFT_NOP     0x00 // same
#define TFT_SWRST   0x01 // same

#define TFT_SLPIN   0x10 // same
#define TFT_SLPOUT  0x11 // same
#define TFT_NORON   0x13 // same

#define TFT_INVOFF  0x20 // same
#define TFT_INVON   0x21 // same
#define TFT_DISPOFF 0x28 // same
#define TFT_DISPON  0x29 // same
#define TFT_CASET   0x2A // same
#define TFT_PASET   0x2B // same
#define TFT_RAMWR   0x2C // same
#define TFT_RAMRD   0x2E // same
#define TFT_MADCTL  0x36 // maybe same
#define TFT_COLMOD  0x3A // same

#define TFT_MAD_COLOR_ORDER TFT_MAD_BGR