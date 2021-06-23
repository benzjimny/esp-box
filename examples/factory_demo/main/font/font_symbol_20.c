/*******************************************************************************
 * Size: 20 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef FONT_SYMBOL_20
#define FONT_SYMBOL_20 1
#endif

#if FONT_SYMBOL_20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+F001 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0x73, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x38, 0xdf, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x4, 0x9e, 0xff, 0xfd, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x49, 0xef, 0xff, 0xc7, 0x20, 0xef,
    0x0, 0x0, 0x0, 0x8f, 0xff, 0xfc, 0x61, 0x0,
    0x0, 0xef, 0x0, 0x0, 0x1, 0xff, 0xb6, 0x10,
    0x0, 0x0, 0x49, 0xff, 0x0, 0x0, 0x2, 0xfb,
    0x0, 0x0, 0x5, 0xaf, 0xff, 0xff, 0x0, 0x0,
    0x2, 0xfb, 0x0, 0x5a, 0xff, 0xff, 0xa5, 0xef,
    0x0, 0x0, 0x2, 0xfd, 0xbf, 0xff, 0xea, 0x50,
    0x0, 0xef, 0x0, 0x0, 0x2, 0xff, 0xfe, 0x94,
    0x0, 0x0, 0x0, 0xef, 0x0, 0x0, 0x2, 0xfd,
    0x30, 0x0, 0x0, 0x0, 0x0, 0xef, 0x0, 0x0,
    0x2, 0xfb, 0x0, 0x0, 0x0, 0x2, 0x30, 0xef,
    0x0, 0x0, 0x2, 0xfb, 0x0, 0x0, 0x4, 0xdf,
    0xff, 0xff, 0x0, 0x0, 0x2, 0xfb, 0x0, 0x0,
    0x3f, 0xfb, 0xaf, 0xff, 0x1, 0x7a, 0xa8, 0xfb,
    0x0, 0x0, 0x9f, 0x60, 0x1, 0xff, 0x3e, 0xff,
    0xff, 0xfb, 0x0, 0x0, 0x9f, 0x90, 0x4, 0xfd,
    0xcf, 0x92, 0x3c, 0xfb, 0x0, 0x0, 0x2f, 0xff,
    0xef, 0xf6, 0xff, 0x0, 0x3, 0xfb, 0x0, 0x0,
    0x3, 0xcf, 0xfe, 0x60, 0xcf, 0x93, 0x4c, 0xf7,
    0x0, 0x0, 0x0, 0x0, 0x10, 0x0, 0x3e, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0x7a, 0xa5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+F011 "" */
    0x0, 0x0, 0x0, 0x0, 0x4, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x45, 0x0,
    0xf, 0xf0, 0x0, 0x67, 0x0, 0x0, 0x0, 0x7,
    0xfe, 0x0, 0xf, 0xf0, 0x0, 0xef, 0xa0, 0x0,
    0x0, 0x7f, 0xe3, 0x0, 0xf, 0xf0, 0x0, 0x2d,
    0xf9, 0x0, 0x3, 0xff, 0x20, 0x0, 0xf, 0xf0,
    0x0, 0x1, 0xef, 0x40, 0xc, 0xf6, 0x0, 0x0,
    0xf, 0xf0, 0x0, 0x0, 0x5f, 0xd0, 0x2f, 0xd0,
    0x0, 0x0, 0xf, 0xf0, 0x0, 0x0, 0xd, 0xf3,
    0x7f, 0x70, 0x0, 0x0, 0xf, 0xf0, 0x0, 0x0,
    0x7, 0xf7, 0x9f, 0x50, 0x0, 0x0, 0xf, 0xf0,
    0x0, 0x0, 0x4, 0xf9, 0xaf, 0x30, 0x0, 0x0,
    0xf, 0xf0, 0x0, 0x0, 0x3, 0xfa, 0x9f, 0x40,
    0x0, 0x0, 0xb, 0xb0, 0x0, 0x0, 0x4, 0xf9,
    0x7f, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xf7, 0x3f, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xd, 0xf2, 0xc, 0xf5, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0xc0, 0x3, 0xff,
    0x20, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0x30,
    0x0, 0x7f, 0xe3, 0x0, 0x0, 0x0, 0x0, 0x3e,
    0xf7, 0x0, 0x0, 0x8, 0xff, 0x92, 0x0, 0x0,
    0x29, 0xff, 0x80, 0x0, 0x0, 0x0, 0x5f, 0xff,
    0xec, 0xce, 0xff, 0xf5, 0x0, 0x0, 0x0, 0x0,
    0x1, 0x7c, 0xff, 0xff, 0xc7, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x10, 0x0, 0x0,
    0x0, 0x0,

    /* U+F013 "" */
    0x0, 0x0, 0x0, 0x0, 0x1, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0xff, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f,
    0xec, 0xcf, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x7,
    0x40, 0x7f, 0x90, 0xc, 0xf4, 0x4, 0x60, 0x0,
    0x0, 0x9f, 0xfd, 0xff, 0x80, 0xc, 0xff, 0xdf,
    0xf8, 0x0, 0x5, 0xfe, 0xef, 0xd4, 0x0, 0x0,
    0x5e, 0xfe, 0xef, 0x40, 0xd, 0xf4, 0x6, 0x0,
    0x1, 0x10, 0x1, 0x60, 0x4f, 0xd0, 0x4f, 0xc0,
    0x0, 0x4, 0xdf, 0xfc, 0x20, 0x0, 0xc, 0xf3,
    0x5f, 0xf9, 0x10, 0x3f, 0xfd, 0xdf, 0xe1, 0x1,
    0x9f, 0xf5, 0x5, 0xef, 0x30, 0xaf, 0x70, 0xa,
    0xf7, 0x3, 0xfe, 0x60, 0x0, 0xcf, 0x10, 0xcf,
    0x10, 0x4, 0xfa, 0x1, 0xfc, 0x0, 0x6, 0xef,
    0x30, 0xaf, 0x70, 0xa, 0xf7, 0x3, 0xfe, 0x50,
    0x5f, 0xf9, 0x10, 0x3f, 0xfd, 0xdf, 0xe1, 0x1,
    0x9f, 0xf5, 0x3f, 0xc0, 0x0, 0x4, 0xdf, 0xfc,
    0x20, 0x0, 0xc, 0xf3, 0xd, 0xf5, 0x6, 0x0,
    0x1, 0x10, 0x1, 0x60, 0x5f, 0xd0, 0x4, 0xfe,
    0xef, 0xd4, 0x0, 0x0, 0x5e, 0xfe, 0xef, 0x40,
    0x0, 0x9f, 0xfd, 0xff, 0x80, 0xc, 0xff, 0xdf,
    0xf9, 0x0, 0x0, 0x7, 0x40, 0x7f, 0x90, 0xc,
    0xf4, 0x4, 0x60, 0x0, 0x0, 0x0, 0x0, 0x4f,
    0xec, 0xcf, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1c, 0xff, 0xff, 0xb0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x10, 0x0, 0x0,
    0x0, 0x0,

    /* U+F015 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9f, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1c, 0xfc, 0xcf, 0xd2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xef, 0xa0, 0xa, 0xff, 0x50, 0xf, 0xb0, 0x0,
    0x0, 0x0, 0x0, 0x5f, 0xf7, 0x0, 0x0, 0x7f,
    0xf8, 0x1f, 0xc0, 0x0, 0x0, 0x0, 0x8, 0xff,
    0x50, 0x0, 0x0, 0x4, 0xff, 0xcf, 0xc0, 0x0,
    0x0, 0x0, 0xbf, 0xe3, 0x0, 0x0, 0x0, 0x0,
    0x2d, 0xff, 0xc0, 0x0, 0x0, 0x2d, 0xfc, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xbf, 0xf3, 0x0,
    0x4, 0xef, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0x50, 0x1f, 0xff, 0xf2, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xf2,
    0x8, 0x5b, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xc4, 0x90, 0x0, 0xb, 0xf2, 0x0,
    0xa, 0xee, 0xee, 0xa0, 0x0, 0x1f, 0xc0, 0x0,
    0x0, 0xb, 0xf2, 0x0, 0x1f, 0xff, 0xff, 0xf1,
    0x0, 0x1f, 0xc0, 0x0, 0x0, 0xb, 0xf2, 0x0,
    0x1f, 0xc0, 0xc, 0xf1, 0x0, 0x1f, 0xc0, 0x0,
    0x0, 0xb, 0xf2, 0x0, 0x1f, 0xc0, 0xc, 0xf1,
    0x0, 0x1f, 0xc0, 0x0, 0x0, 0xb, 0xf2, 0x0,
    0x1f, 0xc0, 0xc, 0xf1, 0x0, 0x1f, 0xc0, 0x0,
    0x0, 0xb, 0xfd, 0xdd, 0xdf, 0xc0, 0xc, 0xfd,
    0xdd, 0xdf, 0xc0, 0x0, 0x0, 0x6, 0xff, 0xff,
    0xff, 0x80, 0x8, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+F1EB "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x21, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0x7b, 0xef, 0xff, 0xff, 0xeb, 0x72, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5c, 0xff, 0xff, 0xdb, 0xbb,
    0xdf, 0xff, 0xfc, 0x50, 0x0, 0x0, 0x3, 0xcf,
    0xfd, 0x73, 0x0, 0x0, 0x0, 0x3, 0x7d, 0xff,
    0xc3, 0x0, 0x8, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x4, 0xcf, 0xf8, 0xb, 0xff,
    0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0xfb, 0x8c, 0x20, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2c, 0x80,
    0x0, 0x0, 0x0, 0x4, 0x9c, 0xef, 0xec, 0x94,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5d,
    0xff, 0xff, 0xef, 0xff, 0xfd, 0x50, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xaf, 0xfc, 0x61, 0x0, 0x1,
    0x6c, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x8f,
    0xd3, 0x0, 0x0, 0x0, 0x0, 0x3, 0xdf, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x70, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3c, 0xfc, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xfe, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xf7, 0x7, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8f, 0x60, 0x6f, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xcf, 0xf3,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xef, 0xe5, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+F240 "" */
    0x3b, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xa1, 0x0, 0xdf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfa, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x20, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xf0, 0xfe, 0x4, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x8e,
    0xf0, 0xfe, 0x4, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0xd, 0xf0, 0xfe, 0x4,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0xd, 0xf0, 0xfe, 0x4, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0xd, 0xf0,
    0xfe, 0x4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x8e, 0xf0, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xf0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x20, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfa, 0x0, 0x3c, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xb1,
    0x0,

    /* U+F241 "" */
    0x3b, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xa1, 0x0, 0xdf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfa, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x20, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xf0, 0xfe, 0x1, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x60, 0x0, 0x0, 0x8e,
    0xf0, 0xfe, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x60, 0x0, 0x0, 0xd, 0xf0, 0xfe, 0x1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x60, 0x0,
    0x0, 0xd, 0xf0, 0xfe, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x60, 0x0, 0x0, 0xd, 0xf0,
    0xfe, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x60, 0x0, 0x0, 0x8e, 0xf0, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xf0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x20, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfa, 0x0, 0x3c, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xb1,
    0x0,

    /* U+F242 "" */
    0x3b, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xa1, 0x0, 0xdf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfa, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x20, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xf0, 0xfe, 0x1, 0xff, 0xff,
    0xff, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0xf0, 0xfe, 0x1, 0xff, 0xff, 0xff, 0xff, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0xd, 0xf0, 0xfe, 0x1,
    0xff, 0xff, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xf0, 0xfe, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xf0,
    0xfe, 0x1, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x0,
    0x0, 0x0, 0x0, 0x8e, 0xf0, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xf0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x20, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfa, 0x0, 0x3c, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xb1,
    0x0,

    /* U+F243 "" */
    0x3b, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xa1, 0x0, 0xdf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfa, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x20, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xf0, 0xfe, 0x1, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0xf0, 0xfe, 0x1, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xd, 0xf0, 0xfe, 0x1,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xf0, 0xfe, 0x1, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xf0,
    0xfe, 0x1, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8e, 0xf0, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xf0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x20, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfa, 0x0, 0x3c, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xb1,
    0x0,

    /* U+F244 "" */
    0x3b, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xa1, 0x0, 0xdf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfa, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x20, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xf0, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8e,
    0xf0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xd, 0xf0, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xf0, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xf0,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8e, 0xf0, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xf0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x20, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfa, 0x0, 0x3c, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xb1,
    0x0,

    /* U+F6AA "" */
    0x3, 0xcf, 0xc3, 0x2, 0xff, 0xef, 0xf2, 0x8f,
    0x70, 0x7f, 0x88, 0xf6, 0x6, 0xf8, 0x3f, 0xfc,
    0xff, 0x30, 0x5e, 0xfe, 0x50, 0x0, 0x1, 0x0,
    0x0,

    /* U+F6AB "" */
    0x0, 0x0, 0x59, 0xde, 0xfe, 0xc8, 0x30, 0x0,
    0x0, 0x6, 0xef, 0xff, 0xfe, 0xff, 0xff, 0xc4,
    0x0, 0x1b, 0xff, 0xb5, 0x10, 0x0, 0x26, 0xdf,
    0xf8, 0xa, 0xfc, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x5e, 0xf5, 0x17, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x17, 0x0, 0x0, 0x0, 0x5, 0xdf, 0xb2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0xff, 0xef,
    0xe1, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0x50,
    0x9f, 0x50, 0x0, 0x0, 0x0, 0x0, 0xa, 0xf4,
    0x8, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5f,
    0xfc, 0xff, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xfe, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0x0, 0x0, 0x0, 0x0,

    /* U+F6AC "" */
    0x33, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xf7, 0x0, 0x0,
    0x0, 0x1, 0x23, 0x32, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x4e, 0xfb, 0x10, 0x6, 0xbf, 0xff, 0xff,
    0xff, 0xc8, 0x30, 0x0, 0x0, 0x0, 0x2c, 0xfd,
    0x30, 0x1c, 0xec, 0xaa, 0xac, 0xef, 0xff, 0xd6,
    0x0, 0x0, 0x0, 0x9, 0xff, 0x60, 0x0, 0x0,
    0x0, 0x0, 0x16, 0xbf, 0xfd, 0x40, 0x0, 0x60,
    0x6, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2a, 0xff, 0x90, 0xbf, 0xa0, 0x3, 0xef, 0xc1,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0xef, 0xb8,
    0xc1, 0x0, 0x1, 0xbf, 0xe4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xc8, 0x0, 0x0, 0x0, 0x0,
    0x8f, 0xf7, 0x0, 0x49, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x4, 0x0, 0x4e, 0xfb, 0x10,
    0x4e, 0xd5, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa,
    0xfc, 0x10, 0x2c, 0xfd, 0x30, 0x2c, 0xfa, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xfd, 0x30, 0x0, 0x9,
    0xff, 0x60, 0xa, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x7, 0x0, 0x0, 0x0, 0x6, 0xff, 0x90, 0x5,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xa1, 0x3, 0xdf, 0xc2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2, 0xff, 0xc3, 0x1, 0xbf,
    0xe4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8f, 0x70, 0x76, 0x0, 0x8f, 0xf7, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xf6, 0x6, 0xf6,
    0x0, 0x4e, 0xfb, 0x10, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xfc, 0xff, 0x30, 0x0, 0x2c, 0xfd,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5e, 0xfe,
    0x50, 0x0, 0x0, 0x9, 0xff, 0x60, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0,
    0x6, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x20,

    /* U+F75D "" */
    0x1d, 0xff, 0xfd, 0x10, 0xbf, 0xff, 0xf9, 0x2e,
    0x22, 0x2e, 0x30, 0xf3, 0x22, 0x5d, 0x3e, 0x0,
    0xe, 0x30, 0xf1, 0x0, 0x4d, 0x3e, 0x0, 0xe,
    0x30, 0xf1, 0x0, 0x4d, 0x2e, 0x22, 0x2e, 0x30,
    0xf3, 0x22, 0x5d, 0x1d, 0xff, 0xfd, 0x10, 0xbf,
    0xff, 0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xff, 0xff, 0x30, 0xff, 0xff, 0xf9,
    0x2e, 0x22, 0x2e, 0x30, 0xf3, 0x22, 0x5d, 0x3e,
    0x0, 0xe, 0x30, 0xf1, 0x0, 0x4d, 0x3e, 0x0,
    0xe, 0x30, 0xf1, 0x0, 0x4d, 0x2e, 0x22, 0x2e,
    0x30, 0xf3, 0x22, 0x5d, 0x1d, 0xff, 0xfd, 0x10,
    0xbf, 0xff, 0xf9,

    /* U+F9A0 "裂" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x46, 0x10, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xaf, 0xfe, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xcf, 0xff, 0xff, 0x60, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xef, 0xff,
    0xff, 0xff, 0x90, 0xc, 0xe0, 0x0, 0x0, 0x0,
    0x6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xef,
    0x0, 0x0, 0x0, 0x9, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xef, 0xf0, 0x0, 0x0, 0x1b, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x2d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf7, 0x0, 0x4f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xe,
    0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfd, 0xf6, 0x34, 0x8f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x16, 0x0, 0x8,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x8f, 0xff, 0xff, 0xff, 0xbb,
    0xdf, 0xff, 0xff, 0xff, 0x0, 0x0, 0x8, 0xff,
    0xff, 0xff, 0xf0, 0x8, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x8f, 0xff, 0xff, 0xff, 0x0, 0x8f,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x8, 0xff, 0xff,
    0xff, 0xf0, 0x8, 0xff, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0xff, 0x0, 0x7f, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0xb0, 0x3, 0xff, 0xff, 0xff, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0,

    /* U+F9A2 "廉" */
    0x0, 0x0, 0x0, 0x0, 0x1, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1d, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5f,
    0xff, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x7,
    0x30, 0x8f, 0xff, 0xff, 0xf7, 0x4, 0x70, 0x0,
    0x0, 0xbf, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xef,
    0xf9, 0x0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x40, 0xe, 0xff, 0xff, 0xff,
    0xfd, 0xdf, 0xff, 0xff, 0xff, 0xd0, 0x5f, 0xff,
    0xff, 0xfa, 0x10, 0x2, 0xbf, 0xff, 0xff, 0xf3,
    0x7f, 0xff, 0xff, 0xb0, 0x0, 0x0, 0xc, 0xff,
    0xff, 0xf5, 0x6, 0xff, 0xff, 0x30, 0x0, 0x0,
    0x5, 0xff, 0xfe, 0x50, 0x0, 0xdf, 0xff, 0x10,
    0x0, 0x0, 0x3, 0xff, 0xfc, 0x0, 0x6, 0xff,
    0xff, 0x30, 0x0, 0x0, 0x5, 0xff, 0xfe, 0x50,
    0x7f, 0xff, 0xff, 0xb0, 0x0, 0x0, 0xc, 0xff,
    0xff, 0xf4, 0x5f, 0xff, 0xff, 0xfa, 0x10, 0x2,
    0xbf, 0xff, 0xff, 0xf3, 0xe, 0xff, 0xff, 0xff,
    0xfd, 0xdf, 0xff, 0xff, 0xff, 0xd0, 0x6, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x50,
    0x0, 0xbf, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xef,
    0xf9, 0x0, 0x0, 0x7, 0x30, 0x8f, 0xff, 0xff,
    0xf7, 0x4, 0x70, 0x0, 0x0, 0x0, 0x0, 0x5f,
    0xff, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1d, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x10, 0x0, 0x0,
    0x0, 0x0,

    /* U+F9A3 "念" */
    0x2a, 0xaa, 0xa8, 0x2, 0xaa, 0xaa, 0x80, 0x8f,
    0xff, 0xff, 0x18, 0xff, 0xff, 0xf1, 0x8f, 0xff,
    0xff, 0x18, 0xff, 0xff, 0xf1, 0x8f, 0xff, 0xff,
    0x18, 0xff, 0xff, 0xf1, 0x8f, 0xff, 0xff, 0x18,
    0xff, 0xff, 0xf1, 0x5f, 0xff, 0xfc, 0x5, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0xff, 0xfc, 0x5, 0xff, 0xff, 0xc0,
    0x8f, 0xff, 0xff, 0x18, 0xff, 0xff, 0xf1, 0x8f,
    0xff, 0xff, 0x18, 0xff, 0xff, 0xf1, 0x8f, 0xff,
    0xff, 0x18, 0xff, 0xff, 0xf1, 0x8f, 0xff, 0xff,
    0x18, 0xff, 0xff, 0xf1, 0x3a, 0xaa, 0xa8, 0x3,
    0xaa, 0xaa, 0x80,

    /* U+F9A4 "捻" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x21, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0x7b, 0xef, 0xff, 0xff, 0xeb, 0x72, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5c, 0xff, 0xff, 0xdb, 0xbb,
    0xdf, 0xff, 0xfc, 0x50, 0x0, 0x0, 0x3, 0xcf,
    0xfd, 0x73, 0x0, 0x0, 0x0, 0x3, 0x7d, 0xff,
    0xc3, 0x0, 0x8, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x4, 0xcf, 0xf8, 0xb, 0xff,
    0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0xfb, 0x8c, 0x20, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2c, 0x80,
    0x0, 0x0, 0x0, 0x4, 0x9c, 0xef, 0xec, 0x94,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5d,
    0xff, 0xff, 0xef, 0xff, 0xfd, 0x50, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xaf, 0xfc, 0x61, 0x0, 0x1,
    0x6c, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x8f,
    0xd3, 0x0, 0x0, 0x0, 0x0, 0x3, 0xdf, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x70, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3c, 0xfc, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8f, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf3,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x30,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+F9A5 "殮" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4, 0x85, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xae, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x15, 0xaf, 0xff, 0xff, 0xff, 0x10,
    0x0, 0x0, 0x0, 0x16, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xf1, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x10, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x0,
    0x0, 0x2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x10, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0xe9, 0x4c, 0xf1, 0x0, 0x0, 0x2, 0xff,
    0xff, 0xff, 0xd8, 0x30, 0x0, 0xcf, 0x10, 0x0,
    0x0, 0x2f, 0xff, 0xd8, 0x20, 0x0, 0x0, 0xc,
    0xf1, 0x0, 0x0, 0x2, 0xfd, 0x20, 0x0, 0x0,
    0x0, 0x0, 0xcf, 0x10, 0x0, 0x0, 0x2f, 0xb0,
    0x0, 0x0, 0x0, 0x35, 0x2c, 0xf1, 0x0, 0x0,
    0x2, 0xfb, 0x0, 0x0, 0x4, 0xef, 0xff, 0xff,
    0x10, 0x0, 0x0, 0x2f, 0xb0, 0x0, 0x1, 0xff,
    0xff, 0xff, 0xf1, 0x1, 0x9c, 0xca, 0xfb, 0x0,
    0x0, 0x6f, 0xff, 0xff, 0xff, 0x12, 0xef, 0xff,
    0xff, 0xb0, 0x0, 0x4, 0xff, 0xff, 0xff, 0xe0,
    0xaf, 0xff, 0xff, 0xfb, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xf5, 0xb, 0xff, 0xff, 0xff, 0xa0, 0x0,
    0x0, 0x7, 0xcd, 0xb4, 0x0, 0x7f, 0xff, 0xff,
    0xf5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x9f, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x15, 0x51, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 320, .box_w = 20, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 210, .adv_w = 320, .box_w = 20, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 420, .adv_w = 320, .box_w = 20, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 630, .adv_w = 360, .box_w = 24, .box_h = 19, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 858, .adv_w = 400, .box_w = 25, .box_h = 19, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1096, .adv_w = 400, .box_w = 26, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1265, .adv_w = 400, .box_w = 26, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1434, .adv_w = 400, .box_w = 26, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1603, .adv_w = 400, .box_w = 26, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1772, .adv_w = 400, .box_w = 26, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1941, .adv_w = 400, .box_w = 7, .box_h = 7, .ofs_x = 9, .ofs_y = -2},
    {.bitmap_index = 1966, .adv_w = 400, .box_w = 17, .box_h = 12, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 2068, .adv_w = 400, .box_w = 25, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2331, .adv_w = 320, .box_w = 14, .box_h = 13, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 2422, .adv_w = 360, .box_w = 23, .box_h = 19, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2641, .adv_w = 320, .box_w = 20, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2851, .adv_w = 320, .box_w = 14, .box_h = 13, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 2942, .adv_w = 400, .box_w = 25, .box_h = 19, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3180, .adv_w = 320, .box_w = 21, .box_h = 21, .ofs_x = 0, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0xefe1, 0xeff1, 0xeff3, 0xeff5, 0xf1cb, 0xf220, 0xf221,
    0xf222, 0xf223, 0xf224, 0xf68a, 0xf68b, 0xf68c, 0xf73d, 0xf980,
    0xf982, 0xf983, 0xf984, 0xf985
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 63878, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 20, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t font_symbol_20 = {
#else
lv_font_t font_symbol_20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 21,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if FONT_SYMBOL_20*/
