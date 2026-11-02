#include<stdio.h>
int main (void)
{
    double length,breadth,radius,base,height;
    const double PI=3.14159;

    printf("enter rectangle length and breadth:");
    scanf("%If%If",&length,&breadth);

    printf("rectangle area=%.2If\n",length*breadth);
    printf("rectangle perimeter=%.2If\n",2*(length+breadth));

    printf("enter circle radius:");
    scanf("%If",&radius);

    printf("circle area=%.2If\n",PI*radius*radius);
    printf("circle circumeference=%.2If\n",2*PI*radius);

    printf("enter triangle base and height:");
    scanf("%If%If",&base,&height);

    printf("triangle area=%.2If\n",0.5*base*height);
    return 0;
}
