/*
 * This definitions of the PIC16LF1906 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2012.
 *
 * This file is generated automatically by the cinc2h.pl, 2012-09-28 08:20:02 UTC.
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

#include <pic16lf1906.h>

//==============================================================================

__at(0x0000) __sfr INDF0;

__at(0x0001) __sfr INDF1;

__at(0x0002) __sfr PCL;

__at(0x0003) __sfr STATUS;
__at(0x0003) volatile __STATUSbits_t STATUSbits;

__at(0x0004) __sfr FSR0;

__at(0x0004) __sfr FSR0L;

__at(0x0005) __sfr FSR0H;

__at(0x0006) __sfr FSR1;

__at(0x0006) __sfr FSR1L;

__at(0x0007) __sfr FSR1H;

__at(0x0008) __sfr BSR;
__at(0x0008) volatile __BSRbits_t BSRbits;

__at(0x0009) __sfr WREG;

__at(0x000A) __sfr PCLATH;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PORTA;
__at(0x000C) volatile __PORTAbits_t PORTAbits;

__at(0x000D) __sfr PORTB;
__at(0x000D) volatile __PORTBbits_t PORTBbits;

__at(0x000E) __sfr PORTC;
__at(0x000E) volatile __PORTCbits_t PORTCbits;

__at(0x0010) __sfr PORTE;
__at(0x0010) volatile __PORTEbits_t PORTEbits;

__at(0x0011) __sfr PIR1;
__at(0x0011) volatile __PIR1bits_t PIR1bits;

__at(0x0012) __sfr PIR2;
__at(0x0012) volatile __PIR2bits_t PIR2bits;

__at(0x0015) __sfr TMR0;

__at(0x0016) __sfr TMR1;

__at(0x0016) __sfr TMR1L;

__at(0x0017) __sfr TMR1H;

__at(0x0018) __sfr T1CON;
__at(0x0018) volatile __T1CONbits_t T1CONbits;

__at(0x0019) __sfr T1GCON;
__at(0x0019) volatile __T1GCONbits_t T1GCONbits;

__at(0x008C) __sfr TRISA;
__at(0x008C) volatile __TRISAbits_t TRISAbits;

__at(0x008D) __sfr TRISB;
__at(0x008D) volatile __TRISBbits_t TRISBbits;

__at(0x008E) __sfr TRISC;
__at(0x008E) volatile __TRISCbits_t TRISCbits;

__at(0x0090) __sfr TRISE;

__at(0x0091) __sfr PIE1;
__at(0x0091) volatile __PIE1bits_t PIE1bits;

__at(0x0092) __sfr PIE2;
__at(0x0092) volatile __PIE2bits_t PIE2bits;

__at(0x0095) __sfr OPTION_REG;
__at(0x0095) volatile __OPTION_REGbits_t OPTION_REGbits;

__at(0x0096) __sfr PCON;
__at(0x0096) volatile __PCONbits_t PCONbits;

__at(0x0097) __sfr WDTCON;
__at(0x0097) volatile __WDTCONbits_t WDTCONbits;

__at(0x0099) __sfr OSCCON;
__at(0x0099) volatile __OSCCONbits_t OSCCONbits;

__at(0x009A) __sfr OSCSTAT;
__at(0x009A) volatile __OSCSTATbits_t OSCSTATbits;

__at(0x009B) __sfr ADRES;

__at(0x009B) __sfr ADRESL;

__at(0x009C) __sfr ADRESH;

__at(0x009D) __sfr ADCON0;
__at(0x009D) volatile __ADCON0bits_t ADCON0bits;

__at(0x009E) __sfr ADCON1;
__at(0x009E) volatile __ADCON1bits_t ADCON1bits;

__at(0x010C) __sfr LATA;
__at(0x010C) volatile __LATAbits_t LATAbits;

__at(0x010D) __sfr LATB;
__at(0x010D) volatile __LATBbits_t LATBbits;

__at(0x010E) __sfr LATC;
__at(0x010E) volatile __LATCbits_t LATCbits;

__at(0x0116) __sfr BORCON;
__at(0x0116) volatile __BORCONbits_t BORCONbits;

__at(0x0117) __sfr FVRCON;
__at(0x0117) volatile __FVRCONbits_t FVRCONbits;

__at(0x018C) __sfr ANSELA;
__at(0x018C) volatile __ANSELAbits_t ANSELAbits;

__at(0x018D) __sfr ANSELB;
__at(0x018D) volatile __ANSELBbits_t ANSELBbits;

__at(0x0191) __sfr PMADR;

__at(0x0191) __sfr PMADRL;

__at(0x0192) __sfr PMADRH;

__at(0x0193) __sfr PMDAT;

__at(0x0193) __sfr PMDATL;

__at(0x0194) __sfr PMDATH;

__at(0x0195) __sfr PMCON1;
__at(0x0195) volatile __PMCON1bits_t PMCON1bits;

__at(0x0196) __sfr PMCON2;

__at(0x0199) __sfr RC1REG;

__at(0x0199) __sfr RCREG;

__at(0x0199) __sfr RCREG1;

__at(0x019A) __sfr TX1REG;

__at(0x019A) __sfr TXREG;

__at(0x019A) __sfr TXREG1;

__at(0x019B) __sfr SP1BRGL;
__at(0x019B) volatile __SP1BRGLbits_t SP1BRGLbits;

__at(0x019B) __sfr SPBRG;
__at(0x019B) volatile __SPBRGbits_t SPBRGbits;

__at(0x019B) __sfr SPBRGL;
__at(0x019B) volatile __SPBRGLbits_t SPBRGLbits;

__at(0x019B) __sfr SPBRGL1;
__at(0x019B) volatile __SPBRGL1bits_t SPBRGL1bits;

__at(0x019C) __sfr SP1BRGH;
__at(0x019C) volatile __SP1BRGHbits_t SP1BRGHbits;

__at(0x019C) __sfr SPBRGH;
__at(0x019C) volatile __SPBRGHbits_t SPBRGHbits;

__at(0x019C) __sfr SPBRGH1;
__at(0x019C) volatile __SPBRGH1bits_t SPBRGH1bits;

__at(0x019D) __sfr RC1STA;
__at(0x019D) volatile __RC1STAbits_t RC1STAbits;

__at(0x019D) __sfr RCSTA;
__at(0x019D) volatile __RCSTAbits_t RCSTAbits;

__at(0x019D) __sfr RCSTA1;
__at(0x019D) volatile __RCSTA1bits_t RCSTA1bits;

__at(0x019E) __sfr TX1STA;
__at(0x019E) volatile __TX1STAbits_t TX1STAbits;

__at(0x019E) __sfr TXSTA;
__at(0x019E) volatile __TXSTAbits_t TXSTAbits;

__at(0x019E) __sfr TXSTA1;
__at(0x019E) volatile __TXSTA1bits_t TXSTA1bits;

__at(0x019F) __sfr BAUD1CON;
__at(0x019F) volatile __BAUD1CONbits_t BAUD1CONbits;

__at(0x019F) __sfr BAUDCON;
__at(0x019F) volatile __BAUDCONbits_t BAUDCONbits;

__at(0x019F) __sfr BAUDCON1;
__at(0x019F) volatile __BAUDCON1bits_t BAUDCON1bits;

__at(0x020D) __sfr WPUB;
__at(0x020D) volatile __WPUBbits_t WPUBbits;

__at(0x0210) __sfr WPUE;
__at(0x0210) volatile __WPUEbits_t WPUEbits;

__at(0x0394) __sfr IOCBP;
__at(0x0394) volatile __IOCBPbits_t IOCBPbits;

__at(0x0395) __sfr IOCBN;
__at(0x0395) volatile __IOCBNbits_t IOCBNbits;

__at(0x0396) __sfr IOCBF;
__at(0x0396) volatile __IOCBFbits_t IOCBFbits;

__at(0x0791) __sfr LCDCON;
__at(0x0791) volatile __LCDCONbits_t LCDCONbits;

__at(0x0792) __sfr LCDPS;
__at(0x0792) volatile __LCDPSbits_t LCDPSbits;

__at(0x0793) __sfr LCDREF;
__at(0x0793) volatile __LCDREFbits_t LCDREFbits;

__at(0x0794) __sfr LCDCST;
__at(0x0794) volatile __LCDCSTbits_t LCDCSTbits;

__at(0x0795) __sfr LCDRL;
__at(0x0795) volatile __LCDRLbits_t LCDRLbits;

__at(0x0798) __sfr LCDSE0;
__at(0x0798) volatile __LCDSE0bits_t LCDSE0bits;

__at(0x0799) __sfr LCDSE1;
__at(0x0799) volatile __LCDSE1bits_t LCDSE1bits;

__at(0x079B) __sfr LCDSE3;
__at(0x079B) volatile __LCDSE3bits_t LCDSE3bits;

__at(0x07A0) __sfr LCDDATA0;
__at(0x07A0) volatile __LCDDATA0bits_t LCDDATA0bits;

__at(0x07A1) __sfr LCDDATA1;
__at(0x07A1) volatile __LCDDATA1bits_t LCDDATA1bits;

__at(0x07A3) __sfr LCDDATA3;
__at(0x07A3) volatile __LCDDATA3bits_t LCDDATA3bits;

__at(0x07A4) __sfr LCDDATA4;
__at(0x07A4) volatile __LCDDATA4bits_t LCDDATA4bits;

__at(0x07A6) __sfr LCDDATA6;
__at(0x07A6) volatile __LCDDATA6bits_t LCDDATA6bits;

__at(0x07A7) __sfr LCDDATA7;
__at(0x07A7) volatile __LCDDATA7bits_t LCDDATA7bits;

__at(0x07A9) __sfr LCDDATA9;
__at(0x07A9) volatile __LCDDATA9bits_t LCDDATA9bits;

__at(0x07AA) __sfr LCDDATA10;
__at(0x07AA) volatile __LCDDATA10bits_t LCDDATA10bits;

__at(0x07AC) __sfr LCDDATA12;
__at(0x07AC) volatile __LCDDATA12bits_t LCDDATA12bits;

__at(0x07AF) __sfr LCDDATA15;
__at(0x07AF) volatile __LCDDATA15bits_t LCDDATA15bits;

__at(0x07B2) __sfr LCDDATA18;
__at(0x07B2) volatile __LCDDATA18bits_t LCDDATA18bits;

__at(0x07B5) __sfr LCDDATA21;
__at(0x07B5) volatile __LCDDATA21bits_t LCDDATA21bits;

__at(0x0FE4) __sfr STATUS_SHAD;
__at(0x0FE4) volatile __STATUS_SHADbits_t STATUS_SHADbits;

__at(0x0FE5) __sfr WREG_SHAD;

__at(0x0FE6) __sfr BSR_SHAD;

__at(0x0FE7) __sfr PCLATH_SHAD;

__at(0x0FE8) __sfr FSR0L_SHAD;

__at(0x0FE9) __sfr FSR0H_SHAD;

__at(0x0FEA) __sfr FSR1L_SHAD;

__at(0x0FEB) __sfr FSR1H_SHAD;

__at(0x0FED) __sfr STKPTR;

__at(0x0FEE) __sfr TOSL;

__at(0x0FEF) __sfr TOSH;
