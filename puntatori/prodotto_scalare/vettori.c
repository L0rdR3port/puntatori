#include<stddef.h>

double prodotto_scalare(const double *x, const double *y, size_t n){
	double prodotto_scalare = 0;
	for(size_t i = 0; i<n; i++)
		prodotto_scalare += x[i]*y[i];

	return prodotto_scalare;		
}