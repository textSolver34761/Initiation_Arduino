void setup() {
  pinMode(5, OUTPUT); // Led position 5
  pinMode(4, OUTPUT); // Led position 4
  pinMode(3, OUTPUT); // Led position 3
}

void loop() {
digitalWrite(5,HIGH); // Allumer led position 5 ...
delay(500);           // pendant 0.5 secondes
digitalWrite(4,HIGH); // Allumer led position 4 ...
delay(500);           //pendant 0.5 secondes
digitalWrite(3,HIGH); // Allumer led position 3 ...
delay(500);           // pendant 0.5 secondes

digitalWrite(3,LOW); // Eteindre led position 3...
delay(500);          //pendant 0.5 secondes
digitalWrite(4,LOW); // Eteindre led position 4...
delay(500);          //pendant 0.5 secondes
digitalWrite(5,LOW); // Eteindre led position 5...
delay(500);          //pendant 0.5 secondes
}
