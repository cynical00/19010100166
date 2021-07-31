#include <MsTimer2.h>
int incomingByte = 0;   //串口数据
int a = 1;int b = 0;int c = 0;int d= 0;   //用于写入引脚2-5
int count = 2;                            //个位计数
int status = 0;                           //十位对应LT管脚状态
int cnt = 0;                              //十位计数

void setup()
{
  	Serial.begin(9600);           //初始化串口
  	pinMode(2,OUTPUT);            
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);            //个位LT管脚
    pinMode(7,OUTPUT);            //十位LT管脚
  	MsTimer2::set(1000, onTimer);   //设置定时器中断，每秒触发一次
    MsTimer2::start();
}

void onTimer()
{   
    if(status)                            //若状态为传输数据则将cnt写入管脚2-5，
    {                                     //状态为锁存则跳过
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        if(cnt < 9)
        cnt++;
        else
        cnt = 0;
        a = a|(cnt & (1 << 0));           //通过移位将cnt的四位二进制形式写入a,b,c,d
        b = b|(cnt & (1 << 1));
  	    c = c|(cnt & (1 << 2));
        d = d|(cnt & (1 << 3));
 	      digitalWrite(2,a);
  	    digitalWrite(3,b);
  	    digitalWrite(4,c);
  	    digitalWrite(5,d);
        a = 0;b = 0;c = 0;d = 0;
        status = 0;                       //状态复位
    }

 	  digitalWrite(6,LOW);                  //个位保持传输状态
  	digitalWrite(7,HIGH);

    digitalWrite(2,a);
  	digitalWrite(3,b);
  	digitalWrite(4,c);
  	digitalWrite(5,d);

  	a = 0;b = 0;c = 0;d = 0;
  	if (count <= 9 )
    {
    a = a|(count & (1 << 0));
    b = b|(count & (1 << 1));
  	c = c|(count & (1 << 2));
    d = d|(count & (1 << 3));
    count++;
    }
  	else 
        {
            count = 1;
            status = 1;
        }

}

void loop()
{
   if (Serial.available() > 0) 
   {	
     incomingByte = Serial.read();
     if(incomingByte)               //若串口数据不为空，则立即从00开始计数，
     {                              //并初始化状态与计数值
     	digitalWrite(6,LOW);
    	digitalWrite(7,LOW);
      a = 0;b = 0;c = 0;d = 0;
   	  digitalWrite(2,a);
  		digitalWrite(3,b);
  		digitalWrite(4,c);
  		digitalWrite(5,d);
      
      status = 0; count = 2;cnt = 0;
      a = 1;b = 0;c = 0;d = 0;
     }
   }
   
     
}