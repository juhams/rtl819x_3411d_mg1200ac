/* map.c generated by valac 0.15.0.90-e9553, the Vala compiler
 * generated from map.vala, do not modify */

/* map.vala
 *
 * Copyright (C) 2007  Jürg Billeter
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
 * 	Jürg Billeter <j@bitron.ch>
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

#define GEE_TYPE_MAP (gee_map_get_type ())
#define GEE_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_MAP, GeeMap))
#define GEE_IS_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_MAP))
#define GEE_MAP_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_MAP, GeeMapIface))

typedef struct _GeeMap GeeMap;
typedef struct _GeeMapIface GeeMapIface;

#define GEE_TYPE_MAP_ITERATOR (gee_map_iterator_get_type ())
#define GEE_MAP_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_MAP_ITERATOR, GeeMapIterator))
#define GEE_IS_MAP_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_MAP_ITERATOR))
#define GEE_MAP_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_MAP_ITERATOR, GeeMapIteratorIface))

typedef struct _GeeMapIterator GeeMapIterator;
typedef struct _GeeMapIteratorIface GeeMapIteratorIface;

#define GEE_TYPE_COLLECTION (gee_collection_get_type ())
#define GEE_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_COLLECTION, GeeCollection))
#define GEE_IS_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_COLLECTION))
#define GEE_COLLECTION_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_COLLECTION, GeeCollectionIface))

typedef struct _GeeCollection GeeCollection;
typedef struct _GeeCollectionIface GeeCollectionIface;

#define GEE_TYPE_SET (gee_set_get_type ())
#define GEE_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_SET, GeeSet))
#define GEE_IS_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_SET))
#define GEE_SET_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_SET, GeeSetIface))

typedef struct _GeeSet GeeSet;
typedef struct _GeeSetIface GeeSetIface;

#define GEE_MAP_TYPE_ENTRY (gee_map_entry_get_type ())
#define GEE_MAP_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_MAP_TYPE_ENTRY, GeeMapEntry))
#define GEE_MAP_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_MAP_TYPE_ENTRY, GeeMapEntryClass))
#define GEE_MAP_IS_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_MAP_TYPE_ENTRY))
#define GEE_MAP_IS_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_MAP_TYPE_ENTRY))
#define GEE_MAP_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_MAP_TYPE_ENTRY, GeeMapEntryClass))

typedef struct _GeeMapEntry GeeMapEntry;
typedef struct _GeeMapEntryClass GeeMapEntryClass;

#define GEE_TYPE_ABSTRACT_MAP (gee_abstract_map_get_type ())
#define GEE_ABSTRACT_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ABSTRACT_MAP, GeeAbstractMap))
#define GEE_ABSTRACT_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ABSTRACT_MAP, GeeAbstractMapClass))
#define GEE_IS_ABSTRACT_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ABSTRACT_MAP))
#define GEE_IS_ABSTRACT_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ABSTRACT_MAP))
#define GEE_ABSTRACT_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ABSTRACT_MAP, GeeAbstractMapClass))

typedef struct _GeeAbstractMap GeeAbstractMap;
typedef struct _GeeAbstractMapClass GeeAbstractMapClass;

#define GEE_TYPE_HASH_MAP (gee_hash_map_get_type ())
#define GEE_HASH_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_HASH_MAP, GeeHashMap))
#define GEE_HASH_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_HASH_MAP, GeeHashMapClass))
#define GEE_IS_HASH_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_HASH_MAP))
#define GEE_IS_HASH_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_HASH_MAP))
#define GEE_HASH_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_HASH_MAP, GeeHashMapClass))

typedef struct _GeeHashMap GeeHashMap;
typedef struct _GeeHashMapClass GeeHashMapClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _GeeMapEntryPrivate GeeMapEntryPrivate;

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

struct _GeeMapIteratorIface {
	GTypeInterface parent_iface;
	gboolean (*next) (GeeMapIterator* self);
	gboolean (*has_next) (GeeMapIterator* self);
	gboolean (*first) (GeeMapIterator* self);
	gpointer (*get_key) (GeeMapIterator* self);
	gpointer (*get_value) (GeeMapIterator* self);
	void (*set_value) (GeeMapIterator* self, gconstpointer value);
	void (*unset) (GeeMapIterator* self);
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

struct _GeeSetIface {
	GTypeInterface parent_iface;
	GeeSet* (*get_read_only_view) (GeeSet* self);
};

struct _GeeMapIface {
	GTypeInterface parent_iface;
	gboolean (*has_key) (GeeMap* self, gconstpointer key);
	gboolean (*contains) (GeeMap* self, gconstpointer key);
	gboolean (*has) (GeeMap* self, gconstpointer key, gconstpointer value);
	gpointer (*get) (GeeMap* self, gconstpointer key);
	void (*set) (GeeMap* self, gconstpointer key, gconstpointer value);
	gboolean (*unset) (GeeMap* self, gconstpointer key, gpointer* value);
	gboolean (*remove) (GeeMap* self, gconstpointer key, gpointer* value);
	void (*clear) (GeeMap* self);
	GeeMapIterator* (*map_iterator) (GeeMap* self);
	void (*set_all) (GeeMap* self, GeeMap* map);
	gboolean (*unset_all) (GeeMap* self, GeeMap* map);
	gboolean (*remove_all) (GeeMap* self, GeeMap* map);
	gboolean (*has_all) (GeeMap* self, GeeMap* map);
	gboolean (*contains_all) (GeeMap* self, GeeMap* map);
	gint (*get_size) (GeeMap* self);
	gboolean (*get_is_empty) (GeeMap* self);
	GeeSet* (*get_keys) (GeeMap* self);
	GeeCollection* (*get_values) (GeeMap* self);
	GeeSet* (*get_entries) (GeeMap* self);
	GeeMap* (*get_read_only_view) (GeeMap* self);
	GType (*get_key_type) (GeeMap* self);
	GType (*get_value_type) (GeeMap* self);
};

struct _GeeMapEntry {
	GObject parent_instance;
	GeeMapEntryPrivate * priv;
};

struct _GeeMapEntryClass {
	GObjectClass parent_class;
	gconstpointer (*get_key) (GeeMapEntry* self);
	gconstpointer (*get_value) (GeeMapEntry* self);
	void (*set_value) (GeeMapEntry* self, gconstpointer value);
};

struct _GeeMapEntryPrivate {
	GType k_type;
	GBoxedCopyFunc k_dup_func;
	GDestroyNotify k_destroy_func;
	GType v_type;
	GBoxedCopyFunc v_dup_func;
	GDestroyNotify v_destroy_func;
};


static gpointer gee_map_entry_parent_class = NULL;

GType gee_iterator_get_type (void) G_GNUC_CONST;
GType gee_iterable_get_type (void) G_GNUC_CONST;
GType gee_map_iterator_get_type (void) G_GNUC_CONST;
GType gee_collection_get_type (void) G_GNUC_CONST;
GType gee_set_get_type (void) G_GNUC_CONST;
GType gee_map_entry_get_type (void) G_GNUC_CONST;
GType gee_map_get_type (void) G_GNUC_CONST;
gboolean gee_map_has_key (GeeMap* self, gconstpointer key);
gboolean gee_map_contains (GeeMap* self, gconstpointer key) G_GNUC_DEPRECATED;
gboolean gee_map_has (GeeMap* self, gconstpointer key, gconstpointer value);
gpointer gee_map_get (GeeMap* self, gconstpointer key);
void gee_map_set (GeeMap* self, gconstpointer key, gconstpointer value);
gboolean gee_map_unset (GeeMap* self, gconstpointer key, gpointer* value);
gboolean gee_map_remove (GeeMap* self, gconstpointer key, gpointer* value) G_GNUC_DEPRECATED;
void gee_map_clear (GeeMap* self);
GeeMapIterator* gee_map_map_iterator (GeeMap* self);
void gee_map_set_all (GeeMap* self, GeeMap* map);
gboolean gee_map_unset_all (GeeMap* self, GeeMap* map);
gboolean gee_map_remove_all (GeeMap* self, GeeMap* map) G_GNUC_DEPRECATED;
gboolean gee_map_has_all (GeeMap* self, GeeMap* map);
gboolean gee_map_contains_all (GeeMap* self, GeeMap* map) G_GNUC_DEPRECATED;
GeeMap* gee_map_empty (GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func);
GeeHashMap* gee_hash_map_new (GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func, GHashFunc key_hash_func, GEqualFunc key_equal_func, GEqualFunc value_equal_func);
GeeHashMap* gee_hash_map_construct (GType object_type, GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func, GHashFunc key_hash_func, GEqualFunc key_equal_func, GEqualFunc value_equal_func);
GType gee_abstract_map_get_type (void) G_GNUC_CONST;
GType gee_hash_map_get_type (void) G_GNUC_CONST;
GeeMap* gee_abstract_map_get_read_only_view (GeeAbstractMap* self);
gint gee_map_get_size (GeeMap* self);
gboolean gee_map_get_is_empty (GeeMap* self);
GeeSet* gee_map_get_keys (GeeMap* self);
GeeCollection* gee_map_get_values (GeeMap* self);
GeeSet* gee_map_get_entries (GeeMap* self);
GeeMap* gee_map_get_read_only_view (GeeMap* self);
GType gee_map_get_key_type (GeeMap* self);
GType gee_map_get_value_type (GeeMap* self);
#define GEE_MAP_ENTRY_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GEE_MAP_TYPE_ENTRY, GeeMapEntryPrivate))
enum  {
	GEE_MAP_ENTRY_DUMMY_PROPERTY,
	GEE_MAP_ENTRY_K_TYPE,
	GEE_MAP_ENTRY_K_DUP_FUNC,
	GEE_MAP_ENTRY_K_DESTROY_FUNC,
	GEE_MAP_ENTRY_V_TYPE,
	GEE_MAP_ENTRY_V_DUP_FUNC,
	GEE_MAP_ENTRY_V_DESTROY_FUNC,
	GEE_MAP_ENTRY_KEY,
	GEE_MAP_ENTRY_VALUE
};
GeeMapEntry* gee_map_entry_construct (GType object_type, GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func);
gconstpointer gee_map_entry_get_key (GeeMapEntry* self);
gconstpointer gee_map_entry_get_value (GeeMapEntry* self);
void gee_map_entry_set_value (GeeMapEntry* self, gconstpointer value);
static void _vala_gee_map_entry_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_gee_map_entry_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


/**
 * Determines whether this map has the specified key.
 *
 * @param key the key to locate in the map
 *
 * @return    ``true`` if key is found, ``false`` otherwise
 */
