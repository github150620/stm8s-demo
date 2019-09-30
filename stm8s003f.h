/*
 *  Register map addresses is from datasheet for STM8S003F3 STM8S003K3
 *  
 */

// Port A
#define PA_ODR *(unsigned char*)0x5000
#define PA_IDR *(unsigned char*)0x5001
#define PA_DDR *(unsigned char*)0x5002
#define PA_CR1 *(unsigned char*)0x5003
#define PA_CR2 *(unsigned char*)0x5004

// Port B
#define PB_ODR *(unsigned char*)0x5005
#define PB_IDR *(unsigned char*)0x5006
#define PB_DDR *(unsigned char*)0x5007
#define PB_CR1 *(unsigned char*)0x5008
#define PB_CR2 *(unsigned char*)0x5009

// Port C
#define PC_ODR *(unsigned char*)0x500A
#define PC_IDR *(unsigned char*)0x500B
#define PC_DDR *(unsigned char*)0x500C
#define PC_CR1 *(unsigned char*)0x500D
#define PC_CR2 *(unsigned char*)0x500E

// Port D
#define PD_ODR *(unsigned char*)0x500F
#define PD_IDR *(unsigned char*)0x5010
#define PD_DDR *(unsigned char*)0x5011
#define PD_CR1 *(unsigned char*)0x5012
#define PD_CR2 *(unsigned char*)0x5013

// Port E
#define PE_ODR *(unsigned char*)0x5014
#define PE_IDR *(unsigned char*)0x5015
#define PE_DDR *(unsigned char*)0x5016
#define PE_CR1 *(unsigned char*)0x5017
#define PE_CR2 *(unsigned char*)0x5018

// Port F
#define PF_ODR *(unsigned char*)0x5019
#define PF_IDR *(unsigned char*)0x501A
#define PF_DDR *(unsigned char*)0x501B
#define PF_CR1 *(unsigned char*)0x501C
#define PF_CR2 *(unsigned char*)0x501D
/* ---- Reverved area (60 byte) ---- */

// FLASH
#define FLASH_CR1   *(unsigned char*)0x505A
#define FLASH_CR2   *(unsigned char*)0x505B
#define FLASH_NCR2  *(unsigned char*)0x505C
#define FLASH_FPR   *(unsigned char*)0x505D
#define FLASH_NFPR  *(unsigned char*)0x505E
#define FLASH_IAPSR *(unsigned char*)0x505F
//#define REVERSED  *(unsigned char*)0x5060
//#define REVERSED  *(unsigned char*)0x5061
#define FLASH_PUKR  *(unsigned char*)0x5062
//#define REVERSED  *(unsigned char*)0x5063
#define FLASH_DUKR  *(unsigned char*)0x5064
/* ---- Reverved area (59 byte) ---- */

// ITC
#define EXTI_CR1 *(unsigned char*)0x50A0
#define EXTI_CR2 *(unsigned char*)0x50A1
/* ---- Reverved area (17 byte) ---- */

// RST
#define RST_SR *(unsigned char*)0x50B3
/* ---- Reverved area (12 byte) ---- */

// CLK
#define CLK_ICKR     *(unsigned char*)0x50C0
#define CLK_ECKR     *(unsigned char*)0x50C1
//#define REVERSED   *(unsigned char*)0x50C2
#define CLK_CMSR     *(unsigned char*)0x50C3
#define CLK_SWR      *(unsigned char*)0x50C4
#define CLK_SWCR     *(unsigned char*)0x50C5
#define CLK_CKDIVR   *(unsigned char*)0x50C6
#define CLK_PCKENR1  *(unsigned char*)0x50C7
#define CLK_CSSR     *(unsigned char*)0x50C8
#define CLK_CCOR     *(unsigned char*)0x50C9
#define CLK_PCKENR2  *(unsigned char*)0x50CA
//#define REVERSED   *(unsigned char*)0x50CB
#define CLK_HSITRIMR *(unsigned char*)0x50CC
#define CLK_SWIMCCR  *(unsigned char*)0x50CD
/* ---- Reverved area (3 byte) ---- */


// WWDG
#define WWDG_CR *(unsigned char*)0x50D1
#define WWDG_WR *(unsigned char*)0x50D2
/* ---- Reverved area (13 byte) ---- */

// IWDG
#define IWDG_KR  *(unsigned char*)0x50E0
#define IWDG_PR  *(unsigned char*)0x50E1
#define IWDG_RLR *(unsigned char*)0x50E2
/* ---- Reverved area (12 byte) ---- */

// AWU
#define AWU_CSR1 *(unsigned char*)0x50F0
#define AWU_APR  *(unsigned char*)0x50F1
#define AWU_TBR  *(unsigned char*)0x50F2

// BEEP
#define BEEP_CSR *(unsigned char*)0x50F3

// SPI
#define SPI_CR1     *(unsigned char*)0x5200
#define SPI_CR2     *(unsigned char*)0x5201
#define SPI_ICR     *(unsigned char*)0x5202
#define SPI_SR      *(unsigned char*)0x5203
#define SPI_DR      *(unsigned char*)0x5204
#define SPI_CRCPR   *(unsigned char*)0x5205
#define SPI_RXCRCR  *(unsigned char*)0x5206
#define SPI_TXCRCR  *(unsigned char*)0x5207
/* ---- Reverved area (8 byte) ---- */

