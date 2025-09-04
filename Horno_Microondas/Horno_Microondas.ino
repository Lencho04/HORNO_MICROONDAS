//Entradas
const int tiempo = 6;
const int inicio= 7;

//Salidas
const int out1;
    //7seg
const int A = A3;
const int B = A2;
const int C = 5;
const int D = 2;
const int E = 3;
const int F = A1;
const int G = A0;
const int punto =4;

//Variables
int count = 0;

void setup() {
  //Entradas
    pinMode(tiempo, INPUT_PULLUP);
    pinMode(inicio, INPUT_PULLUP);

  //Salidas
    pinMode(out1, OUTPUT);
  //7seg
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(punto, OUTPUT);
}

void loop() { 

}

void pulsador(){
  if(digitalRead(tiempo)==LOW){
    delay(50);
    while(digitalRead(tiempo)==LOW);// Detiene el programa hasta que la condicion se cumpla, funciona como anti rebote
    count++;
    if(count==10){
      count=0;
    }
  }

}
