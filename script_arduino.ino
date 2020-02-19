/*

 Allume une LED branchée sur la broche 13 lorsque le bouton
 connecté sur la broche 2 est appuyé.
 */

// Initialisation des constantes :
const int bouton = 2;     // Numéro de la broche à laquelle est connecté le bouton poussoir
const int led =  5;      // Numéro de la broche à laquelle est connectée la LED

// Déclaration des variables :
int etatBouton = 0;         // variable qui sera utilisée pour stocker l'état du bouton// Allumer une LED branchée sur la broche 5

void setup() {
    // indique que la broche led est une sortie :
  pinMode(led,OUTPUT);
  // indique que la broche bouton est une entrée :
  pinMode(bouton, INPUT);
}

void loop(){
  // lit l'état du bouton et stocke le résultat dans etatBouton
  etatBouton = digitalRead(bouton);
  // Si etatBouton est à 5V (HIGH) c'est que le bouton est appuyé
  if (etatBouton == HIGH) {
    // on allume la LED
  digintalWrite(led,HIGH);
  }
  else {
    // sinon on éteint
  digitalWrite(led,LOW);
  }
}
