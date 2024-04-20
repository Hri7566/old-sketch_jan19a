int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int pinI = 9;
int D1 = 10;
int D2 = 11;
int D3 = 12;
int D4 = 13;

int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);
  pinMode(pinE,OUTPUT);
  pinMode(pinF,OUTPUT);
  pinMode(pinG,OUTPUT);
  pinMode(pinI,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
}

void process() {
  if (val4 > 9) {
    val4 = 0;
    val3 += 1;
  }
  if (val3 > 9) {
    val3 = 0;
    val2 += 1;
  }
  if (val2 > 9) {
    val2 = 0;
    val1 += 1;
    if (val1 > 9) {
      val1 = 0;
      val2 = 0;
      val3 = 0;
      val4 = 0;
    }
  }
  delay(1);
}

int change(int num) {
  if (num == 1) {
    digitalWrite(D1,HIGH);
    digitalWrite(D2,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D4,LOW);
    delay(1);
  } else if (num == 2) {
    digitalWrite(D1,LOW);
    digitalWrite(D2,HIGH);
    digitalWrite(D3,LOW);
    digitalWrite(D4,LOW);
    delay(1);
  } else if (num == 3) {
    digitalWrite(D1,LOW);
    digitalWrite(D2,LOW);
    digitalWrite(D3,HIGH);
    digitalWrite(D4,LOW);
    delay(1);
  } else if (num == 4) {
    digitalWrite(D1,LOW);
    digitalWrite(D2,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D4,HIGH);
    delay(1);
  }

}

void loop() {
  process();
  delay(1);
  change(1);
  val4 += 1;
  switch (val1) {
    case 1:
      
      
      
      
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
    case 2:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 3:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 4:
      
      
      
      
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 5:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 6:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 7:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
    case 8:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 9:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 0:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
  }
  process();
  delay(1);
  change(2);
  switch (val2) {
    case 1:
      
      
      
      
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
    case 2:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 3:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 4:
      
      
      
      
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 5:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 6:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 7:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
    case 8:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 9:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 0:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
  }
  process();
  delay(1);
  change(3);
  switch (val3) {
    case 1:
      
      
      
      
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
    case 2:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 3:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 4:
      
      
      
      
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 5:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 6:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 7:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
    case 8:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 9:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 0:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
  }
  
  process();
  delay(1);
  change(4);
  switch (val4) {
    case 1:
      
      
      
      
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
    case 2:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 3:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 4:
      
      
      
      
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 5:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 6:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 7:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
    case 8:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 9:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinI,HIGH);
      
      break;
    case 0:
      
      
      
      
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinI,HIGH);
      
      break;
  }
}
