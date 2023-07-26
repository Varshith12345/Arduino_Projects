int leda=2;
int ledb=3;
int ledc=4;
int ledd=5;
int lede=6;
int ledf=7;
int ledg=8;
int count=0;
const int wire = 12; 
const int buzzer= 13;                                                                                                                                                                                                                                                                                                                                                                                                                              
void setup(){
pinMode(leda, OUTPUT);
pinMode(ledb, OUTPUT);
pinMode(ledc, OUTPUT);
pinMode(ledd, OUTPUT);
pinMode(lede, OUTPUT);
pinMode(ledf, OUTPUT);
pinMode(ledg, OUTPUT);
pinMode(buzzer, OUTPUT); 
pinMode(wire, INPUT); 
Serial.begin(9600);
}
void loop(){
if(digitalRead(wire)== HIGH){
  count++;
  if(count==1){
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    digitalWrite(ledb,HIGH);
    digitalWrite(ledc,HIGH);
    }else if(count==2){
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    digitalWrite(ledc,LOW);
    digitalWrite(leda,HIGH);
    digitalWrite(ledb,HIGH);
    digitalWrite(ledg,HIGH);
    digitalWrite(lede,HIGH);
    digitalWrite(ledd,HIGH);
  }else if(count==3){
    digitalWrite(buzzer,HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);
    digitalWrite(lede,LOW);
    digitalWrite(leda,HIGH);
    digitalWrite(ledb,HIGH);
    digitalWrite(ledg,HIGH);
    digitalWrite(ledc,HIGH);
    digitalWrite(ledd,HIGH);
  }
  }
}