gboolean gee_map_has_key (GeeMap* self, gconstpointer key) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_MAP_GET_INTERFACE (self)->has_key (self, key);
}


/**
 * Determines whether this map contains the specified key.
 *
 * @param key the key to locate in the map
 *
 * @return    ``true`` if key is found, ``false`` otherwise
 *
 * @deprecated Use {@link has_key} method instead.
 */
gboolean gee_map_contains (GeeMap* self, gconstpointer key) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_MAP_GET_INTERFACE (self)->contains (self, key);
}


/**
 * Determines whether this map has the specified key/value entry.
 *
 * @param key the key to locate in the map
 * @param value the corresponding value
 *
 * @return    ``true`` if key is found, ``false`` otherwise
 */
gboolean gee_map_has (GeeMap* self, gconstpointer key, gconstpointer value) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_MAP_GET_INTERFACE (self)->has (self, key, value);
}


/**
 * Returns the value of the specified key in this map.
 *
 * @param key the key whose value is to be retrieved
 *
 * @return    the value associated with the key, or ``null`` if the key
 *            couldn't be found
 */
gpointer gee_map_get (GeeMap* self, gconstpointer key) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_MAP_GET_INTERFACE (self)->get (self, key);
}


/**
 * Inserts a new key and value into this map.
 *
 * @param key   the key to insert
 * @param value the value to associate with the key
 */
