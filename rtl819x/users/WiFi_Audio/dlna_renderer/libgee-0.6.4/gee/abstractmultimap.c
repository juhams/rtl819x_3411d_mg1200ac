/* abstractmultimap.c generated by valac 0.15.0.90-e9553, the Vala compiler
 * generated from abstractmultimap.vala, do not modify */

/* abstractmultimap.vala
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
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */

#include <glib.h>
#include <glib-object.h>


#define GEE_TYPE_MULTI_MAP (gee_multi_map_get_type ())
#define GEE_MULTI_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_MULTI_MAP, GeeMultiMap))
#define GEE_IS_MULTI_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_MULTI_MAP))
#define GEE_MULTI_MAP_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_MULTI_MAP, GeeMultiMapIface))

typedef struct _GeeMultiMap GeeMultiMap;
typedef struct _GeeMultiMapIface GeeMultiMapIface;

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

#define GEE_TYPE_SET (gee_set_get_type ())
#define GEE_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_SET, GeeSet))
#define GEE_IS_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_SET))
#define GEE_SET_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_SET, GeeSetIface))

typedef struct _GeeSet GeeSet;
typedef struct _GeeSetIface GeeSetIface;

#define GEE_TYPE_MULTI_SET (gee_multi_set_get_type ())
#define GEE_MULTI_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_MULTI_SET, GeeMultiSet))
#define GEE_IS_MULTI_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_MULTI_SET))
#define GEE_MULTI_SET_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_MULTI_SET, GeeMultiSetIface))

typedef struct _GeeMultiSet GeeMultiSet;
typedef struct _GeeMultiSetIface GeeMultiSetIface;

#define GEE_TYPE_ABSTRACT_MULTI_MAP (gee_abstract_multi_map_get_type ())
#define GEE_ABSTRACT_MULTI_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ABSTRACT_MULTI_MAP, GeeAbstractMultiMap))
#define GEE_ABSTRACT_MULTI_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ABSTRACT_MULTI_MAP, GeeAbstractMultiMapClass))
#define GEE_IS_ABSTRACT_MULTI_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ABSTRACT_MULTI_MAP))
#define GEE_IS_ABSTRACT_MULTI_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ABSTRACT_MULTI_MAP))
#define GEE_ABSTRACT_MULTI_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ABSTRACT_MULTI_MAP, GeeAbstractMultiMapClass))

typedef struct _GeeAbstractMultiMap GeeAbstractMultiMap;
typedef struct _GeeAbstractMultiMapClass GeeAbstractMultiMapClass;
typedef struct _GeeAbstractMultiMapPrivate GeeAbstractMultiMapPrivate;

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

#define GEE_MAP_TYPE_ENTRY (gee_map_entry_get_type ())
#define GEE_MAP_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_MAP_TYPE_ENTRY, GeeMapEntry))
#define GEE_MAP_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_MAP_TYPE_ENTRY, GeeMapEntryClass))
#define GEE_MAP_IS_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_MAP_TYPE_ENTRY))
#define GEE_MAP_IS_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_MAP_TYPE_ENTRY))
#define GEE_MAP_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_MAP_TYPE_ENTRY, GeeMapEntryClass))

typedef struct _GeeMapEntry GeeMapEntry;
typedef struct _GeeMapEntryClass GeeMapEntryClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define GEE_TYPE_ABSTRACT_COLLECTION (gee_abstract_collection_get_type ())
#define GEE_ABSTRACT_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ABSTRACT_COLLECTION, GeeAbstractCollection))
#define GEE_ABSTRACT_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ABSTRACT_COLLECTION, GeeAbstractCollectionClass))
#define GEE_IS_ABSTRACT_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ABSTRACT_COLLECTION))
#define GEE_IS_ABSTRACT_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ABSTRACT_COLLECTION))
#define GEE_ABSTRACT_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ABSTRACT_COLLECTION, GeeAbstractCollectionClass))

typedef struct _GeeAbstractCollection GeeAbstractCollection;
typedef struct _GeeAbstractCollectionClass GeeAbstractCollectionClass;

#define GEE_TYPE_ABSTRACT_LIST (gee_abstract_list_get_type ())
#define GEE_ABSTRACT_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ABSTRACT_LIST, GeeAbstractList))
#define GEE_ABSTRACT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ABSTRACT_LIST, GeeAbstractListClass))
#define GEE_IS_ABSTRACT_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ABSTRACT_LIST))
#define GEE_IS_ABSTRACT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ABSTRACT_LIST))
#define GEE_ABSTRACT_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ABSTRACT_LIST, GeeAbstractListClass))

typedef struct _GeeAbstractList GeeAbstractList;
typedef struct _GeeAbstractListClass GeeAbstractListClass;

