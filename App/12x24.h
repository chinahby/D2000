unsigned char num[] =              // ASCII
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // - -
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0xFC,0xFE,0xFC,  // -!-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x03,0xFF,0x03,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x30,0x79,0x30,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x1C,0xFC,0x1C,0x00,0x00,0x1C,  // -"-
	0xFC,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0xE0,0xE0,0x00,0x00,0x00,0xF0,  // -#-
	0xF0,0x80,0x80,0x00,0x82,0x82,0xFF,0xFF,
	0x41,0x41,0x41,0xFF,0xFF,0x20,0x20,0x00,
	0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x0F,
	0x0F,0x00,0x00,0x00,

	0xC0,0xE0,0x30,0x10,0x10,0xFC,0xFC,0x10,  // -$-
	0x10,0x30,0xE0,0xC0,0x03,0x07,0x0C,0x08,
	0x18,0xFF,0xFF,0x30,0x30,0x60,0xC0,0x80,
	0x07,0x0F,0x18,0x10,0x10,0x7F,0x7F,0x10,
	0x10,0x18,0x0F,0x07,

	0xF0,0xF8,0x04,0x04,0xF8,0xF0,0x00,0x00,  // -%-
	0xC0,0x70,0x18,0x00,0x01,0x03,0x04,0x84,
	0xE3,0x39,0x8E,0x43,0x41,0x80,0x00,0x00,
	0x30,0x1C,0x07,0x01,0x00,0x1F,0x3F,0x40,
	0x40,0x3F,0x1F,0x00,

	0x00,0xF0,0x88,0x04,0x04,0x84,0x78,0x00,  // -&-
	0x00,0x00,0x00,0x00,0xE0,0xF8,0x07,0x06,
	0x1D,0x70,0xC0,0x80,0x00,0x40,0xC0,0x40,
	0x0F,0x1F,0x30,0x20,0x20,0x30,0x11,0x1B,
	0x0E,0x1E,0x31,0x20,

	0x00,0x00,0x00,0x00,0x00,0x3C,0xFC,0x3C,  // -'-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x78,  // -(-
	0x0C,0x02,0x01,0x00,0x00,0x00,0x00,0x00,
	0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x1E,
	0x30,0x40,0x80,0x00,

	0x00,0x01,0x02,0x0C,0x78,0xE0,0x80,0x00,  // -)-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
	0x00,0x80,0x40,0x30,0x1E,0x07,0x01,0x00,
	0x00,0x00,0x00,0x00,

	0x80,0x80,0x00,0x00,0x60,0xF0,0x60,0x00,  // -*-
	0x00,0x80,0x80,0x00,0x81,0xC3,0xC3,0x24,
	0x00,0xC3,0x00,0x24,0xC3,0xC3,0x81,0x00,
	0x01,0x01,0x00,0x00,0x06,0x0F,0x06,0x00,
	0x00,0x01,0x01,0x00,

	0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,  // -+-
	0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,
	0x18,0xFF,0xFF,0x18,0x18,0x18,0x18,0x00,
	0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -,-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x8C,0xDE,0x7E,0x3C,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ---
	0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,
	0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -.-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x18,0x3C,0x3C,0x18,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,  // -/-
	0x70,0x1C,0x06,0x00,0x00,0x00,0x00,0xC0,
	0x70,0x1C,0x07,0x01,0x00,0x00,0x00,0x00,
	0x30,0x1C,0x07,0x01,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0xC0,0xF0,0x38,0x0C,0x04,0x0C,0x38,  // -0-
	0xF0,0xC0,0x00,0x00,0xFF,0xFF,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,
	0x00,0x03,0x0F,0x1C,0x30,0x20,0x30,0x1C,
	0x0F,0x03,0x00,0x00,

	0x00,0x10,0x10,0x18,0x18,0xFC,0xFC,0x00,  // -1-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x20,0x20,0x20,0x3F,0x3F,0x20,
	0x20,0x20,0x00,0x00,

	0x60,0xF0,0xF8,0x0C,0x04,0x04,0x04,0x0C,  // -2-
	0x18,0xF0,0xE0,0x00,0x00,0x00,0x00,0x80,
	0xC0,0x60,0x30,0x18,0x0E,0x07,0x01,0x00,
	0x38,0x3E,0x3F,0x33,0x30,0x30,0x30,0x30,
	0x30,0x30,0x3C,0x00,

	0x00,0x30,0x78,0x78,0x0C,0x04,0x04,0x0C,  // -3-
	0x18,0xF8,0xF0,0x00,0x00,0x00,0x00,0x00,
	0x08,0x08,0x1C,0x16,0x33,0xE1,0xC0,0x00,
	0x0C,0x1E,0x3E,0x30,0x20,0x20,0x20,0x30,
	0x18,0x1F,0x0F,0x00,

	0x00,0x00,0x00,0x00,0x80,0xE0,0x38,0xFC,  // -4-
	0xFC,0x00,0x00,0x00,0x80,0xE0,0x38,0x0E,
	0x03,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,
	0x01,0x01,0x01,0x01,0x01,0x21,0x21,0x3F,
	0x3F,0x21,0x21,0x01,

	0x00,0xFC,0xFC,0x0C,0x0C,0x0C,0x0C,0x0C,  // -5-
	0x0C,0x0C,0x00,0x00,0x00,0x1F,0x0F,0x08,
	0x04,0x02,0x02,0x06,0x1C,0xF8,0xE0,0x00,
	0x0C,0x1E,0x3E,0x30,0x20,0x20,0x20,0x30,
	0x1C,0x0F,0x03,0x00,

	0xC0,0xF0,0x38,0x0C,0x04,0x04,0x0C,0x7C,  // -6-
	0x78,0x30,0x00,0x00,0xFF,0xFF,0x08,0x04,
	0x02,0x02,0x02,0x06,0x1C,0xF8,0xE0,0x00,
	0x03,0x0F,0x1C,0x30,0x20,0x20,0x20,0x30,
	0x1C,0x0F,0x03,0x00,

	0x78,0x1C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,  // -7-
	0xCC,0x7C,0x1C,0x00,0x00,0x00,0x00,0x00,
	0x80,0xF0,0x7C,0x0F,0x01,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0xF0,0xF8,0x0C,0x04,0x04,0x04,0x0C,  // -8-
	0xF8,0xF0,0x00,0x00,0xC0,0xE0,0x31,0x1B,
	0x0E,0x0C,0x0E,0x1B,0x31,0xE0,0xC0,0x00,
	0x07,0x0F,0x18,0x30,0x20,0x20,0x20,0x30,
	0x18,0x0F,0x07,0x00,

	0xC0,0xF0,0x38,0x0C,0x04,0x04,0x04,0x0C,  // -9-
	0x38,0xF0,0xC0,0x00,0x07,0x1F,0x38,0x60,
	0x40,0x40,0x40,0x20,0x10,0xFF,0xFF,0x00,
	0x00,0x0C,0x1E,0x3E,0x30,0x20,0x20,0x30,
	0x1C,0x0F,0x03,0x00,

	0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0x80,  // -:-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x81,0xC3,0xC3,0x81,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x01,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0x80,  // -;-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x81,0xC3,0xC3,0x81,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x11,0x1B,0x0F,0x07,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x60,  // -<-
	0x30,0x18,0x08,0x00,0x10,0x38,0x6C,0xC6,
	0x83,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x01,0x03,0x06,0x0C,
	0x18,0x30,0x20,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -=-
	0x00,0x00,0x00,0x00,0x00,0xC3,0xC3,0xC3,
	0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0x08,0x18,0x30,0x60,0xC0,0x80,0x00,0x00,  // ->-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x01,0x83,0xC6,0x6C,0x38,0x10,0x00,
	0x20,0x30,0x18,0x0C,0x06,0x03,0x01,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x60,0xF0,0x78,0x0C,0x04,0x04,0x04,  // -?-
	0x0C,0xF8,0xF0,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xF0,0x1C,0x07,0x03,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x30,0x79,0x30,
	0x00,0x00,0x00,0x00,

	0xE0,0x10,0x08,0x84,0xC4,0x44,0x44,0xC4,  // -@-
	0x88,0x10,0xE0,0x00,0xFF,0x00,0xFF,0xFF,
	0x80,0x80,0x80,0xFF,0xFF,0x00,0xFF,0x00,
	0x07,0x08,0x10,0x21,0x21,0x21,0x20,0x20,
	0x21,0x11,0x08,0x00,

	0x00,0x00,0x00,0x00,0xF0,0x0C,0x3C,0xF0,  // -A-
	0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,
	0x43,0x40,0x40,0x43,0xFF,0xF0,0x00,0x00,
	0x20,0x3E,0x3F,0x20,0x00,0x00,0x00,0x00,
	0x20,0x3F,0x3E,0x20,

	0x04,0xFC,0xFC,0x04,0x04,0x04,0x0C,0x18,  // -B-
	0xF0,0xE0,0x00,0x00,0x00,0xFF,0xFF,0x08,
	0x08,0x08,0x1C,0x16,0x73,0xE1,0x80,0x00,
	0x20,0x3F,0x3F,0x20,0x20,0x20,0x20,0x30,
	0x1C,0x0F,0x03,0x00,

	0xC0,0xF0,0x38,0x0C,0x04,0x04,0x04,0x0C,  // -C-
	0x18,0x38,0x7C,0x00,0xFF,0xFF,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x03,0x0F,0x1C,0x30,0x20,0x20,0x20,0x30,
	0x18,0x0E,0x06,0x00,

	0x04,0xFC,0xFC,0x04,0x04,0x04,0x0C,0x18,  // -D-
	0x70,0xE0,0x80,0x00,0x00,0xFF,0xFF,0x00,
	0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,
	0x20,0x3F,0x3F,0x20,0x20,0x20,0x30,0x18,
	0x0E,0x07,0x01,0x00,

	0x04,0xFC,0xFC,0x04,0x04,0x04,0x04,0x04,  // -E-
	0x0C,0x1C,0x7C,0x00,0x00,0xFF,0xFF,0x08,
	0x08,0x08,0x1C,0x7F,0x00,0x00,0x00,0x00,
	0x20,0x3F,0x3F,0x20,0x20,0x20,0x20,0x20,
	0x30,0x38,0x3E,0x00,

	0x04,0xFC,0xFC,0x04,0x04,0x04,0x04,0x04,  // -F-
	0x0C,0x1C,0x7C,0x00,0x00,0xFF,0xFF,0x08,
	0x08,0x08,0x1C,0x7F,0x00,0x00,0x00,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0xC0,0xF0,0x38,0x0C,0x04,0x04,0x0C,0x08,  // -G-
	0x18,0x7C,0x00,0x00,0xFF,0xFF,0x00,0x00,
	0x00,0x00,0x00,0x08,0xF8,0xF8,0x08,0x00,
	0x03,0x0F,0x1C,0x30,0x20,0x30,0x18,0x0C,
	0x3F,0x3F,0x00,0x00,

	0x04,0xFC,0xFC,0x04,0x00,0x00,0x00,0x04,  // -H-
	0xFC,0xFC,0x04,0x00,0x00,0xFF,0xFF,0x08,
	0x08,0x08,0x08,0x08,0xFF,0xFF,0x00,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x00,0x00,0x20,
	0x3F,0x3F,0x20,0x00,

	0x00,0x00,0x00,0x04,0x04,0x04,0xFC,0xFC,  // -I-
	0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x20,0x20,0x20,0x3F,0x3F,
	0x20,0x20,0x20,0x00,

	0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xFC,  // -J-
	0xFC,0x04,0x04,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,
	0x0E,0x1F,0x37,0x22,0x20,0x30,0x30,0x1F,
	0x0F,0x00,0x00,0x00,

	0x04,0xFC,0xFC,0x04,0x00,0x80,0xE4,0x7C,  // -K-
	0x1C,0x04,0x04,0x00,0x00,0xFF,0xFF,0x78,
	0x1E,0x7F,0xE1,0x80,0x00,0x00,0x00,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x00,0x01,0x27,
	0x3E,0x38,0x20,0x20,

	0x04,0xFC,0xFC,0x04,0x00,0x00,0x00,0x00,  // -L-
	0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x20,0x3F,0x3F,0x20,0x20,0x20,0x20,0x20,
	0x30,0x38,0x3E,0x00,

	0x04,0xFC,0xFC,0xC0,0x00,0x00,0x00,0x00,  // -M-
	0xC0,0xFC,0xFC,0x04,0x00,0xFF,0xFF,0x07,
	0x3C,0xE0,0xE0,0x3C,0x07,0xFF,0xFF,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x01,0x01,0x00,
	0x20,0x3F,0x3F,0x20,

	0x04,0xFC,0xFC,0xE0,0x00,0x00,0x00,0x04,  // -N-
	0xFC,0xFC,0x04,0x00,0x00,0xFF,0xFF,0x01,
	0x07,0x1C,0x70,0xC0,0xFF,0xFF,0x00,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x00,0x00,0x03,
	0x0F,0x3F,0x00,0x00,

	0xE0,0xF0,0x18,0x0C,0x04,0x04,0x04,0x0C,  // -O-
	0x18,0xF0,0xE0,0x00,0xFF,0xFF,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,
	0x07,0x0F,0x18,0x30,0x20,0x20,0x20,0x30,
	0x18,0x0F,0x07,0x00,

	0x04,0xFC,0xFC,0x04,0x04,0x04,0x0C,0x08,  // -P-
	0x38,0xF0,0xC0,0x00,0x00,0xFF,0xFF,0x10,
	0x10,0x10,0x18,0x08,0x0E,0x07,0x01,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0xE0,0xF0,0x18,0x0C,0x04,0x04,0x04,0x0C,  // -Q-
	0x18,0xF0,0xE0,0x00,0xFF,0xFF,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,
	0x07,0x0F,0x18,0x30,0x22,0x26,0x2C,0x18,
	0x30,0x7F,0x4F,0x40,

	0x04,0xFC,0xFC,0x04,0x04,0x04,0x0C,0x18,  // -R-
	0xF8,0xE0,0x00,0x00,0x00,0xFF,0xFF,0x08,
	0x38,0xF8,0xCC,0x06,0x07,0x01,0x00,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x00,0x03,0x2F,
	0x3C,0x30,0x20,0x00,

	0xF0,0xF8,0x88,0x0C,0x04,0x04,0x0C,0x18,  // -S-
	0x38,0x7C,0x00,0x00,0x00,0x01,0x03,0x07,
	0x0E,0x1C,0x38,0x70,0xE0,0xC0,0x80,0x00,
	0x3F,0x1E,0x0C,0x18,0x30,0x20,0x20,0x30,
	0x18,0x0F,0x07,0x00,

	0x7C,0x1C,0x0C,0x04,0x04,0xFC,0xFC,0x04,  // -T-
	0x04,0x0C,0x1C,0x7C,0x00,0x00,0x00,0x00,
	0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x20,0x20,0x3F,0x3F,0x20,
	0x20,0x00,0x00,0x00,

	0x04,0xFC,0xFC,0x04,0x00,0x00,0x00,0x04,  // -U-
	0xFC,0xFC,0x04,0x00,0x00,0xFF,0xFF,0x00,
	0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,
	0x00,0x0F,0x1F,0x30,0x20,0x20,0x20,0x30,
	0x1F,0x0F,0x00,0x00,

	0x04,0xFC,0xFC,0x04,0x00,0x00,0x00,0x04,  // -V-
	0xFC,0xFC,0x04,0x00,0x00,0x00,0x3F,0xFF,
	0xC0,0x00,0xC0,0xFF,0x3F,0x00,0x00,0x00,
	0x00,0x00,0x00,0x03,0x1F,0x3C,0x1F,0x03,
	0x00,0x00,0x00,0x00,

	0x04,0xFC,0xFC,0x04,0x00,0x00,0x00,0x00,  // -W-
	0x04,0xFC,0xFC,0x04,0x00,0x03,0xFF,0x80,
	0x00,0xFC,0xFC,0x00,0x80,0xFF,0x03,0x00,
	0x00,0x00,0x03,0x3F,0x3C,0x03,0x03,0x3C,
	0x3F,0x03,0x00,0x00,

	0x04,0x1C,0x7C,0xE4,0x80,0x00,0x00,0x80,  // -X-
	0xE4,0x7C,0x1C,0x04,0x00,0x00,0x00,0x81,
	0xE7,0x7E,0x7E,0xE7,0x81,0x00,0x00,0x00,
	0x20,0x38,0x3E,0x27,0x01,0x00,0x00,0x01,
	0x27,0x3E,0x38,0x20,

	0x04,0x1C,0xFC,0xE4,0x00,0x00,0x00,0x00,  // -Y-
	0xE4,0xFC,0x1C,0x04,0x00,0x00,0x00,0x07,
	0x1F,0xF8,0xF8,0x1F,0x07,0x00,0x00,0x00,
	0x00,0x00,0x00,0x20,0x20,0x3F,0x3F,0x20,
	0x20,0x00,0x00,0x00,

	0x7C,0x1C,0x0C,0x04,0x04,0x04,0xC4,0xF4,  // -Z-
	0x3C,0x1C,0x00,0x00,0x00,0x00,0xC0,0xF0,
	0x3C,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,
	0x3C,0x3F,0x23,0x20,0x20,0x20,0x20,0x20,
	0x30,0x38,0x3E,0x00,

	0x00,0x00,0x00,0x00,0x00,0xFF,0x01,0x01,  // -[-
	0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
	0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x80,
	0x80,0x80,0x80,0x00,

	0x06,0x1C,0x70,0xC0,0x00,0x00,0x00,0x00,  // -\-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
	0x07,0x1C,0x70,0xC0,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
	0x07,0x1C,0x30,0x00,

	0x00,0x01,0x01,0x01,0x01,0x01,0xFF,0x00,  // -]-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,
	0x00,0x80,0x80,0x80,0x80,0x80,0xFF,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x60,0x30,0x18,0x0C,0x06,0x06,0x0C,  // -^-
	0x18,0x30,0x60,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -_-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
	0x80,0x80,0x80,0x80,

	0x00,0x00,0x02,0x03,0x07,0x06,0x04,0x0C,  // -`-
	0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -a-
	0x00,0x00,0x00,0x00,0x08,0x1C,0x9E,0x8A,
	0xC2,0x42,0x42,0x46,0xFC,0xF8,0x00,0x00,
	0x1E,0x1F,0x31,0x20,0x20,0x20,0x30,0x10,
	0x1F,0x3F,0x20,0x00,

	0x04,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,  // -b-
	0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x0C,
	0x06,0x02,0x02,0x06,0x1C,0xF8,0xE0,0x00,
	0x20,0x3F,0x1F,0x18,0x30,0x20,0x20,0x30,
	0x1C,0x0F,0x03,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -c-
	0x00,0x00,0x00,0x00,0xE0,0xF8,0x1C,0x06,
	0x02,0x02,0x02,0x16,0x3C,0x3C,0x18,0x00,
	0x03,0x0F,0x1C,0x30,0x20,0x20,0x20,0x20,
	0x30,0x18,0x08,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -d-
	0x04,0xFC,0xFC,0x00,0xE0,0xF8,0x1C,0x06,
	0x02,0x02,0x02,0x06,0x0C,0xFF,0xFF,0x00,
	0x03,0x0F,0x1C,0x30,0x20,0x20,0x20,0x30,
	0x18,0x1F,0x3F,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -e-
	0x00,0x00,0x00,0x00,0xE0,0xF8,0x9C,0x86,
	0x82,0x82,0x82,0x86,0x9C,0xF8,0xE0,0x00,
	0x03,0x0F,0x1C,0x30,0x20,0x20,0x20,0x20,
	0x30,0x18,0x08,0x00,

	0x00,0x00,0x00,0xF0,0xF8,0x0C,0x04,0x04,  // -f-
	0x1C,0x3C,0x18,0x00,0x02,0x02,0x02,0xFF,
	0xFF,0x02,0x02,0x02,0x00,0x00,0x00,0x00,
	0x00,0x20,0x20,0x3F,0x3F,0x20,0x20,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -g-
	0x00,0x00,0x00,0x00,0x38,0x7C,0xC6,0x82,
	0x82,0x82,0xC6,0x7C,0x3C,0x06,0x06,0x00,
	0x3C,0x7F,0xC3,0x82,0x86,0x84,0x84,0x8C,
	0xCC,0x78,0x30,0x00,

	0x04,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,  // -h-
	0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x18,
	0x0C,0x06,0x02,0x06,0xFC,0xF8,0x00,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x00,0x00,0x20,
	0x3F,0x3F,0x20,0x00,

	0x00,0x00,0x00,0x00,0x18,0x3C,0x3C,0x18,  // -i-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,
	0x02,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x20,0x20,0x3F,0x3F,0x20,
	0x20,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x18,0x3C,0x3C,  // -j-
	0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x02,0x02,0xFE,0xFE,0x00,0x00,0x00,
	0x30,0x78,0xF8,0x90,0x80,0x80,0xC0,0x7F,
	0x3F,0x00,0x00,0x00,

	0x04,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,  // -k-
	0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xC0,
	0x60,0xF0,0xDA,0x0E,0x06,0x02,0x02,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x00,0x03,0x2F,
	0x3C,0x30,0x20,0x00,

	0x00,0x00,0x00,0x04,0x04,0xFC,0xFC,0x00,  // -l-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x20,0x20,0x3F,0x3F,0x20,
	0x20,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -m-
	0x00,0x00,0x00,0x00,0x02,0xFE,0xFE,0x04,
	0x06,0xFE,0xFC,0x06,0x06,0xFE,0xFC,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x3F,0x3F,0x20,
	0x00,0x3F,0x3F,0x20,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -n-
	0x00,0x00,0x00,0x00,0x02,0xFE,0xFE,0x18,
	0x0C,0x06,0x02,0x06,0xFC,0xF8,0x00,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x00,0x00,0x20,
	0x3F,0x3F,0x20,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -o-
	0x00,0x00,0x00,0x00,0xE0,0xF8,0x1C,0x06,
	0x02,0x02,0x02,0x06,0x1C,0xF8,0xE0,0x00,
	0x03,0x0F,0x1C,0x30,0x20,0x20,0x20,0x30,
	0x1C,0x0F,0x03,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -p-
	0x00,0x00,0x00,0x00,0x02,0xFE,0xFE,0x0C,
	0x06,0x02,0x02,0x06,0x1C,0xF8,0xE0,0x00,
	0x80,0xFF,0xFF,0x86,0x0C,0x08,0x08,0x0C,
	0x07,0x03,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -q-
	0x00,0x00,0x00,0x00,0xE0,0xF8,0x1C,0x06,
	0x02,0x02,0x06,0x0C,0xFC,0xFE,0x00,0x00,
	0x00,0x03,0x07,0x0C,0x08,0x08,0x0C,0x86,
	0xFF,0xFF,0x80,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -r-
	0x00,0x00,0x00,0x00,0x02,0xFE,0xFE,0x18,
	0x0C,0x06,0x02,0x02,0x1E,0x1C,0x08,0x00,
	0x20,0x3F,0x3F,0x20,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -s-
	0x00,0x00,0x00,0x00,0x38,0x7C,0x66,0xC2,
	0xC2,0x82,0x82,0x86,0x0C,0x1C,0x00,0x00,
	0x1C,0x18,0x30,0x20,0x20,0x20,0x21,0x21,
	0x33,0x1F,0x0E,0x00,

	0x00,0x00,0x00,0xE0,0xF0,0x00,0x00,0x00,  // -t-
	0x00,0x00,0x00,0x00,0x02,0x02,0x02,0xFF,
	0xFF,0x02,0x02,0x02,0x02,0x02,0x00,0x00,
	0x00,0x00,0x00,0x0F,0x1F,0x30,0x20,0x20,
	0x30,0x1C,0x0C,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -u-
	0x00,0x00,0x00,0x00,0x02,0xFE,0xFE,0x00,
	0x00,0x00,0x00,0x02,0xFE,0xFE,0x00,0x00,
	0x00,0x0F,0x1F,0x30,0x20,0x30,0x18,0x0C,
	0x3F,0x3F,0x20,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -v-
	0x00,0x00,0x00,0x00,0x02,0x0E,0x7E,0xF2,
	0x80,0x00,0x80,0xF2,0x7E,0x0E,0x02,0x00,
	0x00,0x00,0x00,0x03,0x1F,0x3C,0x1F,0x03,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -w-
	0x00,0x00,0x00,0x00,0x02,0x3E,0xFE,0xC2,
	0x00,0xF0,0xF0,0x00,0xC2,0xFE,0x3E,0x02,
	0x00,0x00,0x03,0x3F,0x3E,0x03,0x03,0x3E,
	0x3F,0x03,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -x-
	0x00,0x00,0x00,0x00,0x02,0x0E,0x1E,0x32,
	0xE0,0xC0,0xE0,0x32,0x1E,0x0E,0x02,0x00,
	0x20,0x38,0x3C,0x26,0x03,0x01,0x03,0x26,
	0x3C,0x38,0x20,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -y-
	0x00,0x00,0x00,0x00,0x02,0x06,0x1E,0x7A,
	0xE0,0x80,0x80,0xF2,0x7E,0x0E,0x02,0x00,
	0x60,0xE0,0x80,0x80,0xE1,0x7F,0x1F,0x03,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -z-
	0x00,0x00,0x00,0x00,0x00,0x0E,0x02,0x02,
	0x82,0xC2,0x62,0x32,0x1A,0x0E,0x06,0x00,
	0x38,0x3C,0x26,0x23,0x21,0x20,0x20,0x20,
	0x20,0x30,0x3C,0x00,

	0x00,0x00,0x00,0x00,0x00,0xFC,0xFE,0x03,  // -{-
	0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x18,
	0x3C,0xE7,0xC3,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x3F,0x7F,0xC0,
	0x80,0x80,0x80,0x00,

	0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,  // -|-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x01,0x01,0x01,0x03,0xFE,0xFC,0x00,  // -}-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xC3,0xE7,0x3C,0x18,0x00,0x00,0x00,
	0x00,0x80,0x80,0x80,0xC0,0x7F,0x3F,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -~-
	0x00,0x00,0x00,0x00,0x10,0x18,0x0C,0x04,
	0x0C,0x08,0x10,0x30,0x20,0x30,0x18,0x08,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0xC0,0x70,0xC0,0x00,  // --
	0x00,0x00,0x00,0x00,0xC0,0xF0,0x9C,0x87,
	0x81,0x80,0x81,0x87,0x9C,0xF0,0xC0,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,
};
