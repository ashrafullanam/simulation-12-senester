#include<stdio.h>
int main()
{
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
    return 0;
}