#define GEE_TYPE_ARRAY_LIST (gee_array_list_get_type ())
#define GEE_ARRAY_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ARRAY_LIST, GeeArrayList))
#define GEE_ARRAY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ARRAY_LIST, GeeArrayListClass))
#define GEE_IS_ARRAY_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ARRAY_LIST))
#define GEE_IS_ARRAY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ARRAY_LIST))
#define GEE_ARRAY_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ARRAY_LIST, GeeArrayListClass))

typedef struct _GeeArrayList GeeArrayList;
typedef struct _GeeArrayListClass GeeArrayListClass;

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

struct _GeeSetIface {
	GTypeInterface parent_iface;
	GeeSet* (*get_read_only_view) (GeeSet* self);
};

struct _GeeMultiSetIface {
	GTypeInterface parent_iface;
	gint (*count) (GeeMultiSet* self, gconstpointer item);
};

struct _GeeMultiMapIface {
	GTypeInterface parent_iface;
	GeeSet* (*get_keys) (GeeMultiMap* self);
	GeeMultiSet* (*get_all_keys) (GeeMultiMap* self);
	GeeCollection* (*get_values) (GeeMultiMap* self);
	gboolean (*contains) (GeeMultiMap* self, gconstpointer key);
	GeeCollection* (*get) (GeeMultiMap* self, gconstpointer key);
	void (*set) (GeeMultiMap* self, gconstpointer key, gconstpointer value);
	gboolean (*remove) (GeeMultiMap* self, gconstpointer key, gconstpointer value);
	gboolean (*remove_all) (GeeMultiMap* self, gconstpointer key);
	void (*clear) (GeeMultiMap* self);
	gint (*get_size) (GeeMultiMap* self);
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

struct _GeeAbstractMultiMap {
	GObject parent_instance;
	GeeAbstractMultiMapPrivate * priv;
	GeeMap* _storage_map;
};

struct _GeeAbstractMultiMapClass {
	GObjectClass parent_class;
	GeeCollection* (*create_value_storage) (GeeAbstractMultiMap* self);
	GeeMultiSet* (*create_multi_key_set) (GeeAbstractMultiMap* self);
	GEqualFunc (*get_value_equal_func) (GeeAbstractMultiMap* self);
};

struct _GeeAbstractMultiMapPrivate {
	GType k_type;
	GBoxedCopyFunc k_dup_func;
	GDestroyNotify k_destroy_func;
	GType v_type;
	GBoxedCopyFunc v_dup_func;
	GDestroyNotify v_destroy_func;
	gint _nitems;
	GeeSet* _empty_value_set;
};


static gpointer gee_abstract_multi_map_parent_class = NULL;
static GeeMultiMapIface* gee_abstract_multi_map_gee_multi_map_parent_iface = NULL;

GType gee_iterator_get_type (void) G_GNUC_CONST;
GType gee_iterable_get_type (void) G_GNUC_CONST;
GType gee_collection_get_type (void) G_GNUC_CONST;
GType gee_set_get_type (void) G_GNUC_CONST;
GType gee_multi_set_get_type (void) G_GNUC_CONST;
GType gee_multi_map_get_type (void) G_GNUC_CONST;
GType gee_abstract_multi_map_get_type (void) G_GNUC_CONST;
GType gee_map_iterator_get_type (void) G_GNUC_CONST;
GType gee_map_entry_get_type (void) G_GNUC_CONST;
GType gee_map_get_type (void) G_GNUC_CONST;
#define GEE_ABSTRACT_MULTI_MAP_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GEE_TYPE_ABSTRACT_MULTI_MAP, GeeAbstractMultiMapPrivate))
enum  {
	GEE_ABSTRACT_MULTI_MAP_DUMMY_PROPERTY,
	GEE_ABSTRACT_MULTI_MAP_K_TYPE,
	GEE_ABSTRACT_MULTI_MAP_K_DUP_FUNC,
	GEE_ABSTRACT_MULTI_MAP_K_DESTROY_FUNC,
	GEE_ABSTRACT_MULTI_MAP_V_TYPE,
	GEE_ABSTRACT_MULTI_MAP_V_DUP_FUNC,
	GEE_ABSTRACT_MULTI_MAP_V_DESTROY_FUNC,
	GEE_ABSTRACT_MULTI_MAP_SIZE
};
GeeAbstractMultiMap* gee_abstract_multi_map_construct (GType object_type, GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func, GeeMap* storage_map);
GeeSet* gee_set_empty (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func);
GeeCollection* gee_abstract_multi_map_create_value_storage (GeeAbstractMultiMap* self);
static GeeCollection* gee_abstract_multi_map_real_create_value_storage (GeeAbstractMultiMap* self);
GeeMultiSet* gee_abstract_multi_map_create_multi_key_set (GeeAbstractMultiMap* self);
static GeeMultiSet* gee_abstract_multi_map_real_create_multi_key_set (GeeAbstractMultiMap* self);
GEqualFunc gee_abstract_multi_map_get_value_equal_func (GeeAbstractMultiMap* self);
static GEqualFunc gee_abstract_multi_map_real_get_value_equal_func (GeeAbstractMultiMap* self);
static GeeSet* gee_abstract_multi_map_real_get_keys (GeeMultiMap* base);
GeeSet* gee_map_get_keys (GeeMap* self);
static GeeMultiSet* gee_abstract_multi_map_real_get_all_keys (GeeMultiMap* base);
GeeSet* gee_map_get_entries (GeeMap* self);
GeeIterator* gee_iterable_iterator (GeeIterable* self);
gboolean gee_iterator_next (GeeIterator* self);
gpointer gee_iterator_get (GeeIterator* self);
gconstpointer gee_map_entry_get_value (GeeMapEntry* self);
gint gee_collection_get_size (GeeCollection* self);
gboolean gee_collection_add (GeeCollection* self, gconstpointer item);
gconstpointer gee_map_entry_get_key (GeeMapEntry* self);
static GeeCollection* gee_abstract_multi_map_real_get_values (GeeMultiMap* base);
GeeArrayList* gee_array_list_new (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GEqualFunc equal_func);
GeeArrayList* gee_array_list_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GEqualFunc equal_func);
GType gee_abstract_collection_get_type (void) G_GNUC_CONST;
GType gee_abstract_list_get_type (void) G_GNUC_CONST;
GType gee_array_list_get_type (void) G_GNUC_CONST;
gboolean gee_abstract_collection_add (GeeAbstractCollection* self, gconstpointer item);
static gboolean gee_abstract_multi_map_real_contains (GeeMultiMap* base, gconstpointer key);
gboolean gee_map_has_key (GeeMap* self, gconstpointer key);
static GeeCollection* gee_abstract_multi_map_real_get (GeeMultiMap* base, gconstpointer key);
gpointer gee_map_get (GeeMap* self, gconstpointer key);
GeeCollection* gee_collection_get_read_only_view (GeeCollection* self);
static void gee_abstract_multi_map_real_set (GeeMultiMap* base, gconstpointer key, gconstpointer value);
void gee_map_set (GeeMap* self, gconstpointer key, gconstpointer value);
static gboolean gee_abstract_multi_map_real_remove (GeeMultiMap* base, gconstpointer key, gconstpointer value);
gboolean gee_collection_contains (GeeCollection* self, gconstpointer item);
gboolean gee_collection_remove (GeeCollection* self, gconstpointer item);
gboolean gee_map_unset (GeeMap* self, gconstpointer key, gpointer* value);
static gboolean gee_abstract_multi_map_real_remove_all (GeeMultiMap* base, gconstpointer key);
static void gee_abstract_multi_map_real_clear (GeeMultiMap* base);
void gee_map_clear (GeeMap* self);
static void gee_abstract_multi_map_finalize (GObject* obj);
gint gee_multi_map_get_size (GeeMultiMap* self);
static void _vala_gee_abstract_multi_map_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_gee_abstract_multi_map_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


