/****** Contador de 0 a 9 ******/

//Valores dos pinos dos LEDs 
const int a = 2; 
const int b = 3; 
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;

//Intervalo de tempo da contagem (em ms)
int tempo = 500;

void setup() {

  //Inicializa pinos como saídas
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT); 
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT); 
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  
  //Inicia display em 0
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);

}

void loop() {
  
  // 0
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);

  delay(tempo);
  
  // 1
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  delay(tempo);
  
  // 2
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH); 
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH); 
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);

  delay(tempo);
    
  // 3
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);

  delay(tempo);  
  
  // 4
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  delay(tempo);  
  
  // 5
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW); 
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  delay(tempo);  
  // 6
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW); 
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  delay(tempo);  
  
  // 7
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  delay(tempo);  
  
  // 8
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  delay(tempo);

  // 9
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  delay(tempo);
}
