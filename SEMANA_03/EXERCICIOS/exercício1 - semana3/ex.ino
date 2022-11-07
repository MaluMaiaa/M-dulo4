// Aqui estou definindo as variáveis de todos os leds, o ldr, o buzzer e os botões 
#define VERMELHO 9
#define AMARELO 15
#define AZUL 11
#define VERDE 3
#define LDR 2
#define buzzer 8
#define button 1 


void setup(){
  Serial.begin(115200);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERMELHO, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(LDR, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
}

int toque1() {
  tone(buzzer, 200); //qual tom será tocado
  digitalWrite(VERMELHO, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(VERMELHO, LOW);
  return 0;}
int toque2() {
  tone(buzzer, 300); ///qual tom será tocado
  digitalWrite(VERDE, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(VERDE, LOW);
  return 0;
}
int toque3() {
  tone(buzzer, 400); //qual tom será tocado
  digitalWrite(AMARELO, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(AMARELO, LOW);
  return 0;}
int toque4() {
  tone(buzzer, 500); //qual tom será tocado
  digitalWrite(AZUL, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(AZUL, LOW);
  return 0;}
int toque5() {
  tone(buzzer, 600); //qual tom será tocado
  digitalWrite(AZUL, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(AZUL, LOW);
  return 0;}
int toque6() {
  tone(buzzer, 700); //qual tom será tocado
  digitalWrite(AMARELO, HIGH); //qual led será aceso
  digitalWrite(VERMELHO, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERMELHO, LOW);
  return 0;}
int toque7() {
  tone(buzzer, 800); //qual tom será tocado
  digitalWrite(AZUL, HIGH); //qual led será aceso
  digitalWrite(VERDE, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(AZUL, LOW);
  digitalWrite(VERDE, LOW);
  return 0;}
int toque8() {
  tone(buzzer, 900); //qual tom será tocado
  digitalWrite(VERMELHO, HIGH); //qual led será aceso
  digitalWrite(VERDE, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(VERMELHO, LOW);
  digitalWrite(VERDE, LOW);
  return 0;}
int toque9() {
  tone(buzzer, 200); //qual tom será tocado
  digitalWrite(AZUL, HIGH); //qual led será aceso
  digitalWrite(AMARELO, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(AZUL, LOW);
  digitalWrite(AMARELO, LOW);
  return 0;}
int toque10() {
  tone(buzzer, 300); //qual tom será tocado
  digitalWrite(VERMELHO, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(VERMELHO, LOW);
  return 0;}
int toque11() {
  tone(buzzer, 400); //qual tom será tocado
  digitalWrite(AMARELO, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(AMARELO, LOW);
  return 0;}
int toque12() {
  tone(buzzer, 500); //qual tom será tocado
  digitalWrite(AZUL, HIGH); //qual led será aceso
  delay(100); // tempo de delay 
  digitalWrite(AZUL, LOW);
  return 0;}

void loop() {
  int vetor[1000];
  int ldr_read = analogRead(LDR); // se diz respeito ao sensor de luminosidade (LDR) que é analógico 
  int resultado = (ldr_read / 200); //o valor que será lido será divido por 200 
  tone(buzzer, 0);
  if (digitalRead(button) == LOW) {
    for (int v = 0; v <= 15; v = v + 1) //definindo a variável v
    {
      if (resultado == v){
        //quando a variavel v for tal número tocar a função toque correspondente 
        if (v == 0) {toque1();} 
        if (v == 1) {toque2();}
        if (v == 2) {toque3();}
        if (v == 3) {toque4();}
        if (v == 4) {toque5();}
        if (v == 5) {toque6();}
        if (v == 6) {toque7();}
        if (v == 7) {toque8();}
        if (v == 8) {toque9();}
        if (v == 9) {toque10();}
        if (v == 10){toque11();}
        if (v == 11){toque12();}
        Serial.println(resultado);
        }
    }
  }
}
