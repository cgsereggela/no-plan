#include <gtk/gtk.h>

#include "Types.h"
#include "Symbol.h"

static void
activate (GtkApplication *app, gpointer user_data)
{
  Symbol *naya = new Symbol(COLOUR_GREEN);
  GtkWidget *window;
  GtkWidget *layout;

  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW(window), "Symbol");

  layout = gtk_layout_new (NULL, NULL);
  gtk_container_add (GTK_CONTAINER (window), layout);
  gtk_widget_show (layout);

  gtk_layout_put (GTK_LAYOUT(layout), naya->getImage(), 0, 0);

  gtk_widget_show_all (window);
}

int
main (int argc, char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}
