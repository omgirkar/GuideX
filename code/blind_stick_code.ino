#define trigPin 6
#define echoPin 5
#define buzzerPin 13

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duration, distance;
  
  // Send a 10us pulse to trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the pulse on the echo pin
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance
  distance = (duration * 0.034) / 2;
  
  Serial.print("Distance: ");
  Serial.println(distance);

  // Adjust the buzzer sound based on the distance
  if (distance > 0 && distance <= 100) { 
    int frequency = map(distance, 0, 100, 2000, 500); // Closer = higher frequency, Farther = lower frequency
    tone(buzzerPin, frequency);
  } else {
    noTone(buzzerPin); // No tone if no object is within the range
  }

  delay(100); // Small delay for the next reading
}
