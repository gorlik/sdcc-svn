/* Register definitions for pic16f1787.
 * This file was automatically generated by:
 *   inc2h.pl
 *   Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * tbut explicitly does not cover any code or objects generated by sdcc.
 *
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
#include <pic16f1787.h>

__sfr  __at (INDF0_ADDR)                   INDF0;
__sfr  __at (INDF1_ADDR)                   INDF1;
__sfr  __at (PCL_ADDR)                     PCL;
__sfr  __at (STATUS_ADDR)                  STATUS;
__sfr  __at (FSR0_ADDR)                    FSR0;
__sfr  __at (FSR0L_ADDR)                   FSR0L;
__sfr  __at (FSR0H_ADDR)                   FSR0H;
__sfr  __at (FSR1_ADDR)                    FSR1;
__sfr  __at (FSR1L_ADDR)                   FSR1L;
__sfr  __at (FSR1H_ADDR)                   FSR1H;
__sfr  __at (BSR_ADDR)                     BSR;
__sfr  __at (WREG_ADDR)                    WREG;
__sfr  __at (PCLATH_ADDR)                  PCLATH;
__sfr  __at (INTCON_ADDR)                  INTCON;
__sfr  __at (PORTA_ADDR)                   PORTA;
__sfr  __at (PORTB_ADDR)                   PORTB;
__sfr  __at (PORTC_ADDR)                   PORTC;
__sfr  __at (PORTD_ADDR)                   PORTD;
__sfr  __at (PORTE_ADDR)                   PORTE;
__sfr  __at (PIR1_ADDR)                    PIR1;
__sfr  __at (PIR2_ADDR)                    PIR2;
__sfr  __at (PIR3_ADDR)                    PIR3;
__sfr  __at (PIR4_ADDR)                    PIR4;
__sfr  __at (TMR0_ADDR)                    TMR0;
__sfr  __at (TMR1_ADDR)                    TMR1;
__sfr  __at (TMR1L_ADDR)                   TMR1L;
__sfr  __at (TMR1H_ADDR)                   TMR1H;
__sfr  __at (T1CON_ADDR)                   T1CON;
__sfr  __at (T1GCON_ADDR)                  T1GCON;
__sfr  __at (TMR2_ADDR)                    TMR2;
__sfr  __at (PR2_ADDR)                     PR2;
__sfr  __at (T2CON_ADDR)                   T2CON;
__sfr  __at (TRISA_ADDR)                   TRISA;
__sfr  __at (TRISB_ADDR)                   TRISB;
__sfr  __at (TRISC_ADDR)                   TRISC;
__sfr  __at (TRISD_ADDR)                   TRISD;
__sfr  __at (TRISE_ADDR)                   TRISE;
__sfr  __at (PIE1_ADDR)                    PIE1;
__sfr  __at (PIE2_ADDR)                    PIE2;
__sfr  __at (PIE3_ADDR)                    PIE3;
__sfr  __at (PIE4_ADDR)                    PIE4;
__sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
__sfr  __at (PCON_ADDR)                    PCON;
__sfr  __at (WDTCON_ADDR)                  WDTCON;
__sfr  __at (OSCTUNE_ADDR)                 OSCTUNE;
__sfr  __at (OSCCON_ADDR)                  OSCCON;
__sfr  __at (OSCSTAT_ADDR)                 OSCSTAT;
__sfr  __at (ADRES_ADDR)                   ADRES;
__sfr  __at (ADRESL_ADDR)                  ADRESL;
__sfr  __at (ADRESH_ADDR)                  ADRESH;
__sfr  __at (ADCON0_ADDR)                  ADCON0;
__sfr  __at (ADCON1_ADDR)                  ADCON1;
__sfr  __at (ADCON2_ADDR)                  ADCON2;
__sfr  __at (LATA_ADDR)                    LATA;
__sfr  __at (LATB_ADDR)                    LATB;
__sfr  __at (LATC_ADDR)                    LATC;
__sfr  __at (LATD_ADDR)                    LATD;
__sfr  __at (LATE_ADDR)                    LATE;
__sfr  __at (CM1CON0_ADDR)                 CM1CON0;
__sfr  __at (CM1CON1_ADDR)                 CM1CON1;
__sfr  __at (CM2CON0_ADDR)                 CM2CON0;
__sfr  __at (CM2CON1_ADDR)                 CM2CON1;
__sfr  __at (CMOUT_ADDR)                   CMOUT;
__sfr  __at (BORCON_ADDR)                  BORCON;
__sfr  __at (FVRCON_ADDR)                  FVRCON;
__sfr  __at (DACCON0_ADDR)                 DACCON0;
__sfr  __at (DACCON1_ADDR)                 DACCON1;
__sfr  __at (CM4CON0_ADDR)                 CM4CON0;
__sfr  __at (CM4CON1_ADDR)                 CM4CON1;
__sfr  __at (APFCON2_ADDR)                 APFCON2;
__sfr  __at (APFCON_ADDR)                  APFCON;
__sfr  __at (APFCON0_ADDR)                 APFCON0;
__sfr  __at (APFCON1_ADDR)                 APFCON1;
__sfr  __at (CM3CON0_ADDR)                 CM3CON0;
__sfr  __at (CM3CON1_ADDR)                 CM3CON1;
__sfr  __at (ANSELA_ADDR)                  ANSELA;
__sfr  __at (ANSELB_ADDR)                  ANSELB;
__sfr  __at (ANSELD_ADDR)                  ANSELD;
__sfr  __at (ANSELE_ADDR)                  ANSELE;
__sfr  __at (EEADR_ADDR)                   EEADR;
__sfr  __at (EEADRL_ADDR)                  EEADRL;
__sfr  __at (EEADRH_ADDR)                  EEADRH;
__sfr  __at (EEDAT_ADDR)                   EEDAT;
__sfr  __at (EEDATL_ADDR)                  EEDATL;
__sfr  __at (EEDATH_ADDR)                  EEDATH;
__sfr  __at (EECON1_ADDR)                  EECON1;
__sfr  __at (EECON2_ADDR)                  EECON2;
__sfr  __at (VREGCON_ADDR)                 VREGCON;
__sfr  __at (RC1REG_ADDR)                  RC1REG;
__sfr  __at (RCREG_ADDR)                   RCREG;
__sfr  __at (RCREG1_ADDR)                  RCREG1;
__sfr  __at (TX1REG_ADDR)                  TX1REG;
__sfr  __at (TXREG_ADDR)                   TXREG;
__sfr  __at (TXREG1_ADDR)                  TXREG1;
__sfr  __at (SP1BRG_ADDR)                  SP1BRG;
__sfr  __at (SP1BRGL_ADDR)                 SP1BRGL;
__sfr  __at (SPBRG_ADDR)                   SPBRG;
__sfr  __at (SPBRG1_ADDR)                  SPBRG1;
__sfr  __at (SPBRGL_ADDR)                  SPBRGL;
__sfr  __at (SP1BRGH_ADDR)                 SP1BRGH;
__sfr  __at (SPBRGH_ADDR)                  SPBRGH;
__sfr  __at (SPBRGH1_ADDR)                 SPBRGH1;
__sfr  __at (RC1STA_ADDR)                  RC1STA;
__sfr  __at (RCSTA_ADDR)                   RCSTA;
__sfr  __at (RCSTA1_ADDR)                  RCSTA1;
__sfr  __at (TX1STA_ADDR)                  TX1STA;
__sfr  __at (TXSTA_ADDR)                   TXSTA;
__sfr  __at (TXSTA1_ADDR)                  TXSTA1;
__sfr  __at (BAUD1CON_ADDR)                BAUD1CON;
__sfr  __at (BAUDCON_ADDR)                 BAUDCON;
__sfr  __at (BAUDCON1_ADDR)                BAUDCON1;
__sfr  __at (BAUDCTL_ADDR)                 BAUDCTL;
__sfr  __at (BAUDCTL1_ADDR)                BAUDCTL1;
__sfr  __at (WPUA_ADDR)                    WPUA;
__sfr  __at (WPUB_ADDR)                    WPUB;
__sfr  __at (WPUC_ADDR)                    WPUC;
__sfr  __at (WPUD_ADDR)                    WPUD;
__sfr  __at (WPUE_ADDR)                    WPUE;
__sfr  __at (SSP1BUF_ADDR)                 SSP1BUF;
__sfr  __at (SSPBUF_ADDR)                  SSPBUF;
__sfr  __at (SSP1ADD_ADDR)                 SSP1ADD;
__sfr  __at (SSPADD_ADDR)                  SSPADD;
__sfr  __at (SSP1MSK_ADDR)                 SSP1MSK;
__sfr  __at (SSPMSK_ADDR)                  SSPMSK;
__sfr  __at (SSP1STAT_ADDR)                SSP1STAT;
__sfr  __at (SSPSTAT_ADDR)                 SSPSTAT;
__sfr  __at (SSP1CON_ADDR)                 SSP1CON;
__sfr  __at (SSPCON_ADDR)                  SSPCON;
__sfr  __at (SSP1CON2_ADDR)                SSP1CON2;
__sfr  __at (SSPCON2_ADDR)                 SSPCON2;
__sfr  __at (SSP1CON3_ADDR)                SSP1CON3;
__sfr  __at (SSPCON3_ADDR)                 SSPCON3;
__sfr  __at (ODCONA_ADDR)                  ODCONA;
__sfr  __at (ODCONB_ADDR)                  ODCONB;
__sfr  __at (ODCONC_ADDR)                  ODCONC;
__sfr  __at (ODCOND_ADDR)                  ODCOND;
__sfr  __at (ODCONE_ADDR)                  ODCONE;
__sfr  __at (CCPR1_ADDR)                   CCPR1;
__sfr  __at (CCPR1L_ADDR)                  CCPR1L;
__sfr  __at (CCPR1H_ADDR)                  CCPR1H;
__sfr  __at (CCP1CON_ADDR)                 CCP1CON;
__sfr  __at (CCPR2_ADDR)                   CCPR2;
__sfr  __at (CCPR2L_ADDR)                  CCPR2L;
__sfr  __at (CCPR2H_ADDR)                  CCPR2H;
__sfr  __at (CCP2CON_ADDR)                 CCP2CON;
__sfr  __at (SLRCONA_ADDR)                 SLRCONA;
__sfr  __at (SLRCONB_ADDR)                 SLRCONB;
__sfr  __at (SLRCONC_ADDR)                 SLRCONC;
__sfr  __at (SLRCOND_ADDR)                 SLRCOND;
__sfr  __at (SLRCONE_ADDR)                 SLRCONE;
__sfr  __at (CCPR3_ADDR)                   CCPR3;
__sfr  __at (CCPR3L_ADDR)                  CCPR3L;
__sfr  __at (CCPR3H_ADDR)                  CCPR3H;
__sfr  __at (CCP3CON_ADDR)                 CCP3CON;
__sfr  __at (INLVLA_ADDR)                  INLVLA;
__sfr  __at (INLVLB_ADDR)                  INLVLB;
__sfr  __at (INLVLC_ADDR)                  INLVLC;
__sfr  __at (INLVLD_ADDR)                  INLVLD;
__sfr  __at (INLVLE_ADDR)                  INLVLE;
__sfr  __at (IOCAP_ADDR)                   IOCAP;
__sfr  __at (IOCAN_ADDR)                   IOCAN;
__sfr  __at (IOCAF_ADDR)                   IOCAF;
__sfr  __at (IOCBP_ADDR)                   IOCBP;
__sfr  __at (IOCBN_ADDR)                   IOCBN;
__sfr  __at (IOCBF_ADDR)                   IOCBF;
__sfr  __at (IOCCP_ADDR)                   IOCCP;
__sfr  __at (IOCCN_ADDR)                   IOCCN;
__sfr  __at (IOCCF_ADDR)                   IOCCF;
__sfr  __at (IOCEP_ADDR)                   IOCEP;
__sfr  __at (IOCEN_ADDR)                   IOCEN;
__sfr  __at (IOCEF_ADDR)                   IOCEF;
__sfr  __at (OPA1CON_ADDR)                 OPA1CON;
__sfr  __at (OPA2CON_ADDR)                 OPA2CON;
__sfr  __at (CLKRCON_ADDR)                 CLKRCON;
__sfr  __at (PSMC1CON_ADDR)                PSMC1CON;
__sfr  __at (PSMC1MDL_ADDR)                PSMC1MDL;
__sfr  __at (PSMC1SYNC_ADDR)               PSMC1SYNC;
__sfr  __at (PSMC1CLK_ADDR)                PSMC1CLK;
__sfr  __at (PSMC1OEN_ADDR)                PSMC1OEN;
__sfr  __at (PSMC1POL_ADDR)                PSMC1POL;
__sfr  __at (PSMC1BLNK_ADDR)               PSMC1BLNK;
__sfr  __at (PSMC1REBS_ADDR)               PSMC1REBS;
__sfr  __at (PSMC1FEBS_ADDR)               PSMC1FEBS;
__sfr  __at (PSMC1PHS_ADDR)                PSMC1PHS;
__sfr  __at (PSMC1DCS_ADDR)                PSMC1DCS;
__sfr  __at (PSMC1PRS_ADDR)                PSMC1PRS;
__sfr  __at (PSMC1ASDC_ADDR)               PSMC1ASDC;
__sfr  __at (PSMC1ASDL_ADDR)               PSMC1ASDL;
__sfr  __at (PSMC1ASDS_ADDR)               PSMC1ASDS;
__sfr  __at (PSMC1INT_ADDR)                PSMC1INT;
__sfr  __at (PSMC1PH_ADDR)                 PSMC1PH;
__sfr  __at (PSMC1PHL_ADDR)                PSMC1PHL;
__sfr  __at (PSMC1PHH_ADDR)                PSMC1PHH;
__sfr  __at (PSMC1DC_ADDR)                 PSMC1DC;
__sfr  __at (PSMC1DCL_ADDR)                PSMC1DCL;
__sfr  __at (PSMC1DCH_ADDR)                PSMC1DCH;
__sfr  __at (PSMC1PR_ADDR)                 PSMC1PR;
__sfr  __at (PSMC1PRL_ADDR)                PSMC1PRL;
__sfr  __at (PSMC1PRH_ADDR)                PSMC1PRH;
__sfr  __at (PSMC1TMR_ADDR)                PSMC1TMR;
__sfr  __at (PSMC1TMRL_ADDR)               PSMC1TMRL;
__sfr  __at (PSMC1TMRH_ADDR)               PSMC1TMRH;
__sfr  __at (PSMC1DBR_ADDR)                PSMC1DBR;
__sfr  __at (PSMC1DBF_ADDR)                PSMC1DBF;
__sfr  __at (PSMC1BLKR_ADDR)               PSMC1BLKR;
__sfr  __at (PSMC1BLKF_ADDR)               PSMC1BLKF;
__sfr  __at (PSMC1FFA_ADDR)                PSMC1FFA;
__sfr  __at (PSMC1STR0_ADDR)               PSMC1STR0;
__sfr  __at (PSMC1STR1_ADDR)               PSMC1STR1;
__sfr  __at (PSMC2CON_ADDR)                PSMC2CON;
__sfr  __at (PSMC2MDL_ADDR)                PSMC2MDL;
__sfr  __at (PSMC2SYNC_ADDR)               PSMC2SYNC;
__sfr  __at (PSMC2CLK_ADDR)                PSMC2CLK;
__sfr  __at (PSMC2OEN_ADDR)                PSMC2OEN;
__sfr  __at (PSMC2POL_ADDR)                PSMC2POL;
__sfr  __at (PSMC2BLNK_ADDR)               PSMC2BLNK;
__sfr  __at (PSMC2REBS_ADDR)               PSMC2REBS;
__sfr  __at (PSMC2FEBS_ADDR)               PSMC2FEBS;
__sfr  __at (PSMC2PHS_ADDR)                PSMC2PHS;
__sfr  __at (PSMC2DCS_ADDR)                PSMC2DCS;
__sfr  __at (PSMC2PRS_ADDR)                PSMC2PRS;
__sfr  __at (PSMC2ASDC_ADDR)               PSMC2ASDC;
__sfr  __at (PSMC2ASDL_ADDR)               PSMC2ASDL;
__sfr  __at (PSMC2ASDS_ADDR)               PSMC2ASDS;
__sfr  __at (PSMC2INT_ADDR)                PSMC2INT;
__sfr  __at (PSMC2PH_ADDR)                 PSMC2PH;
__sfr  __at (PSMC2PHL_ADDR)                PSMC2PHL;
__sfr  __at (PSMC2PHH_ADDR)                PSMC2PHH;
__sfr  __at (PSMC2DC_ADDR)                 PSMC2DC;
__sfr  __at (PSMC2DCL_ADDR)                PSMC2DCL;
__sfr  __at (PSMC2DCH_ADDR)                PSMC2DCH;
__sfr  __at (PSMC2PR_ADDR)                 PSMC2PR;
__sfr  __at (PSMC2PRL_ADDR)                PSMC2PRL;
__sfr  __at (PSMC2PRH_ADDR)                PSMC2PRH;
__sfr  __at (PSMC2TMR_ADDR)                PSMC2TMR;
__sfr  __at (PSMC2TMRL_ADDR)               PSMC2TMRL;
__sfr  __at (PSMC2TMRH_ADDR)               PSMC2TMRH;
__sfr  __at (PSMC2DBR_ADDR)                PSMC2DBR;
__sfr  __at (PSMC2DBF_ADDR)                PSMC2DBF;
__sfr  __at (PSMC2BLKR_ADDR)               PSMC2BLKR;
__sfr  __at (PSMC2BLKF_ADDR)               PSMC2BLKF;
__sfr  __at (PSMC2FFA_ADDR)                PSMC2FFA;
__sfr  __at (PSMC2STR0_ADDR)               PSMC2STR0;
__sfr  __at (PSMC2STR1_ADDR)               PSMC2STR1;
__sfr  __at (PSMC3CON_ADDR)                PSMC3CON;
__sfr  __at (PSMC3MDL_ADDR)                PSMC3MDL;
__sfr  __at (PSMC3SYNC_ADDR)               PSMC3SYNC;
__sfr  __at (PSMC3CLK_ADDR)                PSMC3CLK;
__sfr  __at (PSMC3OEN_ADDR)                PSMC3OEN;
__sfr  __at (PSMC3POL_ADDR)                PSMC3POL;
__sfr  __at (PSMC3BLNK_ADDR)               PSMC3BLNK;
__sfr  __at (PSMC3REBS_ADDR)               PSMC3REBS;
__sfr  __at (PSMC3FEBS_ADDR)               PSMC3FEBS;
__sfr  __at (PSMC3PHS_ADDR)                PSMC3PHS;
__sfr  __at (PSMC3DCS_ADDR)                PSMC3DCS;
__sfr  __at (PSMC3PRS_ADDR)                PSMC3PRS;
__sfr  __at (PSMC3ASDC_ADDR)               PSMC3ASDC;
__sfr  __at (PSMC3ASDL_ADDR)               PSMC3ASDL;
__sfr  __at (PSMC3ASDS_ADDR)               PSMC3ASDS;
__sfr  __at (PSMC3INT_ADDR)                PSMC3INT;
__sfr  __at (PSMC3PH_ADDR)                 PSMC3PH;
__sfr  __at (PSMC3PHL_ADDR)                PSMC3PHL;
__sfr  __at (PSMC3PHH_ADDR)                PSMC3PHH;
__sfr  __at (PSMC3DC_ADDR)                 PSMC3DC;
__sfr  __at (PSMC3DCL_ADDR)                PSMC3DCL;
__sfr  __at (PSMC3DCH_ADDR)                PSMC3DCH;
__sfr  __at (PSMC3PR_ADDR)                 PSMC3PR;
__sfr  __at (PSMC3PRL_ADDR)                PSMC3PRL;
__sfr  __at (PSMC3PRH_ADDR)                PSMC3PRH;
__sfr  __at (PSMC3TMR_ADDR)                PSMC3TMR;
__sfr  __at (PSMC3TMRL_ADDR)               PSMC3TMRL;
__sfr  __at (PSMC3TMRH_ADDR)               PSMC3TMRH;
__sfr  __at (PSMC3DBR_ADDR)                PSMC3DBR;
__sfr  __at (PSMC3DBF_ADDR)                PSMC3DBF;
__sfr  __at (PSMC3BLKR_ADDR)               PSMC3BLKR;
__sfr  __at (PSMC3BLKF_ADDR)               PSMC3BLKF;
__sfr  __at (PSMC3FFA_ADDR)                PSMC3FFA;
__sfr  __at (PSMC3STR0_ADDR)               PSMC3STR0;
__sfr  __at (PSMC3STR1_ADDR)               PSMC3STR1;
__sfr  __at (STATUS_SHAD_ADDR)             STATUS_SHAD;
__sfr  __at (WREG_SHAD_ADDR)               WREG_SHAD;
__sfr  __at (BSR_SHAD_ADDR)                BSR_SHAD;
__sfr  __at (PCLATH_SHAD_ADDR)             PCLATH_SHAD;
__sfr  __at (FSR0L_SHAD_ADDR)              FSR0L_SHAD;
__sfr  __at (FSR0H_SHAD_ADDR)              FSR0H_SHAD;
__sfr  __at (FSR1L_SHAD_ADDR)              FSR1L_SHAD;
__sfr  __at (FSR1H_SHAD_ADDR)              FSR1H_SHAD;
__sfr  __at (STKPTR_ADDR)                  STKPTR;
__sfr  __at (TOSL_ADDR)                    TOSL;
__sfr  __at (TOSH_ADDR)                    TOSH;

//
// bitfield definitions
//
volatile __ADCON0bits_t __at(ADCON0_ADDR) ADCON0bits;
volatile __ADCON1bits_t __at(ADCON1_ADDR) ADCON1bits;
volatile __ADCON2bits_t __at(ADCON2_ADDR) ADCON2bits;
volatile __ANSELAbits_t __at(ANSELA_ADDR) ANSELAbits;
volatile __ANSELBbits_t __at(ANSELB_ADDR) ANSELBbits;
volatile __ANSELDbits_t __at(ANSELD_ADDR) ANSELDbits;
volatile __ANSELEbits_t __at(ANSELE_ADDR) ANSELEbits;
volatile __APFCONbits_t __at(APFCON_ADDR) APFCONbits;
volatile __APFCON0bits_t __at(APFCON0_ADDR) APFCON0bits;
volatile __APFCON1bits_t __at(APFCON1_ADDR) APFCON1bits;
volatile __APFCON2bits_t __at(APFCON2_ADDR) APFCON2bits;
volatile __BAUD1CONbits_t __at(BAUD1CON_ADDR) BAUD1CONbits;
volatile __BAUDCONbits_t __at(BAUDCON_ADDR) BAUDCONbits;
volatile __BAUDCON1bits_t __at(BAUDCON1_ADDR) BAUDCON1bits;
volatile __BAUDCTLbits_t __at(BAUDCTL_ADDR) BAUDCTLbits;
volatile __BAUDCTL1bits_t __at(BAUDCTL1_ADDR) BAUDCTL1bits;
volatile __BORCONbits_t __at(BORCON_ADDR) BORCONbits;
volatile __BSRbits_t __at(BSR_ADDR) BSRbits;
volatile __CCP1CONbits_t __at(CCP1CON_ADDR) CCP1CONbits;
volatile __CCP2CONbits_t __at(CCP2CON_ADDR) CCP2CONbits;
volatile __CCP3CONbits_t __at(CCP3CON_ADDR) CCP3CONbits;
volatile __CLKRCONbits_t __at(CLKRCON_ADDR) CLKRCONbits;
volatile __CM1CON0bits_t __at(CM1CON0_ADDR) CM1CON0bits;
volatile __CM1CON1bits_t __at(CM1CON1_ADDR) CM1CON1bits;
volatile __CM2CON0bits_t __at(CM2CON0_ADDR) CM2CON0bits;
volatile __CM2CON1bits_t __at(CM2CON1_ADDR) CM2CON1bits;
volatile __CM3CON0bits_t __at(CM3CON0_ADDR) CM3CON0bits;
volatile __CM3CON1bits_t __at(CM3CON1_ADDR) CM3CON1bits;
volatile __CM4CON0bits_t __at(CM4CON0_ADDR) CM4CON0bits;
volatile __CM4CON1bits_t __at(CM4CON1_ADDR) CM4CON1bits;
volatile __CMOUTbits_t __at(CMOUT_ADDR) CMOUTbits;
volatile __DACCON0bits_t __at(DACCON0_ADDR) DACCON0bits;
volatile __DACCON1bits_t __at(DACCON1_ADDR) DACCON1bits;
volatile __EECON1bits_t __at(EECON1_ADDR) EECON1bits;
volatile __FVRCONbits_t __at(FVRCON_ADDR) FVRCONbits;
volatile __INLVLAbits_t __at(INLVLA_ADDR) INLVLAbits;
volatile __INLVLBbits_t __at(INLVLB_ADDR) INLVLBbits;
volatile __INLVLCbits_t __at(INLVLC_ADDR) INLVLCbits;
volatile __INLVLDbits_t __at(INLVLD_ADDR) INLVLDbits;
volatile __INLVLEbits_t __at(INLVLE_ADDR) INLVLEbits;
volatile __INTCONbits_t __at(INTCON_ADDR) INTCONbits;
volatile __IOCAFbits_t __at(IOCAF_ADDR) IOCAFbits;
volatile __IOCANbits_t __at(IOCAN_ADDR) IOCANbits;
volatile __IOCAPbits_t __at(IOCAP_ADDR) IOCAPbits;
volatile __IOCBFbits_t __at(IOCBF_ADDR) IOCBFbits;
volatile __IOCBNbits_t __at(IOCBN_ADDR) IOCBNbits;
volatile __IOCBPbits_t __at(IOCBP_ADDR) IOCBPbits;
volatile __IOCCFbits_t __at(IOCCF_ADDR) IOCCFbits;
volatile __IOCCNbits_t __at(IOCCN_ADDR) IOCCNbits;
volatile __IOCCPbits_t __at(IOCCP_ADDR) IOCCPbits;
volatile __IOCEFbits_t __at(IOCEF_ADDR) IOCEFbits;
volatile __IOCENbits_t __at(IOCEN_ADDR) IOCENbits;
volatile __IOCEPbits_t __at(IOCEP_ADDR) IOCEPbits;
volatile __LATAbits_t __at(LATA_ADDR) LATAbits;
volatile __LATBbits_t __at(LATB_ADDR) LATBbits;
volatile __LATCbits_t __at(LATC_ADDR) LATCbits;
volatile __LATDbits_t __at(LATD_ADDR) LATDbits;
volatile __LATEbits_t __at(LATE_ADDR) LATEbits;
volatile __ODCONAbits_t __at(ODCONA_ADDR) ODCONAbits;
volatile __ODCONBbits_t __at(ODCONB_ADDR) ODCONBbits;
volatile __ODCONCbits_t __at(ODCONC_ADDR) ODCONCbits;
volatile __ODCONDbits_t __at(ODCOND_ADDR) ODCONDbits;
volatile __ODCONEbits_t __at(ODCONE_ADDR) ODCONEbits;
volatile __OPA1CONbits_t __at(OPA1CON_ADDR) OPA1CONbits;
volatile __OPA2CONbits_t __at(OPA2CON_ADDR) OPA2CONbits;
volatile __OPTION_REGbits_t __at(OPTION_REG_ADDR) OPTION_REGbits;
volatile __OSCCONbits_t __at(OSCCON_ADDR) OSCCONbits;
volatile __OSCSTATbits_t __at(OSCSTAT_ADDR) OSCSTATbits;
volatile __OSCTUNEbits_t __at(OSCTUNE_ADDR) OSCTUNEbits;
volatile __PCONbits_t __at(PCON_ADDR) PCONbits;
volatile __PIE1bits_t __at(PIE1_ADDR) PIE1bits;
volatile __PIE2bits_t __at(PIE2_ADDR) PIE2bits;
volatile __PIE3bits_t __at(PIE3_ADDR) PIE3bits;
volatile __PIE4bits_t __at(PIE4_ADDR) PIE4bits;
volatile __PIR1bits_t __at(PIR1_ADDR) PIR1bits;
volatile __PIR2bits_t __at(PIR2_ADDR) PIR2bits;
volatile __PIR3bits_t __at(PIR3_ADDR) PIR3bits;
volatile __PIR4bits_t __at(PIR4_ADDR) PIR4bits;
volatile __PORTAbits_t __at(PORTA_ADDR) PORTAbits;
volatile __PORTBbits_t __at(PORTB_ADDR) PORTBbits;
volatile __PORTCbits_t __at(PORTC_ADDR) PORTCbits;
volatile __PORTDbits_t __at(PORTD_ADDR) PORTDbits;
volatile __PORTEbits_t __at(PORTE_ADDR) PORTEbits;
volatile __PSMC1ASDCbits_t __at(PSMC1ASDC_ADDR) PSMC1ASDCbits;
volatile __PSMC1ASDLbits_t __at(PSMC1ASDL_ADDR) PSMC1ASDLbits;
volatile __PSMC1ASDSbits_t __at(PSMC1ASDS_ADDR) PSMC1ASDSbits;
volatile __PSMC1BLKFbits_t __at(PSMC1BLKF_ADDR) PSMC1BLKFbits;
volatile __PSMC1BLKRbits_t __at(PSMC1BLKR_ADDR) PSMC1BLKRbits;
volatile __PSMC1BLNKbits_t __at(PSMC1BLNK_ADDR) PSMC1BLNKbits;
volatile __PSMC1CLKbits_t __at(PSMC1CLK_ADDR) PSMC1CLKbits;
volatile __PSMC1CONbits_t __at(PSMC1CON_ADDR) PSMC1CONbits;
volatile __PSMC1DBFbits_t __at(PSMC1DBF_ADDR) PSMC1DBFbits;
volatile __PSMC1DBRbits_t __at(PSMC1DBR_ADDR) PSMC1DBRbits;
volatile __PSMC1DCHbits_t __at(PSMC1DCH_ADDR) PSMC1DCHbits;
volatile __PSMC1DCLbits_t __at(PSMC1DCL_ADDR) PSMC1DCLbits;
volatile __PSMC1DCSbits_t __at(PSMC1DCS_ADDR) PSMC1DCSbits;
volatile __PSMC1FEBSbits_t __at(PSMC1FEBS_ADDR) PSMC1FEBSbits;
volatile __PSMC1FFAbits_t __at(PSMC1FFA_ADDR) PSMC1FFAbits;
volatile __PSMC1INTbits_t __at(PSMC1INT_ADDR) PSMC1INTbits;
volatile __PSMC1MDLbits_t __at(PSMC1MDL_ADDR) PSMC1MDLbits;
volatile __PSMC1OENbits_t __at(PSMC1OEN_ADDR) PSMC1OENbits;
volatile __PSMC1PHHbits_t __at(PSMC1PHH_ADDR) PSMC1PHHbits;
volatile __PSMC1PHLbits_t __at(PSMC1PHL_ADDR) PSMC1PHLbits;
volatile __PSMC1PHSbits_t __at(PSMC1PHS_ADDR) PSMC1PHSbits;
volatile __PSMC1POLbits_t __at(PSMC1POL_ADDR) PSMC1POLbits;
volatile __PSMC1PRHbits_t __at(PSMC1PRH_ADDR) PSMC1PRHbits;
volatile __PSMC1PRLbits_t __at(PSMC1PRL_ADDR) PSMC1PRLbits;
volatile __PSMC1PRSbits_t __at(PSMC1PRS_ADDR) PSMC1PRSbits;
volatile __PSMC1REBSbits_t __at(PSMC1REBS_ADDR) PSMC1REBSbits;
volatile __PSMC1STR0bits_t __at(PSMC1STR0_ADDR) PSMC1STR0bits;
volatile __PSMC1STR1bits_t __at(PSMC1STR1_ADDR) PSMC1STR1bits;
volatile __PSMC1SYNCbits_t __at(PSMC1SYNC_ADDR) PSMC1SYNCbits;
volatile __PSMC1TMRHbits_t __at(PSMC1TMRH_ADDR) PSMC1TMRHbits;
volatile __PSMC1TMRLbits_t __at(PSMC1TMRL_ADDR) PSMC1TMRLbits;
volatile __PSMC2ASDCbits_t __at(PSMC2ASDC_ADDR) PSMC2ASDCbits;
volatile __PSMC2ASDLbits_t __at(PSMC2ASDL_ADDR) PSMC2ASDLbits;
volatile __PSMC2ASDSbits_t __at(PSMC2ASDS_ADDR) PSMC2ASDSbits;
volatile __PSMC2BLKFbits_t __at(PSMC2BLKF_ADDR) PSMC2BLKFbits;
volatile __PSMC2BLKRbits_t __at(PSMC2BLKR_ADDR) PSMC2BLKRbits;
volatile __PSMC2BLNKbits_t __at(PSMC2BLNK_ADDR) PSMC2BLNKbits;
volatile __PSMC2CLKbits_t __at(PSMC2CLK_ADDR) PSMC2CLKbits;
volatile __PSMC2CONbits_t __at(PSMC2CON_ADDR) PSMC2CONbits;
volatile __PSMC2DBFbits_t __at(PSMC2DBF_ADDR) PSMC2DBFbits;
volatile __PSMC2DBRbits_t __at(PSMC2DBR_ADDR) PSMC2DBRbits;
volatile __PSMC2DCHbits_t __at(PSMC2DCH_ADDR) PSMC2DCHbits;
volatile __PSMC2DCLbits_t __at(PSMC2DCL_ADDR) PSMC2DCLbits;
volatile __PSMC2DCSbits_t __at(PSMC2DCS_ADDR) PSMC2DCSbits;
volatile __PSMC2FEBSbits_t __at(PSMC2FEBS_ADDR) PSMC2FEBSbits;
volatile __PSMC2FFAbits_t __at(PSMC2FFA_ADDR) PSMC2FFAbits;
volatile __PSMC2INTbits_t __at(PSMC2INT_ADDR) PSMC2INTbits;
volatile __PSMC2MDLbits_t __at(PSMC2MDL_ADDR) PSMC2MDLbits;
volatile __PSMC2OENbits_t __at(PSMC2OEN_ADDR) PSMC2OENbits;
volatile __PSMC2PHHbits_t __at(PSMC2PHH_ADDR) PSMC2PHHbits;
volatile __PSMC2PHLbits_t __at(PSMC2PHL_ADDR) PSMC2PHLbits;
volatile __PSMC2PHSbits_t __at(PSMC2PHS_ADDR) PSMC2PHSbits;
volatile __PSMC2POLbits_t __at(PSMC2POL_ADDR) PSMC2POLbits;
volatile __PSMC2PRHbits_t __at(PSMC2PRH_ADDR) PSMC2PRHbits;
volatile __PSMC2PRLbits_t __at(PSMC2PRL_ADDR) PSMC2PRLbits;
volatile __PSMC2PRSbits_t __at(PSMC2PRS_ADDR) PSMC2PRSbits;
volatile __PSMC2REBSbits_t __at(PSMC2REBS_ADDR) PSMC2REBSbits;
volatile __PSMC2STR0bits_t __at(PSMC2STR0_ADDR) PSMC2STR0bits;
volatile __PSMC2STR1bits_t __at(PSMC2STR1_ADDR) PSMC2STR1bits;
volatile __PSMC2SYNCbits_t __at(PSMC2SYNC_ADDR) PSMC2SYNCbits;
volatile __PSMC2TMRHbits_t __at(PSMC2TMRH_ADDR) PSMC2TMRHbits;
volatile __PSMC2TMRLbits_t __at(PSMC2TMRL_ADDR) PSMC2TMRLbits;
volatile __PSMC3ASDCbits_t __at(PSMC3ASDC_ADDR) PSMC3ASDCbits;
volatile __PSMC3ASDLbits_t __at(PSMC3ASDL_ADDR) PSMC3ASDLbits;
volatile __PSMC3ASDSbits_t __at(PSMC3ASDS_ADDR) PSMC3ASDSbits;
volatile __PSMC3BLKFbits_t __at(PSMC3BLKF_ADDR) PSMC3BLKFbits;
volatile __PSMC3BLKRbits_t __at(PSMC3BLKR_ADDR) PSMC3BLKRbits;
volatile __PSMC3BLNKbits_t __at(PSMC3BLNK_ADDR) PSMC3BLNKbits;
volatile __PSMC3CLKbits_t __at(PSMC3CLK_ADDR) PSMC3CLKbits;
volatile __PSMC3CONbits_t __at(PSMC3CON_ADDR) PSMC3CONbits;
volatile __PSMC3DBFbits_t __at(PSMC3DBF_ADDR) PSMC3DBFbits;
volatile __PSMC3DBRbits_t __at(PSMC3DBR_ADDR) PSMC3DBRbits;
volatile __PSMC3DCHbits_t __at(PSMC3DCH_ADDR) PSMC3DCHbits;
volatile __PSMC3DCLbits_t __at(PSMC3DCL_ADDR) PSMC3DCLbits;
volatile __PSMC3DCSbits_t __at(PSMC3DCS_ADDR) PSMC3DCSbits;
volatile __PSMC3FEBSbits_t __at(PSMC3FEBS_ADDR) PSMC3FEBSbits;
volatile __PSMC3FFAbits_t __at(PSMC3FFA_ADDR) PSMC3FFAbits;
volatile __PSMC3INTbits_t __at(PSMC3INT_ADDR) PSMC3INTbits;
volatile __PSMC3MDLbits_t __at(PSMC3MDL_ADDR) PSMC3MDLbits;
volatile __PSMC3OENbits_t __at(PSMC3OEN_ADDR) PSMC3OENbits;
volatile __PSMC3PHHbits_t __at(PSMC3PHH_ADDR) PSMC3PHHbits;
volatile __PSMC3PHLbits_t __at(PSMC3PHL_ADDR) PSMC3PHLbits;
volatile __PSMC3PHSbits_t __at(PSMC3PHS_ADDR) PSMC3PHSbits;
volatile __PSMC3POLbits_t __at(PSMC3POL_ADDR) PSMC3POLbits;
volatile __PSMC3PRHbits_t __at(PSMC3PRH_ADDR) PSMC3PRHbits;
volatile __PSMC3PRLbits_t __at(PSMC3PRL_ADDR) PSMC3PRLbits;
volatile __PSMC3PRSbits_t __at(PSMC3PRS_ADDR) PSMC3PRSbits;
volatile __PSMC3REBSbits_t __at(PSMC3REBS_ADDR) PSMC3REBSbits;
volatile __PSMC3STR0bits_t __at(PSMC3STR0_ADDR) PSMC3STR0bits;
volatile __PSMC3STR1bits_t __at(PSMC3STR1_ADDR) PSMC3STR1bits;
volatile __PSMC3SYNCbits_t __at(PSMC3SYNC_ADDR) PSMC3SYNCbits;
volatile __PSMC3TMRHbits_t __at(PSMC3TMRH_ADDR) PSMC3TMRHbits;
volatile __PSMC3TMRLbits_t __at(PSMC3TMRL_ADDR) PSMC3TMRLbits;
volatile __RC1STAbits_t __at(RC1STA_ADDR) RC1STAbits;
volatile __RCSTAbits_t __at(RCSTA_ADDR) RCSTAbits;
volatile __RCSTA1bits_t __at(RCSTA1_ADDR) RCSTA1bits;
volatile __SLRCONAbits_t __at(SLRCONA_ADDR) SLRCONAbits;
volatile __SLRCONBbits_t __at(SLRCONB_ADDR) SLRCONBbits;
volatile __SLRCONCbits_t __at(SLRCONC_ADDR) SLRCONCbits;
volatile __SLRCONDbits_t __at(SLRCOND_ADDR) SLRCONDbits;
volatile __SLRCONEbits_t __at(SLRCONE_ADDR) SLRCONEbits;
volatile __SSP1ADDbits_t __at(SSP1ADD_ADDR) SSP1ADDbits;
volatile __SSP1BUFbits_t __at(SSP1BUF_ADDR) SSP1BUFbits;
volatile __SSP1CONbits_t __at(SSP1CON_ADDR) SSP1CONbits;
volatile __SSP1CON2bits_t __at(SSP1CON2_ADDR) SSP1CON2bits;
volatile __SSP1CON3bits_t __at(SSP1CON3_ADDR) SSP1CON3bits;
volatile __SSP1MSKbits_t __at(SSP1MSK_ADDR) SSP1MSKbits;
volatile __SSP1STATbits_t __at(SSP1STAT_ADDR) SSP1STATbits;
volatile __SSPADDbits_t __at(SSPADD_ADDR) SSPADDbits;
volatile __SSPBUFbits_t __at(SSPBUF_ADDR) SSPBUFbits;
volatile __SSPCONbits_t __at(SSPCON_ADDR) SSPCONbits;
volatile __SSPCON2bits_t __at(SSPCON2_ADDR) SSPCON2bits;
volatile __SSPCON3bits_t __at(SSPCON3_ADDR) SSPCON3bits;
volatile __SSPMSKbits_t __at(SSPMSK_ADDR) SSPMSKbits;
volatile __SSPSTATbits_t __at(SSPSTAT_ADDR) SSPSTATbits;
volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;
volatile __STATUS_SHADbits_t __at(STATUS_SHAD_ADDR) STATUS_SHADbits;
volatile __T1CONbits_t __at(T1CON_ADDR) T1CONbits;
volatile __T1GCONbits_t __at(T1GCON_ADDR) T1GCONbits;
volatile __T2CONbits_t __at(T2CON_ADDR) T2CONbits;
volatile __TRISAbits_t __at(TRISA_ADDR) TRISAbits;
volatile __TRISBbits_t __at(TRISB_ADDR) TRISBbits;
volatile __TRISCbits_t __at(TRISC_ADDR) TRISCbits;
volatile __TRISDbits_t __at(TRISD_ADDR) TRISDbits;
volatile __TRISEbits_t __at(TRISE_ADDR) TRISEbits;
volatile __TX1STAbits_t __at(TX1STA_ADDR) TX1STAbits;
volatile __TXSTAbits_t __at(TXSTA_ADDR) TXSTAbits;
volatile __TXSTA1bits_t __at(TXSTA1_ADDR) TXSTA1bits;
volatile __VREGCONbits_t __at(VREGCON_ADDR) VREGCONbits;
volatile __WDTCONbits_t __at(WDTCON_ADDR) WDTCONbits;
volatile __WPUAbits_t __at(WPUA_ADDR) WPUAbits;
volatile __WPUBbits_t __at(WPUB_ADDR) WPUBbits;
volatile __WPUCbits_t __at(WPUC_ADDR) WPUCbits;
volatile __WPUDbits_t __at(WPUD_ADDR) WPUDbits;
volatile __WPUEbits_t __at(WPUE_ADDR) WPUEbits;

