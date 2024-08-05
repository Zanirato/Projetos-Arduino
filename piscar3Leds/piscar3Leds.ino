//C++
//programa para piscar 3 leds consecultivamente

void setup() {
  // configuração das portas 9,7 e 5 como saídas
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // mandar valor alto para as portas 9, 7 e 5 para acender as leds
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  //  esperar 1 segundo
  delay(1000);
  //  mandar valor baixo para apagar as leds
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  //  esperar 1 segundo
  delay(1000);
}
