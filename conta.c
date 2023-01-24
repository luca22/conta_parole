#include <stdint.h> 


size_t conta_parole(const char* s) {

	size_t res = 0;


	for (size_t i = 0; s[i]; i++) {

		if (s[i-1] == ' ') {

			res += 1;

		}


	}

	++res;

	return res;
}