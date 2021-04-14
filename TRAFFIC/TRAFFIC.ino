void setup() {
  // put your setup code here, to run once:

  for(int i = 2; i<14 ;i++){
    pinMode(i,OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

  // merah, hijau
   int pinMati2[] = {11,8};
   for ( int x = 0 ; x<2 ; x++){
    digitalWrite(pinMati2[x],0);
   }
  digitalWrite(13,1);
  digitalWrite(10,1);
  digitalWrite(2,1);
  digitalWrite(5,1);
  delay(1000);
  
  // kuning, hijau, merah
  int pinMati[] = {13,10,2,5};
  for ( int i = 0 ; i < 3 ; i++){
  for( int x = 0 ; x<4 ; x++){
    digitalWrite(pinMati[x],0);  
  }
  digitalWrite(12,1);
  digitalWrite(9,1);
  digitalWrite(4,1);
  digitalWrite(7,1);
  delay(500);
  digitalWrite(12,0);
  digitalWrite(9,0);
  digitalWrite(4,1);
  digitalWrite(7,1);
  delay(500);

  }

  // Hijau, Merah
  digitalWrite(11,1);
  digitalWrite(8,1);
  digitalWrite(4,1);
  digitalWrite(7,1);
  delay(1000);

   int pinMati1[] = {4,7};
   for ( int i = 0 ; i < 3 ; i++){
   for(int x = 0 ; x <3 ; x++){
    digitalWrite(pinMati1[x],0);
   }
  digitalWrite(3,1);
  digitalWrite(6,1);
  digitalWrite(11,1);
  digitalWrite(8,1);
  delay(500);
  digitalWrite(3,0);
  digitalWrite(6,0);
  digitalWrite(11,1);
  digitalWrite(8,1);
  delay(500);

}
}
