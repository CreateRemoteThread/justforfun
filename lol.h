#ifndef LOL_H_
#define LOL_H_

#define BLACK 1 ///< Black pixel
#define WHITE 0 ///< White pixel

#define LCDWIDTH 84  ///< LCD is 84 pixels wide
#define LCDHEIGHT 48 ///< 48 pixels high

#define PCD8544_POWERDOWN 0x04 ///< Function set, Power down mode
#define PCD8544_ENTRYMODE 0x02 ///< Function set, Entry mode
#define PCD8544_EXTENDEDINSTRUCTION                                            \
0x01 ///< Function set, Extended instruction set control

#define PCD8544_DISPLAYBLANK 0x0    ///< Display control, blank
#define PCD8544_DISPLAYNORMAL 0x4   ///< Display control, normal mode
#define PCD8544_DISPLAYALLON 0x1    ///< Display control, all segments on
#define PCD8544_DISPLAYINVERTED 0x5 ///< Display control, inverse mode

#define PCD8544_FUNCTIONSET 0x20 ///< Basic instruction set
#define PCD8544_DISPLAYCONTROL                                                 \
0x08 ///< Basic instruction set - Set display configuration
#define PCD8544_SETYADDR                                                       \
0x40 ///< Basic instruction set - Set Y address of RAM, 0 <= Y <= 5
#define PCD8544_SETXADDR                                                       \
0x80 ///< Basic instruction set - Set X address of RAM, 0 <= X <= 83

#define PCD8544_SETTEMP                                                        \
0x04 ///< Extended instruction set - Set temperature coefficient
#define PCD8544_SETBIAS 0x10 ///< Extended instruction set - Set bias system
#define PCD8544_SETVOP                                                         \
0x80 ///< Extended instruction set - Write Vop to register

#define PCD8544_SPI_CLOCK_DIV                                                  \
SPI_CLOCK_DIV4 ///< Default to max SPI clock speed for PCD8544 of 4 mhz (16mhz
///< / 4) for normal Arduinos. This can be modified to change
///< the clock speed if necessary (like for supporting other
///< hardware).
void drawSprite(int _x, int _y, int spriteHeight, int spriteWidth, const char *spriteBlock);


#endif /* LOL_H_ */