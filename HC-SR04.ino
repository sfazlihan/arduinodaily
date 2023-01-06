#include <NewPing.h>    //Kütüphane dahil edildi.

#define maxMesafe 400   //max mesafeyi belirtildi
#define trig 9    //trigger pini belirtildi
#define echo 10   //echo pini belirtildi

float sure, mesafe;

//sensöre bilgi verildi ve sonar isminde değişke tanımlandı
NewPing sonar(trig, echo, maxMesafe);   

void setup() 
{
  Serial.begin(9600);    //Serial Port başlatıldı
  pinMode(echo, INPUT);   //echo pininden ses dalgaları algılanacak  
  pinMode(trig, OUTPUT);  //trig pininden ses dalgaları salınacak
}

void loop() 
{
  mesafe = sonar.ping_cm();  //sonar'a fonksiyon ile cm cinsinden değer alındı
  Serial.println("Mesafe : " + String(mesafe)+ "cm");   //Serial Port'a değer yazdırıldı
  delay(1000);    //1sn bekleme
}