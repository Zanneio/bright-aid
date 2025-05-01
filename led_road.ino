int red1 = 12 ;
int red2 = 10 ;
int green1 = 11 ;
int green2 = 9 ;

void setup() {

  //led
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
}

void loop() {   
  digitalWrite(red2, HIGH);   
  delay(50);                       
  digitalWrite(red2, LOW);    
    
  digitalWrite(green2, HIGH);   
  delay(50);                       
  digitalWrite(green2, LOW);  

  digitalWrite(red1, HIGH);   
  delay(50);                       
  digitalWrite(red1, LOW);    

  digitalWrite(green1, HIGH);   
  delay(50);                       
  digitalWrite(green1, LOW);       
}
