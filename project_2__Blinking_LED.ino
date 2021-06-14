int LED_0 =13;
int LED_1 =12;
int LED_2 =8;

void setup() {
  pinMode(LED_0,OUTPUT);
  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
}

void loop() {
 digitalWrite(LED_0,HIGH);
 delay(500);
 digitalWrite(LED_0,LOW);
 delay(500);
digitalWrite(LED_1,HIGH);
 delay(500);
 digitalWrite(LED_1,LOW);
delay(500);
digitalWrite(LED_2,HIGH);
 delay(500);
 digitalWrite(LED_2,LOW);
delay(500);

 

}
