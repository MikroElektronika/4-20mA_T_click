#include "Click_4_20mA_T_types.h"


const uint32_t _T420MA_SPI_CFG[ 3 ] = 
{ 
	1000000, 
	_SPI_MASTER, 
	_SPI_8_BIT | 
	_SPI_CLK_IDLE_LOW |
	_SPI_FIRST_CLK_EDGE_TRANSITION 
};
