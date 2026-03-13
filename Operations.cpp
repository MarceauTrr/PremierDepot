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
}
=======

int exposant(int a, int b)
{
	int resultat;
	
	resultat = a ^ b;
	
	return resultat;
>>>>>>> 58eddc460d0eb9b2732d0c04f0cc081f35de21c6
}

double calculerDistance(double x1, double y1, double x2, double y2) {
	
    double dx = x2 - x1;
    double dy = y2 - y1;
    
    return std::sqrt(std::pow(dx, 2) + std::pow(dy, 2));
}