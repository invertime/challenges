#include <stdio.h>

int letterSum(char* strInput){
    
    // Initialisation des variables

    int AsciiCodes[255];
    int i,j,codeSortie = 0;

    // Conversion du string en valeurs ASCII (-96 pour correspondre a l'alphabet)

    while(strInput[i]!='\0') {
        AsciiCodes[i]=strInput[i]-96; 
        i++;
    }

    // Réduit en sommant les termes

    for (j = 0; j < i; j++){
        codeSortie += AsciiCodes[j];
    }

    // Retourne la somme en sortie

    return codeSortie;
}

int main(){

    // Initialisation des variables
    
    char* strInput[255];

    // Récupération de l'entrée utilisateur

    printf("Input a string: ");
    scanf("%s", strInput);

    int somme = letterSum(strInput);

    printf("%d", somme);

    return 0;
}
