#include<iostream>
#include<stdio.h>

using namespace std;
int main(){

/*
.11
.23
.24
.41
.50
.61
.64
.65
.89
.86
*/
int n,i,j;
printf("Enter the number of simulation steps: ");
scanf("%d",&n);
float r[n],r2[n],r3[n],tem,a,a1,D,c;
 printf("\nEnter Random numbers List:\n");
     r[0]=0;
     r3[0]=0;
        for (i = 1; i <= n; i++){
            scanf("%f", &r[i]);
            r2[i]=(float)i/n;
            r3[i]=(float)(i-1)/(float)n;

        }
        for (i = 1; i <= n; i++){
            for (j = i+1; j <= n; j++){
                if (r[i] > r[j]){
                    tem =  r[i];
                    r[i] = r[j];
                    r[j] = tem;
                }
            }
        }

    /*  for (i = 1; i <= n; i++){

                printf("\nI/N is %.2f",r3[i]);
            } */

   for (i = 1; i <= n; i++){
            a = r2[i]-r[i];
        if(r2[i]>r[i]){
            if(a>r[0]){
                r[0]= a;
                //printf("\nhight is %.2f",r[0]);
                }
            }
            a1 = r[i]-r3[i];
             if(r3[i]<r[i]){
            if(a1>r3[0]){
                r3[0]= a1;
                //printf("\nhight is %.2f",r3[0]);
                }
            }
   }
     if(r[0]>r3[0]){
        D=r[0];
     }
    else{
       D=r3[0];
    }

printf("\nHere..\n\t\tD+ = %.2f\n\t\tD- = %.2f",r[0],r3[0]);
printf("\nLarge division..\n\t\tD = %.2f",D);
printf("\n\nPlease give the Critical value:  ");
scanf("%f",&c);
if(c>D){
    printf("\n\nCompute value %.2f is less than Critical value %.2f",D,c);
    printf("\n  Given Random number is 'Uniformity distributed'.\n");
}
else{
    printf("\n\nCompute value %.2f is Higher than Critical value %.3f",D,c);
    printf("\n   Given Random number is Not 'Uniformity distributed'\n");
}
return 0;
}


/*
.11
.23
.24
.41
.50
.61
.64
.65
.89
.86
*/
