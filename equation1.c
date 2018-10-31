//æ±‚è§£ä¸€å…ƒäºŒæ¬¡æ–¹ç¨‹çš„æ ¹
//æŸ¥é˜…sqrt()å‡½æ•°
//æ³¨æ„æœ‰æ²¡æœ‰è§£
#include<stdio.h>
#include<math.h>
void CalculateRealRoot(double a1, double b1, double c1);
int main(void)
{   double a,b,c;
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	printf("c=");
	scanf("%lf",&c);
	CalculateRealRoot(a,b,c);
	return 0;
}
void CalculateRealRoot(double a1, double b1, double c1)
{
	double delta, x1, x2;
	delta=b1*b1-4*a1*c1;
	if (delta<0)
    {
	printf("ÎŞÊµ¸ù.\n");
    }
    else
    {
	if (delta==0)
	{
		x1=-b1/(2*a1);
		x2=-b1/(2*a1);
		printf("x1=%lf,x2=%lf",x1,x2);
	}
	else
	{
		x1=(-b1+sqrt(delta))/(2*a1);/*sqrt()º¯ÊıÇóÒ»¸öÊµÊıµÄÆ½·½¸ù£¬sqrt()º¯ÊıÊÇÔÚ"math.h"Í·ÎÄ¼şÖĞÉùÃ÷µÄ*/ 
		x2=(-b1-sqrt(delta))/(2*a1);
		printf("x1=%lf,x2=%lf",x1,x2);
	}
    }
} 

