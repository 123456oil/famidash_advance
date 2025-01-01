#include "main.h"
#include "../graphics/includes.h"

const COLOR blockPalette[] = {
    0x7C00, 0x7C00, 0x6800, 0x5400, 0x3C00, 0x2800, 0x1400, 0x0000, 0x7D4A, 0x7EB5, 0x7FFF, 0x540A, 0x3C10, 0x2815, 0x141A, 0x0000,
    0x7C00, 0x7C00, 0x6800, 0x5400, 0x3C00, 0x2800, 0x1400, 0x0000, 0x7D4A, 0x7EB5, 0x7FFF, 0x540A, 0x3C10, 0x2815, 0x141A, 0x0000,
    0x7C00, 0x7C00, 0x6800, 0x5400, 0x3C00, 0x2800, 0x1400, 0x0000, 0x7D4A, 0x7EB5, 0x7FFF, 0x540A, 0x3C10, 0x2815, 0x141A, 0x0000,
    0x7C00, 0x7C00, 0x6800, 0x5400, 0x3C00, 0x2800, 0x1400, 0x0000, 0x7D4A, 0x7EB5, 0x7FFF, 0x540A, 0x3C10, 0x2815, 0x141A, 0x0000,
    0x7C00, 0x7C00, 0x6800, 0x5400, 0x3C00, 0x2800, 0x1400, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

const COLOR spritePalette[] = {
    0x0000, 0x0000, 0x0060, 0x0540, 0x01A0, 0x13E0, 0x2F00, 0x4A20, 0x7fe0, 0x2820, 0x0C00, 0x7FFF, 0x7FE0, 0x0000, 0x0000, 0x0000, // 0
    0x0000, 0x0000, 0x7FFF, 0x7E9F, 0x7DDF, 0x7C9F, 0x2CAB, 0x7DEF, 0x3BFF, 0x27DF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 1
    0x0000, 0x0000, 0x7FFF, 0x33EB, 0x1BE5, 0x03E0, 0x0960, 0x7DEF, 0x7FEE, 0x7FE3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 2
    0x0000, 0x0000, 0x7FFF, 0x7FEE, 0x7F47, 0x7EC0, 0x2D22, 0x7DEF, 0x7E3F, 0x7D5F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 3
    0x0000, 0x0000, 0x7FFF, 0x23FF, 0x27DF, 0x2B9F, 0x0D4B, 0x7DEF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 4
    0x0000, 0x0000, 0x7FFF, 0x3A3F, 0x199F, 0x001F, 0x088B, 0x7DEF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 5
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 6
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 7
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 8
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 9
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // a
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // b
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // c
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // d
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // e
    0x7C00, 0x7C00, 0x6800, 0x5400, 0x3C00, 0x2800, 0x1400, 0x0000, 0x7D4A, 0x7EB5, 0x7FFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // f
};

const COLOR menu_palette[] = {
    0x7C00, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
};

const SCR_ENTRY bg_tiles[] = {
    0x0001,0x0001,0x0001,0x0001,0x0001,0x0002,0x0003,0x0001,
    0x0001,0x0001,0x0001,0x0001,0x0001,0x0004,0x0001,0x0001,
    0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0005,
    0x0003,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0002,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x000B,0x000C,
    0x000C,0x000C,0x000C,0x000C,0x000C,0x000D,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x000E,0x000F,0x000F,0x000F,0x000F,0x0010,0x0011,0x0012,
    0x0012,0x0012,0x0012,0x0012,0x0012,0x0013,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0000,0x0000,0x0014,0x0006,0x0006,0x0015,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0016,0x0017,0x0017,
    0x0017,0x0017,0x0017,0x0017,0x0017,0x0017,0x0017,0x0018,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0019,0x0014,0x0006,0x0006,0x0007,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x001A,0x001B,0x001B,
    0x001B,0x001B,0x001B,0x001B,0x001B,0x001B,0x001B,0x001C,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x001D,0x001E,0x001F,0x0020,0x0020,0x0021,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0022,0x000F,0x000F,0x000F,0x000F,0x000F,0x000F,0x0010,
    0x0023,0x0023,0x0023,0x0023,0x0023,0x0024,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0025,0x0026,0x0006,0x0015,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0027,0x0026,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0027,0x0028,0x0029,0x002A,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x002B,0x002C,
    0x002C,0x002C,0x002C,0x002C,0x002C,0x002D,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0027,0x0026,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x002E,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x002F,0x0017,0x0017,0x0017,0x0030,0x0031,0x0017,0x0032,
    0x0033,0x000C,0x000C,0x000C,0x000C,0x0034,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0015,
    0x0012,0x0012,0x0012,0x0012,0x0012,0x0035,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0036,0x000C,0x000C,
    0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x0037,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x001A,0x001B,0x001B,
    0x001B,0x001B,0x001B,0x001B,0x0038,0x0039,0x0012,0x003A,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x003C,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,0x0008,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x003D,0x003E,0x003F,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0040,0x0041,0x0041,0x0042,0x0041,0x0043,0x0044,0x0045,
    0x0041,0x0041,0x0041,0x0041,0x0041,0x0046,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x003C,0x0006,0x000A,
    0x0008,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0047,0x0006,0x0006,0x0006,0x0009,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x0048,0x000F,0x0049,
    0x0022,0x000F,0x000F,0x000F,0x000F,0x000F,0x000F,0x0010,
    0x0006,0x0006,0x0006,0x0047,0x0006,0x0006,0x0006,0x0009,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x003C,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0015,
    0x0006,0x0006,0x0006,0x0047,0x0006,0x0006,0x0006,0x0009,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x003C,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x004C,0x004A,0x004A,0x004B,0x004C,0x004A,0x004A,0x004D,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x004E,0x004F,0x004F,
    0x004F,0x004F,0x004F,0x004F,0x0050,0x003C,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0051,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x003C,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0052,
    0x003E,0x003E,0x003E,0x003E,0x003E,0x0053,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x003C,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0051,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x003C,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0051,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x003C,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0051,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x003C,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0051,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0009,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x003B,0x003C,0x0006,0x0006,
    0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0007,
    0x001D,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0054,
    0x0020,0x0020,0x0020,0x0020,0x0020,0x0055,0x0020,0x0020,
    0x0020,0x0020,0x0020,0x0020,0x001E,0x0056,0x0020,0x0020,
    0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0021
};


// This is all the color black for transition purposes
const COLOR black_buffer[] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 

    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 

    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 

    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 

    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    
};

u16 particle_timer = 0;

void run_particles() {
    memcpy32(&tile_mem_obj[1][478], &orb_pad_particles[particle_timer], (sizeof(TILE) / sizeof(u32)) * 2);
    memcpy32(&tile_mem_obj[1][510], &orb_pad_particles[particle_timer+32], (sizeof(TILE) / sizeof(u32)) * 2);

    particle_timer += 2;

    if (particle_timer > 31) particle_timer = 0;
}