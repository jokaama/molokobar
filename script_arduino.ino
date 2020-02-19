/*

 Affiche Salade de fruit dans l'écran et change de couleur avec delay.
 */

// dire qu'on utilise un ecran rgb_lcd
 #include <rgb_lcd.h>
 rgb_lcd ecranRGB;

void setup() {
   // contenu du message à afficher
   String message1 = "Salade de fruit jolie jolie";
   // (nombre de colonnes/caractères dispo, nombre de ligne, travail sur 4bits)
   ecranRGB.begin(16,2, 0x00);
   // initialisation de l'ecran
   ecranRGB.clear();
   // afficher le message 1
   ecranRGB.print(message1);
}

void loop(){
  delay(2000);
  ecranRGB.setRGB(255,0,0); // fond rouge
  delay(2000);
  ecranRGB.setRGB(0,255,0); // fond vert apres 2000ms
  delay(2000);
  ecranRGB.setRGB(0,0,255); // fond bleu apres 2000ms
  }
}
