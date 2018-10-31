//æ±‚è§£å¦‚ä¸‹æ–¹ç¨‹ç»„
//ax + by = c
//dx + ey = f
//æ³¨æ„è¾“å…¥/è¾“å‡ºï¼Œæ•°æ®ç±»å‹
#include<stdio.h>
#include<math.h>
main()
{
	double a, b, c, d, e, f, x, y,t1,t2,t3,t4;
	printf("ÊäÈëa£¬b£¬c£¬d£¬e£¬f");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	t1=(a*e-b*d);
	t2=(b*d-a*e);
	t3=b/a;
	t4=e/d;
	if(t1 !=0 && t2!=0)
	printf("x=%lf,y=%lf",x,y);
    else
    if (t1==0&&c!=f)
    printf("ÎŞ½â");
	else
	if(t3==t4)
	printf("ÓĞÎŞÇî¶à×é½â");
	return 0; 
 } 
