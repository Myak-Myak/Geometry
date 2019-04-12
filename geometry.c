#include <stdio.h>
#include <math.h>
#define pi 3.14
typedef struct{
    float x;
    float y;
} point;

typedef struct{
    point center;
    float r;
} circle;

int main()
{
int z;
begin:

scanf("%d",&z);

    if (z==1)
    {
	circle c;
	printf("vvedite centrrrrr okryshnosti");
	scanf("%f%f", &c.center.x, &c.center.y);
	
	printf("vvedite dlinny radiusa");
	scanf("%f", &c.r);
	
	float perimetr=2*pi*c.r;
	float area=pi*c.r*c.r;
	
	printf("perimetr = %f\narea = %f\n", perimetr,area);
	goto begin;
    }
return 0;
}