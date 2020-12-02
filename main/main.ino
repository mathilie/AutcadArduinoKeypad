#include <Keyboard.h>


int actionPins[9] = {43,44,45,46,47,48,49,50,51};
String actionKeys[8] = {"c","r","m","pl","e","ex","t","mi"};


void setup() {
  Keyboard.begin();
}

void loop() {
  for(int i =0;i<8;i++){
    if(digitalRead(actionPins[i])==HIGH){
       for(int j=0;j<actionKeys[i].length();i++){
        Keyboard.write(actionKeys[i][j]);
        delay(10);
       }
       Keyboard.write(176); //Enter
       delay(20);
    } 
  }
  if(digitalRead(actionPins[8])==HIGH){
    Keyboard.write(176);
    delay(20);
  }
}
