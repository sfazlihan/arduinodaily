#include <Servo.h>  //Kütüphane dahil edildi

Servo myservo;  //myservo adında Servo değişkeni atandı
int pos = 0;    //Pozisyon için değer atandı

void setup() {
  myservo.attach(3);  //3 nolu PWM pine servo bağlandı
}

void loop() {
  //0 dereceden başlayarak 180 dereceye kadar döndürecek kod
  for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
  //180 dereceden başlayarak 0 dereceye kadar döndürecek kod
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);              
    delay(15);                      
  }
}