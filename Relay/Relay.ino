void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
pinMode(A1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int Tombol = analogRead(A1);

  if( Tombol > 3 ){
  digitalWrite(7,1);

} else {
digitalWrite(7,0);
  
}
}
