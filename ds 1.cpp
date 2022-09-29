#include<stdio.h>
int main(){
    int arr[10],arr2[10],i,j,max=0,c=1;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
	for(i=0;i<10;i++){
		c=1;
		if(arr2[i]!=(-1)){
			for(j=i+1;j<10;j++){
				if(arr[i]==arr[j]){
				c=c+1;
				arr2[j]=(-1);
				}
			}
			arr2[i]=c+1;
		}
	}
	for(i=0;i<10;i++){
        printf("%d %d \n",arr[i],arr2[i]);
    }
	for(i=0;i<10;i++){
		if(arr2[i]!=(-1)){
			printf("%d %d\n",arr[i],arr2[i]);
		}
	}
	return 0;
}

