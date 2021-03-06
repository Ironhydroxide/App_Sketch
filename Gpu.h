/*

Copyright (c) Future Technology Devices International 2014

THIS SOFTWARE IS PROVIDED BY FUTURE TECHNOLOGY DEVICES INTERNATIONAL LIMITED "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
FUTURE TECHNOLOGY DEVICES INTERNATIONAL LIMITED BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
OF SUBSTITUTE GOODS OR SERVICES LOSS OF USE, DATA, OR PROFITS OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

FTDI DRIVERS MAY BE USED ONLY IN CONJUNCTION WITH PRODUCTS BASED ON FTDI PARTS.

FTDI DRIVERS MAY BE DISTRIBUTED IN ANY FORM AS LONG AS LICENSE INFORMATION IS NOT MODIFIED.

IF A CUSTOM VENDOR ID AND/OR PRODUCT ID OR DESCRIPTION STRING ARE USED, IT IS THE
RESPONSIBILITY OF THE PRODUCT MANUFACTURER TO MAINTAIN ANY CHANGES AND SUBSEQUENT WHQL
RE-CERTIFICATION AS A RESULT OF MAKING THESE CHANGES.

Author : FTDI 

Revision History: 
0.1 - date 2013.04.24 - Initial Version
0.2 - date 2013.08.19 - added few registers.
1.0 - date 2013.12.10 - Version 1.0.
2.0 - date 2014.11.24 - version 2.0 which includes support for FT81x series.

 
*/

#ifndef _GPU_H_
#define _GPU_H_

/* Definitions used for FT800 co processor command buffer */
#define DL_SIZE           (8*1024L)  //8KB Display List buffer size
#define CMD_FIFO_SIZE     (4*1024L)  //4KB coprocessor Fifo size
#define CMD_SIZE          (4)       //4 byte per coprocessor command of EVE


/* For FT801, FT811 and FT813 */
#define CTOUCH_MODE_COMPATIBILITY 1
#define CTOUCH_MODE_EXTENDED 0

