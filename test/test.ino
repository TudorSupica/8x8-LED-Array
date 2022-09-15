int x1 = 4, x2 = 7, y1 = 6, y2 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(x1, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(x2, OUTPUT);
}

void loop() {
  // full
  digitalWrite(x1, LOW);
  digitalWrite(x2, LOW);
  digitalWrite(y1, HIGH);
  digitalWrite(y2, HIGH);
  delay(1000);

  // 01 bin
  digitalWrite(x1, LOW);
  digitalWrite(x2, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(y2, HIGH);
  delay(1000);

  // 10 bin row 1
  digitalWrite(x1, LOW);
  digitalWrite(x2, HIGH);
  digitalWrite(y1, HIGH);
  digitalWrite(y2, LOW);
  delay(1000);

  // 11 bin row 1
  digitalWrite(x1, LOW);
  digitalWrite(x2, HIGH);
  digitalWrite(y1, HIGH);
  digitalWrite(y2, HIGH);
  delay(1000);

  // 01 bin row 2
  digitalWrite(x1, HIGH);
  digitalWrite(x2,  LOW);
  digitalWrite(y1, LOW);
  digitalWrite(y2, HIGH);
  delay(1000);

  // 10 bin row 2
  digitalWrite(x1, HIGH);
  digitalWrite(x2,  LOW);
  digitalWrite(y1, HIGH);
  digitalWrite(y2, LOW);
  delay(1000);

  // 11 bin row 2
  digitalWrite(x1, HIGH);
  digitalWrite(x2,  LOW);
  digitalWrite(y1, HIGH);
  digitalWrite(y2, HIGH);
  delay(1000);

  // 10 row 1 01 row 2
  for (int i = 0; i < 100; i++){
    digitalWrite(x1, LOW);
    digitalWrite(x2,  HIGH);
    digitalWrite(y1, HIGH);
    digitalWrite(y2, LOW);
    delay(10);
    digitalWrite(x1, HIGH);
    digitalWrite(x2,  LOW);
    digitalWrite(y1, LOW);
    digitalWrite(y2, HIGH);
    delay(10);
  }
   // 01 row 1 10 row 2
  for (int i = 0; i < 100; i++){
    digitalWrite(x1, LOW);
    digitalWrite(x2,  HIGH);
    digitalWrite(y1, LOW);
    digitalWrite(y2, HIGH);
    delay(10);
    digitalWrite(x1, HIGH);
    digitalWrite(x2,  LOW);
    digitalWrite(y1, HIGH);
    digitalWrite(y2, LOW);
    delay(10);
  }
}
