int LS=4;
int RS=5;
int dirL=30;
int dirR=32;
int pwmL=10;
int pwmR=11;
int a=0;
int b=0;
int c=0;
void setup() 
{
  //Configuring IR sensor pins
pinMode(LS,INPUT);
pinMode(RS,INPUT);
  //Configuring motor driver pins-GND,PWM,Dir
pinMode(dirL,OUTPUT);
pinMode(dirR,OUTPUT);
pinMode(pwmL,OUTPUT);
pinMode(pwmR,OUTPUT);
int pwmL=0;
int pwmR=0;
Serial.begin(9600);
}

void loop() 
{
  a=digitalRead(LS);
  b=digitalRead(RS);
if(a==0 && b==1)
{
  c=1;
  Serial.print("in loop a-");
  Serial.print("c is    ");
  Serial.println(c);
} 
if(b==0 && a==1)
{
  c=2;
}
  // put your main code here, to run repeatedly:
  
  if(a==1 && b==1)//moving forward...
  {
    if(c==1)//left
    {
    digitalWrite(dirL,LOW);
    digitalWrite(dirR,LOW);
    analogWrite(pwmL,50);
    analogWrite(pwmR,198);
    c=0;
    }
    if(c==2)//right
    {
    digitalWrite(dirL,LOW);
    digitalWrite(dirR,LOW);
    analogWrite(pwmL,185);
    analogWrite(pwmR,70);
    c=0;
    }
    if(c==0)
    {
      digitalWrite(dirL,LOW);
      digitalWrite(dirR,LOW);
      analogWrite(pwmL,80);
      analogWrite(pwmR,140);
    }
  }
  if(a==1 && b==0)//moving right.....
  {
     digitalWrite(dirL,LOW);
    digitalWrite(dirR,LOW);
    analogWrite(pwmL,185);
    analogWrite(pwmR,70);
    
    Serial.println("moving right");
    
  }
  if(a==0 && b==1)//moving left....
  {
     digitalWrite(dirL,LOW);
    digitalWrite(dirR,LOW);
    analogWrite(pwmL,50);
    analogWrite(pwmR,198);
    Serial.println("moving left");
  }
}   










