#include<stdio.h>
void main()
{
	int area,side,perimeter;
	scanf("%d",&side);
	area=side*side;
	perimeter=4*side;
	printf("area of sq with side %d is %d ",side ,area);
	printf("\nperimeter of sq with side %d is %d",side,perimeter);
}
