int LedMin = 3;
int LedMax = 12;
int botonMin = 50;
int botonMax = 53;
void setup() {
     for (int i = LedMin; i <= LedMax; i++) {
     pinMode(i, OUTPUT); 
     for (int i = botonMin; i <= botonMax; i++) {
     pinMode(i, OUTPUT);}
     }
 }
void CUAYSMETCEL(int i, int b, boolean JPM){
     for (int a= b; a >= 1; a--) {
      digitalWrite(i, JPM);
      i++;
    } }
void loop() {
  delay(100);
 int boton1 = digitalRead(50); 
 int boton2 = digitalRead(51);
 int boton3 = digitalRead(52);
 int boton4 = digitalRead(53); 
 if(boton1 == HIGH) {CUAYSMETCEL(3,2,true);
}
 else {CUAYSMETCEL(3,2,false);
}
 if(boton2 == HIGH) {CUAYSMETCEL(5,2, true);
}
else {CUAYSMETCEL(5,2,false);
}
 if(boton3 == HIGH) {CUAYSMETCEL(7,3, true);
}
else {CUAYSMETCEL(7,3,false);
}
 if(boton4 == HIGH) {CUAYSMETCEL(10,3, true);
 }
 else {CUAYSMETCEL(10,3,false);
}
}
