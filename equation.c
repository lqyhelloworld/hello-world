//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
#include<stdio.h>
#include<math.h>
main()
{
	double a, b, c, d, e, f, x, y;
	printf("����a��b��c��d��e��f");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	printf("x=%lf,y=%lf",x,y);
 }
