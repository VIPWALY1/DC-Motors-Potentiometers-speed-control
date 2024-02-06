int puz = 5;
int puz2 = 6;
int re = A0;
int re2 = A1;
int reading=0;
int sw = 13;
int sw2 = 12;
char reading3;
int reading2 = 0;


void setup() {
  pinMode(puz, OUTPUT);
  pinMode(puz2, OUTPUT);
  pinMode(re, INPUT);
  pinMode(re2, INPUT);
  pinMode(sw, INPUT_PULLUP); 
  pinMode(sw2, INPUT_PULLUP); 
  Serial.begin(9600);
}

void loop() {
  reading = analogRead(re);
  if (digitalRead(sw) == 1) { 
    analogWrite(puz,reading / 4);
  } else {
    analogWrite(puz, 0);
  }
  reading2 = analogRead(re2);
  if (digitalRead(sw2) == 1) {
    analogWrite(puz2,reading2/4);
  } else {
    analogWrite(puz2,0);
  }
  if (Serial.available()) {
    reading3 =Serial.read();
  if(reading3='f'){analogWrite(puz2,analogRead(re2));  ;delay(86400000);             }
   
  }
}
