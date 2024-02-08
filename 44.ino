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
   
  if(Serial.available()){
  reading3=Serial.read();
  if(reading3=='L'){reading=analogRead(re);analogWrite(puz,reading/4);}
                         
                                 
                                 
                                 }
}
