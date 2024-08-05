//c++
//programa para piscar uma led

void setup() {
  // put your setup code here, to run once:
  pinMode (9, OUTPUT); //declaração da porta como saída
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, HIGH); //  manda valor alto para a porta 9
  delay(1000); // aguarda 1 segundo
  digitalWrite(9, LOW); //  manda valor baixo para a porta 9
  delay(1000); //  aguarda 1 segundo

}
