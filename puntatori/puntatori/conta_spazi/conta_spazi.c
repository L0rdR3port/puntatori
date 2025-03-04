#include<stddef.h>
size_t conta_spazi(const char *s){
	size_t n_spazi = 0;
	while(*s != '\0'){
		if(*s == ' ')
			n_spazi++;
		s++;
	}
	return n_spazi;
}