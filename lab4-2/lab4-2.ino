int bt = 17;
int wifi = 2;
int ntp = 15;
int iot = 12;

void setup(){
  pinMode(bt,OUTPUT);
  pinMode(wifi,OUTPUT);
  pinMode(ntp,OUTPUT);
  pinMode(iot,OUTPUT);
}

void loop(){
  digitalWrite(bt,HIGH);
  delay(100);
  digitalWrite(bt,LOW);
  delay(200);
  digitalWrite(wifi,HIGH);
  delay(100);
  digitalWrite(wifi,LOW);
  delay(200);
  digitalWrite(ntp,HIGH);
  delay(100);
  digitalWrite(ntp,LOW);
  delay(200);
  digitalWrite(iot,HIGH);
  delay(100);
  digitalWrite(iot,LOW);
  delay(200);
  digitalWrite(iot,HIGH);
  delay(100);
  digitalWrite(iot,LOW);
  delay(200);
  digitalWrite(ntp,HIGH);
  delay(100);
  digitalWrite(ntp,LOW);
  delay(200);
  digitalWrite(wifi,HIGH);
  delay(100);
  digitalWrite(wifi,LOW);
  delay(200);
  digitalWrite(bt,HIGH);
  delay(100);
  digitalWrite(bt,LOW);
  delay(200);
}