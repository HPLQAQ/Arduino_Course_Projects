void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i < 5; ++i)
    pinMode(i, 1);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 2; i < 5; ++i) {
    digitalWrite(i, 1);
    delay(1000);
    digitalWrite(i, 0);
  }
}
