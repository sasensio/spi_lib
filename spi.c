/*spi.c


*/
#include "spi.h"

void spi_init()
{
//PIN config	
	TRISB1=1;
	TRISB2=0;
	TRISB4=0;
	
	SSPSTAT=0x40;   /*0100 0000
					7 SMP: 	0  	Input data sampled at middle of data output time
					6 CKE: 	1	Transmit occurs on transition from Idle to active clock state
					5 D/A: 	0	only for I2C
					4 P:	0	only for I2C
					3 S:	0	only for I2C
					2 R/W:	0	only for I2C
					1 UA:	0	only for I2C
					0 BF:	0	buffer state
					*/
					
	SSPCON=	0x30;
	
					/*xxx1 
					7 WCOL: 	0 		No collision
					6 SSPOV		0 		No overflow
					5 SSPEN		0		ports as serial port configured
					4 CKP		1  		clk idle is high		
					3-0 SSPM: 	0000 	SPI Master mode, clock = OSC/4
					*/
}
