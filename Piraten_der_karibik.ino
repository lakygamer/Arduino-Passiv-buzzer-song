const int cf2 = 87;
const int ca2=110;
const int cas2 = 116.5;
const int cb2 = 123;
const int cc = 131;
const int ccs = 139;
const int cd = 147;
const int ce = 165;
const int cf = 175;
const int cg =196;
const int cgs =208;
const int ca =220;
const int cas =233; 
const int cb =247;
const int ccH =262;
const int ccsH = 277;
const int cdH = 294;
const int ceH = 329;
const int cfH = 349;
const int cgH = 391;
const int caH = 440;
const int cbH = 466;
const int cc1H = 523;
// hohe abfolge ->
const int a2 = 220; // tiefer als c
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;

const int buzzerPin = 8;
const int ledPin1 = 5;
const int ledPin3 = 3;
const int ledPin4 = 2;
const int ledPin2 = 4;
int counter = 0;
int q = 0;
int y = 0;
int v = 0;

void setup() {
  // put your setup code here, to run once:
 pinMode(buzzerPin, OUTPUT);
 pinMode(ledPin1, OUTPUT);
 pinMode(ledPin2, OUTPUT);
 pinMode(ledPin3, OUTPUT);
 pinMode(ledPin4, OUTPUT);
 pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000);
 if (q <1){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  firstsection();
 }
}
void firstsection() {
  // put your main code here, to run repeatedly:
  beep(cd , 500);
   beep(ce , 500);
   beep(cf , 750);
   beep(cg , 250);
   beep(ca, 500);
   // ende erste Zeile
   beep(cg, 500);
   beep(cf, 500);
   beep(ce, 500);
   beep(cf, 500);
   beep(cg, 500); 
   beep(ca, 500);
   // end zweite z.
   beep(cg, 750);
   delay(250);
   beep(cf, 250);
   beep(cg, 250);
   beep(ca, 750);
   beep(cg, 250);
   beep(cf, 500);
   //end 3 Z.
   beep(ce, 500);
   beep(cf, 500);
   beep(ce, 500);
   beep(cd, 750);
   beep(ce, 250);
   beep(cc, 500);
   //end 4 Z.
   beep(cd, 125);
   beep(cd, 125);
   beep(cd, 250);
   delay(250);
   beep(cc, 250);
   beep(ca2, 250);
   delay(250);
   beep(ca2, 125);
   beep(ca2, 125);
   beep(ca2, 250);
   delay(250);
   beep(ca,125);
   beep(ca ,125);
   beep(cdH, 250);
   beep(ceH, 250);
   //end 5 Z.
   beep(cfH, 750);
   beep(ceH,250);
   beep(cfH, 500);
   beep(cgH, 500);
   beep(cfH, 500);
   beep(cgH, 500);
   //end 6 Z.
   beep(caH, 750);
   beep(cgH, 250);
   beep(cfH, 500);
   beep(cdH, 1000);
   beep(cdH, 250);
   beep(ceH, 250);
   //end 7 Z.
   beep(cfH, 500);
   beep(cgH, 500);
   beep(caH, 500);
   beep(cbH, 500);
   beep(cdH, 750);
   beep(cgH, 250);
   beep(cfH, 750);
   beep(cgH,250);
   beep(ceH,500);
   //end 8 Z.
   beep(ca, 750);
   beep(ca, 250);
   beep(cf, 250);
   beep(ce, 250);
   beep(cd, 1500); // zwischen stop
   beep(cd, 750);
   beep(ca2, 250);
   beep(cd, 500);
  
   //end 9 Z.
   beep(ce, 500);
   beep(ca2, 500);
   beep(ce, 500);
   beep(cf, 750);
   beep(ce, 250);
   beep(cd, 500);
   beep(ce, 1000);
   beep(cdH, 250);
   beep( ceH, 250);
   // end  10 Z.
   beep(cfH, 750);
   beep(ceH, 250);
   beep(cdH, 500);
   beep(ccH, 500);
   beep(cfH, 500);
   beep(ca, 500);
   beep(cg, 750);
   beep(cf, 250);
   beep(cg, 500);
   //end 11 Z.
   beep(ca, 500);
   beep(cb2, 500); 
   beep(ccs, 500);
   beep(cd, 250);
   delay(125);
   beep(cc, 125);
   beep(cd, 250);
   beep(ce, 250);
   beep(cf, 250);
   beep(cf2, 250);
   //end 12 Z.
   beep(cd, 250);
   delay(125);
   beep(cf, 125);
   beep(ce, 250);
   beep(cc, 250);
   beep(cd, 250);
   beep(ca2, 250);
   beep(cd, 250);
   delay(125);
   beep(cc, 125);
   beep(cd, 250);
   beep(ce, 250);
   beep(cf, 250);
   beep(cg, 250);
   //end 13 Z.
   beep(ca, 250);
   delay(250);
   beep(ce, 250);
   delay(250);
   beep(cc, 250);
   delay(250);
   beep(cd, 250);
   delay(125);
   beep(cc, 125);
   beep(cd, 250);
   beep(ce, 250);
   beep(cf, 250);
   beep(cb2, 250);
   //end 14 Z.
   beep(cd, 250);
   delay(125);
   beep(cf,125);
   beep(ce, 250);
   beep(cc, 250);
   beep(cd, 250);
   beep(ca2, 250);
   beep(cd, 250);
   delay(125);
   beep(cc, 125);
   beep(cd, 250);
   beep(ce, 250);
   beep(cf, 250);
   beep(cg, 250);
   //end 15 Z.
   beep(ca,250);
   delay(250);
   beep(cb, 250);
   beep(cb, 250);
   beep(ccsH, 250);
   beep(ccsH, 250);
   beep(cdH,250);
   beep(ceH, 250);
   beep(cfH, 750);
   beep(cgH, 250);
   beep(caH, 500);
   //end 16 Z.
   beep(cgH, 500);
   beep(cfH, 500);
   beep(ceH, 500);
   beep(cfH, 500);
   beep(cgH, 500);
   beep(caH, 500);
   beep(cgH, 1500);
   /*beep(cfH, 250);
   beep(cgH, 250);
   //end 17 Z.
   beep(caH, 500);
   beep(cgH, 500);
   beep(cdH, 500);
   beep(ccsH, 500);
   beep(cb2, 500);
   beep(cd, 500);
   beep(cd, 500);
   beep(cd, 500);
   beep(cc, 500);
   beep(cd, 500);
   beep(cas2, 500);
   beep(ce, 500);*/
  
   
   
   delay(750);
   q = q+2;
   
}

void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  Serial.println(duration);
  y = duration;
  Serial.println(duration);
  v = y/2;
  Serial.println(v);
  //Play different LED depending on value of 'counter'
  if(counter % 2 == 0)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(v);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    delay(v);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }else
  {
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(v);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin1, HIGH);
    delay(v);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin3, LOW);
  }
 
  //Stop tone on buzzerPin
  noTone(buzzerPin);
 
  delay(50);
 
  //Increment counter
  counter++;
}
