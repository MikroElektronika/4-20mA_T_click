/*
Example for 4_20mA_T Click

    Date          : jan 2018.
    Author        : MikroE Team

Test configuration CEC :
    
    MCU              : CEC1702
    Dev. Board       : Clicker 2 for CEC1702
    ARM Compiler ver : v6.0.0.0

---
Description :

The application is composed of three sections :

- System Initialization - Sets CS pin as output and initializes SPI module
- Application Initialization - Initializes click SPI driver 
- Application Task - periodically changes Iout value


*/

#include "Click_4_20mA_T_types.h"
#include "Click_4_20mA_T_config.h"


void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_spiInit( _MIKROBUS1, &_T420MA_SPI_CFG[0] );

    Delay_ms( 100 );
}

void applicationInit()
{
    t420ma_spiDriverInit( (T_T420MA_P)&_MIKROBUS1_GPIO, (T_T420MA_P)&_MIKROBUS1_SPI );
}

void applicationTask()
{
   t420ma_setIout(56);                   // sets Iout to 5.6mA
   Delay_ms(3000);
   t420ma_setIout(158);                  // sets Iout to 15.8mA
   Delay_ms(3000);
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
    	applicationTask();
    }
}