int led = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int j=1;j<=100;j++)
{
digitalWrite(led,HIGH);
delay(1000*j);
digitalWrite(led,LOW);
delay(100);
}
}
