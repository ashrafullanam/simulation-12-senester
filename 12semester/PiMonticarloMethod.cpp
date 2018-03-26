#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
int main(){

int i,n,m=0;
printf("Enter the number of simulation steps: ");
scanf("%d",&n);
float r1[n],r2[n];
printf("\nPress R1 random number list:\n\n");
for(i=0;i<n;i++){
    scanf("%f",&r1[i]);
}
printf("\nPress R2 random number list:\n\n");
for(i=0;i<n;i++){
    scanf("%f",&r2[i]);
}

for(i=0;i<n;i++){
    if(r2[i] <= sqrt(1-(r1[i]*r1[i])) ){
     m++;
    }
}
float f= ((float)m/n)*4;
printf("\n\nValue of 'pi' by Monte Carlo Method: %.2f\n",f);


return 0;
}
