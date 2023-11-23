//Ex7:Ecrire un programme C permettant de saisir une chaine de caractères CH non vide et de supprimer toute sequence de plusieurs blancs pour ne garder qu un seul.

#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
	char ch[10];
	int i,j ;
	
	// saisie d'une phrase non vide
	do{
		printf("saisir une phrase non vide:");
		gets(ch);
	}while (strlen(ch)==0);
	
	//supression des blancs non nécessaires 
	
	for(i=0; i<strlen(ch);i++){
		if (isspace(ch[i])){
			for(j=i; j<strlen(ch); j++){
				if (isspace(ch[j+1])) {
					ch[j+1]=ch[j+2];
				
				}
			}
		}
	}
	
	//affichage du resultat
	printf("la chaine devient:%s",ch);
	
	return 0;
}
