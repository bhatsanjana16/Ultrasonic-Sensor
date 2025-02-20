const int trigpin=33;
const int LED=15;
const int echopin=32;
long duration;
int distance;
void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin,HIGH);
  distance = duration*0.034/2;
  Serial.println("Distance:");
  Serial.println(distance); 
  if(distance>20){
      digitalWrite(LED,HIGH);

  }
  else{
    digitalWrite(LED,LOW);

  }
}
