// Turn ON/OFF/BLINKING LED Light

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH); // Turn on light
  delay(100);
  digitalWrite(13,LOW); // Turn off light
  delay(100);
  // together they make light blink
}
