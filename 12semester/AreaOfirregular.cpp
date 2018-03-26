#include<iostream>
#include<stdio.h>

using namespace std;
int main(){

int n,m,a;
printf("Enter Number of points: \n\n");
scanf("%d",&n);
printf("Press Number of Inside points: \n\n");
scanf("%d",&m);
printf("Type Area of Regular figure:\n\n");
scanf("%d",&a);
float f = ((float)m/n)*a;
printf("Area of irregular figure (F) = %.2f",f);
return 0;
}

