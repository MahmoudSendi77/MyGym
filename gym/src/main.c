/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *home;
  GtkWidget *authentification;
  GtkWidget *admin;
  GtkWidget *error;
  GtkWidget *medecin;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  home = create_home ();
  gtk_widget_show (home);
  /*authentification = create_authentification ();
  gtk_widget_show (authentification);
  admin = create_admin ();
  gtk_widget_show (admin);
  error = create_error ();
  gtk_widget_show (error);
  medecin = create_medecin ();
  gtk_widget_show (medecin);*/

  gtk_main ();
  return 0;
}

