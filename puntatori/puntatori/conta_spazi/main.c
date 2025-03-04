#include<stdio.h>
#include"conta_spazi.h"

int main(void){
	char *test = "The only thing all humans are equal in, is death (cit. Johan Liebert)";
	size_t n_spazi = conta_spazi(test);
	printf("%s\n", test);
	printf("Spazi n: %ld\n", n_spazi);
	return 0;
}