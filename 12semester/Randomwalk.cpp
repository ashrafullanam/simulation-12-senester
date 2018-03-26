#include<iostream>
#include<stdio.h>

using namespace std;
int main(){

int n,r,x=0,y=0;
printf("Enter the number of simulation steps: ");
scanf("%d",&n);
printf("\nPress Random  number List:\n\n");
while(n){

scanf("%d",&r);

if(r>= 0 && r<=4){
    y++;
}
 else if(r>= 5 && r<=7){
    x--;
 }
 else if(r>7 && r<10){
    x++;
 }
else{
}
n--;
}

printf("Walk Position...\n\t\tX = %d , Y = %d\n",x,y);
return 0;
}
