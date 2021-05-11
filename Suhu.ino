
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A2,INPUT);
for(int i = 7; i < 11 ;i++){
  pinMode(i,OUTPUT);
}
}

void loop() {
  float data,celcius;
  // put your main code here, to run repeatedly:
data = analogRead(A2);

 data = data*0.48828125;

if (data<27){
  for(int i = 9; i < 11 ;i++){
  digitalWrite(i,LOW);
}
digitalWrite(8,HIGH);
} 
if (data >= 27 && data<=59 ){
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
}
if (data>60){
  for(int i = 8; i < 10 ;i++){
  digitalWrite(i,LOW);

}
digitalWrite(10,HIGH);
}
}
