// C++ code
//
int i = 6;
void waterfall(int ,int, int);
void setup()
{	
  for(i = 6; i <= 12; i++)
	pinMode(i,OUTPUT); 
}

void loop()
{	
	for(i = 6;i <= 12; i++)
    {waterfall(i,6,12);delay(500);}
}

void waterfall(int pin, int pmin, int pmax)
{
  int ix;
  for(ix = pmin ;ix <= pmax ;ix++)
  {
    if(ix == pin)
      digitalWrite(ix,HIGH);
    else 
      digitalWrite(ix,LOW);
  }
} 
  
  