// I2C
#define I2C_CR1    *(unsigned char*)0x5210
#define I2C_CR2    *(unsigned char*)0x5211
#define I2C_FREQR  *(unsigned char*)0x5212
#define I2C_OARL   *(unsigned char*)0x5213
#define I2C_OARH   *(unsigned char*)0x5214
//#define REVERSED *(unsigned char*)0x5215
#define I2C_DR     *(unsigned char*)0x5216
#define I2C_SR1    *(unsigned char*)0x5217
#define I2C_SR2    *(unsigned char*)0x5218
#define I2C_SR3    *(unsigned char*)0x5219
#define I2C_ITR    *(unsigned char*)0x521A
#define I2C_CCRL   *(unsigned char*)0x521B
#define I2C_CCRH   *(unsigned char*)0x521C
#define I2C_TRISER *(unsigned char*)0x521D
#define I2C_PECR   *(unsigned char*)0x521E
/* ---- Reverved area (17 byte) ---- */

// UART1
#define UART1_SR   *(unsigned char*)0x5230
#define UART1_DR   *(unsigned char*)0x5231
#define UART1_BRR1 *(unsigned char*)0x5232
#define UART1_BRR2 *(unsigned char*)0x5233
#define UART1_CR1  *(unsigned char*)0x5234
#define UART1_CR2  *(unsigned char*)0x5235
#define UART1_CR3  *(unsigned char*)0x5236
#define UART1_CR4  *(unsigned char*)0x5237
#define UART1_CR5  *(unsigned char*)0x5238
#define UART1_GTR  *(unsigned char*)0x5239
#define UART1_PSCR *(unsigned char*)0x523A
/* ---- Reverved area (21 byte) ---- */

// TIM1
#define TIM1_CR1    *(unsigned char*)0x5250
#define TIM1_CR2    *(unsigned char*)0x5251
#define TIM1_SMCR   *(unsigned char*)0x5252
#define TIM1_ETR    *(unsigned char*)0x5253
#define TIM1_IER    *(unsigned char*)0x5254
#define TIM1_SR1    *(unsigned char*)0x5255
#define TIM1_SR2    *(unsigned char*)0x5256
#define TIM1_EGR    *(unsigned char*)0x5257
#define TIM1_CCMR1  *(unsigned char*)0x5258
#define TIM1_CCMR2  *(unsigned char*)0x5259
#define TIM1_CCMR3  *(unsigned char*)0x525A
#define TIM1_CCMR4  *(unsigned char*)0x525B
#define TIM1_CCER1  *(unsigned char*)0x525C
#define TIM1_CCER2  *(unsigned char*)0x525D
#define TIM1_CNTRH  *(unsigned char*)0x525E
#define TIM1_CNTRL  *(unsigned char*)0x525F
#define TIM1_PSCRH  *(unsigned char*)0x5260
#define TIM1_PSCRL  *(unsigned char*)0x5261
#define TIM1_ARRH   *(unsigned char*)0x5262
#define TIM1_ARRL   *(unsigned char*)0x5263
#define TIM1_RCR    *(unsigned char*)0x5264
#define TIM1_CCR1H  *(unsigned char*)0x5265
#define TIM1_CCR1L  *(unsigned char*)0x5266
#define TIM1_CCR2H  *(unsigned char*)0x5267
#define TIM1_CCR2L  *(unsigned char*)0x5268
#define TIM1_CCR3H  *(unsigned char*)0x5269
#define TIM1_CCR3L  *(unsigned char*)0x526A
#define TIM1_CCR4H  *(unsigned char*)0x526B
#define TIM1_CCR4L  *(unsigned char*)0x526C
#define TIM1_BKR    *(unsigned char*)0x526D
#define TIM1_DTR    *(unsigned char*)0x526E
#define TIM1_OISR   *(unsigned char*)0x526F
/* ---- Reverved area (147 byte) ---- */

// TIM2
#define TIM2_CR1    *(unsigned char*)0x5300
//#define REVERSED  *(unsigned char*)0x5301
//#define REVERSED  *(unsigned char*)0x5302
#define TIM2_IER    *(unsigned char*)0x5303
#define TIM2_SR1    *(unsigned char*)0x5304
#define TIM2_SR2    *(unsigned char*)0x5305
#define TIM2_EGR    *(unsigned char*)0x5306
#define TIM2_CCMR1  *(unsigned char*)0x5307
#define TIM2_CCMR2  *(unsigned char*)0x5308
#define TIM2_CCMR3  *(unsigned char*)0x5309
#define TIM2_CCER1  *(unsigned char*)0x530A
#define TIM2_CCER2  *(unsigned char*)0x530B
#define TIM2_CNTRH  *(unsigned char*)0x530C
#define TIM2_CNTRL  *(unsigned char*)0x530D
#define TIM2_PSCR   *(unsigned char*)0x530E
#define TIM2_ARRH   *(unsigned char*)0x530F
#define TIM2_ARRL   *(unsigned char*)0x5310
#define TIM2_CCR1H  *(unsigned char*)0x5311
#define TIM2_CCR1L  *(unsigned char*)0x5312
#define TIM2_CCR2H  *(unsigned char*)0x5313
#define TIM2_CCR2L  *(unsigned char*)0x5314
#define TIM2_CCR3H  *(unsigned char*)0x5315
#define TIM2_CCR3L  *(unsigned char*)0x5316
/* ---- Reserved area(43 byte) ---- */

