//déclaration des variables
int pinBouton;
int pinLed1, pinLed2, pinLed3;
boolean etatBouton;
int compteur; 

void setup(){
  //initialisation des variables
  pinBouton = 7;
  pinLed1 = 5;
  pinLed2 = 4;
  pinLed3 = 3;
  etatBouton = false;
  compteur =0;

 
  //définition des modes
  pinMode(pinBouton, INPUT); //mode lecture pour le bouton
  pinMode(pinLed1, OUTPUT); //mode écriture pour led1
  pinMode(pinLed2, OUTPUT); //mode écriture pour led2
  pinMode(pinLed3, OUTPUT); //mode écriture pour led3
}
void loop(){
      for(int i=3;i<=5; i++){
        digitalWrite(i,HIGH);
        delay(500);
          if(etatBouton = true)
            {
            compteur = 1;
            }
          while(compteur = 1)
          {
            if(etatBouton = true)
          {
            compteur = 0;
            }
          }
      }
      for(int i=5;i>=3; i--){
        digitalWrite(i,LOW);
        delay(500);
          if(etatBouton = true)
            {
            compteur = 1;
            }
          while(compteur = 1)
          {
            if(etatBouton = true)
          {
            compteur = 0;
            }
          }
      }
}
