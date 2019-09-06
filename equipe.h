#ifndef __EQUIPE__
#define __EQUIPE__

#include"materiel.h"

struct equipe
{
	char nom[10];
	char plan[10];
	
};
typedef struct equipe equipe;

equipe creerEquipe();
void signalerPanne (materiel Ma[],equipe E[],int g,int inter, char matricule[] ) ;
#endif
