const int c = 262; // Dó
const int cH = 523;
const int cSH = 554;
const int d = 294; // Ré
const int dH = 587;
const int dSH = 622;
const int e = 330; // Mi
const int eH = 659;
const int f = 349; //Fá
const int fH = 698;
const int fSH = 740;
const int g = 392; //Sol
const int gS = 415;
const int gH = 784;
const int gSH = 830;
const int a = 440; //Lá
const int aS = 455;
const int aH = 880;
const int a3 = 220;
const int b = 494; //Si

const int NOTA_UM = 13;
const int NOTA_DOIS = 12;
const int NOTA_TRES = 11;
const int NOTA_QUATRO = 10;
const int SINGLE_UM = 9;
const int SINGLE_DOIS = 8;
const int SINGLE_TRES = 7;
const int BUZZER = 6;

int estado_nota_um = false;
int estado_nota_dois = false;
int estado_nota_tres = false;
int estado_nota_quatro = false;
int estado_single_um = false;
int estado_single_dois = false;
int estado_single_tres = false;

int intervalo = 545;
int intervalo_longo = 750;

void setup() {

pinMode(NOTA_UM, INPUT);
pinMode(NOTA_DOIS, INPUT);
pinMode(NOTA_TRES, INPUT);
pinMode(NOTA_QUATRO, INPUT);
pinMode(SINGLE_UM, INPUT);
pinMode(SINGLE_DOIS, INPUT);
pinMode(SINGLE_TRES, INPUT);

pinMode(BUZZER, OUTPUT);
}

void loop() {

  estado_nota_um = digitalRead(NOTA_UM);
  estado_nota_dois = digitalRead(NOTA_DOIS);
  estado_nota_tres = digitalRead(NOTA_TRES);
  estado_nota_quatro = digitalRead(NOTA_QUATRO);
  estado_single_um = digitalRead(SINGLE_UM);
  estado_single_dois = digitalRead(SINGLE_DOIS);
  estado_single_tres = digitalRead(SINGLE_TRES);

  if (estado_nota_um == HIGH) {   
      tocar_c();   
  } 
  else if (estado_nota_dois == HIGH) {   
      tocar_d();  
  } 
  else if (estado_nota_tres == HIGH) {
      tocar_e();   
  } 
  else if (estado_nota_quatro == HIGH) {
      tocar_f();   
  }
  else if (estado_single_um == HIGH) {
      brilha_brilha_estrelinha();
  }
  else if (estado_single_dois == HIGH) {
      marcha_imperial();
  }
  else if (estado_single_tres == HIGH) {
     zelda();
  }
  else{
  noTone(BUZZER);
  }  
}

void tocar_c(){
  tone(BUZZER, c);
}
void tocar_d(){
  tone(BUZZER, d);
}
  
void tocar_e(){
  tone(BUZZER, e);
}
  
void tocar_f(){
  tone(BUZZER, f);
}

void beep(int nota, int duracao){
  tone(BUZZER, nota, duracao);
}

// MUSICA BRILHA BRILHA ESTRELINHA
void brilha_brilha_estrelinha(){
  beep(c, 500); delay(intervalo);  
  beep(c, 500);	delay(intervalo);
  beep(g, 500); delay(intervalo);
  beep(g, 500); delay(intervalo);
  beep(a, 500);	delay(intervalo);
  beep(a, 500);	delay(intervalo);
  beep(g, 1000); delay(intervalo_longo);
  beep(f, 500); delay(intervalo);
  beep(f, 500); delay(intervalo);
  beep(e, 500); delay(intervalo);
  beep(e, 500); delay(intervalo);
  beep(d, 500); delay(intervalo);
  beep(d, 500); delay(intervalo);
  beep(c, 1000); delay(intervalo_longo);
}

