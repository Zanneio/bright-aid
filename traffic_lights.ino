int red = 2;
int green = 7;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(red, HIGH);
  delay(9000);                          
  digitalWrite(red, LOW);
  delay(1000); 
    
  digitalWrite(green, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(9000);                      // wait for a second
  digitalWrite(green, LOW);// wait for a second
  delay(1000);
}
