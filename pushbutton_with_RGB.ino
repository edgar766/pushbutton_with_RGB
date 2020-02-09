const int buttonPin = 3;  // Ստեղծում է  buttonPin փոփոխական և վերագրում է այն պինը որին միացված է
const int redPin = 10;   
const int greenPin = 11;
const int bluePin = 9;
int counter = 0;
int buttonState;  // Ստեղծում է buttonState փոփոխական

void setup() {
  //Պիների տեսակները 
  pinMode(buttonPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
 buttonState = digitalRead(buttonPin); //կարդում է buttonPin-ի արժեքը
   if (buttonState == LOW) {
    counter++; //Եթե buttonState  սեղմված է փոփոխականը ավելանում է ևս 1-ով
    delay(500);
  }
  

  if (counter == 1) {
    //եթե կոճակը սեղմված է 1 անգամ վառվում է կարմիր լույսը 
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    
  }
  
  if (counter == 2) {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
   }
  
 if (counter == 3) {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  }
  
  if (counter > 3)  {
    counter = 1;
  }
}
