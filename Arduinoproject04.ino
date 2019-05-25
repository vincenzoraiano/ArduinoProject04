//Defining a variable for the led green.
int green=3;
//Defining a variable for the red green.
int red=2;
//Defining a variable for the yellow green.
int yellow=4;

//Defininf a variable for the potetiometer.
int potentiometer;





void setup() {
  //defining the pinMode.
  pinMode(green,OUTPUT);
  //defining the pinMode.
  pinMode(red,OUTPUT);
  //defining the pinMode.
  pinMode(yellow,OUTPUT);

  //open the serial port
  Serial.begin(9600);

}

void loop() {
  //storing the value read from the the potentiometer.
  int potentiometer=analogRead(A0);
  delay(300);


  Serial.println(potentiometer);


  //Check statement
  if(potentiometer>=0 && potentiometer <=400){
    digitalWrite(green,HIGH);
    delay(1000);
    digitalWrite(green,LOW);
    delay(1000);
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    //Check statement
  }else if(potentiometer>=400 && potentiometer <=800){
    digitalWrite(yellow,HIGH);
    delay(300);
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    //Check statement
  }else if(potentiometer>800){
    digitalWrite(red,HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green,LOW);
  }
}
