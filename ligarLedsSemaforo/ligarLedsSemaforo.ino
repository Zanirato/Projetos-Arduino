// C++ code
//programa de funcionamento de dois semáforos, de pedestre e veiculos

//defição de portas para as siglas
#define v1 2
#define v2 4
#define v3 6
#define p1 8
#define p2 11

//definição de tempo para as siglas
int t1 = 4000;
int t2 = 2000;
int t3 = 500;

void setup()
{
  // configuração das portas como saídas 
  pinMode(v1, OUTPUT);
  pinMode(v2, OUTPUT);
  pinMode(v3, OUTPUT);
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  
}

void loop()
{
  //  definição de variavél
  int i;
  //  ligar leds vermelha (p1) e verde(p2)
  digitalWrite(v1, HIGH);
  digitalWrite(p1, HIGH);
  delay(t1); // esperar 1 segundo   
  digitalWrite(v1, LOW);
  digitalWrite(v2, HIGH);
  delay(t2); // esperar 1 segundo
  digitalWrite(v2, LOW);
  digitalWrite(p1,LOW);
  digitalWrite(v3, HIGH);
  digitalWrite(p2,HIGH);
  delay(t1);
  //  condição
  for (i = 0; i < 3; i ++) {
    digitalWrite(p2, LOW);
    delay(t3);
    digitalWrite(p2, HIGH);
    delay(t3);
  }
  digitalWrite(v3, LOW);
  digitalWrite(p2, LOW);
  
}
