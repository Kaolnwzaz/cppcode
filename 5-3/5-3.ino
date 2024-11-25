int adc = 36;
int pwm = 13;
int led[] = {17, 2, 15, 12};

void setup() {
  Serial.begin(9600);
  //Serial.println("Hello World");
  //Serial.println("SuiLor");
  //delay(2000);
  int LDR = analogRead(adc);
  Serial.println(LDR);
  int val = map(LDR, 0, 1023, 255, 0);
  //digitalWrite(val, led);
  tone(13, 3000);
  delay(100);
  tone(13, 2000);
  delay(100);
  tone(13, 1000);
  delay(100);
  tone(13, 4000);
  delay(300);
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
}

void loop() {
  int LDR = analogRead(adc);
  Serial.println(LDR);

  if (LDR >= 800) {
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
  }
  else if (LDR >= 600) {
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], HIGH);
  }
  else if (LDR >= 400) {
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
  }
  else if (LDR >= 200) {
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
  }
  else {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
  }
  delay(200);
}