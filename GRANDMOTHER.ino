
int potval1;
int potval2;
int potval3;

int pot1 = A2;
int pot2 = A3;
int pot3 = A4;

int x, y; 
int xPin = A0; int yPin = A1;
int light; int lightPin = A5;
int buttonVAL;

const int LED = 4;
const int BUTT = 5;

void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("commencing Grandmother");

  pinMode(LED, OUTPUT);
  pinMode(BUTT, INPUT);

}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  buttonVAL = digitalRead(BUTT);
  

  potval1 = analogRead(pot1);
  potval2 = analogRead(pot2);
  potval3 = analogRead(pot3);

  x = analogRead(xPin);
  y = analogRead(yPin);

  light = analogRead(lightPin);
  
  char buf[64];
  sprintf(buf, ":%05u:%05u:%05u:%05u:%05u:%05u:%05u", x, y, potval1, potval2, potval3, light);
  Serial.println(buf);
   
}
