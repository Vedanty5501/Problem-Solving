#include<stdio.h>
int look_and_say(n){
    int i,j,so=1,sn,k,ct;
    int sto[100],stn[100]={0};
    sto[0]=1;
    for(i=0;i<n;i++){
        for(j=0;j<so;j++){
            printf("%d",sto[j]);
        }
        ct=1;
        sn=0;
        for(j=0;j<so;j++){
            if(sto[j]==sto[j+1]){
            	ct++;
			}
			else{
				stn[sn]=ct;
            	stn[sn+1]=sto[j];
            	sn=sn+2;
            	ct=1;
			}   
        }
        for(j=0;j<sn;j++){
            sto[j]=stn[j];
            stn[j]=0;
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
