const int PIR_PIN    = 2;   
const int RELAY_PIN  = 8;   

const unsigned long ON_TIME = 30000; 

unsigned long lastMotionTime = 0;

void setup() {
  pinMode(PIR_PIN, INPUT);       
  pinMode(RELAY_PIN, OUTPUT);

  
  digitalWrite(RELAY_PIN, HIGH);

  Serial.begin(9600);
  Serial.println("Motion Based Home Automation System Started");
}

void loop() {
  int pirState = digitalRead(PIR_PIN);
  unsigned long now = millis();


  if (pirState == HIGH) {
    Serial.println("Motion detected -> Light ON");
    lastMotionTime = now;

    
    digitalWrite(RELAY_PIN, LOW);
  }

  
  if (lastMotionTime != 0 && (now - lastMotionTime) > ON_TIME) {
    Serial.println("No motion -> Light OFF");
    digitalWrite(RELAY_PIN, HIGH);   
    lastMotionTime = 0;              
  }

  delay(50);
}
