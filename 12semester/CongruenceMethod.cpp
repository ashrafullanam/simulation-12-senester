#include<iostream>
#include<stdio.h>

using namespace std;
int main(){

int n;
printf("Enter the number of simulation steps: ");
scanf("%d",&n);
int i,a,b,m,r[n+1];
printf("Press Constant  number a,b,m:\n\n");
scanf("%d%d%d",&a,&b,&m);
printf("\nPress Default Random  number r0:\n\n");
scanf("%d",&r[0]);
float r1[n+1];
for(i=1;i<=n;i++){
    r[i]=((a*r[i-1])+b)%m;
}
 printf("\nGives Random number sequence.... \n\n");
 for(i=1;i<=n;i++){
    r1[i]=(float)r[i]/m;
    printf("R%d = %.4f\n",i,r1[i]);
}


return 0;
}
