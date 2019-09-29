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

// UART1

// TIM1


// TIM2


// TIM4

// ADC1

// CPU

// ITC

// SWIM


// DM



