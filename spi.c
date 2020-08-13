#include"spi.h"


void SPI_MasterInit(void)
{
	DDR_SPI  |= (1<<DD_MOSI)|(1<<DD_SCK)|(1<<DD_SS); // MOSI, SCK, SS su output
		DDR_SPI &=~(1<<DD_MISO);                //miso as input
		SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR1)|(1<<SPR0);			// enable SPI, SPI master

		PORTB &=~(1<<DD_SS);  //active low as a default

}

char SPI_Transmit(char cData)
{
	/* Start transmission */
	SPDR = cData;
	/* Wait for transmission complete */
	while(!(SPSR & (1<<SPIF)));
	return SPDR;
}

void SPI_SlaveInit(void)
{
	/* Set MISO output, all others input */
	DDR_SPI |= (1<<DD_MISO);
	/* Enable SPI */
	SPCR = (1<<SPE);
}


