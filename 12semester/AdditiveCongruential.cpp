#include<iostream>
#include<stdio.h>

using namespace std;
int main(){

int n;
printf("Enter the number of simulation steps: ");
scanf("%d",&n);
int i,b,m,r[n+1];
printf("Press Constant  number b,m:\n\n");
scanf("%d%d",&b,&m);
printf("\nPress Default Random  number r0:\n\n");
scanf("%d",&r[0]);
 printf("\nGives Random number sequence.... \n\n");
for(i=1;i<=n;i++){
    r[i]=(r[i-1]+b)%m;
     printf("R%d = %d\n",i,r[i]);
}

return 0;
}

