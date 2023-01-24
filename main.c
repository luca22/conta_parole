#include <stdint.h>

int main(void) {


	size_t parole;

	parole = conta_parole(" Questa e' una stringa lunga 45 caratteri.");

	parole = conta_parole("1 2 3 a b c");

	parole = conta_parole("! @?$ ciao,prova");

	return 0;
}