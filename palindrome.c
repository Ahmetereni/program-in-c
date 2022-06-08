#include <stdio.h>


int main(){
int n,r,sum=0,temp;
n=16461;
temp=n;
    while(n>0){
    r =n%10;
    printf("%d\n",n);
    sum=sum*10+r;
    n=n/10;
    }
    n=temp;
    if(n==sum)
        printf("Palindrome");

return 0;

}
