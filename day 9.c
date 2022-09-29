#include<stdio.h>
int main(){
    int left=1,right=22,i,n,a,c,len;
    for(i=left;i<=right;i++){
        c=0;
        len=0;
        n=i;
        while(n>0){
            a=n%10;
            if(a==0){
            	break;
            }
            if(i%a==0){
                c++;
            }
            n=n/10;
            len++;
        }
        if((len==c)&&(a!=0))
        printf("%d ",i);
    }
    return 0;
}
