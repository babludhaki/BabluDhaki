
//  Blink alternate
//Turns tx and rx indicator LED on and off one after another within a time period of 500miliseconds , repeatedly.

//Most Arduinos have two on-board LED thats normally indicates the data transmission status . On the UNO, MEGA and ZERO
//it is attached to digital pin 0 and 1,  
  
//If you want to know what pin the on-board LED is connected to on your Arduinomodel, check the Technical Specs of your board at:
// https://www.arduino.cc/en/Main/Products
  
//modified 6 feb 2020 
//by babludhaki

 


  int led0 = 0;
  int led1 = 1;
// the setup function runs once when you press reset or power the board
void setup() {
  
  pinMode(led0, OUTPUT);// initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led0, HIGH); //state the tx led high
  digitalWrite(led1,LOW );  //state the rx led low
  
  
  delay(500);                  // wait for half a second
  digitalWrite(led0, LOW);    //state the tx led high
  digitalWrite(led1, HIGH);  //state the rx led low
  
  delay(500);                       // wait for half a second
}
