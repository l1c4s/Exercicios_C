#include <stdio.h>
#define pi 3.14

float Volume_c(float r, float h);

int main()
{
	float r,h;
	printf("\nDigite o raio e a altura do cilindro para descobrir o volume:\n");
	printf("Raio = ");
	scanf("%f",&r);
	printf("Altura = ");
	scanf("%f",&h);
	
	printf("\nO volume do cilindro e = %.2f\n",Volume_c(r,h));

	return 0;

}

float Volume_c(float r, float h)
{
	float v;
	r = r*r;
	v = pi*(r*h);

	return v;

}
