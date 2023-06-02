int x1 = 4, x2 = 7, y1 = 6, y2 = 5;



void setup() {
  // put your setup code here, to run once:
  pinMode(x1, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(x2, OUTPUT);
}
void bin(bool x1b,bool x2b,bool y1b,bool y2b){
  digitalWrite(x1, x1b);
  digitalWrite(x2, x2b);
  digitalWrite(y1, y1b);
  digitalWrite(y2, y2b);
}
void loop() {
  // full
  bin(0,0,1,1);
  delay(1000);

  // 01 bin
  bin(0,1,0,1);
  delay(1000);

  // 10 bin row 1
  bin(0,1,1,0);
  delay(1000);

  // 11 bin row 1
  bin(0,1,1,1);
  delay(1000);

  // 01 bin row 2
  bin(1,0,0,1);
  delay(1000);

  // 10 bin row 2
  bin(1,0,1,0);
  delay(1000);

  // 11 bin row 2
  bin(1,0,1,1);
  delay(1000);

  // 10 row 1 01 row 2
  for (int i = 0; i < 100; i++){

    bin(0,1,1,0);
    delay(10);

    bin(1,0,0,1);
    delay(10);
  }
   // 01 row 1 10 row 2
  for (int i = 0; i < 100; i++){
    bin(0,1,0,1);
    delay(10);

    bin(1,0,1,0);
    delay(10);
  }
}
