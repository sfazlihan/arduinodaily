void setup() {
  pinMode(13, OUTPUT);     //13 nolu pin çıkış olacak
}

void loop() {
  digitalWrite(13, HIGH);  //13'e bağlı LED'e enerji ver
  delay(1000);             // 1 saniye bekle
  digitalWrite(13, LOW);   //13'e bağlı LED'in enerjisini kes
  delay(1000);             // 1 saniye bekle
}
