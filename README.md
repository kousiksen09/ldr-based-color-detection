# ldr-based-color-detection
LDR based color detecting system using arduino uno.
Circuit Explanation:
Digital pin 2,3,4 connected to led pin with 220 ohm register. One pin of LDR sensor is connected to the 5V of arduino and another pin is connected through a 10 k register with gnd. 

Code explanation:
  int red=2;
  int green=3;
  int blue=4;
  int value=A0;
  int r;
  int b;
  int g;

  int k2;
  int times=3;
  Here I initiliaze the variable with pin connection .
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
Then in void set up section I define the mode as input or output of the pin.
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
  In the loop section at first I high the red led and take the ldr sensor value in the variable r and print the analog value to the serial monitor. Same thing I repeat for the others 2 led. 
  
