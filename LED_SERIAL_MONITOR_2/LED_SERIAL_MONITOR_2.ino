
void setup() {
  // put your setup code here, to run once:
  for (int a = 6; a < 14; a++)
  {
    pinMode(a,OUTPUT);
  }
Serial.begin (9600);
Serial.flush();
}

void loop() {
  // put your main code here, to run repeatedly:
  String input = "";
while (Serial.available()>0){
  input = Serial.readStringUntil('\n');

if (input == "UP"){
  for (int x = 6; x < 14; x++)
    {
     digitalWrite(x,HIGH);
     delay(500);
     digitalWrite(x,LOW); 
    }
    Serial.println("UP BERHASIL");
}
 if (input == "DOWN")
  {
    for (int y = 13; y > 5; y--)
    {
      digitalWrite(y,HIGH);
      delay(500);
      digitalWrite(y,LOW);
    }
    Serial.println("DOWN BERHASIL");
  }
}
}
