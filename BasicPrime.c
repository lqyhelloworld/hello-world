//素数是只有1和本身是因子的数
//2018/11/14 更新
#include<stdio.h>
int main() {
    //to do sth
 int x,i,m;
 scanf("%d",&x);
   for(i=2;i<x;i++)
     {
	  if(x%i==0)
          {
                 printf("%d��������",x);
                 break;
	      }
     else
     m=i;
     }
    if(m==x-1) 
    printf("%d������",x);
 return 0;
}
