#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_taches 100
typedef struct {
    int jour;
    int mois;
    int annee;
}date;
typedef struct {
    char titre[50];
    char description[100];
    char statut[100];
    date deadline;
    int ID;
}to_do;
int main(){
   to_do taches[max_taches];
   int nbr=0;
   int i,j;
    int n, choix;
   printf("TO DO LIST\n");
   do{
    printf("1 . ajouter une nouvelle tache\n");
    printf("2 . ajouter plusieurs taches\n");
    printf("3 . afficher la liste de toutes les taches\n");
    printf("4 . modifier une tache\n");
    printf("5 . supprimer une tache par identifiant\n");
    printf("6 . rechercher les taches\n");
    printf("7 . statistiques\n");
    printf("entrer votre choix");
    scanf("%d",&choix);
    switch(choix){
case 1 :
    if(nbr<max_taches){
        printf("entrer le indentifiant unique\n");
        scanf("%d",&taches[nbr].ID);
        printf("entrer le titre\n");
        scanf("%s",taches[nbr].titre);
        printf("entrer la description\n");
        scanf("%s",taches[nbr].description);
        printf("entrer le statut\n");
        scanf("%s",taches[nbr].statut);
        printf("entrer le deadline\n");
        int annee,mois,jour;
        printf("entrer l annee\n");
        scanf("%d",&annee);
       if(annee>=2024)
        taches[nbr].deadline.annee=annee;
        printf("entrer le mois\n");
        scanf("%d",&mois);
        if(mois<=12&&mois>=1)
            taches[nbr].deadline.mois=mois;
        printf("entrer le jour\n");
        scanf("%d",&jour);
        if(jour<=31&&jour>=1)
            taches[nbr].deadline.jour=jour;
    }nbr++;
    break;

case 2 :

    printf("entrer le nombre des taches a ajouter \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    if(nbr<max_taches){
        printf("entrer le indentifiant unique\n");
        scanf("%d",&taches[nbr].ID);
        printf("entrer le titre\n");
        scanf("%s",taches[nbr].titre);
        printf("entrer la description\n");
        scanf("%s",taches[nbr].description);
        printf("entrer le statut\n");
        scanf("%s",taches[nbr].statut);
        printf("entrer le deadline\n");
        int annee,mois,jour;
        printf("entrer l annee\n");
        scanf("%d",&annee);
       if(annee>=2024)
        taches[nbr].deadline.annee=annee;
        printf("entrer le mois\n");
        scanf("%d",&mois);
        if(mois<=12&&mois>=1)
            taches[nbr].deadline.mois=mois;
        printf("entrer le jour\n");
        scanf("%d",&jour);
        if(jour<=31&&jour>=1)
            taches[nbr].deadline.jour=jour;}
            nbr++;
    }

    break;
case 3:

    for(i=0;i<nbr;i++){

        printf("voici les taches demander\n");
        printf("ID : %d\n  titre : %s\n description : %s\n deadline : annee : %d\t mois : %d\t jour : %d\n statut : %s\n ",taches[i].ID,taches[i].titre,taches[i].description,taches[i].deadline.annee,taches[i].deadline.mois,taches[i].deadline.jour,taches[i].statut);
    }break;
    int id_modifier;
    int nouvelle_annee,nouveau_mois,nouveau_jour;
case 4:

    printf("entrer la tache a modifier\n");
    printf("entrer id\n");
    scanf("%d",&id_modifier);
    for(i=0;i<nbr;i++)
    {
        if(id_modifier==taches[i].ID){
            printf("entrer la nouvelle description\n");
            scanf("%s",taches[i].description);
            printf("entrer le nouveau statut\n");
            scanf("%s",taches[i].statut);
            printf("entrer le nouveau deadline\n");
             printf("entrer la nouvelle  annee\n");
        scanf("%d",&nouvelle_annee);
       if(nouvelle_annee>=2024)
        taches[i].deadline.annee=nouvelle_annee;
        printf("entrer le mois\n");
        scanf("%d",&nouveau_mois);
        if(nouveau_mois<=12&&nouveau_mois>=1)
            taches[i].deadline.mois=nouveau_mois;
        printf("entrer le jour\n");
        scanf("%d",&nouveau_jour);
        if(nouveau_jour<=31&&nouveau_jour>=1)
            taches[i].deadline.jour=nouveau_jour;}

        }
     break;
     int id_supprimer;
case 5:
    printf("entrer le id de  tache a supprimer\n");
    scanf("%d",&id_supprimer);
    for(i=0;i<nbr;i++){
    if(id_supprimer==taches[i].ID){
    for(j=i;j<nbr-1;j++){
        strcpy(taches[j].titre,taches[j+1].titre);
        strcpy(taches[j].description,taches[j+1].description);
        strcpy(taches[j].statut,taches[j+1].statut);
        taches[j+1].ID=taches[j].ID;
        taches[j+1].deadline.annee=taches[j].deadline.annee;
         taches[j+1].deadline.mois=taches[j].deadline.mois;
          taches[j+1].deadline.jour=taches[j].deadline.jour;

    }nbr--;
    }
    }
printf("la tache est supprimer\n");break;
int id_rechercher;
int c;
char titre_rechercher[50];
case 6 :
    printf("taper 1 pour recherch par identifiant  ou 2 pour recherche par titre\n");
    scanf("%d",&c);
    if(c==1){
        printf("recherch par identifiant\n");
        printf("entrer id rechercher\n");
        scanf("%d",&id_rechercher);
        for(i=0;i<nbr;i++){
            if(id_rechercher==taches[i].ID){
                printf("voila la tache est trouver");
            printf("ID : %d\n  titre : %s\n description : %s\n deadline : annee : %d\t mois : %d\t jour : %d\n statut : %s\n ",taches[i].ID,taches[i].titre,taches[i].description,taches[i].deadline.annee,taches[i].deadline.mois,taches[i].deadline.jour,taches[i].statut);
        }}
    }else if(c==2){
     printf("recherch par titre\n");
        printf("entrer titre rechercher\n");
        scanf("%s",titre_rechercher);
        for(i=0;i<nbr;i++){
            if(strcmp(titre_rechercher,taches[i].titre)==0){
                printf("voila la tache est trouver");
            printf("ID : %d\n  titre : %s\n description : %s\n deadline : annee : %d\t mois : %d\t jour : %d\n statut : %s\n ",taches[i].ID,taches[i].titre,taches[i].description,taches[i].deadline.annee,taches[i].deadline.mois,taches[i].deadline.jour,taches[i].statut);
     }
     }
     }
     break;
case 7 :
    printf("nombre totale des taches %d\t",nbr);
default :
    printf("choix non valid");
   }
  } while(choix!=0);


    return 0;
}
