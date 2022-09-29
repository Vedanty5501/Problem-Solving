#include<stdio.h>
int pattern(o,n,c){
	printf("%d ",n);
	if(c==1&&n==o){
		return 0;
	}
	if(n<=0){
		c=1;
	}
	if(c==0){
		n=n-5;
		return pattern(o,n,c);
	}
	else{
		n=n+5;
		return pattern(o,n,c);
	}
}
int main()
{
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	pattern(16,16,0);
    return 0;
}
