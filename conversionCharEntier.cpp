/*
 Conversion d'une chaine en entier
 */
#include <iostream>

bool valide_entier(char chaine[], int &refNombreEntier);

int main() {
   
   int nombreEntier;
   char chaine[20];
   
   do {
      std::cout << "Tapez une chaîne de caractères : ";
      std::cin >> chaine;
   } while (!valide_entier(chaine, nombreEntier));
   
   std::cout << "L'entier vaut : " << nombreEntier << std::endl;
   return EXIT_SUCCESS;
}


/**
 valide une chaine de caractère
 retourne la valeur entière

 @param chaine la chaine à valider
 @param refNombreEntier le nombre entier converti
 @return true si la chaine est un entier false sinon
 */
bool valide_entier(char chaine[], int &refNombreEntier) {
   
   bool valide = true;
   
   int resul = 0;
   int i = 0;
   for (i = 0; chaine[i] != '\0'; i++)
   {
        resul = (resul - 48)*10+chaine[i];
   }
   
   return valide;
}
