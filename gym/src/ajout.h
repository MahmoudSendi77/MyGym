#include <gtk/gtk.h>
/*typedef struct{
int jour;
int mois;
int annee;
}Date;
typedef struct
{
long cin;
int role;
char username[30];
char password[30];
char nom[30];
char mail[30];
char abonnement[30];
long telephone;
Date dd;
Date df;
*/

void ajouter(long cin2,char password1[], int rolx ,char username1[],char prenom[],char mail1[] ,char abonnement1[] ,long telephone1,int ddj,int ddm,int dda,int dfj,int dfm,int dfa);
void afficher_adherent(GtkWidget *liste);
int supprimer(long cin);
int modifier_adherent (long cin10,char password10[], int rol10 ,char username10[], char prenom10[],char mail10[] ,char abonnement10[] ,long telephone10,int ddj10,int ddm10,int dda10,int dfj10,int dfm10,int dfa10);
//void afficher_staf_coach(GtkWidget *liste);
