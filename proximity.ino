int trig= 10;
int echo= 9;
long dur;
float dis;
int buzz= 5;
void setup() {
 
  pinMode(buzz,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
  

}

void loop() {

  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  dur= pulseIn(echo,HIGH);
  dis= dur * 0.034 / 2;
  Serial.print("distance:");
  if(dis<15){
    digitalWrite(buzz,HIGH);
  
  }
  else  {
    digitalWrite(buzz,LOW);
  

  }
  
  Serial.println(dis);
  delay(100);

 
  
 
 
}  