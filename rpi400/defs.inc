
.set START_ADDRESS,0x8000

//.set PERIPHERAL_BASE,0x7E000000 // legacy master address
//.set PERIPHERAL_BASE,0x47E000000 //  full 35-bit address
.set PERIPHERAL_BASE,0xFE000000 //  low peripheral mode address

.set AUX_BASE,PERIPHERAL_BASE + 0x215000
.set AUX_ENABLES,AUX_BASE + 0x4
.set AUX_MU_IO_REG,AUX_BASE + 0x40 // Mini UART I/O Data
.set AUX_MU_IER_REG,AUX_BASE + 0x44 // Mini UART Interrupt Enable
.set AUX_MU_IIR_REG,AUX_BASE + 0x48 // Mini UART Interrupt Identify
.set AUX_MU_LCR_REG,AUX_BASE + 0x4C // Mini UART Line Control
.set AUX_MU_MCR_REG,AUX_BASE + 0x50 // Mini UART Modem Control
.set AUX_MU_LSR_REG,AUX_BASE + 0x54 // Mini UART Line Status
.set AUX_MU_MSR_REG,AUX_BASE + 0x58 // Mini UART Modem Status
.set AUX_MU_SCRATCH,AUX_BASE + 0x5C // Mini UART Scratch
.set AUX_MU_CNTL_REG,AUX_BASE + 0x60 // Mini UART Extra Control
.set AUX_MU_STAT_REG,AUX_BASE + 0x64 // Mini UART Extra Status
.set AUX_MU_BAUD_REG,AUX_BASE + 0x68 // Mini UART Baudrate

.set UART1_ENABLE,1
.set UART1_CLOCK,250000000
.set UART1_MAX_QUEUE,16 * 1024
//.set UART1_BAUD,270 //((UART1_CLOCK / (115200 * 8)) - 1)
.set UART1_BAUD,((UART1_CLOCK / (115200 * 8)) - 1)

.set GPFSEL0,PERIPHERAL_BASE + 0x200000
.set GPFSEL1,PERIPHERAL_BASE + 0x200004
.set GPSET0,PERIPHERAL_BASE + 0x20001C
.set GPCLR0,PERIPHERAL_BASE + 0x200028
.set GPPUPPDN0,PERIPHERAL_BASE + 0x2000E4
.set GPIO_FUNCTION_ALT5,2

.set PL011_BASE,PERIPHERAL_BASE + 0x201000
.set PL011_DR,PL011_BASE + 0x00
.set PL011_FR,PL011_BASE + 0x18
.set PL011_IBRD,PL011_BASE + 0x24
.set PL011_FBRD,PL011_BASE + 0x28
.set PL011_LCRH,PL011_BASE + 0x2C
.set PL011_CR,PL011_BASE + 0x30
.set PL011_IFLS,PL011_BASE + 0x34
.set PL011_IMSC,PL011_BASE + 0x38
.set PL011_RIS,PL011_BASE + 0x3C
.set PL011_MIS,PL011_BASE + 0x40
.set PL011_ICR,PL011_BASE + 0x44
.set PL011_TXFF,(1 << 5)
.set PL011_RXFE,(1 << 4)

.set VIDEOCORE_MBOX,PERIPHERAL_BASE + 0xB880
.set MBOX_READ,VIDEOCORE_MBOX
.set MBOX_POLL,VIDEOCORE_MBOX + 0x10
.set MBOX_SENDER,VIDEOCORE_MBOX + 0x14
.set MBOX_STATUS,VIDEOCORE_MBOX + 0x18
.set MBOX_CONFIG,VIDEOCORE_MBOX + 0x1C
.set MBOX_WRITE,VIDEOCORE_MBOX + 0x20
.set MBOX_RESPONSE,0x80000000
.set MBOX_FULL,0x80000000
.set MBOX_EMPTY,0x40000000
.set MBOX_REQUEST,0
.set MBOX_CH_POWER,0
.set MBOX_CH_FB,1
.set MBOX_CH_VUART,2
.set MBOX_CH_VCHIQ,3
.set MBOX_CH_LEDS,4
.set MBOX_CH_BTNS,5
.set MBOX_CH_TOUCH,6
.set MBOX_CH_COUNT,7
.set MBOX_CH_PROP,8
.set MBOX_TAG_SETPOWER,0x28001
.set MBOX_TAG_SETCLKRATE,0x38002
.set MBOX_TAG_SETPHYWH,0x48003
.set MBOX_TAG_SETVIRTWH,0x48004
.set MBOX_TAG_SETVIRTOFF,0x48009
.set MBOX_TAG_SETDEPTH,0x48005
.set MBOX_TAG_SETPXLORDR,0x48006
.set MBOX_TAG_GETFB,0x40001
.set MBOX_TAG_GETPITCH,0x40008
.set MBOX_TAG_LAST,0

