int val=0;



void setup()
{
   pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  val = analogRead(A0);
  float mv = ( val/1024.0)*5000;
  float cel = mv/10;
  
  Serial.print("TEMPRATURE = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  if (cel>18){
    digitalWrite (13, HIGH);
    delay(1000);  
  }
  else{
     digitalWrite (13, LOW);
     delay(1000);  
  }
  
  delay(1000);

}