GeeAbstractMultiMap* gee_abstract_multi_map_construct (GType object_type, GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func, GeeMap* storage_map) {
	GeeAbstractMultiMap * self = NULL;
	GeeMap* _tmp0_;
	GeeMap* _tmp1_;
	GeeSet* _tmp2_ = NULL;
	g_return_val_if_fail (storage_map != NULL, NULL);
	self = (GeeAbstractMultiMap*) g_object_new (object_type, NULL);
	self->priv->k_type = k_type;
	self->priv->k_dup_func = k_dup_func;
	self->priv->k_destroy_func = k_destroy_func;
	self->priv->v_type = v_type;
	self->priv->v_dup_func = v_dup_func;
	self->priv->v_destroy_func = v_destroy_func;
	_tmp0_ = storage_map;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->_storage_map);
	self->_storage_map = _tmp1_;
	_tmp2_ = gee_set_empty (v_type, (GBoxedCopyFunc) v_dup_func, v_destroy_func);
	_g_object_unref0 (self->priv->_empty_value_set);
	self->priv->_empty_value_set = _tmp2_;
	return self;
}


static GeeCollection* gee_abstract_multi_map_real_create_value_storage (GeeAbstractMultiMap* self) {
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_multi_map_create_value_storage'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


GeeCollection* gee_abstract_multi_map_create_value_storage (GeeAbstractMultiMap* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_ABSTRACT_MULTI_MAP_GET_CLASS (self)->create_value_storage (self);
}


static GeeMultiSet* gee_abstract_multi_map_real_create_multi_key_set (GeeAbstractMultiMap* self) {
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_multi_map_create_multi_key_set'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


GeeMultiSet* gee_abstract_multi_map_create_multi_key_set (GeeAbstractMultiMap* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_ABSTRACT_MULTI_MAP_GET_CLASS (self)->create_multi_key_set (self);
}


static GEqualFunc gee_abstract_multi_map_real_get_value_equal_func (GeeAbstractMultiMap* self) {
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_multi_map_get_value_equal_func'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


GEqualFunc gee_abstract_multi_map_get_value_equal_func (GeeAbstractMultiMap* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_ABSTRACT_MULTI_MAP_GET_CLASS (self)->get_value_equal_func (self);
}


static GeeSet* gee_abstract_multi_map_real_get_keys (GeeMultiMap* base) {
	GeeAbstractMultiMap * self;
	GeeSet* result = NULL;
	GeeMap* _tmp0_;
	GeeSet* _tmp1_;
	GeeSet* _tmp2_;
	self = (GeeAbstractMultiMap*) base;
	_tmp0_ = self->_storage_map;
	_tmp1_ = gee_map_get_keys (_tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


static GeeMultiSet* gee_abstract_multi_map_real_get_all_keys (GeeMultiMap* base) {
	GeeAbstractMultiMap * self;
	GeeMultiSet* result = NULL;
	GeeMultiSet* _tmp0_ = NULL;
	GeeMultiSet* _result_;
	self = (GeeAbstractMultiMap*) base;
	_tmp0_ = gee_abstract_multi_map_create_multi_key_set (self);
	_result_ = _tmp0_;
	{
		GeeMap* _tmp1_;
		GeeSet* _tmp2_;
		GeeSet* _tmp3_;
		GeeSet* _tmp4_;
		GeeIterator* _tmp5_ = NULL;
		GeeIterator* _tmp6_;
		GeeIterator* _entry_it;
		_tmp1_ = self->_storage_map;
		_tmp2_ = gee_map_get_entries (_tmp1_);
		_tmp3_ = _tmp2_;
		_tmp4_ = _tmp3_;
		_tmp5_ = gee_iterable_iterator ((GeeIterable*) _tmp4_);
		_tmp6_ = _tmp5_;
		_g_object_unref0 (_tmp4_);
		_entry_it = _tmp6_;
		while (TRUE) {
			GeeIterator* _tmp7_;
			gboolean _tmp8_ = FALSE;
			GeeIterator* _tmp9_;
			gpointer _tmp10_ = NULL;
			GeeMapEntry* entry;
			_tmp7_ = _entry_it;
			_tmp8_ = gee_iterator_next (_tmp7_);
			if (!_tmp8_) {
				break;
			}
			_tmp9_ = _entry_it;
			_tmp10_ = gee_iterator_get (_tmp9_);
			entry = (GeeMapEntry*) _tmp10_;
			{
				gint i;
				i = 0;
				{
					gboolean _tmp11_;
					_tmp11_ = TRUE;
					while (TRUE) {
						gboolean _tmp12_;
						gint _tmp14_;
						GeeMapEntry* _tmp15_;
						gconstpointer _tmp16_;
						GeeCollection* _tmp17_;
						gint _tmp18_;
						gint _tmp19_;
						GeeMultiSet* _tmp20_;
						GeeMapEntry* _tmp21_;
						gconstpointer _tmp22_;
						gconstpointer _tmp23_;
						_tmp12_ = _tmp11_;
						if (!_tmp12_) {
							gint _tmp13_;
							_tmp13_ = i;
							i = _tmp13_ + 1;
						}
						_tmp11_ = FALSE;
						_tmp14_ = i;
						_tmp15_ = entry;
						_tmp16_ = gee_map_entry_get_value (_tmp15_);
						_tmp17_ = _tmp16_;
						_tmp18_ = gee_collection_get_size ((GeeCollection*) _tmp17_);
						_tmp19_ = _tmp18_;
						if (!(_tmp14_ < _tmp19_)) {
							break;
						}
						_tmp20_ = _result_;
						_tmp21_ = entry;
						_tmp22_ = gee_map_entry_get_key (_tmp21_);
						_tmp23_ = _tmp22_;
						gee_collection_add ((GeeCollection*) _tmp20_, _tmp23_);
					}
				}
			}
			_g_object_unref0 (entry);
		}
		_g_object_unref0 (_entry_it);
	}
	result = _result_;
	return result;
}


static GeeCollection* gee_abstract_multi_map_real_get_values (GeeMultiMap* base) {
	GeeAbstractMultiMap * self;
	GeeCollection* result = NULL;
	GEqualFunc _tmp0_ = NULL;
	GeeArrayList* _tmp1_;
	GeeArrayList* _result_;
	self = (GeeAbstractMultiMap*) base;
	_tmp0_ = gee_abstract_multi_map_get_value_equal_func (self);
	_tmp1_ = gee_array_list_new (self->priv->v_type, (GBoxedCopyFunc) self->priv->v_dup_func, self->priv->v_destroy_func, _tmp0_);
	_result_ = _tmp1_;
	{
		GeeMap* _tmp2_;
		GeeSet* _tmp3_;
		GeeSet* _tmp4_;
		GeeSet* _tmp5_;
		GeeIterator* _tmp6_ = NULL;
		GeeIterator* _tmp7_;
		GeeIterator* _entry_it;
		_tmp2_ = self->_storage_map;
		_tmp3_ = gee_map_get_entries (_tmp2_);
		_tmp4_ = _tmp3_;
		_tmp5_ = _tmp4_;
		_tmp6_ = gee_iterable_iterator ((GeeIterable*) _tmp5_);
		_tmp7_ = _tmp6_;
		_g_object_unref0 (_tmp5_);
		_entry_it = _tmp7_;
		while (TRUE) {
			GeeIterator* _tmp8_;
			gboolean _tmp9_ = FALSE;
			GeeIterator* _tmp10_;
			gpointer _tmp11_ = NULL;
			GeeMapEntry* entry;
			_tmp8_ = _entry_it;
			_tmp9_ = gee_iterator_next (_tmp8_);
			if (!_tmp9_) {
				break;
			}
			_tmp10_ = _entry_it;
			_tmp11_ = gee_iterator_get (_tmp10_);
			entry = (GeeMapEntry*) _tmp11_;
			{
				GeeMapEntry* _tmp12_;
				gconstpointer _tmp13_;
				GeeCollection* _tmp14_;
				GeeIterator* _tmp15_ = NULL;
				GeeIterator* _value_it;
				_tmp12_ = entry;
				_tmp13_ = gee_map_entry_get_value (_tmp12_);
				_tmp14_ = _tmp13_;
				_tmp15_ = gee_iterable_iterator ((GeeIterable*) ((GeeCollection*) _tmp14_));
				_value_it = _tmp15_;
				while (TRUE) {
					GeeIterator* _tmp16_;
					gboolean _tmp17_ = FALSE;
					GeeIterator* _tmp18_;
					gpointer _tmp19_ = NULL;
					gpointer value;
					GeeArrayList* _tmp20_;
					gconstpointer _tmp21_;
					_tmp16_ = _value_it;
					_tmp17_ = gee_iterator_next (_tmp16_);
					if (!_tmp17_) {
						break;
					}
					_tmp18_ = _value_it;
					_tmp19_ = gee_iterator_get (_tmp18_);
					value = _tmp19_;
					_tmp20_ = _result_;
					_tmp21_ = value;
					gee_abstract_collection_add ((GeeAbstractCollection*) _tmp20_, _tmp21_);
					((value == NULL) || (self->priv->v_destroy_func == NULL)) ? NULL : (value = (self->priv->v_destroy_func (value), NULL));
				}
				_g_object_unref0 (_value_it);
			}
			_g_object_unref0 (entry);
		}
		_g_object_unref0 (_entry_it);
	}
	result = (GeeCollection*) _result_;
	return result;
}


static gboolean gee_abstract_multi_map_real_contains (GeeMultiMap* base, gconstpointer key) {
	GeeAbstractMultiMap * self;
	gboolean result = FALSE;
	GeeMap* _tmp0_;
	gconstpointer _tmp1_;
	gboolean _tmp2_ = FALSE;
	self = (GeeAbstractMultiMap*) base;
	_tmp0_ = self->_storage_map;
	_tmp1_ = key;
	_tmp2_ = gee_map_has_key (_tmp0_, _tmp1_);
	result = _tmp2_;
	return result;
}


static GeeCollection* gee_abstract_multi_map_real_get (GeeMultiMap* base, gconstpointer key) {
	GeeAbstractMultiMap * self;
	GeeCollection* result = NULL;
	GeeMap* _tmp0_;
	gconstpointer _tmp1_;
	gboolean _tmp2_ = FALSE;
	self = (GeeAbstractMultiMap*) base;
	_tmp0_ = self->_storage_map;
	_tmp1_ = key;
	_tmp2_ = gee_map_has_key (_tmp0_, _tmp1_);
	if (_tmp2_) {
		GeeMap* _tmp3_;
		gconstpointer _tmp4_;
		gpointer _tmp5_ = NULL;
		GeeCollection* _tmp6_;
		GeeCollection* _tmp7_;
		GeeCollection* _tmp8_;
		GeeCollection* _tmp9_;
		_tmp3_ = self->_storage_map;
		_tmp4_ = key;
		_tmp5_ = gee_map_get (_tmp3_, _tmp4_);
		_tmp6_ = (GeeCollection*) _tmp5_;
		_tmp7_ = gee_collection_get_read_only_view (_tmp6_);
		_tmp8_ = _tmp7_;
		_tmp9_ = _tmp8_;
		_g_object_unref0 (_tmp6_);
		result = _tmp9_;
		return result;
	} else {
		GeeSet* _tmp10_;
		GeeCollection* _tmp11_;
		_tmp10_ = self->priv->_empty_value_set;
		_tmp11_ = _g_object_ref0 ((GeeCollection*) _tmp10_);
		result = _tmp11_;
		return result;
	}
}


static void gee_abstract_multi_map_real_set (GeeMultiMap* base, gconstpointer key, gconstpointer value) {
	GeeAbstractMultiMap * self;
	GeeMap* _tmp0_;
	gconstpointer _tmp1_;
	gboolean _tmp2_ = FALSE;
	self = (GeeAbstractMultiMap*) base;
	_tmp0_ = self->_storage_map;
	_tmp1_ = key;
	_tmp2_ = gee_map_has_key (_tmp0_, _tmp1_);
	if (_tmp2_) {
		GeeMap* _tmp3_;
		gconstpointer _tmp4_;
		gpointer _tmp5_ = NULL;
		GeeCollection* _tmp6_;
		gconstpointer _tmp7_;
		gboolean _tmp8_ = FALSE;
		gboolean _tmp9_;
		_tmp3_ = self->_storage_map;
		_tmp4_ = key;
		_tmp5_ = gee_map_get (_tmp3_, _tmp4_);
		_tmp6_ = (GeeCollection*) _tmp5_;
		_tmp7_ = value;
		_tmp8_ = gee_collection_add (_tmp6_, _tmp7_);
		_tmp9_ = _tmp8_;
		_g_object_unref0 (_tmp6_);
		if (_tmp9_) {
			gint _tmp10_;
			_tmp10_ = self->priv->_nitems;
			self->priv->_nitems = _tmp10_ + 1;
		}
	} else {
		GeeCollection* _tmp11_ = NULL;
		GeeCollection* s;
		GeeCollection* _tmp12_;
		gconstpointer _tmp13_;
		GeeMap* _tmp14_;
		gconstpointer _tmp15_;
		GeeCollection* _tmp16_;
		gint _tmp17_;
		_tmp11_ = gee_abstract_multi_map_create_value_storage (self);
		s = _tmp11_;
		_tmp12_ = s;
		_tmp13_ = value;
		gee_collection_add (_tmp12_, _tmp13_);
		_tmp14_ = self->_storage_map;
		_tmp15_ = key;
		_tmp16_ = s;
		gee_map_set (_tmp14_, _tmp15_, _tmp16_);
		_tmp17_ = self->priv->_nitems;
		self->priv->_nitems = _tmp17_ + 1;
		_g_object_unref0 (s);
	}
}


static gboolean gee_abstract_multi_map_real_remove (GeeMultiMap* base, gconstpointer key, gconstpointer value) {
	GeeAbstractMultiMap * self;
	gboolean result = FALSE;
	GeeMap* _tmp0_;
	gconstpointer _tmp1_;
	gboolean _tmp2_ = FALSE;
	self = (GeeAbstractMultiMap*) base;
	_tmp0_ = self->_storage_map;
	_tmp1_ = key;
	_tmp2_ = gee_map_has_key (_tmp0_, _tmp1_);
	if (_tmp2_) {
		GeeMap* _tmp3_;
		gconstpointer _tmp4_;
		gpointer _tmp5_ = NULL;
		GeeCollection* values;
		GeeCollection* _tmp6_;
		gconstpointer _tmp7_;
		gboolean _tmp8_ = FALSE;
		_tmp3_ = self->_storage_map;
		_tmp4_ = key;
		_tmp5_ = gee_map_get (_tmp3_, _tmp4_);
		values = (GeeCollection*) _tmp5_;
		_tmp6_ = values;
		_tmp7_ = value;
		_tmp8_ = gee_collection_contains (_tmp6_, _tmp7_);
		if (_tmp8_) {
			GeeCollection* _tmp9_;
			gconstpointer _tmp10_;
			gint _tmp11_;
			GeeCollection* _tmp12_;
			gint _tmp13_;
			gint _tmp14_;
			_tmp9_ = values;
			_tmp10_ = value;
			gee_collection_remove (_tmp9_, _tmp10_);
			_tmp11_ = self->priv->_nitems;
			self->priv->_nitems = _tmp11_ - 1;
			_tmp12_ = values;
			_tmp13_ = gee_collection_get_size (_tmp12_);
			_tmp14_ = _tmp13_;
			if (_tmp14_ == 0) {
				GeeMap* _tmp15_;
				gconstpointer _tmp16_;
				_tmp15_ = self->_storage_map;
				_tmp16_ = key;
				gee_map_unset (_tmp15_, _tmp16_, NULL);
			}
			result = TRUE;
			_g_object_unref0 (values);
			return result;
		}
		_g_object_unref0 (values);
	}
	result = FALSE;
	return result;
}


static gboolean gee_abstract_multi_map_real_remove_all (GeeMultiMap* base, gconstpointer key) {
	GeeAbstractMultiMap * self;
	gboolean result = FALSE;
	GeeMap* _tmp0_;
	gconstpointer _tmp1_;
	gboolean _tmp2_ = FALSE;
	self = (GeeAbstractMultiMap*) base;
	_tmp0_ = self->_storage_map;
	_tmp1_ = key;
	_tmp2_ = gee_map_has_key (_tmp0_, _tmp1_);
	if (_tmp2_) {
		GeeMap* _tmp3_;
		gconstpointer _tmp4_;
		gpointer _tmp5_ = NULL;
		GeeCollection* _tmp6_;
		gint _tmp7_;
		gint _tmp8_;
		gint _tmp9_;
		gint size;
		GeeMap* _tmp10_;
		gconstpointer _tmp11_;
		gboolean _tmp12_ = FALSE;
		_tmp3_ = self->_storage_map;
		_tmp4_ = key;
		_tmp5_ = gee_map_get (_tmp3_, _tmp4_);
		_tmp6_ = (GeeCollection*) _tmp5_;
		_tmp7_ = gee_collection_get_size (_tmp6_);
		_tmp8_ = _tmp7_;
		_tmp9_ = _tmp8_;
		_g_object_unref0 (_tmp6_);
		size = _tmp9_;
		_tmp10_ = self->_storage_map;
		_tmp11_ = key;
		_tmp12_ = gee_map_unset (_tmp10_, _tmp11_, NULL);
		if (_tmp12_) {
			gint _tmp13_;
			gint _tmp14_;
			_tmp13_ = self->priv->_nitems;
			_tmp14_ = size;
			self->priv->_nitems = _tmp13_ - _tmp14_;
			result = TRUE;
			return result;
		}
	}
	result = FALSE;
	return result;
}


static void gee_abstract_multi_map_real_clear (GeeMultiMap* base) {
	GeeAbstractMultiMap * self;
	GeeMap* _tmp0_;
	self = (GeeAbstractMultiMap*) base;
	_tmp0_ = self->_storage_map;
	gee_map_clear (_tmp0_);
	self->priv->_nitems = 0;
}


static gint gee_abstract_multi_map_real_get_size (GeeMultiMap* base) {
	gint result;
	GeeAbstractMultiMap* self;
	gint _tmp0_;
	self = (GeeAbstractMultiMap*) base;
	_tmp0_ = self->priv->_nitems;
	result = _tmp0_;
	return result;
}


static void gee_abstract_multi_map_class_init (GeeAbstractMultiMapClass * klass) {
	gee_abstract_multi_map_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GeeAbstractMultiMapPrivate));
	GEE_ABSTRACT_MULTI_MAP_CLASS (klass)->create_value_storage = gee_abstract_multi_map_real_create_value_storage;
	GEE_ABSTRACT_MULTI_MAP_CLASS (klass)->create_multi_key_set = gee_abstract_multi_map_real_create_multi_key_set;
	GEE_ABSTRACT_MULTI_MAP_CLASS (klass)->get_value_equal_func = gee_abstract_multi_map_real_get_value_equal_func;
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_abstract_multi_map_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_abstract_multi_map_set_property;
	G_OBJECT_CLASS (klass)->finalize = gee_abstract_multi_map_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MULTI_MAP_K_TYPE, g_param_spec_gtype ("k-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MULTI_MAP_K_DUP_FUNC, g_param_spec_pointer ("k-dup-func", "dup func", "dup func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MULTI_MAP_K_DESTROY_FUNC, g_param_spec_pointer ("k-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MULTI_MAP_V_TYPE, g_param_spec_gtype ("v-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MULTI_MAP_V_DUP_FUNC, g_param_spec_pointer ("v-dup-func", "dup func", "dup func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MULTI_MAP_V_DESTROY_FUNC, g_param_spec_pointer ("v-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MULTI_MAP_SIZE, g_param_spec_int ("size", "size", "size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void gee_abstract_multi_map_gee_multi_map_interface_init (GeeMultiMapIface * iface) {
	gee_abstract_multi_map_gee_multi_map_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_keys = (GeeSet* (*)(GeeMultiMap*)) gee_abstract_multi_map_real_get_keys;
	iface->get_all_keys = (GeeMultiSet* (*)(GeeMultiMap*)) gee_abstract_multi_map_real_get_all_keys;
	iface->get_values = (GeeCollection* (*)(GeeMultiMap*)) gee_abstract_multi_map_real_get_values;
	iface->contains = (gboolean (*)(GeeMultiMap*, gconstpointer)) gee_abstract_multi_map_real_contains;
	iface->get = (GeeCollection* (*)(GeeMultiMap*, gconstpointer)) gee_abstract_multi_map_real_get;
	iface->set = (void (*)(GeeMultiMap*, gconstpointer, gconstpointer)) gee_abstract_multi_map_real_set;
	iface->remove = (gboolean (*)(GeeMultiMap*, gconstpointer, gconstpointer)) gee_abstract_multi_map_real_remove;
	iface->remove_all = (gboolean (*)(GeeMultiMap*, gconstpointer)) gee_abstract_multi_map_real_remove_all;
	iface->clear = (void (*)(GeeMultiMap*)) gee_abstract_multi_map_real_clear;
	iface->get_size = gee_abstract_multi_map_real_get_size;
}


static void gee_abstract_multi_map_instance_init (GeeAbstractMultiMap * self) {
	self->priv = GEE_ABSTRACT_MULTI_MAP_GET_PRIVATE (self);
	self->priv->_nitems = 0;
}


static void gee_abstract_multi_map_finalize (GObject* obj) {
	GeeAbstractMultiMap * self;
	self = GEE_ABSTRACT_MULTI_MAP (obj);
	_g_object_unref0 (self->_storage_map);
	_g_object_unref0 (self->priv->_empty_value_set);
	G_OBJECT_CLASS (gee_abstract_multi_map_parent_class)->finalize (obj);
}


/**
 * Skeletal implementation of the {@link MultiMap} interface.
 *
 * @see HashMultiMap
 * @see TreeMultiMap
 */
GType gee_abstract_multi_map_get_type (void) {
	static volatile gsize gee_abstract_multi_map_type_id__volatile = 0;
	if (g_once_init_enter (&gee_abstract_multi_map_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GeeAbstractMultiMapClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_abstract_multi_map_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeAbstractMultiMap), 0, (GInstanceInitFunc) gee_abstract_multi_map_instance_init, NULL };
		static const GInterfaceInfo gee_multi_map_info = { (GInterfaceInitFunc) gee_abstract_multi_map_gee_multi_map_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType gee_abstract_multi_map_type_id;
		gee_abstract_multi_map_type_id = g_type_register_static (G_TYPE_OBJECT, "GeeAbstractMultiMap", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_type_add_interface_static (gee_abstract_multi_map_type_id, GEE_TYPE_MULTI_MAP, &gee_multi_map_info);
		g_once_init_leave (&gee_abstract_multi_map_type_id__volatile, gee_abstract_multi_map_type_id);
	}
	return gee_abstract_multi_map_type_id__volatile;
}


static void _vala_gee_abstract_multi_map_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GeeAbstractMultiMap * self;
	self = GEE_ABSTRACT_MULTI_MAP (object);
	switch (property_id) {
		case GEE_ABSTRACT_MULTI_MAP_SIZE:
		g_value_set_int (value, gee_multi_map_get_size ((GeeMultiMap*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_gee_abstract_multi_map_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GeeAbstractMultiMap * self;
	self = GEE_ABSTRACT_MULTI_MAP (object);
	switch (property_id) {
		case GEE_ABSTRACT_MULTI_MAP_K_TYPE:
		self->priv->k_type = g_value_get_gtype (value);
		break;
		case GEE_ABSTRACT_MULTI_MAP_K_DUP_FUNC:
		self->priv->k_dup_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_MULTI_MAP_K_DESTROY_FUNC:
		self->priv->k_destroy_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_MULTI_MAP_V_TYPE:
		self->priv->v_type = g_value_get_gtype (value);
		break;
		case GEE_ABSTRACT_MULTI_MAP_V_DUP_FUNC:
		self->priv->v_dup_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_MULTI_MAP_V_DESTROY_FUNC:
		self->priv->v_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


