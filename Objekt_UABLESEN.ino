/*  Hochschule Kempten - Fakultät Elektrotechnik
 *  Informatik 2 - Demo 1
 *  (c) 2019-03-15, Norbert Grotz
*/
Sensorwert=0;
pinMode(D1, OUTPUT);
pinMode(D2, OUTPUT);
pinMode(D3, OUTPUT);

double W1=0;
double W2=0;
double W3=0;
double W4=0;
double W5=0;

class cUAblesen {
 public:
  int D1=LOW;
  int D2=LOW;
  int D3=LOW;

   cUAblesen(D1, D2, D3) {
    Sensorwert=analogRead(A0);
    return Sensorwert;
   }
};

W1=cUAblesen(0, 0, 0);
W2=cUAblesen(0, 0, 1);
W3=cUAblesen(0, 1, 0);
W4=cUAblesen(1, 0, 0);
W5=cUAblesen(1, 0, 1);



void setup() {
 
}

void loop() { 

}
