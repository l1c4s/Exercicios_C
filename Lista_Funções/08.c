#include <stdio.h>
#include <math.h>

float Hipotenusa(float a, float b);

int main()
{
	float a,b;
	printf("\nDigite os catetos para achar a hipotenusa:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	
	printf("A hipotenusa do triangulo e = %.2f\n",Hipotenusa(a,b));

	return 0;

}

float Hipotenusa(float a, float b)
{
	float h;
	a = a*a;
	b = b*b;
	
	h = sqrt(a) + sqrt(b);
	


	return h;

}
