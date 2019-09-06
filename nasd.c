#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define T 6
#define t 5



struct equipe
{
	char nom[10];
	char plan[10];
	
};
typedef struct equipe equipe;


struct materiel
{
	char nom[10];
	char matricule[8];
	int quan;	
};
typedef struct materiel materiel;

int inter=0;
int repo=1;
equipe naja[T];
materiel yann[t];
char matricule[15];

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


equipe creerEquipe()
{
  equipe s;
  printf("entrer le nom de l'équipe:");
  scanf("%s",s.nom);
  printf("entrer le jour de travail :\n" );
  scanf("%s",s.plan);
  return s;
}
int recherchermat(materiel eur[],int k,char matricue[]) {
 	for (int i=0;i<t;i++) {
		if (strcmp(matricue,eur[i].matricule)==0) {
			return i;
		}
 	}
	return -1; 	
 }
void signalerPanne (materiel Ma[],equipe E[],int g,int inter, char matricule[] ) 
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
	printf("L'equipe chargee de l'intervention est %s : ",E[inter].nom);
	inter++;
}
 int  main()
 {
 	int r=1;
    int rep;
   while(r==1){
    printf("menu");
    printf("\t Que voulez vous faire ?\n");
    printf("\t 1-creer les equipes \n ");
    printf("\t 2- Enregistrer un (des) materiel(s) \n");
    printf("\t 3- Afficher le(s) materiel(s) \n");
    printf("\t 4- signaler une Panne\n");
    scanf("%d",&rep);
    if(rep==1){
    	for (int i = 0; i < T; ++i)
    	{
    		naja[i]=creerEquipe();
    	}
    } else if(rep==2){
    		while(repo==1){
    			int i=0;
    			yann[i]=enregistrement();
    			printf("voulez vous continuer ? taper 1 si oui\n");
    			scanf("%d",&repo);
    			i++;		
    	}
    }else if (rep==3)
         {
    	while(repo==1){
    			printf("veiller entrer le matricule\n");
    			scanf("%s",matricule);
    			int tv= recherchermat(yann,t,matricule);	
    	     AffichageMateriel(yann[tv]);
    			printf("voulez vous continuer taper 1 pour oui \n");
    			scanf("%d",&repo);
    		}
    }else if (rep==4)
    {
    	while(repo==1){
    		printf("veiller entrer le matricule du materiel\n");
    		scanf("%s",matricule);	
    	     signalerPanne (yann,naja,t,inter,matricule) ;
    			printf("voulez vous continuer taper 1 pour oui \n");
    			scanf("%d",&repo);
    		}
    	
    
}
 printf("voulez vous continuer? taper1 pour oui\n");
    scanf("%d",&r);
    system("cls");
    system("pause");
    }
	return 0;
 	getch();

 }