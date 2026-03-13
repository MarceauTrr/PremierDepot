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
int factoriel(int nb) {
    if (nb <= 1) {
        return 1; 
    }
    return nb * factoriel(nb - 1); 
}
}
int nombrepremier(int nb){
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def nombrepremier(n):
    if n <= 0:
        return "Veuillez entrer un entier supérieur à 0."
    
    compteur = 0
    nombre_actuel = 1
    
    while compteur < n:
        nombre_actuel += 1
        if est_premier(nombre_actuel):
            compteur += 1
            
    return nombre_actuel
}