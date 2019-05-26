//Defining a variable for the led green.
int green=3;
//Defining a variable for the red green.
int red=2;
//Defining a variable for the yellow green.
int yellow=4;

//Defininf a variable for the potetiometer.
int potentiometer;

//Defining the pin of the motor 
int motor=13;





void setup() {
  //defining the pinMode.
  pinMode(green,OUTPUT);
  //defining the pinMode.
  pinMode(red,OUTPUT);
  //defining the pinMode.
  pinMode(yellow,OUTPUT);
  //Definig the engine  pinMode
  pinMode(motor,OUTPUT);

  //open the serial port
  Serial.begin(9600);

}

void loop() {
  //storing the value read from the the potentiometer.
  int potentiometer=analogRead(A0);
  delay(300);


  //This will read the value of the potentiometer.
  Serial.println(potentiometer);


  //Check statement
  if(potentiometer>=0 && potentiometer <=400){
    //This is defining how the motor will behave.
    analogWrite(motor, map(3,0,9,0,255));
    digitalWrite(green,HIGH);
    delay(1000);
    digitalWrite(green,LOW);
    delay(1000);
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    
    //Check statement
  }else if(potentiometer>=400 && potentiometer <=800){
    //This is defining how the motor will behave.
    analogWrite(motor, map(6,0,9,0,255));
    digitalWrite(yellow,HIGH);
    delay(300);
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    
    //Check statement
  }else if(potentiometer>800){
    //This is defining how the motor will behave.
    analogWrite(motor, map(9,0,9,0,255));
    digitalWrite(red,HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green,LOW);
  }
}
