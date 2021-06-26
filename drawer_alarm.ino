void honk();
void setup(){
  pinMode(12,OUTPUT);
  pinMode(2,INPUT);
}
void loop(){
  if(!digitalRead(2)){
    honk();
  }
}

void honk(){
  tone(11,1000);
  delay(250);
  noTone(11);
  delay(250);
    tone(11,1000);
  delay(250);
  noTone(11);
  delay(250);
    tone(11,1000);
  delay(250);
  noTone(11);
  delay(250);
    tone(11,1000);
  delay(250);
  noTone(11);
  delay(250);
    tone(11,1000);
  delay(250);
  noTone(11);
  delay(250);
    tone(11,1000);
  delay(250);
  noTone(11);
  delay(250);
}