void gee_map_set (GeeMap* self, gconstpointer key, gconstpointer value) {
	g_return_if_fail (self != NULL);
	GEE_MAP_GET_INTERFACE (self)->set (self, key, value);
}


/**
 * Removes the specified key from this map.
 *
 * @param key   the key to remove from the map
 * @param value the receiver variable for the removed value
 *
 * @return    ``true`` if the map has been changed, ``false`` otherwise
 */
gboolean gee_map_unset (GeeMap* self, gconstpointer key, gpointer* value) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_MAP_GET_INTERFACE (self)->unset (self, key, value);
}


/**
 * Removes the specified key from this map.
 *
 * @param key   the key to remove from the map
 * @param value the receiver variable for the removed value
 *
 * @return    ``true`` if the map has been changed, ``false`` otherwise
 *
 * @deprecated Use {@link unset} method instead.
 */
gboolean gee_map_remove (GeeMap* self, gconstpointer key, gpointer* value) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_MAP_GET_INTERFACE (self)->remove (self, key, value);
}


/**
 * Removes all items from this collection. Must not be called on
 * read-only collections.
 */
void gee_map_clear (GeeMap* self) {
	g_return_if_fail (self != NULL);
	GEE_MAP_GET_INTERFACE (self)->clear (self);
}


/**
 * Returns an iterator for this map.
 *
 * @return a map iterator
 */
GeeMapIterator* gee_map_map_iterator (GeeMap* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_MAP_GET_INTERFACE (self)->map_iterator (self);
}


/**
 * Inserts all items that are contained in the input map to this map.
 *
 * @param map the map which items are inserted to this map
 */
