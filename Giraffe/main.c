#include <stdio.h>


int main(){
    int rangenum=6;
while(rangenum<10000){
    hello(rangenum);
    rangenum++;

}


    return 0;

}


void hello(int n){
    int i,sum=0;

for (i=1;i<n;i++){
if(n%i==0){
    sum=sum+i;
}


}
if(n==sum){
    printf("%d\n",n);
}

       }
