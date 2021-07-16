// C++ code
//
int incomingByte = 0; 
int A = 2,B = 3,C = 4,D = 5,E = 6,F = 7,G = 8;
void setup() 
{
        Serial.begin(9600);
  		pinMode(2,OUTPUT);
 		pinMode(3,OUTPUT);
  		pinMode(4,OUTPUT);
  		pinMode(5,OUTPUT);
  		pinMode(6,OUTPUT);
  		pinMode(7,OUTPUT);
  		pinMode(8,OUTPUT);
}

void loop() {
        if (Serial.available() > 0) 
        {		digitalWrite(A,LOW);digitalWrite(B,LOW);
         		digitalWrite(C,LOW);digitalWrite(D,LOW);
         		digitalWrite(E,LOW);digitalWrite(F,LOW);
         		digitalWrite(G,LOW);
    
                incomingByte = Serial.read();
         		if(incomingByte == '0')
                {digitalWrite(A,HIGH);digitalWrite(B,HIGH);
                 digitalWrite(C,HIGH);digitalWrite(D,HIGH);
                 digitalWrite(E,HIGH);digitalWrite(F,HIGH);}
				if(incomingByte == '1')
                {digitalWrite(B,HIGH);digitalWrite(C,HIGH);}
          		if(incomingByte == '2')
                {digitalWrite(A,HIGH);digitalWrite(B,HIGH);
                 digitalWrite(D,HIGH);digitalWrite(E,HIGH);
                 digitalWrite(G,HIGH);}
         		if(incomingByte == '3')
                {digitalWrite(A,HIGH);digitalWrite(B,HIGH);
                 digitalWrite(C,HIGH);digitalWrite(D,HIGH);
                 digitalWrite(G,HIGH);}
         		if(incomingByte == '4')
                {digitalWrite(B,HIGH);digitalWrite(C,HIGH);
                 digitalWrite(F,HIGH);digitalWrite(G,HIGH);}
         		if(incomingByte == '5')
                {digitalWrite(A,HIGH);digitalWrite(C,HIGH);
                 digitalWrite(D,HIGH);digitalWrite(F,HIGH);
                 digitalWrite(G,HIGH);}
         		if(incomingByte == '6')
                {digitalWrite(A,HIGH);digitalWrite(C,HIGH);
                 digitalWrite(D,HIGH);digitalWrite(E,HIGH);
                 digitalWrite(G,HIGH);digitalWrite(F,HIGH);}
         		if(incomingByte == '7')
                {digitalWrite(A,HIGH);digitalWrite(B,HIGH);
                 digitalWrite(C,HIGH);}
         		if(incomingByte == '8')
                {digitalWrite(A,HIGH);digitalWrite(C,HIGH);
                 digitalWrite(D,HIGH);digitalWrite(E,HIGH);
                 digitalWrite(G,HIGH);digitalWrite(F,HIGH);
                 digitalWrite(B,HIGH);}
         		if(incomingByte == '9')
                {digitalWrite(A,HIGH);digitalWrite(C,HIGH);
                 digitalWrite(D,HIGH);digitalWrite(B,HIGH);
                 digitalWrite(G,HIGH);digitalWrite(F,HIGH);}
                
        }
}
  
  
  
  