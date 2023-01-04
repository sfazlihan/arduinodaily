#define led 13    //13 nolu pine LED bağladık

void setup() {
  pinMode(led, OUTPUT);  //LED çıkış elemanı
}
void loop() {
  int deger = analogRead(A5);  //LDR'den okunan değeri deger değişkenine atandı
  delay(50);    //50 milisaniye bekledi

  //Okunan değer 500'den küçük ise
  if (deger < 500) { 
    digitalWrite(led, HIGH); //LED yanacak
  }
  
  //Okunan değer 500'den büyük ise
  if (deger > 500) { 
    digitalWrite(led, LOW); //LED sönecek
  }
}