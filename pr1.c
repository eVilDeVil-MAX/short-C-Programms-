#include <stdio.h>

int avg(int a, int b , int c);
int main()
{
    int j,g,k;
    printf("enter 3 numbers:");
    scanf("%d","%d","%d", &j, &g , &k);
    avg(j,g,k);

}    

int avg(int a, int b , int c){
    int avg;
    avg = (a+b+c)/3;
    printf("%d",avg);
}
