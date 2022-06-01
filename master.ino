// master 
void setup() 
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  Serial.begin(9600);
}


void loop() 
{
   Serial.println("m");
   digitalWrite(13, HIGH);
   digitalWrite(11, HIGH);

   delay(3000);
   Serial.println("r");
   digitalWrite(13, LOW);
   digitalWrite(11, LOW);
   delay(500);
   
    Serial.println("t");
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
   delay(3000);

   Serial.println("r");
   digitalWrite(12, LOW);
   digitalWrite(10, LOW);
   delay(500);

   Serial.println("d");
    digitalWrite(13, HIGH);
   delay(3000);

   Serial.println("r");
   digitalWrite(13, LOW);
   delay(500);

   Serial.println("b");
    digitalWrite(11, HIGH);
   delay(3000);

    Serial.println("r");
   digitalWrite(11, LOW);
   delay(500);
   
    
  
   
    

   
   
  
}
