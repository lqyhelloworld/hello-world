//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
#include<stdio.h>
#include<math.h>
main()
{
	double a, b, c, d, e, f, x, y,t1,t2,t3,t4;
	printf("����a��b��c��d��e��f");
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
    printf("�޽�");
	else
	if(t3==t4)
	printf("����������");
	return 0; 
 } 
