
# Layer architecture software for TIVA-C
## bare-metal modules : 
- [GPIO](MCAL_Layer/DIO/)<details><summary>Project's Details</summary>Bare-metal driver for General Purpose Input/Output on TIVA-C</details>
- [NVIC](MCAL_Layer/IntCtrl/)<details><summary>Project's Details</summary>Bare-metal driver for Nasted Vector Interrupt Controller on TIVA-C</details>
- [PORT](MCAL_Layer/PORT/)<details><summary>Project's Details</summary>Bare-metal driver for PORT on TIVA-C, it initialize all the pins on the board. Have to be reconfigured anytime you change a pin Function</details>
- [GPTM](MCAL_Layer/GPT/)<details><summary>Project's Details</summary>Bare-metal driver for General Purpose Timer on TIVA-C</details>
- [PWM](MCAL_Layer/PWM/)<details><summary>Project's Details</summary>Bare-metal driver for Pulse-Width modulation TIVA-C</details>
- [PLL](MCAL_Layer/PLL/)<details><summary>Project's Details</summary>Bare-metal driver for Phased-locked loop on TIVA-C</details>
- [ADC](MCAL_Layer/ADC)<details><summary>Project's Details</summary>Bare-metal driver for Analog Digital converter on TIVA-C</details>
- [SysCtl](MCAL_Layer/SysCtl/)<details><summary>Project's Details</summary>Bare-metal driver for System Control on TIVA-C</details>
- [SysTick](MCAL_Layer/SysTick/)<details><summary>Project's Details</summary>Bare-metal driver for System Tick on TIVA-C</details>
- [WDT](MCAL_Layer/WDT/)<details><summary>Project's Details</summary>Bare-metal driver for Watch-Dog Timer on TIVA-C</details>
- [I2C](MCAL_Layer/I2C/)<details><summary>Project's Details</summary>Bare-metal driver for Inter-Integrated Circuit on TIVA-C</details>
- [SPI](MCAL_Layer/SPI/)<details><summary>Project's Details</summary>Bare-metal driver for Serial peripheral interface on TIVA-C</details>
- [UART](MCAL_Layer/UART/)<details><summary>Project's Details</summary>Bare-metal driver for Universal Asynch Receiver/Transmitter on TIVA-C</details>

## Some tested drivers to make sure that it works fine : 
- [Testing LCD](APP/Testing_LCD/)<details><summary>Project's Details</summary>Using I2C LCD Serial Interface Module to control the LCD</details>
- [Testing I2C](APP/Testing_I2C/)<details><summary>Project's Details</summary>Using I2C LCD Serial Interface Module as GPIO expander and control LEDS with it</details>
- [Testing I2C 2 ](APP/Testing_I2C_2/)<details><summary>Project's Details</summary>Using I2C LCD Serial Interface Module as GPIO expander and control LEDS with it</details>
- [Testing DS1037](APP/Testing_DS1037/)<details><summary>Project's Details</summary>Using DS1037 i set the initial time and then read it every 3 second, this project test all the operations in my I2C driver .</details>
- [Testing ADC](APP/Testing_ADC)<details><summary>Project's Details</summary>Using the potentiometer on the module (I2C LCD Serial Interface) to test my driver .</details>
- [Testing DIO](APP/Testing_DIO_ISR)<details><summary>Project's Details</summary>Trying on-Board buttons and LEDs to test my DIO ISR and Normal Functions in DIO driver .</details>
- [Testing DIO_ISR](APP/Testing_LCD/)<details><summary>Project's Details</summary>Playing with Register Callback function type, GPIO contain a linked list of function that get called whenever ISR is triggered</details>
- [Testing_LCD_and_ADC](APP/Testing_LCD/)<details><summary>Project's Details</summary>Testing ADC with LCD</details>
- [Testing_HAL_Temp_Smoke_Water_Humanity_LCD_Buzzer_LED](APP/Testing_LCD/)<details><summary>Project's Details</summary>Reading many Sensors on an LCD</details>
- [Testing_LCD_and_SpecificDriverTemp](APP/Testing_LCD/)<details><summary>Project's Details</summary>Testing APP_Layer that reads Temperature and write it on an LCD</details>
- [Testing_PLL](APP/Testing_LCD/)<details><summary>Project's Details</summary>Testing Pll delay, the delay depend on the CPU clock so it always delay for the expected time</details>
- [Testing_SevenSegment](APP/Testing_LCD/)<details><summary>Project's Details</summary>Testing Tiva-C with seven-segment, the pattern from Time-Triggered pattern design for c</details>
- [Testing_SPI](APP/Testing_LCD/)<details><summary>Project's Details</summary>Testing SPI and read data from it using Logic-Analyzer</details>
- [Testing_SysTick](APP/Testing_LCD/)<details><summary>Project's Details</summary>Blinking an LED using the SysTick driver</details>

## Steps you need to do if you are using CCS or another ide


![1](https://user-images.githubusercontent.com/63866803/222526259-960e4c60-2f62-4480-9530-2af350e88dee.png)
![2](https://user-images.githubusercontent.com/63866803/222526260-67a399bc-ef22-4bd9-aed1-154a2a38027c.png)
![3](https://user-images.githubusercontent.com/63866803/222526262-faab5933-2d10-4353-be9a-31c2206a61de.png)
![4](https://user-images.githubusercontent.com/63866803/222526247-cfd451e3-874e-4ac8-9acc-5a64db1d3ebf.png)
![5](https://user-images.githubusercontent.com/63866803/222526257-3f7cf3d4-8698-46eb-add7-a1c8a523ed5b.png)
![6](https://user-images.githubusercontent.com/63866803/232917522-eb1c80d2-d17e-4941-a9f7-dd9b4a5542c5.PNG)




## 🛠 Skills
C, Embedded C, arm architecture

