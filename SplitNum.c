//è¾“å…¥æ•´æ•°ï¼Œå°†æ¯ä½æ•°å­—æ‰“å°å‡ºæ¥ï¼ˆä»Žå·¦å‘å³æ‰“å°ï¼Œç©ºæ ¼åŒºåˆ†ï¼‰
//2018/11/14 æ›´æ–°
#include<stdio.h>
int main(){
	int num,n,x,y,m;
	scanf("%d",&num);
	n=num;
	x=0;
	y=0;
	while(n>0){//ÏÈÀûÓÃ»ØÎÄÊý·´Ò»´Î £¬Èç¹û´ËÊ±´òÓ¡ÔòË³Ðò±Ø´ÓÓÒÍù×ó 
		x=x*10+n%10;
		n=n/10;
	}
	m=x;
	while(1){// ÔÚÀûÓÃ»ØÎÄÊý·´»ØÈ¥£¬´ËÊ±´òÓ¡Ë³Ðò ±Ø´Ó×óÍùÓÒ
	if(x>0){
	y=x%10;
	printf("%d ",y);
	x=x/10;
	   } 
	 else
	 break;  
	}
}

