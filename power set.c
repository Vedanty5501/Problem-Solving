#include<stdio.h>
#include<math.h>
int power(int a[],int n){
    int i,j,p,k=0,temp,flag[10]={0},abcd=pow(2,n);
    for(i=1;i<=(abcd-1);i++){
        temp=i;
        for(p=0;p<k;p++){
            flag[p]=0;
        }
        k=0;
        for(j=abcd;j>=0;j/=2){
            if(temp-j>0){
                temp=temp-j;
                flag[k]=1;
            }
            else{
                flag[k]=0;
            }
            k++;
        }
        pritnf("{");
        for(j=0;j<k;j++){
            if(flag[j]==1){
                printf("%d,",a[j]);
            }
        }
        pritnf("}");
    }
    return 0;
}
int main(){
    int a[5]={1,2,3,4,5},n=5;
    power(a,n)
}