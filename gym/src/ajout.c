#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"ajout.h"
void ajouter(char login[],char password[],int role)
{
FILE *f;
f=fopen("/home/jasser/gym/src/login.txt","a");
if(f!=NULL)
{fprintf(f,"%s %s %d",login,password,role);
fclose(f);
}
}
