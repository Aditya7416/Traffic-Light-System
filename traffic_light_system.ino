void setup() {
  pinMode(12,OUTPUT);//red light
  pinMode(10,OUTPUT);//yellow light
  pinMode(8,OUTPUT);//green light

}

void loop() {
  digitalWrite(12,HIGH);//turn on red 3sec
  delay(3000);
  digitalWrite(10,HIGH);//turn on yellow 1 sec
  delay(2000);

  digitalWrite(12,LOW);//turn off red
  digitalWrite(10,LOW);//turn off yellow
  
  digitalWrite(8,HIGH);//turn on green 3 sec
  delay(3000);
  digitalWrite(8,LOW);//turn off green for 0.5sec
  delay(500);

  digitalWrite(8,HIGH);//turn on green 0.5sec--1
  delay(3000);
  digitalWrite(8,LOW);//turn off green for 0.5sec
  delay(500);

  digitalWrite(8,HIGH);//turn on green 0.5sec--2
  delay(3000);
  digitalWrite(8,LOW);//turn off green for 0.5sec
  delay(500); 

  digitalWrite(8,HIGH);//turn on green 0.5sec--3
  delay(3000);
  digitalWrite(8,LOW);//turn off green for 0.5sec
  delay(500);


 



}
