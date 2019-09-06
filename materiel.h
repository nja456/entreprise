#ifndef __MATERIEL__
#define __MATERIEL__

struct materiel
{
	char nom[10];
	char matricule[8];
	int quan;	
};
typedef struct materiel materiel;


materiel enregistrement();
void AffichageMateriel(materiel M);
int recherchermat(materiel eur[],int k,char matricue[]);

#endif