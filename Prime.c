/*����������������Ȼ����Ϊ��������:��������,��������֮��,��������֮���Լ��������ֵ�ƽ���Ͷ�������.����113����һ����������.��[100,9999]֮��:
(1)���������ĸ���.
(2)���г�������֮��.
(3)���ĳ�������.*/
//2018/11/14 更新
#include<stdio.h> 
int sum_bit(int num) {
	int x,y,i,j,prime1;
	y=0;
	while(num>0){
		x=num%10;
		y=y+x;
		num=num/10;
	}
	for(i=2;i<y;i++){
		if(y%i==0)//��������֮�Ͳ������� 
		{
			break;
		}
		else
		j=i;
	}
	if(j==y-1){//��������֮�������� 
		prime1=1;
	}
	else
	prime1=0;
  if(prime1==1)
  return 1;
  else
  return 0;
}

int multi_bit(int num) {
	int x,y,i,j,prime2;
	y=1;
	while(num>0){
		x=num%10;
		y=y*x;
		num=num/10;
	}
	for(i=2;i<y;i++){
	    if(y%i==0){//��������֮���������� 
	    	break;
		}
		else
		j=i;
	}
	if(j==y-1){//��������֮�������� 
		prime2=1;
	}
	else
	prime2=0;
  if(prime2==1)
  return 1;
  else
  return 0;
}

int square_sum_bit(int num) {
	int x,y,i,j,prime3;
	y=0;
	while(num>0){
		x=num%10;
		y=y+x*x;
		num=num/10;
		}
	for(i=2;i<y;i++){
		if(y%i==0){//��������ƽ���Ͳ������� 
			break;
		}
		else
		j=i;
	}	
	if(j=y-1){//��������ƽ���������� 
		prime3=1;
	}
	else
	prime3=0;
  if(prime3==1)
  return 1;
  else
  return 0;
}

int isprime(int num) {
	int i,j,prime;
	for(i=2;i<num;i++){
		if(num%i==0){
			break;
		}
		else
		j=i;
	}
	if(j==num-1){
		prime=1;
	}
	else
	prime=0;
   if(prime==1)	
  return 1;
  else
  return 0;
}

int main() {
  int i,n,sum,max;
  n=0;
  sum=0;
  for(i=100;i<10000;i++){
  	if(sum_bit(i)==1&&multi_bit(i)==1&&square_sum_bit(i)==1&&isprime(i)==1){
  		printf("%d�ǳ�������\n",i);
  		n+=1;
  		sum+=i;
  		max=i;
	  }
  }
  printf("���������ĸ���Ϊ%d\n",n);
  printf("���г�������֮��Ϊ%d\n",sum);
  printf("���ĳ�������Ϊ%d\n",max);
  return 0;  
}
