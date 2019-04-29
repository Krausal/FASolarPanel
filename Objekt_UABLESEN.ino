/*  Hochschule Kempten - Fakultät Elektrotechnik
 *  Informatik 2 - Demo 1
 *  (c) 2019-03-15, Norbert Grotz
*/
int A0;
int D1;
int D2;
int D3;
class cUAblesen {
 public:
   double W1;
   double W2;
   double W3;
   double W4;
   double W5;

   cUAblesen(A0, D1, D2, D3) {
    W1=0;
    W2=0;
    W3=0;
    W4=0;
    W5=0;
    D1=LOW;
    D2=LOW;
    D3=LOW;
   }
   void update() {
    W1=A0;
    D1=HIGH;
    W2=A0;
    D2=HIGH;
    D1=LOW;
    W3=A0;
    D3=HIGH;
    D2=LOW;
    W4=A0;
    D1=HIGH;
    W5=A0;
    delay(10000000)
   }

  
    
};

void setup() {
 
}

void loop() { 

}
