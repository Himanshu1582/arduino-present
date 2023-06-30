int PIN_RED   = 9;
int PIN_GREEN = 10;
int PIN_BLUE  = 11;

int i = 0;
int j = 0;
int k = 0;

void setup() 
{
    pinMode(PIN_RED,OUTPUT);
    pinMode(PIN_GREEN,OUTPUT);
    pinMode(PIN_BLUE,OUTPUT);
}

void loop() {

  setColor(i=random(255),j=random(255),k=random(255));
  delay(100);
  for(i=0;i<=254;i++)
  {
  setColor(255,i,255-i);
  delay(10);
  }
    for(i=0;i<=254;i++)
    {
  setColor(i,0,255-i);
  delay(10);
    }

    for(i=0;i<=254;i++)
    {
  setColor(255,255-i,i);
  delay(10);
    }
      for(i=0;i<=254;i++)
 { setColor(0,255-i,i);
  delay(10);}
  
  

//for(i=0;i<=254;i++)
//{
//      setColor(i,(127.5-i)*2,255-i);
//      delay(20);
//}

  
 

}

void setColor(int rval,int gval,int bval)
{
 analogWrite(PIN_RED,rval);
 analogWrite(PIN_GREEN,gval);
 analogWrite(PIN_BLUE,bval);
}
