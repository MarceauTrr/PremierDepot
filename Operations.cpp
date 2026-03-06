#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

int multiplication(int a, int b)
{
	int resultat;
	
	resultat = a * b;
	
	return resultat;
}

int division(int a, int b)
{
	int resultat;
	
	resultat = a / b;
	
	return resultat;
}
<<<<<<< HEAD
int factoriel(int nb) {
    if (nb <= 1) {
        return 1; 
    }
    return nb * factoriel(nb - 1); 
=======

int exposant(int a, int b)
{
	int resultat;
	
	resultat = a ^ b;
	
	return resultat;
>>>>>>> 58eddc460d0eb9b2732d0c04f0cc081f35de21c6
}