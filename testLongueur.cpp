/*
 chaine de caractères
 essai sur la longueur d'une chaîne
 */

#include <iostream>


using namespace std;

int main() {
   
   char mot[8];
  
   
   
   cout << "donnez un mot" << endl;
   fgets(mot, sizeof(mot), stdin); //Commande pour lire les espaces
   cout << mot << endl;
   
   return 0;
}

