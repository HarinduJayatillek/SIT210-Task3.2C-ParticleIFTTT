
int photoResistor = A5;
int photoResistorPower = A0;


void setup() {
  // configure whether pins are inputs or outputs
  pinMode(photoResistor, INPUT);
  pinMode(photoResistorPower, OUTPUT);

  // Turn on power to the photoresistor
  digitalWrite(photoResistorPower, HIGH);
}

void loop() {

      int lightLevel = analogRead(photoResistor);  // reading the photo resistor value
      int i = 1;    
  
      // classify whether the sun hits the terrarium or not
       if (lightLevel >= i ) Particle.publish("sun", "up", PRIVATE);
       if (lightLevel < i) Particle.publish("sun", "down", PRIVATE);

      delay(10000);
    
}  
