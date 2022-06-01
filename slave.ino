
char t;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  digitalWrite(3, LOW); 
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  Serial.begin(9600);

}

void loop()
{

  if (Serial.available())
  {
    t = Serial.read();
    Serial.println(t);
  }

  if (t == 'm') {          //move forward
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);


  }

  else if (t == 't') {    //move reverse
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);

  }

  else if (t == 'd') { // l
    digitalWrite(6, HIGH); //turn left 
  }

  else if (t == 'b') {    //turn right 
    digitalWrite(4, HIGH);
  }

  else if (t == 'r') //STOP 
  {    
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
  }

  delay(100);

}
