/*

 Allume une LED branchée et controlé par un potentiometre.
 */

// Initialisation des constantes :
const int knob = 2;     // Numéro de la broche à laquelle est connecté le knob
const int led =  5;      // Numéro de la broche à laquelle est connectée la LED

// Déclaration des variables :
int inputvalue = 0; // variable qui sera utilisée pour stocker l'état du bouton// Allumer une LED branchée sur la broche 5
int outputvaue = 0;

void setup() {
   Serial.begin(9600);//set the serial communication baudrate as 9600
}

void loop(){
    inputValue = analogRead(knob);//read the value from the potentiometer

  Serial.print("Input: "); //print "Input"

  Serial.println(inputValue); //print inputValue

  outputValue = map(inputValue, 0, 1023, 0, 255); //Convert from 0-1023 proportional to the number of a number of from 0 to 255

  Serial.print("Output: "); //print "Output"

  Serial.println(outputValue); //print outputValue

  analogWrite(led, outputValue); //turn the LED on depending on the output value

  delay(1000);
  }
}

