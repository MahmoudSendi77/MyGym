#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"ajout.h"
void ajouter(long cin2, int rolx ,char username1[],char mail1[] ,char abonnement1[] ,long telephone1,int ddj,int ddm,int dda,int dfj,int dfm,int dfa)
{
FILE *f;
/*long cin2;
char username1[30];
char password1[30];
char nom1[30];
char mail1[30];
char compt[30];
char abonnement1[30];
long telephone1;
int ddj,dda,ddm,dfa,dfm,dfj;
*/
f=fopen("/home/jasser/Desktop/MyGym/gym/src/info_users.txt","a");
if(f!=NULL)
{fprintf(f,"\n%ld %d %s %s %s %ld %d %d %d %d %d %d ",cin2,rolx,username1,mail1,abonnement1,telephone1,ddj,ddm,dda,dfj,dfm,dfa);
fclose(f);

}
}

FILE *f;
void supprimer(long cin4){
long cin10;
char username1[30];
char password1[30];
char nom1[30];
char mail1[30];
char compt[30];
char abonnement1[30];
long telephone1;
int ddj,dda,ddm,dfa,dfm,dfj;
f=fopen("/home/jasser/Desktop/MyGym/gym/src/info_users.txt","a");
if(f!=NULL){
while(fscanf(f,"%ld %d %s %s %s %ld %d %d %d %d %d %d ",cin2,rolx,username1,mail1,abonnement1,telephone1,ddj,ddm,dda,dfj,dfm,dfa)=EOF)
{
if(strcmp(cin4,cin2)==0)
{
fprintf(f,"%ld %d %s %s %s %ld %d %d %d %d %d %d ",cin2,rolx,username1,mail1,abonnement1,telephone1,ddj,ddm,dda,dfj,dfm,dfa);
fclose(f);
}
}
fclose(f);
}



void affichage (FILE *f,long cin2, int rolx ,char username1[],char mail1[] ,char abonnement1[] ,long telephone1,int ddj,int ddm,int dda,int dfj,int dfm,int dfa)
{
f=fopen("/home/jasser/Desktop/MyGym/gym/src/info_users.txt","a");
if(f!=NULL)
{fscanf(f,"\n%ld %d %s %s %s %ld %d %d %d %d %d %d ",cin2,rolx,username1,mail1,abonnement1,telephone1,ddj,ddm,dda,dfj,dfm,dfa);
fclose(f);

}
}
