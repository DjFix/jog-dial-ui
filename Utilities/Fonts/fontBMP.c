#include "fonts.h"



const uint8_t FontBMP_Table[] = 
{
	// @0 ' ' (11 pixels wide)		//CUE_1
	0xFF, 0xFF, 0xFF, 
	0x80, 0x00, 0x00, 
	0x80, 0x3A, 0x2F, 
	0x80, 0x42, 0x28, 
	0x80, 0x82, 0x28, 
	0x80, 0x82, 0x2E, 
	0x80, 0x82, 0x28, 
	0x80, 0x42, 0x28, 
	0x80, 0x39, 0xCF, 
	0x80, 0x00, 0x00,
	0xFF, 0xFF, 0xFF, 	

	// @32 '!' (11 pixels wide)			//CUE_2
	0xFE, 0x00, 0x00, 
	0x01, 0x00, 0x00, 
	0x01, 0x00, 0x00, 
	0x00, 0x80, 0x00, 
	0x00, 0x80, 0x00,
	0x00, 0x40, 0x00, 
	0x00, 0x40, 0x00, 
	0x00, 0x20, 0x00, 
	0x00, 0x20, 0x00,  
	0x00, 0x10, 0x00, 
	0xFF, 0xF0, 0x00,           

	// @64 '"' (11 pixels wide)
	0xFF, 0xFF, 0xFF, 
	0x00, 0x00, 0x00, 
	0xB6, 0x00, 0x00, 
	0xB6, 0x00, 0x00, 
	0xAA, 0x00, 0x00, 
	0xAA, 0x00, 0x00, 
	0xAA, 0x00, 0x00, 
	0xAA, 0x00, 0x00, 
	0xAA, 0x00, 0x00, 
	0x00, 0x00, 0x00, 
	0xFF, 0xFF, 0xFF,           

	// @96 '#' (11 pixels wide)			//MEMORY_1
	0xFF, 0xFF, 0xFF, 
	0x80, 0x00, 0x00, 
	0xB6, 0xED, 0x88, 
	0xB6, 0x8D, 0x94, 
	0xAA, 0x8A, 0xA2, 
	0xAA, 0xCA, 0xA2, 
	0xAA, 0x8A, 0xA2, 
	0xAA, 0x8A, 0x94, 
	0xAA, 0xEA, 0x88, 
	0x80, 0x00, 0x00, 
	0xFF, 0xFF, 0xFF,           

	// @128 '$' (11 pixels wide)		//MEMORY_2
	0xFF, 0xF0, 0x00, 
	0x00, 0x10, 0x00, 
	0xEA, 0x20, 0x00, 
	0xAA, 0x20, 0x00, 
	0xA4, 0x40, 0x00, 
	0xC4, 0x40, 0x00, 
	0xC4, 0x80, 0x00, 
	0xA4, 0x80, 0x00, 
	0xA5, 0x00, 0x00, 
	0x01, 0x00, 0x00, 
	0xFE, 0x00, 0x00,           

	// @160 '%' (11 pixels wide)		//A.CUE_1
	0x7F, 0xFF, 0xFF, 
	0x80, 0x00, 0x00, 
	0x80, 0x00, 0x00, 
	0x81, 0x00, 0xF2, 
	0x82, 0x81, 0x0A, 
	0x84, 0x41, 0x02, 
	0x8F, 0xE1, 0x0A, 
	0x88, 0x2C, 0xF1, 
	0x80, 0x00, 0x00, 
	0x80, 0x00, 0x00, 
	0x7F, 0xFF, 0xFF,           

	// @192 '&' (11 pixels wide)		//A.CUE_2
	0xFF, 0xF8, 0x00, 
	0x00, 0x04, 0x00, 
	0x00, 0x04, 0x00, 
	0x17, 0xC4, 0x00, 
	0x14, 0x04, 0x00, 
	0x17, 0x84, 0x00, 
	0x14, 0x04, 0x00, 
	0xE7, 0xC4, 0x00, 
	0x00, 0x04, 0x00, 
	0x00, 0x04, 0x00, 
	0xFF, 0xF8, 0x00,          

	// @224 ''' (11 pixels wide)		//+-10%_1
	0x7F, 0xFF, 0xFF, 
	0xFF, 0x9F, 0x38, 
	0xFF, 0x9E, 0x33, 
	0xFE, 0x07, 0x33, 
	0xFF, 0x9F, 0x33, 
	0xFF, 0x9F, 0x33, 
	0xFF, 0xFF, 0x33, 
	0xFE, 0x06, 0x18, 
	0x7F, 0xFF, 0xFF, 
	0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00,           

	// @256 '(' (11 pixels wide)			//+-10%_2
	0xFF, 0x80, 0x00, 
	0x3F, 0xC0, 0x00, 
	0x9F, 0xC0, 0x00, 
	0x9F, 0xC0, 0x00, 
	0x9F, 0xC0, 0x00, 
	0x9F, 0xC0, 0x00, 
	0x9F, 0xC0, 0x00, 
	0x3F, 0xC0, 0x00, 
	0xFF, 0x80, 0x00, 
	0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00,           

	// @288 ')' (11 pixels wide)			//+-16%_1
	0x7F, 0xFF, 0xFF, 
	0xFF, 0x9F, 0x3C, 
	0xFF, 0x9E, 0x39, 
	0xFE, 0x07, 0x33, 
	0xFF, 0x9F, 0x30, 
	0xFF, 0x9F, 0x33, 
	0xFF, 0xFF, 0x33, 
	0xFE, 0x06, 0x18, 
	0x7F, 0xFF, 0xFF, 
	0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00,           

	// @320 '*' (11 pixels wide)			//+-16%_2
	0xFF, 0x80, 0x00, 
	0x3F, 0xC0, 0x00, 
	0xFF, 0xC0, 0x00, 
	0xFF, 0xC0, 0x00, 
	0x3F, 0xC0, 0x00, 
	0x9F, 0xC0, 0x00, 
	0x9F, 0xC0, 0x00, 
	0x3F, 0xC0, 0x00, 
	0xFF, 0x80, 0x00, 
	0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00,             

	// @352 '+' (11 pixels wide)		//+-6%_1
	0x7F, 0xFF, 0xFF, 
	0xFF, 0xE7, 0xF0, 
	0xFF, 0xE7, 0xE7, 
	0xFF, 0x81, 0xCF, 
	0xFF, 0xE7, 0xC0, 
	0xFF, 0xE7, 0xCE, 
	0xFF, 0xFF, 0xCE, 
	0xFF, 0x81, 0xE0, 
	0x7F, 0xFF, 0xFF, 
	0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00,

// @864 ',' (17 pixels wide)		//+-6%_2
	0xFF, 0x80, 0x00, 
	0xFF, 0xC0, 0x00, 
	0xFF, 0xC0, 0x00, 
	0xFF, 0xC0, 0x00, 
	0xFF, 0xC0, 0x00, 
	0x7F, 0xC0, 0x00, 
	0x7F, 0xC0, 0x00, 
	0xFF, 0xC0, 0x00, 
	0xFF, 0x80, 0x00, 
	0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00,  

// @936 '-' (17 pixels wide)		//REMAIN_1
	0xF9, 0xF6, 0x30,
	0x85, 0x06, 0x31,
	0xF9, 0xE5, 0x52,
	0x85, 0x05, 0xD7,
	0x85, 0xF4, 0x94,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,

// @1008 '.' (17 pixels wide)		//REMAIN_2
	0x85, 0x88, 0x00,
	0x45, 0xC8, 0x00,
	0x25, 0x68, 0x00,
	0xF5, 0x38, 0x00,
	0x15, 0x18, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,

// @1080 '/' (17 pixels wide)		//TEMPO_1
	0xFB, 0xEC, 0x6F,
	0x22, 0x0C, 0x68,
	0x23, 0xCA, 0xAF,
	0x22, 0x0B, 0xA8,
	0x23, 0xE9, 0x28,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	
// @1152 '0' (17 pixels wide)		//TEMPO_2
	0x9E, 0x00, 0x00,
	0xA1, 0x00, 0x00,
	0xA1, 0x00, 0x00,
	0x21, 0x00, 0x00,
	0x1E, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	
// @1224 '1' (17 pixels wide)			//BPM
	0xF9, 0xF6, 0x30,
	0x85, 0x16, 0x30,
	0xF9, 0xF5, 0x50,
	0x85, 0x05, 0xD0,
	0xF9, 0x04, 0x90,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,


// @1296 '2' (17 pixels wide)		//TRACK_1
	0xFB, 0xE0, 0x83,
	0x22, 0x11, 0x44,
	0x23, 0xE2, 0x24,
	0x22, 0x17, 0xF4,
	0x22, 0x14, 0x13,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	
// @1368 '3' (17 pixels wide)		//TRACK_2
	0xC8, 0xC0, 0x00,
	0x2B, 0x00, 0x00,
	0x0E, 0x00, 0x00,
	0x29, 0x00, 0x00,
	0xC8, 0xC0, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	
// @1368 '4' (17 pixels wide)		//NEEDLE_1
	0xC5, 0xF7, 0xDF,
	0xE5, 0x04, 0x10,
	0xB5, 0xE7, 0x90,
	0x9D, 0x04, 0x10,
	0x8D, 0xF7, 0xDF,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,

// @1368 '5' (17 pixels wide)		//NEEDLE_2
	0x20, 0xF8, 0x00,
	0xA0, 0x80, 0x00,
	0xA0, 0xF0, 0x00,
	0xA0, 0x80, 0x00,
	0x3E, 0xF8, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,

// @1368 '6' (17 pixels wide)			//PLAYER_1
	0xF3, 0x0C, 0xC5,
	0xDB, 0x1E, 0xC5,
	0xCB, 0x12, 0x69,
	0xCB, 0x33, 0x69,
	0xDB, 0x33, 0x31,
	0xF3, 0x33, 0x31,
	0xC3, 0x3F, 0x31,
	0xC3, 0x33, 0x31,
	0xC3, 0x33, 0x31,
	0xC3, 0xB3, 0x31,
	0x00, 0x00, 0x00,

// @1368 '7' (17 pixels wide)			//PLAYER_2
	0xDE, 0x00, 0x00,
	0x9B, 0x00, 0x00,
	0x99, 0x00, 0x00,
	0x99, 0x00, 0x00,
	0xDB, 0x00, 0x00,
	0x9E, 0x00, 0x00,
	0x9E, 0x00, 0x00,
	0x9B, 0x00, 0x00,
	0x9B, 0x00, 0x00,
	0xD9, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

sFONT FontBMP = {
  FontBMP_Table,
  24, /* Width */
  11, /* Height */
};
