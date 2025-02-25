#include<stddef.h>

double media(double *a, size_t n){
	double media = 0;
	for(size_t i=0; i<n; i++)
		media+=a[i];

	return media/n;
}