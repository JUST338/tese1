#include<stdio.h>
int main()
{
	float r,h;
	float pai=3.14; 
	scanf("%fl",&r);
	scanf("%fl",&h);
	printf("圆周长=%.2f\n",2*pai*r);
	printf("圆面积=%.2f\n",r*pai*r);
	printf("圆球表面积=%.2f\n",4*pai*r*r);
	printf("圆球体积=%.2f\n",(4.0/3.0)*pai*r*r*r);
	printf("圆柱体积=%.2f\n",r*pai*r*h);
	return 0; 
}
 