void gee_map_set_all (GeeMap* self, GeeMap* map) {
	g_return_if_fail (self != NULL);
	GEE_MAP_GET_INTERFACE (self)->set_all (self, map);
}


/**
 * Removes all items from this map that are common to the input map
 * and this map.
 *
 * @param map the map which common items are deleted from this map
 */
gboolean gee_map_unset_all (GeeMap* self, GeeMap* map) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_MAP_GET_INTERFACE (self)->unset_all (self, map);
}


/**
 * Removes all items from this map that are common to the input map
 * and this map.
 *
 * @param map the map which common items are deleted from this map
 *
 * @deprecated Use {@link unset_all} method instead.
 */
gboolean gee_map_remove_all (GeeMap* self, GeeMap* map) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_MAP_GET_INTERFACE (self)->remove_all (self, map);
}


/**
 * Returns ``true`` it this map contains all items as the input map.
 *
 * @param map the map which items will be compared with this map
 */
gboolean gee_map_has_all (GeeMap* self, GeeMap* map) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_MAP_GET_INTERFACE (self)->has_all (self, map);
}


/**
 * Returns ``true`` it this map contains all items as the input map.
 *
 * @param map the map which items will be compared with this map
 *
 * @deprecated Use {@link has_all} method instead.
 */
gboolean gee_map_contains_all (GeeMap* self, GeeMap* map) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_MAP_GET_INTERFACE (self)->contains_all (self, map);
}


/**
 * Returns an immutable empty map.
 *
 * @return an immutable empty map
 */
