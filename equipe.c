#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "equipe.h"

equipe creerEquipe()
{
  equipe s;
  printf("entrer le nom de l'équipe:");
  scanf("%s",s.nom);
  printf("entrer le jour de travail :\n" );
  scanf("%s",s.plan);
  return s;
}

void signalerPanne(materiel Ma[],equipe E[],int g,int inte, char matricule[] ) 
{
	char Ba[10];
	int u=0;
	while(u==0) {
		for (int i=0;i<g ;i+1) {
			if(strcmp(matricule,Ma[i].matricule)==0) {
				u=1;
			}	
		}
		
	}
	printf("L'equipe chargee de l'intervention est %s : ",E[inte].nom);
	inte++;
}