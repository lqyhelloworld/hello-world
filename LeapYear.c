//è¢«4æ•´é™¤çš„å¹´ä»½æ˜¯é—°å¹´ï¼Œä½†æ˜¯00ç»“å°¾çš„å¹´ä»½è¢«400æ•´é™¤æ‰æ˜¯é—°å¹´ã€‚
#include<stdio.h>
int main(){
	int x;
	while(1){
	scanf("%d",&x);
	if(x==0){
		break;
	}
	else if(x%100!=0&&x%4==0)
	printf("%d是闰年\n",x);
	else if(x%100==0&&x%400==0) 
	printf("%d是闰年\n",x);
	else
	printf("%d不是闰年\n",x);
	}
	return 0;
}
