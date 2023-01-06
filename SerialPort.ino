String instagram = "@arduinodaily";

void setup() {
  Serial.begin(9600);   //Serial ekranı 9600 bandında başlatıyoruz.
}

void loop() {
  //Serial.println(instagram);  //Parantez içini ekrana yazar ve alt satıra geçer
  //delay(1000);    //1sn bekler
  Serial.print("Merhaba ");  //Parantez içini ekrana yazar ancak alt satıra geçmez
  delay(1000);    //1sn bekler
}