GeeMap* gee_map_empty (GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func) {
	GeeMap* result = NULL;
	GeeHashMap* _tmp0_;
	GeeHashMap* _tmp1_;
	GeeMap* _tmp2_;
	GeeMap* _tmp3_;
	GeeMap* _tmp4_;
	_tmp0_ = gee_hash_map_new (k_type, (GBoxedCopyFunc) k_dup_func, k_destroy_func, v_type, (GBoxedCopyFunc) v_dup_func, v_destroy_func, NULL, NULL, NULL);
	_tmp1_ = _tmp0_;
	_tmp2_ = gee_abstract_map_get_read_only_view ((GeeAbstractMap*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp1_);
	result = _tmp4_;
	return result;
}


gint gee_map_get_size (GeeMap* self) {
	g_return_val_if_fail (self != NULL, 0);
	return GEE_MAP_GET_INTERFACE (self)->get_size (self);
}


gboolean gee_map_get_is_empty (GeeMap* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_MAP_GET_INTERFACE (self)->get_is_empty (self);
}


GeeSet* gee_map_get_keys (GeeMap* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_MAP_GET_INTERFACE (self)->get_keys (self);
}


GeeCollection* gee_map_get_values (GeeMap* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_MAP_GET_INTERFACE (self)->get_values (self);
}


GeeSet* gee_map_get_entries (GeeMap* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_MAP_GET_INTERFACE (self)->get_entries (self);
}


GeeMap* gee_map_get_read_only_view (GeeMap* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_MAP_GET_INTERFACE (self)->get_read_only_view (self);
}


GType gee_map_get_key_type (GeeMap* self) {
	g_return_val_if_fail (self != NULL, 0UL);
	return GEE_MAP_GET_INTERFACE (self)->get_key_type (self);
}


GType gee_map_get_value_type (GeeMap* self) {
	g_return_val_if_fail (self != NULL, 0UL);
	return GEE_MAP_GET_INTERFACE (self)->get_value_type (self);
}


GeeMapEntry* gee_map_entry_construct (GType object_type, GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func) {
	GeeMapEntry * self = NULL;
	self = (GeeMapEntry*) g_object_new (object_type, NULL);
	self->priv->k_type = k_type;
	self->priv->k_dup_func = k_dup_func;
	self->priv->k_destroy_func = k_destroy_func;
	self->priv->v_type = v_type;
	self->priv->v_dup_func = v_dup_func;
	self->priv->v_destroy_func = v_destroy_func;
	return self;
}


gconstpointer gee_map_entry_get_key (GeeMapEntry* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_MAP_ENTRY_GET_CLASS (self)->get_key (self);
}


gconstpointer gee_map_entry_get_value (GeeMapEntry* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_MAP_ENTRY_GET_CLASS (self)->get_value (self);
}


void gee_map_entry_set_value (GeeMapEntry* self, gconstpointer value) {
	g_return_if_fail (self != NULL);
	GEE_MAP_ENTRY_GET_CLASS (self)->set_value (self, value);
}


static void gee_map_entry_class_init (GeeMapEntryClass * klass) {
	gee_map_entry_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GeeMapEntryPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_map_entry_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_map_entry_set_property;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_K_TYPE, g_param_spec_gtype ("k-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_K_DUP_FUNC, g_param_spec_pointer ("k-dup-func", "dup func", "dup func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_K_DESTROY_FUNC, g_param_spec_pointer ("k-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_V_TYPE, g_param_spec_gtype ("v-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_V_DUP_FUNC, g_param_spec_pointer ("v-dup-func", "dup func", "dup func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_V_DESTROY_FUNC, g_param_spec_pointer ("v-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	/**
	 * The key of this entry.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_KEY, g_param_spec_pointer ("key", "key", "key", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	/**
	 * The value of this entry.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_VALUE, g_param_spec_pointer ("value", "value", "value", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void gee_map_entry_instance_init (GeeMapEntry * self) {
	self->priv = GEE_MAP_ENTRY_GET_PRIVATE (self);
}


/**
 * An entry of a map.
 */
GType gee_map_entry_get_type (void) {
	static volatile gsize gee_map_entry_type_id__volatile = 0;
	if (g_once_init_enter (&gee_map_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GeeMapEntryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_map_entry_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeMapEntry), 0, (GInstanceInitFunc) gee_map_entry_instance_init, NULL };
		GType gee_map_entry_type_id;
		gee_map_entry_type_id = g_type_register_static (G_TYPE_OBJECT, "GeeMapEntry", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&gee_map_entry_type_id__volatile, gee_map_entry_type_id);
	}
	return gee_map_entry_type_id__volatile;
}


static void _vala_gee_map_entry_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GeeMapEntry * self;
	self = GEE_MAP_ENTRY (object);
	switch (property_id) {
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_gee_map_entry_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GeeMapEntry * self;
	self = GEE_MAP_ENTRY (object);
	switch (property_id) {
		case GEE_MAP_ENTRY_K_TYPE:
		self->priv->k_type = g_value_get_gtype (value);
		break;
		case GEE_MAP_ENTRY_K_DUP_FUNC:
		self->priv->k_dup_func = g_value_get_pointer (value);
		break;
		case GEE_MAP_ENTRY_K_DESTROY_FUNC:
		self->priv->k_destroy_func = g_value_get_pointer (value);
		break;
		case GEE_MAP_ENTRY_V_TYPE:
		self->priv->v_type = g_value_get_gtype (value);
		break;
		case GEE_MAP_ENTRY_V_DUP_FUNC:
		self->priv->v_dup_func = g_value_get_pointer (value);
		break;
		case GEE_MAP_ENTRY_V_DESTROY_FUNC:
		self->priv->v_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void gee_map_base_init (GeeMapIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		 * The number of items in this map.
		 */
		g_object_interface_install_property (iface, g_param_spec_int ("size", "size", "size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		/**
		 * Specifies whether this map is empty.
		 */
		g_object_interface_install_property (iface, g_param_spec_boolean ("is-empty", "is-empty", "is-empty", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		/**
		 * The read-only view of the keys of this map.
		 */
		g_object_interface_install_property (iface, g_param_spec_object ("keys", "keys", "keys", GEE_TYPE_SET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		/**
		 * The read-only view of the values of this map.
		 */
		g_object_interface_install_property (iface, g_param_spec_object ("values", "values", "values", GEE_TYPE_COLLECTION, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		/**
		 * The read-only view of the entries of this map.
		 */
		g_object_interface_install_property (iface, g_param_spec_object ("entries", "entries", "entries", GEE_TYPE_SET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		/**
		 * The read-only view this map.
		 */
		g_object_interface_install_property (iface, g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_MAP, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		/**
		 * The type of the keys in this map.
		 */
		g_object_interface_install_property (iface, g_param_spec_gtype ("key-type", "key-type", "key-type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		/**
		 * The type of the values in this map.
		 */
		g_object_interface_install_property (iface, g_param_spec_gtype ("value-type", "value-type", "value-type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	}
}


/**
 * An object that maps keys to values.
 */
GType gee_map_get_type (void) {
	static volatile gsize gee_map_type_id__volatile = 0;
	if (g_once_init_enter (&gee_map_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GeeMapIface), (GBaseInitFunc) gee_map_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType gee_map_type_id;
		gee_map_type_id = g_type_register_static (G_TYPE_INTERFACE, "GeeMap", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (gee_map_type_id, G_TYPE_OBJECT);
		g_type_interface_add_prerequisite (gee_map_type_id, GEE_TYPE_ITERABLE);
		g_once_init_leave (&gee_map_type_id__volatile, gee_map_type_id);
	}
	return gee_map_type_id__volatile;
}