// TIM4
#define TIM4_CR1    *(unsigned char*)0x5340
//#define REVERSED  *(unsigned char*)0x5401
//#define REVERSED  *(unsigned char*)0x5402
#define TIM4_IER    *(unsigned char*)0x5343
#define TIM4_SR     *(unsigned char*)0x5344
#define TIM4_EGR    *(unsigned char*)0x5345
#define TIM4_CNTR   *(unsigned char*)0x5346
#define TIM4_PSCR   *(unsigned char*)0x5347
#define TIM4_ARR    *(unsigned char*)0x5348
/* ---- Reserved area(153 byte) ---- */

// ADC1
#define ADC_DB1R    *(unsigned char*)0x53E0
#define ADC_DB2R    *(unsigned char*)0x53E1
#define ADC_DB3R    *(unsigned char*)0x53E2
#define ADC_DB4R    *(unsigned char*)0x53E3
#define ADC_DB5R    *(unsigned char*)0x53E4
#define ADC_DB6R    *(unsigned char*)0x53E5
#define ADC_DB7R    *(unsigned char*)0x53E6
#define ADC_DB8R    *(unsigned char*)0x53E7
#define ADC_DB9R    *(unsigned char*)0x53E8
#define ADC_DB10R   *(unsigned char*)0x53E9
#define ADC_DB11R   *(unsigned char*)0x53EA
#define ADC_DB12R   *(unsigned char*)0x53EB
#define ADC_DB13R   *(unsigned char*)0x53EC
#define ADC_DB14R   *(unsigned char*)0x53ED
#define ADC_DB15R   *(unsigned char*)0x53EE
#define ADC_DB16R   *(unsigned char*)0x53EF
#define ADC_DB17R   *(unsigned char*)0x53F0
#define ADC_DB18R   *(unsigned char*)0x53F1
#define ADC_DB19R   *(unsigned char*)0x53F2
#define ADC_DB20R   *(unsigned char*)0x53F3
/* ---- Reserved area(12 byte) ---- */
#define ADC_SCR     *(unsigned char*)0x5400
#define ADC_CR1     *(unsigned char*)0x5401
#define ADC_CR2     *(unsigned char*)0x5402
#define ADC_CR3     *(unsigned char*)0x5403
#define ADC_DRH     *(unsigned char*)0x5404
#define ADC_DRL     *(unsigned char*)0x5405
#define ADC_TDRH    *(unsigned char*)0x5406
#define ADC_TDRL    *(unsigned char*)0x5407
#define ADC_HTRH    *(unsigned char*)0x5408
#define ADC_HTRL    *(unsigned char*)0x5409
#define ADC_LTRH    *(unsigned char*)0x540A
#define ADC_LTRL    *(unsigned char*)0x540B
#define ADC_AWSRH   *(unsigned char*)0x540C
#define ADC_AWSRL   *(unsigned char*)0x540D
#define ADC_AWCRH   *(unsigned char*)0x540E
#define ADC_AWCRL   *(unsigned char*)0x540F
/* ---- Reserved area(1008 byte) ---- */

// CPU
#define CFG_CGR *(unsigned char*)0x7F60

// ITC
#define ITC_SPR1 *(unsigned char*)0x7F70
#define ITC_SPR2 *(unsigned char*)0x7F71
#define ITC_SPR3 *(unsigned char*)0x7F72
#define ITC_SPR4 *(unsigned char*)0x7F73
#define ITC_SPR5 *(unsigned char*)0x7F74
#define ITC_SPR6 *(unsigned char*)0x7F75
#define ITC_SPR7 *(unsigned char*)0x7F76
#define ITC_SPR8 *(unsigned char*)0x7F77
/* ---- Reserved area(2 byte) ---- */

// SWIM
#define SWIM *(unsigned char*)0x7F80
/* ---- Reserved area(15 byte) ---- */

// DM
#define DM_BK1RE  *(unsigned char*)0x7F90
#define DM_BK1RH  *(unsigned char*)0x7F91
#define DM_BK1RL  *(unsigned char*)0x7F92
#define DM_BK2RE  *(unsigned char*)0x7F93
#define DM_BK2RH  *(unsigned char*)0x7F94
#define DM_BK2RL  *(unsigned char*)0x7F95
#define DM_CR1    *(unsigned char*)0x7F96
#define DM_CR2    *(unsigned char*)0x7F97
#define DM_CSR1   *(unsigned char*)0x7F98
#define DM_CSR2   *(unsigned char*)0x7F99
#define DM_ENFCTR *(unsigned char*)0x7F9A
/* ---- Reserved area(5 byte) ---- */
