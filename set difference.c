#include<stdio.h>
int diff(int a[],int n,int b[],int m){
	int i,j,flag,c=0;
	printf("Set differnce is : ");
	for(i=0;i<n;i++) 
	{
		flag=0; 
		for(j=0;j<m;j++) 
		{
			if(a[i]==b[j]) 
			{
				flag=1;
				break;
			}
		}
	 	if(flag==0){
			printf("%d\t",a[i]); 
			c++;
		}
	}
	if(c==0){
		printf("%c",232);
	}
}
 int main ()
{
	int i,n,m,j,a[100],b[100],flag=0; 
	printf("enter the size of the sets a : ");
	scanf("%d",&n);
	printf("enter the element of set a :\n"); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the size of set b : ");
	scanf("%d",&m);
	printf("enter the element of set b :\n");
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	diff(a,n,b,m);
	return 0; 
}
