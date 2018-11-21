//ç´ æ•°æ˜¯åªæœ‰1å’Œæœ¬èº«æ˜¯å› å­çš„æ•°
//2018/11/14 æ›´æ–°
#include<stdio.h>
int main() {
    //to do sth
 int x,i,m;
 scanf("%d",&x);
   for(i=2;i<x;i++)
     {
	  if(x%i==0)
          {
                 printf("%d²»ÊÇËØÊı",x);
                 break;
	      }
     else
     m=i;
     }
    if(m==x-1) 
    printf("%dÊÇËØÊı",x);
 return 0;
}
