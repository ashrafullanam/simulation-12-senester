#include<iostream>
#include<stdio.h>

using namespace std;
int main(){

int n;
printf("Enter the number of simulation steps: ");
scanf("%d",&n);
int i,a,m,r[n+1];
printf("Press Constant  number a,m:\n\n");
scanf("%d%d",&a,&m);
printf("\nPress Default Random  number r0:\n\n");
scanf("%d",&r[0]);
 printf("\nGives Random number sequence.... \n\n");
for(i=1;i<=n;i++){
    r[i]=(a*r[i-1])%m;
     printf("R%d = %d\n",i,r[i]);
}

return 0;
}
