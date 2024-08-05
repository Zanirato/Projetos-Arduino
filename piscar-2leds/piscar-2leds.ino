//C++
//programa para piscar 2 leds

void setup() {
  // configuração das portas 9 e 7 como saídas
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // mandar valor alto para as portas 9 e 7 para acender as leds
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  //  esperar 1 segundo
  delay(1000);
  //  mandar valor baixo para apagar as leds
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  //  esperar 1 segundo
  delay(1000);
}
