  int red=2;
  int green=3;
  int blue=4;
  int value=A0;
  int r;
  int b;
  int g;

  int k2;
  int times=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
   pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(value,INPUT);
    pinMode(redout,OUTPUT);
    pinMode(greenout,OUTPUT);
    pinMode(blueout,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
     digitalWrite(red,HIGH);
     delay(40);
   
     r=map(analogRead(value),0,511,0,255);
   
     // r[k2]=(((r[0]+r[1]+r[2])/3)-30)*2.83;
     delay(100);
     Serial.print("R=");
     Serial.println(r);
     delay(1000);
     digitalWrite(red,LOW);
     
     digitalWrite(green,HIGH);
     delay(40);
  
     g=map(analogRead(value),0,511,0,255);
   
     // g[k2]=(((g[0]+g[1]+g[2])/3)-30)*2.83;
     delay(100);
     Serial.print("G=");
     Serial.println(g);
     delay(1000);
     digitalWrite(green,LOW);
     
     digitalWrite(blue,HIGH);
     delay(40);
 
     b=map(analogRead(value),0,511,0,255);
    
     //b=(((b[0]+b[1]+b[2])/3)-30)*2.83;
     delay(100);
     Serial.print("B=");
     Serial.println(b);
     delay(1000);
     digitalWrite(blue,LOW);

}
