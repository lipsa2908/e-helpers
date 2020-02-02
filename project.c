#include<string.h>
#include<Softwareserial.h>
SoftwareSerial my Serial(3,2);
Void setup()
{
mySerial.begin(9600);
Serial.begin(9600) ; 
Delay(100);
pinMode(4,OUTPUT);
pinMde(5,OUTPUT);
mySerial.print(“AT+CNMI=2,2,0,0,0\r”);
delay(1000);
mySerial.print(“AT+CMGD=1,4”);
Serial.println(“DEL ALL”);
Delay(1000);
}
Void loop()
{
int i=0;
char ch;
char data[200]={};
while(mySerial.available()<=0);
while(mySerial.available()>0)
{
Ch=mySerial.read();
Serial.print(ch);
if (ch==’#)
break;
data[i]=ch;
i++;
delay(50);
}
Serial.print(“”);
delay(1000);
if(strstr(data,”relay1on”))
{
Serial.println(“Relay1 ON”);
digitalWrite(4,HIGH);
delay(300);
digitalWrite(4,LOW);
}
If(strstr(data,”relay1off”))
{
Serial.primtln(“Relay 1 OFF”);
digitalWrite(4,LOW);
}
If(strstr(data,”relay2on”))
{
Serial.print(“Relay 2 ON”);
digitalWrite(5,HIGH);
delay(300);
digitalWrite(5,LOW);
}
If(strstr(data,”relay2off)) 
{
Serial.print(“Relay 2 OFF);
digitalWrite(5,LOW);
}
}
