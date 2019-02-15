int compteur = 0;
unsigned long temps;
void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(5, HIGH);
    delay(millis); 
    digitalWrite(5, LOW);
    delay(millis);
    
    compteur ++;
    compteur = compteur % 2;
    Serial.println(compteur);
    if (compteur == 0){
      digitalWrite(6, HIGH);
    }
    else
    digitalWrite(6, LOW);
  }

  
 
  
  
