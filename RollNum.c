//Е⌡·Ф√┤Ф∙╟О╪ Ф╜ёХ╞╩Д╦▌Е▐█Х╞╩Г⌡╦Г╜┴Г └Ф∙╟
//2018/11/14 Ф⌡╢Ф√╟
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
	    	printf("%dйг╩ьндйЩ",t);
	    	break;
		}
	}
	if(n==t)
	{
		printf("%dйг╩ьндйЩ",t);
	}
	else
	printf("%d╡╩йг╩ьндйЩ",t);
	return 0;
}
