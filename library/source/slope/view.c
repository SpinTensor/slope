/*
 * Copyright (C) 2018  Elvis Teixeira
 *
 * This source code is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any
 * later version.
 *
 * This source code is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this program.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include "slope/view.h"

typedef struct _SlopeViewPrivate SlopeViewPrivate;
#define SLOPE_VIEW_PRIVATE(Addr) ((SlopeViewPrivate*) (Addr))

struct _SlopeViewPrivate
{
    int dummy;
};

G_DEFINE_TYPE_WITH_PRIVATE (SlopeView, slope_view, GTK_TYPE_DRAWING_AREA)
#define SLOPE_VIEW_GET_PRIVATE(obj) (G_TYPE_INSTANCE_GET_PRIVATE((obj), SLOPE_TYPE_VIEW, SlopeViewPrivate))

/* local decls */
static void slope_view_finalize(GObject *self);
static void slope_view_dispose (GObject *self);
static gboolean slope_view_draw(GtkWidget *self, cairo_t *cr, gpointer data);


static void
slope_view_class_init (SlopeViewClass *klass)
{
    GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);
    GObjectClass *gobject_class = G_OBJECT_CLASS (klass);

    gobject_class->dispose = slope_view_dispose;
    gobject_class->finalize = slope_view_finalize;



}

static void
slope_view_init (SlopeView *view)
{
    GtkWidget * gtk_widget = GTK_WIDGET(view);

    /* minimum width and height of the widget */
    gtk_widget_set_size_request(gtk_widget, 250, 250);

    /* select the types of events we want to be notified about */
    gtk_widget_add_events(gtk_widget,
                          GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK |
                          GDK_BUTTON_RELEASE_MASK | GDK_POINTER_MOTION_MASK);

    g_signal_connect (view, "draw", G_CALLBACK (slope_view_draw), NULL);
}


static void
slope_view_dispose (GObject *object)
{
  SlopeView *self = SLOPE_VIEW (object);
  SlopeViewPrivate *m = SLOPE_VIEW_GET_PRIVATE (self);

  // TODO

  G_OBJECT_CLASS (slope_view_parent_class)->dispose (object);
}


static void
slope_view_finalize(GObject *object)
{
    SlopeView *self = SLOPE_VIEW (object);
    SlopeViewPrivate *m = SLOPE_VIEW_GET_PRIVATE (object);

    // TODO

    G_OBJECT_CLASS (slope_view_parent_class)->finalize (object);
}


GtkWidget*
slope_view_new (void)
{
 return g_object_new (SLOPE_TYPE_VIEW, NULL);
}


static gboolean slope_view_draw(GtkWidget *self, cairo_t *cr, gpointer data)
{
  SlopeViewPrivate *m = SLOPE_VIEW_GET_PRIVATE (self);

  // TODO

  return TRUE;
}

/* slope/view.c */
