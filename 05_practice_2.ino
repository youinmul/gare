//05_practice_2.ino

int led = 7;

void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
  digitalWrite(led, 0);
  delay(1000);

  for (int i = 0; i < 6; i++) {
    digitalWrite(led, 0);
    delay(100);  
    digitalWrite(led, 1);
    delay(100);
  }

  digitalWrite(led,1);

  while (1) {;}

  
}
