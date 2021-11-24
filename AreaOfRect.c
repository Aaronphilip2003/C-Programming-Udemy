#include<stdio.h>
int main()
{
    float length,width,perimeter,area;
    printf("Enter the length of the reactangle:");
    scanf("%f",&length);
    printf("Enter the width of the reactangle:");
    scanf("%f",&width);
    area=length*width;
    perimeter=2*(length+width);
    printf("Area of the Rectangle:%f\n",area);
    printf("Perimeter of the Rectangle:%f\n",perimeter);
    return 0;
}