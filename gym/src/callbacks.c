#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

GtkWidget *authentification,*home;
void
on_button1_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
home=lookup_widget(objet_graphique,"home");
authentification=create_authentification();
gtk_widget_show(authentification);

}


GtkWidget *signin,*home;

void
on_button2_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
home=lookup_widget(objet_graphique,"home");
signin=create_signin();
gtk_widget_show(signin);
}


GtkWidget *authentification,*home,*admin,*medecin,*error,*input1,*input2,*kine,*adherent,*coach,*dietecien;

void
on_button3_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2;
char login[20];char password[20];
int a,b,c;
input1=lookup_widget(objet_graphique,"entry1");
input2=lookup_widget(objet_graphique,"entry2");
authentification=lookup_widget(objet_graphique,"authentification");
strcpy(login,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));
c=verifier(login,password);
if (c==1)
{admin=create_admin();
gtk_widget_show(admin);
gtk_widget_hide(authentification);
}
else if (c==2)
{medecin=create_medecin();
gtk_widget_show(medecin);
gtk_widget_hide(authentification);}
else if (c==3)
{dietecien=create_dietecien();
gtk_widget_show(dietecien);
gtk_widget_hide(authentification);}
else if (c==4)
{coach=create_coach();
gtk_widget_show(coach);
gtk_widget_hide(authentification);}
else if (c==5)
{kine=create_kine();
gtk_widget_show(kine);
gtk_widget_hide(kine);}
else if (c==6)
{adherent=create_adherent();
gtk_widget_show(adherent);
gtk_widget_hide(authentification);}
else if (c==-1)
{error=create_error();
gtk_widget_show(error);
gtk_widget_hide(authentification);}
}

GtkWidget *signin;
void
on_button4_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input3,*input4,*input5;
char login1[30],password1[30],rolec[10];
int role;

input3=lookup_widget(objet_graphique,"entry3");
input4=lookup_widget(objet_graphique,"entry4");
input5=lookup_widget(objet_graphique,"entry5");

signin=lookup_widget(objet_graphique,"signin");

strcpy(login1,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(password1,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(rolec,gtk_entry_get_text(GTK_ENTRY(input5)));
role=atoi(rolec);
ajouter(login1,password1,role);
}

