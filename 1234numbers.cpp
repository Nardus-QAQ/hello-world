/*由1，2，3，4组成的无重复的三位数字*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=4;b++)
		{
			for(c=1;c<=4;c++)
			{
				d=c+10*b+100*a;
				e=d/100;
				f=(d-100*e)/10;
				g=c;
				if(e!=f&&f!=g)
				printf("%d \n",d);
			}
		}
	}
 } 
