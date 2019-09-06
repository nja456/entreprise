#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"materiel.h"
#define t 5
materiel enregistrement()
{
	materiel vo;
	printf("NOM : ");
	scanf("%s",vo.nom);
	printf("MATRICULE : ");
	scanf("%s",vo.matricule);
	printf("QUANTITE : ");
	scanf("%d",vo.quan);	
	return vo;
}
void AffichageMateriel(materiel M)
{
   printf("Nom du materiel %s:\n ", M.nom );
   printf("matricule %s:\n", M.matricule);
   printf("quantite %s:\n",M.quan );
}

int recherchermat(materiel eur[],int k,char matricue[]) {
 	for (int i=0;i<t;i++) {
		if (strcmp(matricue,eur[i].matricule)==0) {
			return i;
		}
 	}
	return -1; 	
 }