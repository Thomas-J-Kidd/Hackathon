#define trigPin 10
#define echoPin 13
#define ledPin 9 // Pin for the LED
#define maxDistance 40 // Maximum distance for LED to turn off in cm

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT); // Initialize LED pin as an output
}

void loop() {
  float duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0344;

  if (distance >= 400 || distance <= 2) {
    Serial.println("Distance = Out of range");
  } else {
    Serial.print("Distance = ");
    Serial.print(distance);
    Serial.println(" cm");
  }

  // Check if the distance exceeds 40 cm
  if (distance > maxDistance) {
    digitalWrite(ledPin, LOW); // Turn off the LED
  } else {
    digitalWrite(ledPin, HIGH); // Turn on the LED
  }

  delay(500);
}
