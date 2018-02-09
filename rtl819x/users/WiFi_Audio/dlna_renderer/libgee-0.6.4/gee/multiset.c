/* multiset.c generated by valac 0.15.0.90-e9553, the Vala compiler
 * generated from multiset.vala, do not modify */

/* multiset.vala
 *
 * Copyright (C) 2009  Ali Sabil
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Ali Sabil <ali.sabil@gmail.com>
 */

#include <glib.h>
#include <glib-object.h>


#define GEE_TYPE_ITERABLE (gee_iterable_get_type ())
#define GEE_ITERABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ITERABLE, GeeIterable))
#define GEE_IS_ITERABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ITERABLE))
#define GEE_ITERABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_ITERABLE, GeeIterableIface))

typedef struct _GeeIterable GeeIterable;
typedef struct _GeeIterableIface GeeIterableIface;

#define GEE_TYPE_ITERATOR (gee_iterator_get_type ())
#define GEE_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ITERATOR, GeeIterator))
#define GEE_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ITERATOR))
#define GEE_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_ITERATOR, GeeIteratorIface))

typedef struct _GeeIterator GeeIterator;
typedef struct _GeeIteratorIface GeeIteratorIface;

#define GEE_TYPE_COLLECTION (gee_collection_get_type ())
#define GEE_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_COLLECTION, GeeCollection))
#define GEE_IS_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_COLLECTION))
#define GEE_COLLECTION_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_COLLECTION, GeeCollectionIface))

typedef struct _GeeCollection GeeCollection;
typedef struct _GeeCollectionIface GeeCollectionIface;

#define GEE_TYPE_MULTI_SET (gee_multi_set_get_type ())
#define GEE_MULTI_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_MULTI_SET, GeeMultiSet))
#define GEE_IS_MULTI_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_MULTI_SET))
#define GEE_MULTI_SET_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_MULTI_SET, GeeMultiSetIface))

typedef struct _GeeMultiSet GeeMultiSet;
typedef struct _GeeMultiSetIface GeeMultiSetIface;

struct _GeeIteratorIface {
	GTypeInterface parent_iface;
	gboolean (*next) (GeeIterator* self);
	gboolean (*has_next) (GeeIterator* self);
	gboolean (*first) (GeeIterator* self);
	gpointer (*get) (GeeIterator* self);
	void (*remove) (GeeIterator* self);
};

struct _GeeIterableIface {
	GTypeInterface parent_iface;
	GeeIterator* (*iterator) (GeeIterable* self);
	GType (*get_element_type) (GeeIterable* self);
};

struct _GeeCollectionIface {
	GTypeInterface parent_iface;
	gboolean (*contains) (GeeCollection* self, gconstpointer item);
	gboolean (*add) (GeeCollection* self, gconstpointer item);
	gboolean (*remove) (GeeCollection* self, gconstpointer item);
	void (*clear) (GeeCollection* self);
	gboolean (*add_all) (GeeCollection* self, GeeCollection* collection);
	gboolean (*contains_all) (GeeCollection* self, GeeCollection* collection);
	gboolean (*remove_all) (GeeCollection* self, GeeCollection* collection);
	gboolean (*retain_all) (GeeCollection* self, GeeCollection* collection);
	gpointer* (*to_array) (GeeCollection* self, int* result_length1);
	gint (*get_size) (GeeCollection* self);
	gboolean (*get_is_empty) (GeeCollection* self);
	GeeCollection* (*get_read_only_view) (GeeCollection* self);
};

struct _GeeMultiSetIface {
	GTypeInterface parent_iface;
	gint (*count) (GeeMultiSet* self, gconstpointer item);
};



GType gee_iterator_get_type (void) G_GNUC_CONST;
GType gee_iterable_get_type (void) G_GNUC_CONST;
GType gee_collection_get_type (void) G_GNUC_CONST;
GType gee_multi_set_get_type (void) G_GNUC_CONST;
gint gee_multi_set_count (GeeMultiSet* self, gconstpointer item);


/**
 * Returns the number of occurences of an item in this multiset.
 *
 * @param item the item to count occurences of
 *
 * @return     the number of occurences of the item in this multiset.
 */
gint gee_multi_set_count (GeeMultiSet* self, gconstpointer item) {
	g_return_val_if_fail (self != NULL, 0);
	return GEE_MULTI_SET_GET_INTERFACE (self)->count (self, item);
}


static void gee_multi_set_base_init (GeeMultiSetIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


/**
 * A collection with duplicate elements.
 */
GType gee_multi_set_get_type (void) {
	static volatile gsize gee_multi_set_type_id__volatile = 0;
	if (g_once_init_enter (&gee_multi_set_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GeeMultiSetIface), (GBaseInitFunc) gee_multi_set_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType gee_multi_set_type_id;
		gee_multi_set_type_id = g_type_register_static (G_TYPE_INTERFACE, "GeeMultiSet", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (gee_multi_set_type_id, GEE_TYPE_COLLECTION);
		g_once_init_leave (&gee_multi_set_type_id__volatile, gee_multi_set_type_id);
	}
	return gee_multi_set_type_id__volatile;
}


