/*
 Conversion en majuscule
 */
#include <iostream>

void minusculesVersMajuscules(char chaine[]);

int main() {
   
   char chaine[255];
   
   std::cout << "Tapez une chaîne de caractères à transposer en majuscules : ";
   std::cin >> chaine;
   
   std::cout << chaine <<":  ";
   
   minusculesVersMajuscules(chaine);
   
   std::cout << "La même chaîne en majuscules est : " << chaine << std::endl;
   return EXIT_SUCCESS;
}


/**
 Converti une chaine en majuscules

 @param chaine la chaine à convertir
 */
void minusculesVersMajuscules(char chaine[])
{
    int i = 0;
    for (i = 0; chaine[i] != '\0'; i++)
    {
        if (chaine[i] >= 'a' && chaine[i] <= 'z') // prend les caractères entre a et z
        {
            chaine[i] = chaine[i] - 32; //converti le caractère minuscule en maj
        }
            
    }
}