// MUSICA MARCHA IMPERIAL
void marcha_imperial(){   
  beep(a, 500); delay(intervalo);
  beep(a, 500); delay(intervalo);
  beep(f, 350); delay(intervalo);
  beep(cH, 150); delay(intervalo);
  beep(a, 500); delay(intervalo);
  beep(f, 350); delay(intervalo);
  beep(cH, 150); delay(intervalo);
  beep(a, 650); delay(intervalo);

  delay(500);

  beep(eH, 500); delay(intervalo);
  beep(eH, 500); delay(intervalo);
  beep(eH, 500); delay(intervalo);
  beep(fH, 350); delay(intervalo);
  beep(cH, 150); delay(intervalo);
  beep(gS, 500); delay(intervalo);
  beep(f, 350); delay(intervalo);
  beep(cH, 150); delay(intervalo);
  beep(a, 650); delay(intervalo);

  delay(500);
  
  beep(aH, 500); delay(intervalo);
  beep(a, 300); delay(intervalo);
  beep(a, 150); delay(intervalo);
  beep(aH, 500); delay(intervalo);
  beep(gSH, 325); delay(intervalo);
  beep(gH, 175); delay(intervalo);
  beep(fSH, 125); delay(intervalo);
  beep(fH, 125); delay(intervalo);
  beep(fSH, 250); delay(intervalo);

  delay(325);

  beep(aS, 250); delay(intervalo);
  beep(dSH, 500); delay(intervalo);
  beep(dH, 325); delay(intervalo);
  beep(cSH, 175); delay(intervalo);
  beep(cH, 125); delay(intervalo);
  beep(b, 125); delay(intervalo);
  beep(cH, 250); delay(intervalo);

  delay(350);
}

// MUSICA ZELDA LULLABY
void zelda(){
  beep(e, 250); delay(intervalo);
  beep(g, 500); delay(intervalo);
  beep(d, 250); delay(intervalo);
  
  beep(c, 750); delay(intervalo);
  beep(d, 750); delay(intervalo);
  beep(e, 250); delay(intervalo); 
  
  beep(g, 500); delay(intervalo);
  beep(d, 250); delay(intervalo);
  
  delay(500);
  
  beep(e, 250); delay(intervalo);
  beep(g, 500); delay(intervalo);   
  beep(dH, 250); delay(intervalo);
  beep(cH, 500); delay(intervalo);
  beep(g, 250); delay(intervalo);
  beep(f, 750); delay(intervalo);
  beep(e, 750); delay(intervalo);
  beep(d, 250); delay(intervalo);
  
  delay(500);
  
  beep(e, 250); delay(intervalo);
  beep(g, 500); delay(intervalo);
  beep(d, 250); delay(intervalo);
  beep(c, 750); delay(intervalo);
  beep(d, 750); delay(intervalo);
  beep(e, 250); delay(intervalo);
  beep(g, 500); delay(intervalo);
  beep(d, 250); delay(intervalo);
  
  delay(500);
  
  beep(e, 250); delay(intervalo);
  beep(g, 500); delay(intervalo);
  
  delay(500);
  
  beep(dH, 250); delay(intervalo);
  beep(cH, 500); delay(intervalo);
  beep(g, 250); delay(intervalo);
  beep(f, 750); delay(intervalo);
  beep(e, 750); delay(intervalo);
  beep(f, 750); delay(intervalo);
  beep(e, 750); delay(intervalo);
  beep(c, 250); delay(intervalo);
  
  beep(f, 250); delay(intervalo);
  beep(e, 750); delay(intervalo);
  beep(d, 750); delay(intervalo);
  beep(e, 750); delay(intervalo);
  beep(d, 750); delay(intervalo);
  beep(a3, 250); delay(intervalo);
  beep(g, 250); delay(intervalo);
  beep(f, 750); delay(intervalo);

  beep(e, 750); delay(intervalo);
  beep(f, 750); delay(intervalo);
  beep(e, 750); delay(intervalo);
  beep(c, 500); delay(intervalo);
  beep(f, 500); delay(intervalo);
  beep(cH, 250); delay(intervalo);  
  
  delay(500);
  
}