#ifndef T81X_ENABLE
/*
// For FT801 enable the switch in platform.h file 
// Lower boundary of trimming 
#define LOW_FREQ_BOUND  47040000L//98% of 48Mhz

#define FT800_VERSION "1.9.0".
#define RAM_G_SIZE			256*1024L
#define ADC_DIFFERENTIAL     1UL
#define ADC_SINGLE_ENDED     0UL
#define ADPCM_SAMPLES        2UL
#define ALWAYS               7UL
#define ARGB1555             0UL
#define ARGB2                5UL
#define ARGB4                6UL
#define BARGRAPH             11UL
#define BILINEAR             1UL
#define BITMAPS              1UL
#define BORDER               0UL

#define CMDBUF_SIZE          4096UL
#define CMD_APPEND           4294967070UL
#define CMD_BGCOLOR          4294967049UL
#define CMD_BITMAP_TRANSFORM 4294967073UL
#define CMD_BUTTON           4294967053UL
#define CMD_CALIBRATE        4294967061UL
#define CMD_CSKETCH		     4294967093UL
#define CMD_CLOCK            4294967060UL
#define CMD_COLDSTART        4294967090UL
#define CMD_CRC              4294967043UL
#define CMD_DIAL             4294967085UL
#define CMD_DLSTART          4294967040UL
#define CMD_EXECUTE          4294967047UL
#define CMD_FGCOLOR          4294967050UL
#define CMD_GAUGE            4294967059UL
#define CMD_GETMATRIX        4294967091UL
#define CMD_GETPOINT         4294967048UL
#define CMD_GETPROPS         4294967077UL
#define CMD_GETPTR           4294967075UL
#define CMD_GRADCOLOR        4294967092UL
#define CMD_GRADIENT         4294967051UL
#define CMD_HAMMERAUX        4294967044UL
#define CMD_IDCT             4294967046UL
#define CMD_INFLATE          4294967074UL
#define CMD_INTERRUPT        4294967042UL
#define CMD_KEYS             4294967054UL
#define CMD_LOADIDENTITY     4294967078UL
#define CMD_LOADIMAGE        4294967076UL
#define CMD_LOGO             4294967089UL
#define CMD_MARCH            4294967045UL
#define CMD_MEMCPY           4294967069UL
#define CMD_MEMCRC           4294967064UL
#define CMD_MEMSET           4294967067UL
#define CMD_MEMWRITE         4294967066UL
#define CMD_MEMZERO          4294967068UL
#define CMD_NUMBER           4294967086UL
#define CMD_PROGRESS         4294967055UL
#define CMD_REGREAD          4294967065UL
#define CMD_ROTATE           4294967081UL
#define CMD_SCALE            4294967080UL
#define CMD_SCREENSAVER      4294967087UL
#define CMD_SCROLLBAR        4294967057UL
#define CMD_SETFONT          4294967083UL
#define CMD_SETMATRIX        4294967082UL
#define CMD_SKETCH           4294967088UL
#define CMD_SLIDER           4294967056UL
#define CMD_SNAPSHOT         4294967071UL
#define CMD_SPINNER          4294967062UL
#define CMD_STOP             4294967063UL
#define CMD_SWAP             4294967041UL
#define CMD_TEXT             4294967052UL
#define CMD_TOGGLE           4294967058UL
#define CMD_TOUCH_TRANSFORM  4294967072UL
#define CMD_TRACK            4294967084UL
#define CMD_TRANSLATE        4294967079UL

#define DECR                 4UL
#define DECR_WRAP            7UL
#define DLSWAP_DONE          0UL
#define DLSWAP_FRAME         2UL
#define DLSWAP_LINE          1UL
#define DST_ALPHA            3UL
#define EDGE_STRIP_A         7UL
#define EDGE_STRIP_B         8UL
#define EDGE_STRIP_L         6UL
#define EDGE_STRIP_R         5UL
#define EQUAL                5UL
#define GEQUAL               4UL
#define GREATER              3UL
#define INCR                 3UL
#define INCR_WRAP            6UL
#define INT_CMDEMPTY         32UL
#define INT_CMDFLAG          64UL
#define INT_CONVCOMPLETE     128UL
#define INT_PLAYBACK         16UL
#define INT_SOUND            8UL
#define INT_SWAP             1UL
#define INT_TAG              4UL
#define INT_TOUCH            2UL
#define INVERT               5UL

#define KEEP                 1UL
#define L1                   1UL
#define L4                   2UL
#define L8                   3UL
#define LEQUAL               2UL
#define LESS                 1UL
#define LINEAR_SAMPLES       0UL
#define LINES                3UL
#define LINE_STRIP           4UL
#define NEAREST              0UL
#define NEVER                0UL
#define NOTEQUAL             6UL
#define ONE                  1UL
#define ONE_MINUS_DST_ALPHA  5UL
#define ONE_MINUS_SRC_ALPHA  4UL
#define OPT_CENTER           1536UL
#define OPT_CENTERX          512UL
#define OPT_CENTERY          1024UL
#define OPT_FLAT             256UL
#define OPT_MONO             1UL
#define OPT_NOBACK           4096UL
#define OPT_NODL             2UL
#define OPT_NOHANDS          49152UL
#define OPT_NOHM             16384UL
#define OPT_NOPOINTER        16384UL
#define OPT_NOSECS           32768UL
#define OPT_NOTICKS          8192UL
#define OPT_RIGHTX           2048UL
#define OPT_SIGNED           256UL
#define PALETTED             8UL
#define FTPOINTS             2UL
#define RECTS                9UL

#define RAM_CMD              1081344UL
#define RAM_DL               1048576UL
#define RAM_G                0UL
#define RAM_PAL              1056768UL
#define RAM_REG              1057792UL

#define ROMFONT_TABLEADDRESS 1048572UL

#define REG_ANALOG           1058104UL
#define REG_ANA_COMP         1058160UL
#define REG_CLOCK            1057800UL
#define REG_CMD_DL           1058028UL
#define REG_CMD_READ         1058020UL
#define REG_CMD_WRITE        1058024UL
#define REG_CPURESET         1057820UL
#define REG_CRC              1058152UL
#define REG_CSPREAD          1057892UL
#define REG_CYA0             1058000UL
#define REG_CYA1             1058004UL
#define REG_CYA_TOUCH        1058100UL
#define REG_DATESTAMP        1058108UL
#define REG_DITHER           1057884UL
#define REG_DLSWAP           1057872UL
#define REG_FRAMES           1057796UL
#define REG_FREQUENCY        1057804UL
#define REG_GPIO             1057936UL
#define REG_GPIO_DIR         1057932UL
#define REG_HCYCLE           1057832UL
#define REG_HOFFSET          1057836UL
#define REG_HSIZE            1057840UL
#define REG_HSYNC0           1057844UL
#define REG_HSYNC1           1057848UL
#define REG_ID               1057792UL
#define REG_INT_EN           1057948UL
#define REG_INT_FLAGS        1057944UL
#define REG_INT_MASK         1057952UL
#define REG_MACRO_0          1057992UL
#define REG_MACRO_1          1057996UL
#define REG_OUTBITS          1057880UL
#define REG_PCLK             1057900UL
#define REG_PCLK_POL         1057896UL
#define REG_PLAY             1057928UL
#define REG_PLAYBACK_FORMAT  1057972UL
#define REG_PLAYBACK_FREQ    1057968UL
#define REG_PLAYBACK_LENGTH  1057960UL
#define REG_PLAYBACK_LOOP    1057976UL
#define REG_PLAYBACK_PLAY    1057980UL
#define REG_PLAYBACK_READPTR 1057964UL
#define REG_PLAYBACK_START   1057956UL
#define REG_PWM_DUTY         1057988UL
#define REG_PWM_HZ           1057984UL
#define REG_RENDERMODE       1057808UL
#define REG_ROMSUB_SEL       1058016UL
#define REG_ROTATE           1057876UL
#define REG_SNAPSHOT         1057816UL
#define REG_SNAPY            1057812UL
#define REG_SOUND            1057924UL
#define REG_SWIZZLE          1057888UL
#define REG_TAG              1057912UL
#define REG_TAG_X            1057904UL
#define REG_TAG_Y            1057908UL
#define REG_TAP_CRC          1057824UL
#define REG_TAP_MASK         1057828UL
#define REG_TOUCH_ADC_MODE   1058036UL
#define REG_TOUCH_CHARGE     1058040UL
#define REG_TOUCH_DIRECT_XY  1058164UL
#define REG_TOUCH_DIRECT_Z1Z2 1058168UL
#define REG_TOUCH_MODE       1058032UL
#define REG_TOUCH_OVERSAMPLE 1058048UL
#define REG_TOUCH_RAW_XY     1058056UL
#define REG_TOUCH_RZ         1058060UL
#define REG_TOUCH_RZTHRESH   1058052UL
#define REG_TOUCH_SCREEN_XY  1058064UL
#define REG_TOUCH_SETTLE     1058044UL
#define REG_TOUCH_TAG        1058072UL
#define REG_TOUCH_TAG_XY     1058068UL
#define REG_TOUCH_TRANSFORM_A 1058076UL
#define REG_TOUCH_TRANSFORM_B 1058080UL
#define REG_TOUCH_TRANSFORM_C 1058084UL
#define REG_TOUCH_TRANSFORM_D 1058088UL
#define REG_TOUCH_TRANSFORM_E 1058092UL
#define REG_TOUCH_TRANSFORM_F 1058096UL
#define REG_TRACKER          1085440UL
#define REG_TRIM             1058156UL
#define REG_VCYCLE           1057852UL
#define REG_VOFFSET          1057856UL
#define REG_VOL_PB           1057916UL
#define REG_VOL_SOUND        1057920UL
#define REG_VSIZE            1057860UL
#define REG_VSYNC0           1057864UL
#define REG_VSYNC1           1057868UL
// FT801 Registers

#define REG_CTOUCH_EXTENDED 1058036UL
#define REG_CTOUCH_GESTURE 1058104UL
#define REG_CTOUCH_IDS 1058060UL
#define REG_CTOUCH_TOUCH0_XY 1058064UL
#define REG_CTOUCH_TOUCH1_XY 1058056UL
#define REG_CTOUCH_TOUCH2_XY 1058164UL
#define REG_CTOUCH_TOUCH3_XY 1058168UL
#define REG_CTOUCH_TOUCH4_X 1058104UL
#define REG_CTOUCH_TOUCH4_Y 1058060UL


#define REPEAT               1UL
#define REPLACE              2UL
#define RGB332               4UL
#define RGB565               7UL
#define SRC_ALPHA            2UL
#define TEXT8X8              9UL
#define TEXTVGA              10UL
#define TOUCHMODE_CONTINUOUS 3UL
#define TOUCHMODE_FRAME      2UL
#define TOUCHMODE_OFF        0UL
#define TOUCHMODE_ONESHOT    1UL
#define ULAW_SAMPLES         1UL
#define ZERO                 0UL


#define VERTEX2F(x,y) ((1UL<<30)|(((x)&32767UL)<<15)|(((y)&32767UL)<<0))
#define VERTEX2II(x,y,handle,cell) ((2UL<<30)|(((x)&511UL)<<21)|(((y)&511UL)<<12)|(((handle)&31UL)<<7)|(((cell)&127UL)<<0))
#define BITMAP_SOURCE(addr) ((1UL<<24)|(((addr)&1048575UL)<<0))
#define CLEAR_COLOR_RGB(red,green,blue) ((2UL<<24)|(((red)&255UL)<<16)|(((green)&255UL)<<8)|(((blue)&255UL)<<0))
#define TAG(s) ((3UL<<24)|(((s)&255UL)<<0))
#define COLOR_RGB(red,green,blue) ((4UL<<24)|(((red)&255UL)<<16)|(((green)&255UL)<<8)|(((blue)&255UL)<<0))
#define BITMAP_HANDLE(handle) ((5UL<<24)|(((handle)&31UL)<<0))
#define CELL(cell) ((6UL<<24)|(((cell)&127UL)<<0))
#define BITMAP_LAYOUT(format,linestride,height) ((7UL<<24)|(((format)&31UL)<<19)|(((linestride)&1023UL)<<9)|(((height)&511UL)<<0))
#define BITMAP_SIZE(filter,wrapx,wrapy,width,height) ((8UL<<24)|(((filter)&1UL)<<20)|(((wrapx)&1UL)<<19)|(((wrapy)&1UL)<<18)|(((width)&511UL)<<9)|(((height)&511UL)<<0))
#define ALPHA_FUNC(func,ref) ((9UL<<24)|(((func)&7UL)<<8)|(((ref)&255UL)<<0))
#define STENCIL_FUNC(func,ref,mask) ((10UL<<24)|(((func)&7UL)<<16)|(((ref)&255UL)<<8)|(((mask)&255UL)<<0))
#define BLEND_FUNC(src,dst) ((11UL<<24)|(((src)&7UL)<<3)|(((dst)&7UL)<<0))
#define STENCIL_OP(sfail,spass) ((12UL<<24)|(((sfail)&7UL)<<3)|(((spass)&7UL)<<0))
#define POINT_SIZE(size) ((13UL<<24)|(((size)&8191UL)<<0))
#define LINE_WIDTH(width) ((14UL<<24)|(((width)&4095UL)<<0))
#define CLEAR_COLOR_A(alpha) ((15UL<<24)|(((alpha)&255UL)<<0))
#define COLOR_A(alpha) ((16UL<<24)|(((alpha)&255UL)<<0))
#define CLEAR_STENCIL(s) ((17UL<<24)|(((s)&255UL)<<0))
#define CLEAR_TAG(s) ((18UL<<24)|(((s)&255UL)<<0))
#define STENCIL_MASK(mask) ((19UL<<24)|(((mask)&255UL)<<0))
#define TAG_MASK(mask) ((20UL<<24)|(((mask)&1UL)<<0))
#define BITMAP_TRANSFORM_A(a) ((21UL<<24)|(((a)&131071UL)<<0))
#define BITMAP_TRANSFORM_B(b) ((22UL<<24)|(((b)&131071UL)<<0))
#define BITMAP_TRANSFORM_C(c) ((23UL<<24)|(((c)&16777215UL)<<0))
#define BITMAP_TRANSFORM_D(d) ((24UL<<24)|(((d)&131071UL)<<0))
#define BITMAP_TRANSFORM_E(e) ((25UL<<24)|(((e)&131071UL)<<0))
#define BITMAP_TRANSFORM_F(f) ((26UL<<24)|(((f)&16777215UL)<<0))
#define SCISSOR_XY(x,y) ((27UL<<24)|(((x)&511UL)<<9)|(((y)&511UL)<<0))
#define SCISSOR_SIZE(width,height) ((28UL<<24)|(((width)&1023UL)<<10)|(((height)&1023UL)<<0))
#define CALL(dest) ((29UL<<24)|(((dest)&65535UL)<<0))
#define JUMP(dest) ((30UL<<24)|(((dest)&65535UL)<<0))
#define BEGIN(prim) ((31UL<<24)|(((prim)&15UL)<<0))
#define COLOR_MASK(r,g,b,a) ((32UL<<24)|(((r)&1UL)<<3)|(((g)&1UL)<<2)|(((b)&1UL)<<1)|(((a)&1UL)<<0))
#define CLEAR(c,s,t) ((38UL<<24)|(((c)&1UL)<<2)|(((s)&1UL)<<1)|(((t)&1UL)<<0))
#define END() ((33UL<<24))
#define SAVE_CONTEXT() ((34UL<<24))
#define RESTORE_CONTEXT() ((35UL<<24))
#define RETURN() ((36UL<<24))
#define MACRO(m) ((37UL<<24)|(((m)&1UL)<<0))
#define DISPLAY() ((0UL<<24))


*/


