#include<iostream>
#include<stdio.h>
#include <math.h>

using namespace std;
int main(){

float u,l,p;
printf("Enter the Upper limit: ");
scanf("%f",&u);

printf("Enter the Lower limit: ");
scanf("%f",&l);

printf("Enter the Power of function: ");
scanf("%f",&p);
float f = (1.0/(p+1))*((pow(u,p+1))-(pow(l,p+1)));
printf("\n\nIntegration Function (I) = %.2f",f);

int n,i,m=0,s;
printf("\n\nEnter the number of simulation steps: ");
scanf("%d",&n);

float r1[n],r2[n];
printf("\nTypes Random numbers between 20 to 50 in 'X' coordinate:\n\n");
for(i=0;i<n;i++){
    scanf("%f",&r1[i]);
    r1[i]= pow((0.1*r1[i]),p);
}

 s=(int)f-12;
printf("\nTypes Random numbers between 0 to 1 in 'Y' coordinate:\n\n");
for(i=0;i<n;i++){
    scanf("%f",&r2[i]);
    r2[i]= (float)s*r2[i];
}

for(i=0;i<n;i++){
   if(r1[i]>r2[i]){
        m++;
    }


}
s *= u-l;
float result = ((float) m/n)*((float)s);
printf("\n\nIntegration Monte Carlo Method I = %.2f\n",result);
return 0;
}
