#define BLINK_PIN 21
#define BLANK_PIN 13

void setup(){
  Serial.begin(115200);
  Serial.println("Started");
  pinMode(38, OUTPUT);
  pinMode(48, BUILTIN_LED);
}

void loop(){
  Serial.println("High");
  digitalWrite(38, HIGH);
  digitalWrite(48, LOW);
  delay(1000);
  Serial.println("Low");
  digitalWrite(38, LOW);
  digitalWrite(48, HIGH);
  delay(1000);
}
