#include<stdio.h>
#include <stdlib.h>
int main(){

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

return 0;
}
