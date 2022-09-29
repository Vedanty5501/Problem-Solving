#include<stdio.h>
int look_and_say(n){
    int i,j,so=1,sn=0,k;
    int sto[100],stn[100];
    sto[0]=1;
    for(i=0;i<n;i++){
        for(j=0;j<so;j++){
            ct=0
            for(k=j;k<so;k++){
                if(sto[j]==sto[k]){
                    ct++;
                }
                else{
                    break;
                }
            }
            stn[sn]=ct;
            stn[sn+1]=sto[j];
            sn=sn+2;
        }
        for(j=0;j<so;j++){
            printf("%d",so[j]);
        }
        for(j=0;j<sn;j++){
            so[j]=sn[j];
        }
        so=sn;
        printf("\n");
    }
    return 0;
}
int main(){
    look_and_say(5);
    return 0;
}