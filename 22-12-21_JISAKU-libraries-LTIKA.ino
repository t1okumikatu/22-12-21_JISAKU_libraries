#include <Morse.h>
Morse morse(13);

void setup()
{
 
}

void loop()
{
 morse.dash();//500ms
 morse.dot(); //2000ms
 morse.dash();
  //digitalWrite(13,HIGH);
  //delay(2000); 
  //digitalWrite(13,LOW);
  //delay(2000); 
 morse.dot();
 morse.dot();
  
}
