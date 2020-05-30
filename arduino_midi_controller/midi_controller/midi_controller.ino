#include <MIDI_Controller.h>

//USBDebugMIDI_Interface midiInterface(115200);


// (pin, CC, channel)
Analog potentiometer1(A0, 1, 1);
Analog potentiometer2(A1, 2, 1);
Analog potentiometer3(A2, 3, 1);
Analog potentiometer4(A3, 4, 1);
Analog potentiometer5(A4, 5, 1);
Analog potentiometer6(A5, 6, 1);
Analog potentiometer7(A6, 7, 1);
Analog potentiometer8(A7, 8, 1);
Analog potentiometer9(A8, 9, 1);
Analog potentiometer10(A9, 10, 1);
Analog potentiometer11(A10, 11, 1);
Analog potentiometer12(A11, 12, 1);

// 10-way switch 1
DigitalCC button(22, 24, 1);
DigitalCC button2(23, 25, 1); 
DigitalCC button3(24, 26, 1);
DigitalCC button4(25, 27, 1);

// 10-way switch 2
DigitalCC button5(26, 28, 1);
DigitalCC button6(27, 29, 1); 
DigitalCC button7(28, 30, 1);
DigitalCC button8(29, 31, 1);

// 10-way switch 3
DigitalCC button9(30, 32, 1);
DigitalCC button10(31, 33, 1); 
DigitalCC button11(32, 34, 1);
DigitalCC button12(33, 35, 1);
DigitalCC button13(34, 36, 1);

// 2 way switches
DigitalCC button14(35, 37, 1);
DigitalCC button15(36, 38, 1); 
DigitalCC button16(37, 39, 1);

void setup() {}
void loop() {MIDI_Controller.refresh();}
