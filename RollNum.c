//回文数：正读与反读相等的数
//2018/11/14 更新
#include<stdio.h>
int main(){
	int x,n,t;
	scanf("%d",&x);
	n=0;
	t=x;
	while(1){
		if(t>=10){
		n=n*10+x%10;
		x=x/10;
		if(x<10){
			n=n*10+x;
			break;
		}
	    }
	    else{
	    	printf("%d�ǻ�����",t);
	    	break;
		}
	}
	if(n==t)
	{
		printf("%d�ǻ�����",t);
	}
	else
	printf("%d���ǻ�����",t);
	return 0;
}
