#include<stdio.h>
int main(){
    int l,b;
    
    printf("enter length of rectangle");
    scanf("%d",&l);

    printf("enter breadth/width of rectangle");
    scanf("%d",&b);

    float perimeter = 2*(l+b);

    printf("the perimeter of a rectangle = %f",perimeter);
}