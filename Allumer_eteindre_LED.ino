//déclaration des variables
int pinBouton;
int pinLed1, pinLed2, pinLed3;
boolean etatBouton;
int compteur; 

void setup(){
  //initialisation des variables
  Serial.begin(9600);
  pinBouton = 7;
  pinLed1 = 5;
  pinLed2 = 4;
  pinLed3 = 3;
  etatBouton = LOW;
  compteur =0;
 
  //définition des modes
  pinMode(pinBouton, INPUT); //mode lecture pour le bouton
  pinMode(pinLed1, OUTPUT); //mode écriture pour led1
  pinMode(pinLed2, OUTPUT); //mode écriture pour led2
  pinMode(pinLed3, OUTPUT); //mode écriture pour led3
}

void loop(){
  boolean etatBouton = digitalRead(pinBouton);
  Serial.println(etatBouton);
      for(int i=3;i<=5; i++){
          digitalWrite(i,HIGH);
          Serial.println(i);
          delay(500);
        if(etatBouton == HIGH){
            compteur = 1;
            while(compteur == 1 && etatBouton == HIGH){
                compteur = 0;
            }
        }
      }
      for(int i=5;i>=3; i--){
          digitalWrite(i,LOW);
          delay(500);
        if(etatBouton == HIGH){
            compteur = 1;
            while(compteur == 1 && etatBouton == HIGH){
                  compteur = 0;
            }
        }
      }
}

/*

//déclaration des variables
int pinBouton;
int pinLed1, pinLed2;
void setup()
{
  //initialisation des variables
  pinBouton = 2;
  pinLed1 = 4;
  pinLed2 = 6;
  //définition des modes
  pinMode(pinBouton, INPUT); //mode lecture pour le bouton
  pinMode(pinLed1, OUTPUT); //mode écriture pour led1
  pinMode(pinLed2, OUTPUT); //mode écriture pour led2

}
void loop()
{
  //lecture de l'état du bouton et stockage dans etatBouton
  boolean etatBouton = digitalRead(pinBouton);
  //test des conditions
  if (etatBouton==HIGH)//test si bouton appuyé
  {
    digitalWrite(pinLed1,LOW); //led1 éteinte
    digitalWrite(pinLed2,HIGH); //led2 allumée
  }
  if (etatBouton==LOW)//test si bouton levé
  {
    digitalWrite(pinLed1,HIGH); //Led1 allumée
    digitalWrite(pinLed2,LOW); //led2 éteinte
  }
  delay(100); //petite attente
}*/
