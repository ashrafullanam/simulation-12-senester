#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include<math.h>
void a();
void b();
void c();
void d();
void e();
void f();
void g();
void h();
void i();
void j();
void k();

using namespace std;
int main(){

printf("\t\t....Welcome to My Simulation project...\n\n");
printf("\nList of all Programs...\n");
printf("\t\t 1. Area of Irregular Figure\n");
printf("\t\t 2. A Gambling Game\n");
printf("\t\t 3. Numerical Integration By Monte Carlo Method\n");
printf("\t\t 4. Determination of value of PI By Monte Carlo Method\n");
printf("\t\t 5. Random walk Problem\n");
printf("\t\t 6. Mid-square Random Number Generator\n");
printf("\t\t 7. Congruence Method or Residue Method\n");
printf("\t\t 8. Multiplicative Congruential (MC) Generator\n");
printf("\t\t 9. Additive Congruential (AC) Generator\n");
printf("\t\t10. Mixed Congruential Method (a)\n");
printf("\t\t11. Mixed Congruential Method (b)\n");
printf("\t\t12. The Kolmogorov-Smirnov Test \n\n");

printf("\tPlease Enter The Serial Number to explore The Program:  ");
int s;
scanf("%d",&s);

     if(s == 1){ a();}
else if(s == 2){ b();}
else if(s == 3){ c();}
else if(s == 4){ d();}
else if(s == 5){ e();}
else if(s == 6){ f();}
else if(s == 7){ g();}
else if(s == 8){ h();}
else if(s == 9){ i();}
else if(s ==10){ j();}
else if(s == 11){ j();}
else if(s == 12){ k();}
     else{}


return 0;
}

void a(){
    printf("\n\n\n");
    printf("\t\t....Area of Irregular Figure...\n\n");
int n,m,a;
printf("Enter Number of points: \n\n");
scanf("%d",&n);
printf("Press Number of Inside points: \n\n");
scanf("%d",&m);
printf("Type Area of Regular figure:\n\n");
scanf("%d",&a);
float f = ((float)m/n)*a;
printf("Area of irregular figure (F) = %.2f",f);
}

void b(){
    printf("\n\n\n");
    printf("\t\t....A Gambling Game...\n\n");
    printf("Enter Random Numbers List:\n");
int randomnumber,head=0,tails=0,dif=0,temp,c=0;
     while(dif != 3){
/*srand(time(NULL));
    randomnumber = rand() % 9;*/
    scanf("%d",&randomnumber);
    c++;
    if(randomnumber >= 0 && randomnumber <= 4){
     head++;
    }
    else if(randomnumber >= 5 && randomnumber <= 9){
    tails++;
    }
    else{}
    if(tails<head){
        dif=head-tails;
    }
    else{
        dif=tails-head;
    }
 }
if(c<8){
        printf("Win Tk.%d\n", 8-c);
}
else if(c>8){
         printf("Loss Tk.%d\n", c-8);

}
else{
     printf("Draw Match ");
   }
}

void c(){
    printf("\n\n\n");
    printf("\t\t....Numerical Integration By Monte Carlo Method...\n\n");
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
}

void d(){
    printf("\n\n\n");
    printf("\t\t....Determination of value of PI By Monte Carlo Method...\n\n");
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
}

void e(){
    printf("\n\n\n");
    printf("\t\t....Random walk Problem...\n\n");
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
}

void f(){
printf("\n\n\n");
printf("\t\t....Mid-square Random Number Generator...\n\n");
  long int seed; //take any 4 digit Number without trailing 00
    int i, n, random;
    printf("How many number you want to generate : ");
    scanf("%d", &n);
    printf("\nEnter the SEED number:  ");
    scanf("%ld",&seed);
    printf("\n\nRandom Numbers List : ");
    printf("\n\n");
    for(i = 0; i < n; i++)
    {
        seed = seed * seed;
        seed = seed / 100;       //Take the dividend
        seed = seed % 10000;    // Take the reminder
        random = seed;
        printf("%d ", random);
        printf("\t");
    }

    printf("\n");
}

void g(){
    printf("\n\n\n");
    printf("\t\t....Congruence Method or Residue Method...\n\n");
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
}

void h(){
    printf("\n\n\n");
    printf("\t\t....Multiplicative Congruential (MC) Generator...\n\n");
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
}

void i(){
    printf("\n\n\n");
    printf("\t\t....Additive Congruential (AC) Generator...\n\n");
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
}

void j(){
    printf("\n\n\n");
    printf("\t\t....Mixed Congruential Method...\n\n");
int n;
printf("Enter the number of simulation steps: ");
scanf("%d",&n);
int i,a,b,m,r[n+1];
printf("Press Constant  number a,b,m:\n\n");
scanf("%d%d%d",&a,&b,&m);
printf("\nPress Default Random  number r0:\n\n");
scanf("%d",&r[0]);
printf("\nGives Random number sequence.... \n\n");
for(i=1;i<=n;i++){
    r[i]=((a*r[i-1])+b)%m;
     printf("R%d = %d\n",i,r[i]);

}
}

void k(){
    printf("\n\n\n");
    printf("\t\t....The Kolmogorov-Smirnov Test...\n\n");
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
}
