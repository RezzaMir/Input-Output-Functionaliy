# Input/Output Functionaliy

I/O Functionality

https://github.com/RezzaMir/Input-Output-Functionaliy/blob/main/Input%20n%20Output%20Functionality.c

This code runs on Arduino IDE

The purpose is to examine the basic functionality of the Arduino microcontroller board and settting up inputs and outputs and finding interrupts. This will utilize 3 port pins to drive 6 LEDs through output combinations of ones and zeroes while setting others as inputs (to simulate high impedance or disconnect the output) to drive one LED at a time.

![Screenshot (1047) - Copy](https://user-images.githubusercontent.com/102126445/160237807-6ed635b9-9784-489c-908d-0f5cf8779e90.png)

•	Test them using a power supply before connecting them to your Arduino.  
•	You might want to set-up and test one or two LEDs at a time until you get the idea.
•	For instance if you connect 5V to IO1 and Ground to IO3 LEDf should go on.  This is the equivalent of outputting a 1 to IO1 and a zero to IO3 while IO2 is open.
•	If you reverse those connections LEDe will go on.  This is the equivalent of outputting a 0 on IO1 and a 1 on IO3 while IO2 is open.  
•	From these examples the other LEDs can be figured out in a similar fashion.
•	Since we will have 3 pins connected, the unused pin will need to be setup as a high impedance to simulate an ‘open’ line.  Setting it up as an input will do this.
•	Create a table for the different combinations.  
•	You will choose which port and pins to use on the Arduino.  Do not use outputs 1 and 2 as these are used for RxD and TxD.


•	Once you have  externally tested your LEDs with a power supply and created your table you can connect your Arduino pins that you have selected to the breadboard of LEDs.
•	Proceed to write your code to turn-on one LED at a time in a sequence as follows: 
  
1.	LED#:  1 – 2 - 3 – 4 – 5 – 6 – 5 – 4 – 3 – 2 – 1 and so on repeating this pattern.  It goes out and comes back.
2.	Keep each illuminated LED on for about .5s before proceeding to the next.
3.	Use a switch input as an interrupt to stop the operation at any point when pressed and then proceed when the switch is released from where it was.  Review the book page 261 and the attachInterrupt() instruction in HELP Reference within the Arduino IDE.  See the Appendix at the bottom of this document.
o	Your interrupt routine will be a do-while loop monitoring the closed switch and staying in the interrupt routine until the switch opens causing it to return to the main program and resume operation where it left off.

int IO1 = 4;
int IO2 = 5;
int IO3 = 6;
