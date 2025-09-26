#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nums,i;
	float res,suma;
	do{
	
	printf("Calcular el promedio de 'x' n%cmeros a tu elecci%cn. \nCuantas variables deseas promediar?\n",163,162);
	scanf("%d",&nums);
	float a[nums];
	for(i=1;i<(nums+1);i++)
	{
		printf("Ingrese la variable %d = ",i);
		scanf("%f",&a[i]);
		suma += a[i];
	}
	res = suma / nums;
	printf("El promedio es = %.2f",res);
	while(escribir condición);
}
