![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# 4_20mA_T Click

---

- **CIC Prefix**  : T420MA
- **Author**      : MikroE Team
- **Verison**     : ${VER}
- **Date**        : ${DATE}

---

- **Libstock** : http://libstock.mikroe.com/projects/view/439/4-20ma-t-click-example
- **HEXIWEAR** : ${HEXI_LINK}
- **GitHub**   : ${GITHUB_LINK}

---

### Software Support

We provide a library for the 4_20mA_T Click on our [LibStock](http://libstock.mikroe.com/projects/view/439/4-20ma-t-click-example) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**



Key functions :

- ``` void t420ma_dacOutput(uint16_t valueDAC)``` -  This function sets the output of DAC.
- ``` void t420ma_setIout(uint8_t Iout); ``` -  This function sets the output current to the selected value.


**Examples Description**

- System Initialization - Sets CS pin as output and initializes SPI module
- Application Initialization - Initializes click SPI driver 
- Application Task - periodically changes Iout value


```.c
void applicationTask()
{
   t420ma_setIout(56);                   // sets Iout to 5.6mA
   Delay_ms(3000);
   t420ma_setIout(158);                  // sets Iout to 15.8mA
   Delay_ms(3000);
}


```



The full application code, and ready to use projects can be found on our 
[LibStock](http://libstock.mikroe.com/projects/view/439/4-20ma-t-click-example) page.

Other mikroE Libraries used in the example:

- SPI


**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
### Architectures Supported

#### mikroC

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroBasic

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroPascal

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

---
---
