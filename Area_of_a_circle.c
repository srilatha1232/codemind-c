#include<stdio.h>
int main()
{
    float area,radius; 
    float pie=3.14;
    radius=12;
    scanf("%f",&radius);
    area=pie*radius*radius;
    printf("%.2f",area);
    return 0;
}