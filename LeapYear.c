//被4整除的年份是闰年，但是00结尾的年份被400整除才是闰年。
#include<stdio.h>
int main(){
	int x;
	while(1){
	scanf("%d",&x);
	if(x==0){
		break;
	}
	else if(x%100!=0&&x%4==0)
	printf("%d������\n",x);
	else if(x%100==0&&x%400==0) 
	printf("%d������\n",x);
	else
	printf("%d��������\n",x);
	}
	return 0;
}
