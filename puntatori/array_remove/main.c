#include<stdio.h>
#include"arr.h"

#define DIM 5

int main(void){

	double a[DIM] = {0.0};

    for(int j=0; j<DIM; j++){
        printf("Inserisci un valore:");
        scanf("%le", &a[j]);
    }

    printf("\n");

	for(int i=0; i<DIM; i++){
		printf("%.1lf\t", a[i]);
	}
	printf("\n");
	printf("\n");

	size_t pn = sizeof(a) / sizeof(double);
	while(1){
		size_t pos;
        int scelta;
		printf("Inserisci quale posizione eliminare (le posizioni vanno dalla pos. 0 alla pos. 4)\n");
		scanf("%ld", &pos);
		array_remove(a, &pn, pos);
		printf("pn=%ld\n", pn);						
		for(int i=0; i<pn; i++){
			printf("%.1lf\t", a[i]);
		}
        printf("\n");
        if(pn==1)
            break;
        printf("\nVuoi eliminare altre posizioni?\n Premere 1 se vuoi eliminare altre posizioni, altrimenti premere qualsiasi altro numero\n");
        scanf("%d", &scelta);
        if(scelta==1){

        }
        else
            break;
        
		printf("\n");
		printf("\n");
	}
	return 0;
}