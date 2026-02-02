#include<reg51.h>
sbit led1=P1^0;
sbit led2=P1^1;
sbit led3=P1^2;

void main()
{
	while(1)
	{
		unsigned int i ;
		
		led1=1;
		for(i=0;i<5000;i++);
		led1=0;
		for(i=0;i<3000;i++);
		led2=1;
		for(i=0;i<4000;i++);
		led2=0;
		for(i=0;i<2500;i++);
		led3=1;
		for(i=0;i<3700;i++);
		led3=0;
		for(i=0;i<1500;i++);
	}
}
		
