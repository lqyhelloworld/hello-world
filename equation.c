//æ±‚è§£å¦‚ä¸‹æ–¹ç¨‹ç»„
//ax + by = c
//dx + ey = f
//æ³¨æ„è¾“å…¥/è¾“å‡ºï¼Œæ•°æ®ç±»å‹
#include<stdio.h>
#include<math.h>
main()
{
	double a, b, c, d, e, f, x, y;
	printf("ÊäÈëa£¬b£¬c£¬d£¬e£¬f");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	printf("x=%lf,y=%lf",x,y);
 }
