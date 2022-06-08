#include <stdio.h>


int main(){
int n,a=0,b=1,sum;
printf("Enter limit: ");
scanf("%d",&n);

for (int i=1;i<=n;i++){
    printf("%d,",a);
    sum=a+b;
    a=b;
    b=sum;
}
return 0;
}
