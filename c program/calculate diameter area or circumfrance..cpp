#include<stdio.h>
int main(){
int radius,circumfrance,diameter,area;
printf("enter the radius of circle");
scanf("%d",&radius);
circumfrance=2*3.14*radius;
diameter=2*radius;
area=3.14*(radius*radius);
printf("cicumfrance of a circle is%d",circumfrance);
printf("diameter of a circle is %d",diameter);
printf("area of circle is %d",area);
return 0;
}
