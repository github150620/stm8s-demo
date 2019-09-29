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

// FLASH
#define FLASH_CR1   *(unsigned char*)0x505A
#define FLASH_CR2   *(unsigned char*)0x505B
#define FLASH_NCR2  *(unsigned char*)0x505C
#define FLASH_FPR   *(unsigned char*)0x505D
#define FLASH_NFPR  *(unsigned char*)0x505E
#define FLASH_IAPSR *(unsigned char*)0x505F
#define FLASH_PUKR  *(unsigned char*)0x5062
#define FLASH_DUKR  *(unsigned char*)0x5064

// ITC
#define EXTI_CR1 *(unsigned char*)0x50A0
#define EXTI_CR2 *(unsigned char*)0x50A1

// RST
#define RST_SR *(unsigned char*)0x50B3

// CLK
#define CLK_ICKR     *(unsigned char*)0x50C0
#define CLK_ECKR     *(unsigned char*)0x50C1
#define CLK_CMSR     *(unsigned char*)0x50C3
#define CLK_SWR      *(unsigned char*)0x50C4
#define CLK_SWCR     *(unsigned char*)0x50C5
#define CLK_CKDIVR   *(unsigned char*)0x50C6
#define CLK_PCKENR1  *(unsigned char*)0x50C7
#define CLK_CSSR     *(unsigned char*)0x50C8
#define CLK_CCOR     *(unsigned char*)0x50C9
#define CLK_PCKENR2  *(unsigned char*)0x50CA
#define CLK_HSITRIMR *(unsigned char*)0x50CC
#define CLK_SWIMCCR  *(unsigned char*)0x50CD

// WWDG
#define WWDG_CR *(unsigned char*)0x50D1
#define WWDG_WR *(unsigned char*)0x50D2

// IWDG
#define IWDG_KR  *(unsigned char*)0x50E0
#define IWDG_PR  *(unsigned char*)0x50E1
#define IWDG_RLR *(unsigned char*)0x50E2

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

// I2C
#define I2C_CR1    *(unsigned char*)0x5210
#define I2C_CR2    *(unsigned char*)0x5211
#define I2C_FREQR  *(unsigned char*)0x5212
#define I2C_OARL   *(unsigned char*)0x5213
#define I2C_OARH   *(unsigned char*)0x5214
#define I2C_DR     *(unsigned char*)0x5216
#define I2C_SR1    *(unsigned char*)0x5217
#define I2C_SR2    *(unsigned char*)0x5218
#define I2C_SR3    *(unsigned char*)0x5219
#define I2C_ITR    *(unsigned char*)0x521A
#define I2C_CCRL   *(unsigned char*)0x521B
#define I2C_CCRH   *(unsigned char*)0x521C
#define I2C_TRISER *(unsigned char*)0x521D
#define I2C_PECR   *(unsigned char*)0x521E

// UART1
#define UART_SR   *(unsigned char*)0x5230
#define UART_DR   *(unsigned char*)0x5231
#define UART_BRR1 *(unsigned char*)0x5232
#define UART_BRR2 *(unsigned char*)0x5233
#define UART_CR1  *(unsigned char*)0x5234
#define UART_CR2  *(unsigned char*)0x5235
#define UART_CR3  *(unsigned char*)0x5236
#define UART_CR4  *(unsigned char*)0x5237
#define UART_CR5  *(unsigned char*)0x5238
#define UART_GTR  *(unsigned char*)0x5239
#define UART_PSCR *(unsigned char*)0x523A

// TIM1
#define TIM1_CR1    *(unsigend char*)0x5250
#define TIM1_CR2    *(unsigend char*)0x5251
#define TIM1_SMCR1  *(unsigend char*)0x5252
#define TIM1_ETR    *(unsigend char*)0x5253
#define TIM1_IER    *(unsigend char*)0x5254
#define TIM1_SR1    *(unsigend char*)0x5255
#define TIM1_SR2    *(unsigend char*)0x5256
#define TIM1_EGR    *(unsigend char*)0x5257
#define TIM1_CCMR1  *(unsigend char*)0x5258
#define TIM1_CCMR2  *(unsigend char*)0x5259
#define TIM1_CCMR3  *(unsigend char*)0x525A
#define TIM1_CCMR4  *(unsigend char*)0x525B
#define TIM1_CCER1  *(unsigend char*)0x525C
#define TIM1_CCER2  *(unsigend char*)0x525D
#define TIM1_CNTRH  *(unsigend char*)0x525E
#define TIM1_CNTRL  *(unsigend char*)0x525F
#define TIM1_PSCRH  *(unsigend char*)0x5260
#define TIM1_PSCRL  *(unsigend char*)0x5261
#define TIM1_ARRH   *(unsigend char*)0x5262
#define TIM1_ARRL   *(unsigend char*)0x5263
#define TIM1_CCR1H  *(unsigend char*)0x5264
#define TIM1_CCR1L  *(unsigend char*)0x5265
#define TIM1_CCR2H  *(unsigend char*)0x5266
#define TIM1_CCR2L  *(unsigend char*)0x5267
#define TIM1_CR1    *(unsigend char*)0x5268
#define TIM1_CR1    *(unsigend char*)0x5269
#define TIM1_CR1    *(unsigend char*)0x526A
#define TIM1_CR1    *(unsigend char*)0x526B
#define TIM1_CR1    *(unsigend char*)0x526C
#define TIM1_CR1    *(unsigend char*)0x526D
#define TIM1_CR1    *(unsigend char*)0x526E
#define TIM1_CR1    *(unsigend char*)0x526F

// TIM2


// TIM4

// ADC1

// CPU

// ITC

// SWIM


// DM



