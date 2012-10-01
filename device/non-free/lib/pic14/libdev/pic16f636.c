/*
 * This definitions of the PIC16F636 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <proton7@freemail.hu> 2012.
 *
 * This file is generated automatically by the cinc2h.pl, 2012-09-28 08:19:49 UTC.
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * but explicitly does not cover any code or objects generated by sdcc.
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */

#include <pic16f636.h>

//==============================================================================

__at(0x0000) __sfr INDF;

__at(0x0001) __sfr TMR0;

__at(0x0002) __sfr PCL;

__at(0x0003) __sfr STATUS;
__at(0x0003) volatile __STATUSbits_t STATUSbits;

__at(0x0004) __sfr FSR;

__at(0x0005) __sfr PORTA;
__at(0x0005) volatile __PORTAbits_t PORTAbits;

__at(0x0007) __sfr PORTC;
__at(0x0007) volatile __PORTCbits_t PORTCbits;

__at(0x000A) __sfr PCLATH;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PIR1;
__at(0x000C) volatile __PIR1bits_t PIR1bits;

__at(0x000E) __sfr TMR1;

__at(0x000E) __sfr TMR1L;

__at(0x000F) __sfr TMR1H;

__at(0x0010) __sfr T1CON;
__at(0x0010) volatile __T1CONbits_t T1CONbits;

__at(0x0018) __sfr WDTCON;
__at(0x0018) volatile __WDTCONbits_t WDTCONbits;

__at(0x0019) __sfr CMCON0;
__at(0x0019) volatile __CMCON0bits_t CMCON0bits;

__at(0x001A) __sfr CMCON1;
__at(0x001A) volatile __CMCON1bits_t CMCON1bits;

__at(0x0081) __sfr OPTION_REG;
__at(0x0081) volatile __OPTION_REGbits_t OPTION_REGbits;

__at(0x0085) __sfr TRISA;
__at(0x0085) volatile __TRISAbits_t TRISAbits;

__at(0x0087) __sfr TRISC;
__at(0x0087) volatile __TRISCbits_t TRISCbits;

__at(0x008C) __sfr PIE1;
__at(0x008C) volatile __PIE1bits_t PIE1bits;

__at(0x008E) __sfr PCON;
__at(0x008E) volatile __PCONbits_t PCONbits;

__at(0x008F) __sfr OSCCON;
__at(0x008F) volatile __OSCCONbits_t OSCCONbits;

__at(0x0090) __sfr OSCTUNE;
__at(0x0090) volatile __OSCTUNEbits_t OSCTUNEbits;

__at(0x0094) __sfr LVDCON;
__at(0x0094) volatile __LVDCONbits_t LVDCONbits;

__at(0x0095) __sfr WPUDA;
__at(0x0095) volatile __WPUDAbits_t WPUDAbits;

__at(0x0096) __sfr IOCA;
__at(0x0096) volatile __IOCAbits_t IOCAbits;

__at(0x0097) __sfr WDA;
__at(0x0097) volatile __WDAbits_t WDAbits;

__at(0x0099) __sfr VRCON;
__at(0x0099) volatile __VRCONbits_t VRCONbits;

__at(0x009A) __sfr EEDAT;

__at(0x009A) __sfr EEDATA;

__at(0x009B) __sfr EEADR;

__at(0x009C) __sfr EECON1;
__at(0x009C) volatile __EECON1bits_t EECON1bits;

__at(0x009D) __sfr EECON2;

__at(0x0110) __sfr CRCON;
__at(0x0110) volatile __CRCONbits_t CRCONbits;

__at(0x0111) __sfr CRDAT0;

__at(0x0112) __sfr CRDAT1;

__at(0x0113) __sfr CRDAT2;

__at(0x0114) __sfr CRDAT3;
