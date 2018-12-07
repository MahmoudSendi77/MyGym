#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"verifier.h"
int verifier(char login[],char password[])
{FILE *f;
int role,a=1,b=1,c=-1;
char login1[20];
char password1[20];
<<<<<<< HEAD
f=fopen("/home/dhia006/MyGym/gym/src/login.txt","r");
=======
f=fopen("/home/jasser/Desktop/MyGym/gym/src/login.txt","r");
>>>>>>> 77272246bd4dcfe949a2e5806fb78ebd17478063
if (f!=NULL)
{
while(fscanf(f,"%s %s %d",login1, password1,&role)!=EOF)
{
a=strcmp(login,login1);
   b=strcmp(password,password1);
if (a==0 && b==0)
     c =role;
}
}
fclose(f);
return c;
}

