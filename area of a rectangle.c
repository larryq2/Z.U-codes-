//this code gives the user the area of a rectangle

#include <stdio.h>
int main(){
    printf("Area of a rectangle\n");

    int x,y,area;
    printf("input the length\n");
    scanf("%d",&x);

    printf("input the width\n");
    scanf("%d",&y);

    area=x*y;
    printf("Area = %d",area);
 return 0;
}
