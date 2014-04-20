// ------------------  汉字字模的数据结构定义 ------------------------ //
struct  typFNT_GB16                 // 汉字字模数据结构 
{
       unsigned char  Index[3];               // 汉字内码索引	
       unsigned char   Msk[32];                        // 点阵码数据 
};

/////////////////////////////////////////////////////////////////////////
// 汉字字模表                                                          //
// 汉字库: 宋体16.dot,横向取模左高位,数据排列:从左到右从上到下         //
/////////////////////////////////////////////////////////////////////////
 const struct  typFNT_GB16 codeGB_16[] =          // 数据表 
{

/*--  文字:  上  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"上",0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0xF8,0x01,0x00,
0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x04,0x7F,0xFE,0x00,0x00,

/*--  文字:  温 --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"温",0x00, 0x08, 0x43, 0xFC, 0x32, 0x08, 0x12, 0x08, 0x83, 0xF8, 0x62, 0x08, 0x22, 0x08, 0x0B, 0xF8, 0x10, 0x00, 
0x27, 0xFC, 0xE4, 0xA4, 0x24, 0xA4, 0x24, 0xA4, 0x24, 0xA4, 0x2F, 0xFE, 0x20, 0x00,

/*--  文字: 	度 --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"度",0x01, 0x00, 0x00, 0x84, 0x3F, 
0xFE, 0x22, 0x20, 0x22, 0x28, 
0x3F, 0xFC, 0x22, 0x20, 0x23, 
0xE0, 0x20, 0x00, 0x2F, 0xF0, 
0x22, 0x20, 0x21, 0x40, 0x20, 
0x80, 0x43, 0x60, 0x8C, 0x1E, 
0x30, 0x04, 
	
	/*--  文字: 	下--*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"下",0x00, 0x04, 0xFF, 0xFE, 0x02, 
0x00, 0x02, 0x00, 0x02, 0x00, 
0x02, 0x80, 0x02, 0x40, 0x02, 
0x30, 0x02, 0x10, 0x02, 0x00, 
0x02, 0x00, 0x02, 0x00, 0x02, 
0x00, 0x02, 0x00, 0x02, 0x00, 
0x02, 0x00, 

/*--  文字:  机 --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"机",0x10, 0x00, 0x10, 0x10, 0x11, 
0xF8, 0x11, 0x10, 0xFD, 0x10, 
0x11, 0x10, 0x31, 0x10, 0x39, 
0x10, 0x55, 0x10, 0x51, 0x10, 
0x91, 0x10, 0x11, 0x10, 0x11, 
0x12, 0x12, 0x12, 0x14, 0x0E, 
0x18, 0x00, 

/*--  文字:  电  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"电",0x01,0x00,0x01,0x00,0x01,0x00,0x3F,0xF8,0x21,0x08,0x21,0x08,0x3F,0xF8,0x21,0x08,
0x21,0x08,0x21,0x08,0x3F,0xF8,0x21,0x08,0x01,0x02,0x01,0x02,0x00,0xFE,0x00,0x00,

/*--  文字:  子  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"子",0x00,0x00,0x3F,0xF0,0x00,0x20,0x00,0x40,0x00,0x80,0x01,0x00,0x01,0x00,0x01,0x04,
0xFF,0xFE,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x05,0x00,0x02,0x00,

/*--  文字:  转 --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"转",0x10, 0x40, 0x10, 0x40, 0x10, 
0x48, 0xFD, 0xFC, 0x20, 0x40, 
0x28, 0x44, 0x4B, 0xFE, 0x7C, 
0x80, 0x08, 0x80, 0x09, 0xFC, 
0x1C, 0x08, 0xE8, 0x10, 0x48, 
0x90, 0x08, 0x60, 0x08, 0x20, 
0x08, 0x10, 

/*--  文字: 动  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"动",0x00, 0x40, 0x08, 0x40, 0x7C, 
0x40, 0x00, 0x44, 0x05, 0xFE, 
0xFE, 0x44, 0x10, 0x44, 0x10, 
0x44, 0x20, 0x44, 0x24, 0x44, 
0x42, 0x84, 0xFE, 0x84, 0x41, 
0x04, 0x01, 0x04, 0x02, 0x28, 
0x04, 0x10, 

/*--  文字:  时  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"时",0x00, 0x08, 0x04, 0x08, 0x7E, 
0x08, 0x44, 0x08, 0x47, 0xFE, 
0x44, 0x08, 0x44, 0x08, 0x7C, 
0x88, 0x44, 0x48, 0x44, 0x48, 
0x44, 0x08, 0x44, 0x08, 0x7C, 
0x08, 0x44, 0x48, 0x00, 0x28, 
0x00, 0x10, 

/*--  文字:  间  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"间",0x20, 0x04, 0x1B, 0xFE, 0x08, 
0x04, 0x40, 0x24, 0x4F, 0xF4, 
0x48, 0x24, 0x48, 0x24, 0x48, 
0x24, 0x4F, 0xE4, 0x48, 0x24, 
0x48, 0x24, 0x48, 0x24, 0x4F, 
0xE4, 0x48, 0x24, 0x40, 0x14, 
0x40, 0x08, 

/*--  文字:  室  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"室", 0x02, 0x00, 0x01, 0x00, 0x7F, 
0xFE, 0x40, 0x02, 0x80, 0x14, 
0x3F, 0xF8, 0x04, 0x00, 0x08, 
0x20, 0x1F, 0xF0, 0x01, 0x10, 
0x01, 0x00, 0x1F, 0xF0, 0x01, 
0x00, 0x01, 0x08, 0x7F, 0xFC, 
0x00, 0x00, 

/*--  文字:  内  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"内",0x01, 0x00, 0x01, 0x00, 0x01, 
0x00, 0x01, 0x04, 0x7F, 0xFE, 
0x41, 0x04, 0x41, 0x04, 0x42, 
0x04, 0x42, 0x84, 0x44, 0x64, 
0x48, 0x34, 0x50, 0x14, 0x40, 
0x04, 0x40, 0x04, 0x40, 0x14, 
0x40, 0x08, 

/*--  文字:  第  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"第",0x10, 0x80, 0x14, 0x88, 0x3E, 
0xFC, 0x49, 0x20, 0xBF, 0xF8, 
0x01, 0x08, 0x01, 0x08, 0x3F, 
0xF8, 0x21, 0x00, 0x21, 0x04, 
0x3F, 0xFE, 0x03, 0x04, 0x05, 
0x04, 0x19, 0x24, 0x61, 0x18, 
0x01, 0x00, 

/*--  文字:  几  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"几",0x00, 0x40, 0x0F, 0xE0, 0x08, 
0x40, 0x08, 0x40, 0x08, 0x40, 
0x08, 0x40, 0x08, 0x40, 0x08, 
0x40, 0x08, 0x40, 0x08, 0x40, 
0x08, 0x40, 0x08, 0x40, 0x08, 
0x42, 0x10, 0x42, 0x20, 0x3E, 
0x40, 0x00, 

/*--  文字:  路 --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"路",0x04, 0x40, 0x7E, 0x40, 0x44, 
0xFC, 0x45, 0x88, 0x46, 0x50, 
0x44, 0x20, 0x7C, 0x50, 0x50, 
0x8E, 0x13, 0x04, 0x5D, 0xFE, 
0x51, 0x04, 0x51, 0x04, 0x51, 
0x04, 0x5D, 0x04, 0xE1, 0xFC, 
0x01, 0x04, 

/*--  文字:  当 --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"当",0x01, 0x00, 0x21, 0x08, 0x19, 
0x18, 0x09, 0x20, 0x01, 0x00, 
0x01, 0x08, 0x7F, 0xFC, 0x00, 
0x08, 0x00, 0x08, 0x00, 0x08, 
0x3F, 0xF8, 0x00, 0x08, 0x00, 
0x08, 0x00, 0x08, 0x7F, 0xF8, 
0x00, 0x08, 

/*--  文字:  前 --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"前",0x10, 0x10, 0x0C, 0x30, 0x04, 
0x44, 0xFF, 0xFE, 0x00, 0x00, 
0x3E, 0x08, 0x22, 0x48, 0x22, 
0x48, 0x3E, 0x48, 0x22, 0x48, 
0x22, 0x48, 0x3E, 0x48, 0x22, 
0x08, 0x22, 0x08, 0x2A, 0x28, 
0x24, 0x10, 


/*--  文字: 限  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"限",0x00, 0x08, 0x7D, 0xFC, 0x45, 
0x08, 0x49, 0x08, 0x49, 0xF8, 
0x51, 0x08, 0x49, 0x08, 0x49, 
0xF8, 0x45, 0x04, 0x45, 0x88, 
0x45, 0x50, 0x69, 0x20, 0x51, 
0x10, 0x41, 0x4E, 0x41, 0x84, 
0x41, 0x00, 

/*--  文字:  备  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"备",0x08,0x00,0x0F,0xF0,0x08,0x20,0x14,0x20,0x22,0x40,0x41,0x80,0x02,0x40,0x0C,0x30,
0x30,0x1E,0xDF,0xF4,0x11,0x10,0x1F,0xF0,0x11,0x10,0x11,0x10,0x1F,0xF0,0x10,0x10,

/*--  文字:  技  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"技",0x10,0x20,0x10,0x20,0x10,0x20,0xFD,0xFE,0x10,0x20,0x14,0x20,0x19,0xFC,0x31,0x08,
0xD0,0x88,0x10,0x90,0x10,0x60,0x10,0x60,0x10,0x90,0x11,0x0E,0x56,0x04,0x20,0x00,

/*--  文字:  术  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"术",0x01,0x00,0x01,0x20,0x01,0x10,0x01,0x00,0xFF,0xFE,0x01,0x00,0x03,0x80,0x05,0x40,
0x05,0x20,0x09,0x10,0x11,0x18,0x21,0x0E,0xC1,0x04,0x01,0x00,0x01,0x00,0x00,0x00,

/*--  文字:  支  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"支",0x01,0x00,0x01,0x00,0x01,0x00,0x7F,0xFE,0x01,0x00,0x01,0x00,0x1F,0xF8,0x08,0x10,
0x04,0x20,0x04,0x20,0x02,0x40,0x01,0x80,0x02,0x40,0x0C,0x30,0x70,0x0E,0x00,0x04,

/*--  文字:  持  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"持",0x10,0x40,0x10,0x40,0x13,0xFC,0xFC,0x40,0x10,0x40,0x17,0xFE,0x14,0x10,0x18,0x10,
0x37,0xFE,0xD0,0x10,0x11,0x10,0x10,0xD0,0x10,0x90,0x10,0x10,0x50,0x50,0x20,0x20,

/*--  文字:  论  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"论",0x40,0x40,0x20,0x40,0x30,0xA0,0x20,0x90,0x01,0x08,0x02,0x06,0xE5,0x04,0x21,0x10,
0x21,0x38,0x21,0xC0,0x21,0x00,0x25,0x00,0x29,0x04,0x31,0x04,0x20,0xFC,0x00,0x00,

/*--  文字:  坛  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
"坛",0x00,0x00,0x11,0xFC,0x10,0x00,0x10,0x00,0x10,0x00,0xFC,0x00,0x13,0xFE,0x10,0x40,
0x10,0x60,0x10,0x80,0x1C,0x88,0x31,0x04,0xC2,0x7E,0x07,0xC6,0x02,0x04,0x00,0x00,




};
