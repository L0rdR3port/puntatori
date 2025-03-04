#include<stdio.h>
#include"arr.h"

#define DIM 5

int main(void){
	double a[DIM] = {0.0};
    for(int j=0; j<DIM; j++){
        printf("Inserisci un valore\n");
        scanf("%le", &a[j]);
    }
    
    printf("\n");

	size_t dim = sizeof(a)/sizeof(double);
	double m = media(a, dim);

	for(int i=0; i<DIM; i++)
		printf("%.2lf\t", a[i]);

	printf("\n");	
	printf("\n");	
	
	printf("la media e': %.2lf\n", m);
	return 0;
}