#else

#define LOW_FREQ_BOUND  58800000L//98% of 60Mhz

#define RAM_G_SIZE			1024*1024L
#define FT81X_VERSION "1.0.4"

#define ADC_DIFFERENTIAL     1UL
#define ADC_SINGLE_ENDED     0UL
#define ADPCM_SAMPLES        2UL
#define ALWAYS               7UL
#define ARGB1555             0UL
#define ARGB2                5UL
#define ARGB4                6UL
#define BARGRAPH             11UL
#define BILINEAR             1UL
#define BITMAPS              1UL
#define BORDER               0UL
#define CMDBUF_SIZE          4096UL
#define CMD_APPEND           4294967070UL //Address 0xFFFFFF1E
#define CMD_BGCOLOR          4294967049UL //Address 0xFFFFFF09
#define CMD_BITMAP_TRANSFORM 4294967073UL
#define CMD_BUTTON           4294967053UL //Address 0xFFFFFF0D
#define CMD_CALIBRATE        4294967061UL //Address 0xFFFFFF15
#define CMD_CLOCK            4294967060UL //Address 0xFFFFFF14
#define CMD_COLDSTART        4294967090UL //Address 0xFFFFFF32
#define CMD_CRC              4294967043UL
#define CMD_CSKETCH 		 4294967093UL
#define CMD_DIAL             4294967085UL //Address 0xFFFFFF2D
#define CMD_DLSTART          4294967040UL //Address 0xFFFFFF00
#define CMD_DLSWAP           4294967041UL //Address 0xFFFFFF01
#define CMD_EXECUTE          4294967047UL
#define CMD_FGCOLOR          4294967050UL //Address 0xFFFFFF0A
#define CMD_GAUGE            4294967059UL //Address 0xFFFFFF13
#define CMD_GETMATRIX        4294967091UL //Address 0xFFFFFF33
#define CMD_GETPOINT         4294967048UL
#define CMD_GETPROPS         4294967077UL //Address 0xFFFFFF25
#define CMD_GETPTR           4294967075UL //Address 0xFFFFFF23
#define CMD_GRADCOLOR        4294967092UL //Address 0xFFFFFF34
#define CMD_GRADIENT         4294967051UL //Address 0xFFFFFF0B
#define CMD_HAMMERAUX        4294967044UL
#define CMD_IDCT_DELETED     4294967046UL
#define CMD_INFLATE          4294967074UL //Address 0xFFFFFF22
#define CMD_INTERRUPT        4294967042UL //Address 0xFFFFFF02
#define CMD_INT_RAMSHARED    4294967101UL
#define CMD_INT_SWLOADIMAGE  4294967102UL
#define CMD_KEYS             4294967054UL //Address 0xFFFFFF0E
#define CMD_LOADIDENTITY     4294967078UL //Address 0xFFFFFF26
#define CMD_LOADIMAGE        4294967076UL //Address 0xFFFFFF24
#define CMD_LOGO             4294967089UL //Address 0xFFFFFF31
#define CMD_MARCH            4294967045UL
#define CMD_MEDIAFIFO        4294967097UL //Address 0xFFFFFF39
#define CMD_MEMCPY           4294967069UL //Address 0xFFFFFF1D
#define CMD_MEMCRC           4294967064UL //Address 0xFFFFFF18
#define CMD_MEMSET           4294967067UL //Address 0xFFFFFF1B
#define CMD_MEMWRITE         4294967066UL //Address 0xFFFFFF1A
#define CMD_MEMZERO          4294967068UL //Address 0xFFFFFF1C
#define CMD_NUMBER           4294967086UL //Address 0xFFFFFF2E
#define CMD_PLAYVIDEO        4294967098UL //Address 0xFFFFFF3A
#define CMD_PROGRESS         4294967055UL //Address 0xFFFFFF0F
#define CMD_REGREAD          4294967065UL //Address 0xFFFFFF19
#define CMD_ROMFONT          4294967103UL //Address 0xFFFFFF3F
#define CMD_ROTATE           4294967081UL //Address 0xFFFFFF29
#define CMD_SCALE            4294967080UL //Address 0xFFFFFF28
#define CMD_SCREENSAVER      4294967087UL //Address 0xFFFFFF2F
#define CMD_SCROLLBAR        4294967057UL //Address 0xFFFFFF11
#define CMD_SETBASE          4294967096UL //Address 0xFFFFFF38
#define CMD_SETBITMAP        4294967107UL //Address 0xFFFFFF43
#define CMD_SETFONT          4294967083UL //Address 0xFFFFFF2B
#define CMD_SETFONT2         4294967099UL //Address 0xFFFFFF3B
#define CMD_SETMATRIX        4294967082UL //Address 0xFFFFFF2A
#define CMD_SETROTATE        4294967094UL //Address 0xFFFFFF36
#define CMD_SETSCRATCH       4294967100UL //Address 0xFFFFFF3C
#define CMD_SKETCH           4294967088UL //Address 0xFFFFFF30
#define CMD_SLIDER           4294967056UL //Address 0xFFFFFF10
#define CMD_SNAPSHOT         4294967071UL //Address 0xFFFFFF1F
#define CMD_SNAPSHOT2        4294967095UL //Address 0xFFFFFF37
#define CMD_SPINNER          4294967062UL //Address 0xFFFFFF16
#define CMD_STOP             4294967063UL //Address 0xFFFFFF17
#define CMD_SWAP             4294967041UL
#define CMD_SYNC             4294967106UL
#define CMD_TEXT             4294967052UL //Address 0xFFFFFF0C
#define CMD_TOGGLE           4294967058UL //Address 0xFFFFFF12
#define CMD_TOUCH_TRANSFORM  4294967072UL
#define CMD_TRACK            4294967084UL //Address 0xFFFFFF2C
#define CMD_TRANSLATE        4294967079UL //Address 0xFFFFFF27
#define CMD_VIDEOFRAME       4294967105UL //Address 0xFFFFFF41
#define CMD_VIDEOSTART       4294967104UL //Address 0xFFFFFF40
#define DECR                 4UL
#define DLSWAP_DONE          0UL
#define DLSWAP_FRAME         2UL
#define DLSWAP_LINE          1UL
#define DST_ALPHA            3UL
#define EDGE_STRIP_A         7UL
#define EDGE_STRIP_B         8UL
#define EDGE_STRIP_L         6UL
#define EDGE_STRIP_R         5UL
#define EQUAL                5UL
#define GEQUAL               4UL
#define GREATER              3UL
#define INCR                 3UL
#define INT_CMDEMPTY         32UL
#define INT_CMDFLAG          64UL
#define INT_CONVCOMPLETE     128UL
#define INT_G8               18UL
#define INT_L8C              12UL
#define INT_PLAYBACK         16UL
#define INT_SOUND            8UL
#define INT_SWAP             1UL
#define INT_TAG              4UL
#define INT_TOUCH            2UL
#define INT_VGA              13UL
#define INVERT               5UL
#define KEEP                 1UL
#define L1                   1UL
#define L2                   17UL
#define L4                   2UL
#define L8                   3UL
#define LEQUAL               2UL
#define LESS                 1UL
#define LINEAR_SAMPLES       0UL
#define LINES                3UL
#define LINE_STRIP           4UL
#define NEAREST              0UL
#define NEVER                0UL
#define NOTEQUAL             6UL
#define ONE                  1UL
#define ONE_MINUS_DST_ALPHA  5UL
#define ONE_MINUS_SRC_ALPHA  4UL
#define OPT_CENTER           1536UL
#define OPT_CENTERX          512UL
#define OPT_CENTERY          1024UL
#define OPT_FLAT             256UL
#define OPT_FULLSCREEN       8UL
#define OPT_MEDIAFIFO        16UL
#define OPT_MONO             1UL
#define OPT_NOBACK           4096UL
#define OPT_NODL             2UL
#define OPT_NOHANDS          49152UL
#define OPT_NOHM             16384UL
#define OPT_NOPOINTER        16384UL
#define OPT_NOSECS           32768UL
#define OPT_NOTEAR           4UL
#define OPT_NOTICKS          8192UL
#define OPT_RIGHTX           2048UL
#define OPT_SIGNED           256UL
#define OPT_SOUND            32UL
#define PALETTED             8UL
#define PALETTED4444         15UL
#define PALETTED565          14UL
#define PALETTED8            16UL
#define FTPOINTS             2UL
#define RAM_CMD              3178496UL
#define RAM_DL               3145728UL
#define RAM_G                0UL
#define RAM_REG              3153920UL //Offset 0x00
#define RAM_ROMSUB           3186688UL
#define RECTS                9UL
#define ROMFONT_TABLEADDRESS 3145724UL
#define REG_ANALOG           3154284UL  //Address 0x30216C //Offset 0x16C
#define REG_ANA_COMP         3154308UL
#define REG_BIST_EN          3154292UL
#define REG_BUSYBITS         3154152UL
#define REG_CLOCK            3153928UL //Offset 0x8
#define REG_CMDB_SPACE       3155316UL //Offset 0x574
#define REG_CMDB_WRITE       3155320UL //Offset 0x578
#define REG_CMD_DL           3154176UL //Offset 0x100
#define REG_CMD_READ         3154168UL //Offset 0xF8
#define REG_CMD_WRITE        3154172UL //Offset 0xFC
#define REG_CPURESET         3153952UL //Offset 0x20
#define REG_CRC              3154296UL
#define REG_CSPREAD          3154024UL //Offset 0x68
#define REG_CTOUCH_EXTENDED  3154184UL //Address 0x302108 //Offset 0x108
#define REG_CTOUCH_MODE		 3154180UL //Address 0x302104 //Offset 0x104
#define REG_CTOUCH_TAG0		 3154220UL //Address 0x30212C //Offset 0x12C //Datasheet REG_CTOUCH_TAG
#define REG_CTOUCH_TAG0_XY	 3154216UL //Address 0x302128 //Offset 0x128 //Datasheet REG_CTOUCH_TAG_XY
#define REG_CTOUCH_TAG1		 3154228UL //Address 0x302134 //Offset 0x134
#define REG_CTOUCH_TAG1_XY	 3154224UL //Address 0x302130 //Offset 0x130
#define REG_CTOUCH_TAG2		 3154236UL //Address 0x30213C //Offset 0x13C
#define REG_CTOUCH_TAG2_XY	 3154232UL //Address 0x302138 //Offset 0x138
#define REG_CTOUCH_TAG3		 3154244UL //Address 0x302144 //Offset 0x144
#define REG_CTOUCH_TAG3_XY	 3154240UL //Address 0x302140 //Offset 0x140
#define REG_CTOUCH_TAG4		 3154252UL //Address 0x30214C //Offset 0x14C
#define REG_CTOUCH_TAG4_XY	 3154248UL //Address 0x302148 //Offset 0x148
#define REG_CTOUCH_TOUCH0_XY 3154212UL //Address 0x302124 //Offset 0x124 //Datasheet REG_CTOUCH_TOUCH_XY
#define REG_CTOUCH_TOUCH4_X  3154284UL //Address 0x30216C //Offset 0x16C
#define REG_CTOUCH_TOUCH4_Y  3154208UL //Address 0x302120 //Offset 0x120
#define REG_CTOUCH_TOUCH1_XY 3154204UL //Address 0x30211C //Offset 0x11C //Datasheet REG_CTOUCH_RAW_XY
#define REG_CTOUCH_TOUCH2_XY 3154316UL //Address 0x30218C //Offset 0x18C
#define REG_CTOUCH_TOUCH3_XY 3154320UL //Address 0x302190 //Offset 0x190
#define REG_CYA_TOUCH        3154280UL
#define REG_DATESTAMP        3155300UL
#define REG_DITHER           3154016UL //Offset 0x60
#define REG_DLSWAP           3154004UL //Offset 0x54
#define REG_FRAMES           3153924UL //Offset 0x4
#define REG_FREQUENCY        3153932UL //Offset 0xC
#define REG_GPIO             3154068UL //Offset 0x94
#define REG_GPIOX            3154076UL //Offset 0x9C
#define REG_GPIOX_DIR        3154072UL //Offset 0x98
#define REG_GPIO_DIR         3154064UL //Offset 0x90
#define REG_HCYCLE           3153964UL //Offset 0x2C
#define REG_HOFFSET          3153968UL //Offset 0x30
#define REG_HSIZE            3153972UL //Offset 0x34
#define REG_HSYNC0           3153976UL //Offset 0x38
#define REG_HSYNC1           3153980UL //Offset 0x3C
#define REG_ID               3153920UL //Offset 0x00
#define REG_INT_EN           3154092UL //Offset 0xAC
#define REG_INT_FLAGS        3154088UL //Offset 0xA8
#define REG_INT_MASK         3154096UL //Offset 0xB0
#define REG_MACRO_0          3154136UL
#define REG_MACRO_1          3154140UL
#define REG_MEDIAFIFO_READ   3182612UL //Offset 0x7014
#define REG_MEDIAFIFO_WRITE  3182616UL //Offset 0x7018
#define REG_OUTBITS          3154012UL //Offset 0x5C
#define REG_PATCHED_ANALOG   3154288UL
#define REG_PATCHED_TOUCH_FAULT 3154284UL //Address 0x30216C //Offset 0x16C
#define REG_PCLK             3154032UL //Offset 0x70
#define REG_PCLK_POL         3154028UL //Offset 0x6C
#define REG_PLAY             3154060UL //Offset 0x8C
#define REG_PLAYBACK_FORMAT  3154116UL //Offset 0xC4
#define REG_PLAYBACK_FREQ    3154112UL //Offset 0xC0
#define REG_PLAYBACK_LENGTH  3154104UL //Offset 0xB8
#define REG_PLAYBACK_LOOP    3154120UL //Offset 0xC8
#define REG_PLAYBACK_PLAY    3154124UL //Offset 0xCC
#define REG_PLAYBACK_READPTR 3154108UL //Offset 0xBC
#define REG_PLAYBACK_START   3154100UL //Offset 0xB4
#define REG_PWM_DUTY         3154132UL //Offset 0xD4
#define REG_PWM_HZ           3154128UL //Offset 0xFA
#define REG_RENDERMODE       3153936UL
#define REG_ROMSUB_SEL       3154160UL
#define REG_ROTATE           3154008UL //Offset 0x58
#define REG_SNAPFORMAT       3153948UL
#define REG_SNAPSHOT         3153944UL
#define REG_SNAPY            3153940UL
#define REG_SOUND            3154056UL //Offset 0x88
#define REG_SPI_EARLY_TX     3154300UL
#define REG_SPI_WIDTH        3154312UL //Address 0x188  //Offset 0x188 (address from Datasheet, suspect actually offset)
#define REG_SWIZZLE          3154020UL //Offset 0x64
#define REG_TAG              3154044UL //Offset 0x7C
#define REG_TAG_X            3154036UL //Offset 0x74
#define REG_TAG_Y            3154040UL //Offset 0x78
#define REG_TAP_CRC          3153956UL
#define REG_TAP_MASK         3153960UL
#define REG_TOUCH_ADC_MODE   3154184UL //Address 0x302108 //Offset 0x108
#define REG_TOUCH_CHARGE     3154188UL //Address 0x30210C //Offset 0x10C
#define REG_TOUCH_CONFIG	 3154280UL //Offset 0x168
#define REG_TOUCH_DIRECT_XY  3154316UL //Address 0x30218C //Offset 0x18C
#define REG_TOUCH_DIRECT_Z1Z2 3154320UL //Address 0x302190 //Offset 0x190
#define REG_TOUCH_FAULT      3154288UL
#define REG_TOUCH_MODE       3154180UL //Address 0x302104 //Offset 0x104
#define REG_TOUCH_OVERSAMPLE 3154196UL //Address 0x302114 //Offset 0x114
#define REG_TOUCH_RAW_XY     3154204UL //Address 0x30211C //Offset 0x11C
#define REG_TOUCH_RZ         3154208UL //Address 0x302120 //Offset 0x120
#define REG_TOUCH_RZTHRESH   3154200UL //Address 0x302118 //Offset 0x118
#define REG_TOUCH_SCREEN_XY  3154212UL //Address 0x302124 //Offset 0x124
#define REG_TOUCH_SETTLE     3154192UL //Address 0x302110 //Offset 0x110
#define REG_TOUCH_TAG        3154220UL //Address 0x30212C //Offset 0x12C
#define REG_TOUCH_TAG1       3154228UL //Address 0x302134 //Offset 0x134
#define REG_TOUCH_TAG1_XY    3154224UL //Address 0x302130 //Offset 0x130
#define REG_TOUCH_TAG2       3154236UL //Address 0x30213C //Offset 0x13C
#define REG_TOUCH_TAG2_XY    3154232UL //Address 0x302138 //Offset 0x138
#define REG_TOUCH_TAG3       3154244UL //Address 0x302144 //Offset 0x144
#define REG_TOUCH_TAG3_XY    3154240UL //Address 0x302140 //Offset 0x140
#define REG_TOUCH_TAG4       3154252UL //Address 0x30214C //Offset 0x14C
#define REG_TOUCH_TAG4_XY    3154248UL //Address 0x302148 //Offset 0x148
#define REG_TOUCH_TAG_XY     3154216UL //Address 0x302128 //Offset 0x128
#define REG_TOUCH_TRANSFORM_A 3154256UL //Offset 0x150
#define REG_TOUCH_TRANSFORM_B 3154260UL //Offset 0x154
#define REG_TOUCH_TRANSFORM_C 3154264UL //Offset 0x158
#define REG_TOUCH_TRANSFORM_D 3154268UL //Offset 0x15C
#define REG_TOUCH_TRANSFORM_E 3154272UL //Offset 0x160
#define REG_TOUCH_TRANSFORM_F 3154276UL //Offset 0x164
#define REG_TRACKER          3182592UL //Offset 0x7000
#define REG_TRACKER_1        3182596UL //Offset 0x7004
#define REG_TRACKER_2        3182600UL //Offset 0x7008
#define REG_TRACKER_3        3182604UL //Offset 0x700C
#define REG_TRACKER_4        3182608UL //Offset 0x7010
#define REG_TRIM             3154304UL //Address 0x10256C (address from Datasheet...)
#define REG_VCYCLE           3153984UL //Offset 0x40
#define REG_VOFFSET          3153988UL //Offset 0x44
#define REG_VOL_PB           3154048UL //Offset 0x80
#define REG_VOL_SOUND        3154052UL //Offset 0x84
#define REG_VSIZE            3153992UL //Offset 0x48
#define REG_VSYNC0           3153996UL //Offset 0x4C
#define REG_VSYNC1           3154000UL //Offset 0x50
#define REPEAT               1UL
#define REPLACE              2UL
#define RGB332               4UL
#define RGB565               7UL
#define SRC_ALPHA            2UL
#define TEXT8X8              9UL
#define TEXTVGA              10UL
#define TOUCHMODE_CONTINUOUS 3UL
#define TOUCHMODE_FRAME      2UL
#define TOUCHMODE_OFF        0UL
#define TOUCHMODE_ONESHOT    1UL
#define ULAW_SAMPLES         1UL
#define ZERO                 0UL
#define ALPHA_FUNC(func,ref) ((9UL<<24)|(((func)&7UL)<<8)|(((ref)&255UL)<<0))
#define BEGIN(prim) ((31UL<<24)|(((prim)&15UL)<<0))
#define BITMAP_HANDLE(handle) ((5UL<<24)|(((handle)&31UL)<<0))
#define BITMAP_LAYOUT(format,linestride,height) ((7UL<<24)|(((format)&31UL)<<19)|(((linestride)&1023UL)<<9)|(((height)&511UL)<<0))
#define BITMAP_LAYOUT_H(linestride,height) ((40UL<<24)|(((linestride)&3UL)<<2)|(((height)&3UL)<<0))
#define BITMAP_SIZE(filter,wrapx,wrapy,width,height) ((8UL<<24)|(((filter)&1UL)<<20)|(((wrapx)&1UL)<<19)|(((wrapy)&1UL)<<18)|(((width)&511UL)<<9)|(((height)&511UL)<<0))
#define BITMAP_SIZE_H(width,height) ((41UL<<24)|(((width)&3UL)<<2)|(((height)&3UL)<<0))
#define BITMAP_SOURCE(addr) ((1UL<<24)|(((addr)&4194303UL)<<0))
#define BITMAP_TRANSFORM_A(a) ((21UL<<24)|(((a)&131071UL)<<0))
#define BITMAP_TRANSFORM_B(b) ((22UL<<24)|(((b)&131071UL)<<0))
#define BITMAP_TRANSFORM_C(c) ((23UL<<24)|(((c)&16777215UL)<<0))
#define BITMAP_TRANSFORM_D(d) ((24UL<<24)|(((d)&131071UL)<<0))
#define BITMAP_TRANSFORM_E(e) ((25UL<<24)|(((e)&131071UL)<<0))
#define BITMAP_TRANSFORM_F(f) ((26UL<<24)|(((f)&16777215UL)<<0))
#define BLEND_FUNC(src,dst) ((11UL<<24)|(((src)&7UL)<<3)|(((dst)&7UL)<<0))
#define CALL(dest) ((29UL<<24)|(((dest)&65535UL)<<0))
#define CELL(cell) ((6UL<<24)|(((cell)&127UL)<<0))
#define CLEAR(c,s,t) ((38UL<<24)|(((c)&1UL)<<2)|(((s)&1UL)<<1)|(((t)&1UL)<<0))
#define CLEAR_COLOR_A(alpha) ((15UL<<24)|(((alpha)&255UL)<<0))
#define CLEAR_COLOR_RGB(red,green,blue) ((2UL<<24)|(((red)&255UL)<<16)|(((green)&255UL)<<8)|(((blue)&255UL)<<0))
#define CLEAR_STENCIL(s) ((17UL<<24)|(((s)&255UL)<<0))
#define CLEAR_TAG(s) ((18UL<<24)|(((s)&255UL)<<0))
#define COLOR_A(alpha) ((16UL<<24)|(((alpha)&255UL)<<0))
#define COLOR_MASK(r,g,b,a) ((32UL<<24)|(((r)&1UL)<<3)|(((g)&1UL)<<2)|(((b)&1UL)<<1)|(((a)&1UL)<<0))
#define COLOR_RGB(red,green,blue) ((4UL<<24)|(((red)&255UL)<<16)|(((green)&255UL)<<8)|(((blue)&255UL)<<0))
#define DISPLAY() ((0UL<<24))
#define END() ((33UL<<24))
#define JUMP(dest) ((30UL<<24)|(((dest)&65535UL)<<0))
#define LINE_WIDTH(width) ((14UL<<24)|(((width)&4095UL)<<0))
#define MACRO(m) ((37UL<<24)|(((m)&1UL)<<0))
#define NOP() ((45UL<<24))
#define PALETTE_SOURCE(addr) ((42UL<<24)|(((addr)&4194303UL)<<0))
#define POINT_SIZE(size) ((13UL<<24)|(((size)&8191UL)<<0))
#define RESTORE_CONTEXT() ((35UL<<24))
#define RETURN() ((36UL<<24))
#define SAVE_CONTEXT() ((34UL<<24))
#define SCISSOR_SIZE(width,height) ((28UL<<24)|(((width)&4095UL)<<12)|(((height)&4095UL)<<0))
#define SCISSOR_XY(x,y) ((27UL<<24)|(((x)&2047UL)<<11)|(((y)&2047UL)<<0))
#define STENCIL_FUNC(func,ref,mask) ((10UL<<24)|(((func)&7UL)<<16)|(((ref)&255UL)<<8)|(((mask)&255UL)<<0))
#define STENCIL_MASK(mask) ((19UL<<24)|(((mask)&255UL)<<0))
#define STENCIL_OP(sfail,spass) ((12UL<<24)|(((sfail)&7UL)<<3)|(((spass)&7UL)<<0))
#define TAG(s) ((3UL<<24)|(((s)&255UL)<<0))
#define TAG_MASK(mask) ((20UL<<24)|(((mask)&1UL)<<0))
#define VERTEX_FORMAT(frac) ((39UL<<24)|(((frac)&7UL)<<0))
#define VERTEX_TRANSLATE_X(x) ((43UL<<24)|(((x)&131071UL)<<0))
#define VERTEX_TRANSLATE_Y(y) ((44UL<<24)|(((y)&131071UL)<<0))
#define VERTEX2F(x,y) ((1UL<<30)|(((x)&32767UL)<<15)|(((y)&32767UL)<<0))
#define VERTEX2II(x,y,handle,cell) ((2UL<<30)|(((x)&511UL)<<21)|(((y)&511UL)<<12)|(((handle)&31UL)<<7)|(((cell)&127UL)<<0))

#endif

#define GPU_NUMCHAR_PERFONT (128)
#define GPU_FONT_TABLE_SIZE (148)

/* FT81x and FT80x font table structure */
/* Font table address in ROM can be found by reading the address from 0xFFFFC location. */
/* 16 font tables are present at the address read from location 0xFFFFC */
typedef struct Gpu_Fonts
{
	/* All the values are in bytes */
	/* Width of each character font from 0 to 127 */
	uint8_t	FontWidth[GPU_NUMCHAR_PERFONT];
	/* Bitmap format of font wrt bitmap formats supported by FT800 - L1, L4, L8 */
	uint32_t	FontBitmapFormat;
	/* Font line stride in FT800 ROM */
	uint32_t	FontLineStride;
	/* Font width in pixels */
	uint32_t	FontWidthInPixels;
	/* Font height in pixels */
	uint32_t	FontHeightInPixels;
	/* Pointer to font graphics raw data */
	uint32_t	PointerToFontGraphicsData;
}Gpu_Fonts_t;


#endif /* #ifndef _GPU_H_ */

/* Nothing beyond this */


