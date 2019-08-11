#ifndef _MYLIB_H_
#define _MYLIB_H_

#define micPinA A0
#define micPinD A1
#define buzzPin A3
#define motorIn1 D0
#define motorIn2 D1
#define motorIn3 D2
#define motorIn4 D3
#define IR0 D7
#define IR1 D6
#define IR2 D5 
#define IR3 D4
#define servoPin1 A5
#define servoPin2 A4
#define LEDPin A2

int startUp();

int buzz(String str);

int checkMic();

int getMicVal();

//not writting a function for Servo just use the built-in
//make servo object
//servoObject.attach(int pin)
//servoObject.moveServo( int position)
/*
    THE PARAMETER FOR THESE  FUNCTIONS TAKES IN SECONDS
*/
int goForward(String str);

int goBackward(String str);

int goForwardL(String str);

int goForwardR(String str);

int goBackwardL(String str);

int goBackwardR(String str);

int checkIR(String str);

int headlampOn(String str);

int headlampOff(String str);

int wait(String str);





#endif