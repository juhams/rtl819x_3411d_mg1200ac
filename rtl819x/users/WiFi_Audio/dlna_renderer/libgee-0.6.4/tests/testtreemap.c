/* testtreemap.c generated by valac 0.15.0.90-e9553, the Vala compiler
 * generated from testtreemap.vala, do not modify */

/* testtreemap.vala
 *
 * Copyright (C) 2008  Maciej Piechotka
 * Copyright (C) 2009  Didier Villevalois, Julien Peeters
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
 * 	Julien Peeters <contact@julienpeeters.fr>
 */

#include <glib.h>
#include <glib-object.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>


#define GEE_TYPE_TEST_CASE (gee_test_case_get_type ())
#define GEE_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_TEST_CASE, GeeTestCase))
#define GEE_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_TEST_CASE, GeeTestCaseClass))
#define GEE_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_TEST_CASE))
#define GEE_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_TEST_CASE))
#define GEE_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_TEST_CASE, GeeTestCaseClass))

typedef struct _GeeTestCase GeeTestCase;
typedef struct _GeeTestCaseClass GeeTestCaseClass;
typedef struct _GeeTestCasePrivate GeeTestCasePrivate;

#define TYPE_MAP_TESTS (map_tests_get_type ())
#define MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAP_TESTS, MapTests))
#define MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAP_TESTS, MapTestsClass))
#define IS_MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAP_TESTS))
#define IS_MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAP_TESTS))
#define MAP_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAP_TESTS, MapTestsClass))

typedef struct _MapTests MapTests;
typedef struct _MapTestsClass MapTestsClass;
typedef struct _MapTestsPrivate MapTestsPrivate;

#define TYPE_TREE_MAP_TESTS (tree_map_tests_get_type ())
#define TREE_MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TREE_MAP_TESTS, TreeMapTests))
#define TREE_MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TREE_MAP_TESTS, TreeMapTestsClass))
#define IS_TREE_MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TREE_MAP_TESTS))
#define IS_TREE_MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TREE_MAP_TESTS))
#define TREE_MAP_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TREE_MAP_TESTS, TreeMapTestsClass))

typedef struct _TreeMapTests TreeMapTests;
typedef struct _TreeMapTestsClass TreeMapTestsClass;
typedef struct _TreeMapTestsPrivate TreeMapTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _GeeTestCase {
	GObject parent_instance;
	GeeTestCasePrivate * priv;
};

struct _GeeTestCaseClass {
	GObjectClass parent_class;
	void (*set_up) (GeeTestCase* self);
	void (*tear_down) (GeeTestCase* self);
};

struct _MapTests {
	GeeTestCase parent_instance;
	MapTestsPrivate * priv;
	GeeMap* test_map;
};

struct _MapTestsClass {
	GeeTestCaseClass parent_class;
};

struct _TreeMapTests {
	MapTests parent_instance;
	TreeMapTestsPrivate * priv;
};

struct _TreeMapTestsClass {
	MapTestsClass parent_class;
};

typedef void (*GeeTestCaseTestMethod) (void* user_data);

static gpointer tree_map_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST;
GType map_tests_get_type (void) G_GNUC_CONST;
GType tree_map_tests_get_type (void) G_GNUC_CONST;
enum  {
	TREE_MAP_TESTS_DUMMY_PROPERTY
};
TreeMapTests* tree_map_tests_new (void);
TreeMapTests* tree_map_tests_construct (GType object_type);
MapTests* map_tests_construct (GType object_type, const gchar* name);
void gee_test_case_add_test (GeeTestCase* self, const gchar* name, GeeTestCaseTestMethod test, void* test_target);
void tree_map_tests_test_selected_functions (TreeMapTests* self);
static void _tree_map_tests_test_selected_functions_gee_test_case_test_method (gpointer self);
void tree_map_tests_test_gobject_properties (TreeMapTests* self);
static void _tree_map_tests_test_gobject_properties_gee_test_case_test_method (gpointer self);
void tree_map_tests_test_key_ordering (TreeMapTests* self);
static void _tree_map_tests_test_key_ordering_gee_test_case_test_method (gpointer self);
static void tree_map_tests_real_set_up (GeeTestCase* base);
static void tree_map_tests_real_tear_down (GeeTestCase* base);


static void _tree_map_tests_test_selected_functions_gee_test_case_test_method (gpointer self) {
	tree_map_tests_test_selected_functions (self);
}


static void _tree_map_tests_test_gobject_properties_gee_test_case_test_method (gpointer self) {
	tree_map_tests_test_gobject_properties (self);
}


static void _tree_map_tests_test_key_ordering_gee_test_case_test_method (gpointer self) {
	tree_map_tests_test_key_ordering (self);
}


TreeMapTests* tree_map_tests_construct (GType object_type) {
	TreeMapTests * self = NULL;
	self = (TreeMapTests*) map_tests_construct (object_type, "TreeMap");
	gee_test_case_add_test ((GeeTestCase*) self, "[TreeMap] selected functions", _tree_map_tests_test_selected_functions_gee_test_case_test_method, self);
	gee_test_case_add_test ((GeeTestCase*) self, "[TreeMap] GObject properties", _tree_map_tests_test_gobject_properties_gee_test_case_test_method, self);
	gee_test_case_add_test ((GeeTestCase*) self, "[TreeMap] key ordering", _tree_map_tests_test_key_ordering_gee_test_case_test_method, self);
	return self;
}


TreeMapTests* tree_map_tests_new (void) {
	return tree_map_tests_construct (TYPE_TREE_MAP_TESTS);
}


static void tree_map_tests_real_set_up (GeeTestCase* base) {
	TreeMapTests * self;
	GeeTreeMap* _tmp0_;
	self = (TreeMapTests*) base;
	_tmp0_ = gee_tree_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL);
	_g_object_unref0 (((MapTests*) self)->test_map);
	((MapTests*) self)->test_map = (GeeMap*) _tmp0_;
}


static void tree_map_tests_real_tear_down (GeeTestCase* base) {
	TreeMapTests * self;
	self = (TreeMapTests*) base;
	_g_object_unref0 (((MapTests*) self)->test_map);
	((MapTests*) self)->test_map = NULL;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void tree_map_tests_test_selected_functions (TreeMapTests* self) {
	GeeMap* _tmp0_;
	GeeTreeMap* _tmp1_;
	GeeTreeMap* test_tree_map;
	GCompareFunc _tmp2_;
	GCompareFunc _tmp3_;
	GCompareFunc _tmp4_;
	GEqualFunc _tmp5_;
	GEqualFunc _tmp6_;
	GEqualFunc _tmp7_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((MapTests*) self)->test_map;
	_tmp1_ = _g_object_ref0 (GEE_IS_TREE_MAP (_tmp0_) ? ((GeeTreeMap*) _tmp0_) : NULL);
	test_tree_map = _tmp1_;
	g_assert (test_tree_map != NULL);
	_tmp2_ = gee_tree_map_get_key_compare_func (test_tree_map);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strcmp0;
	g_assert (_tmp3_ == ((GCompareFunc) _tmp4_));
	_tmp5_ = gee_tree_map_get_value_equal_func (test_tree_map);
	_tmp6_ = _tmp5_;
	_tmp7_ = g_str_equal;
	g_assert (_tmp6_ == _tmp7_);
	_g_object_unref0 (test_tree_map);
}


void tree_map_tests_test_gobject_properties (TreeMapTests* self) {
	GeeMap* _tmp0_;
	GeeTreeMap* _tmp1_;
	GeeTreeMap* test_tree_map;
	GValue value = {0};
	GValue _tmp2_ = {0};
	void* _tmp3_ = NULL;
	GCompareFunc _tmp4_;
	GCompareFunc _tmp5_;
	GValue _tmp6_ = {0};
	void* _tmp7_ = NULL;
	GEqualFunc _tmp8_;
	GEqualFunc _tmp9_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((MapTests*) self)->test_map;
	_tmp1_ = _g_object_ref0 (GEE_IS_TREE_MAP (_tmp0_) ? ((GeeTreeMap*) _tmp0_) : NULL);
	test_tree_map = _tmp1_;
	g_assert (test_tree_map != NULL);
	g_value_init (&_tmp2_, G_TYPE_POINTER);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	value = _tmp2_;
	g_object_get_property ((GObject*) test_tree_map, "key-compare-func", &value);
	_tmp3_ = g_value_get_pointer (&value);
	_tmp4_ = gee_tree_map_get_key_compare_func (test_tree_map);
	_tmp5_ = _tmp4_;
	g_assert (_tmp3_ == ((void*) _tmp5_));
	g_value_unset (&value);
	g_value_init (&_tmp6_, G_TYPE_POINTER);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	value = _tmp6_;
	g_object_get_property ((GObject*) test_tree_map, "value-equal-func", &value);
	_tmp7_ = g_value_get_pointer (&value);
	_tmp8_ = gee_tree_map_get_value_equal_func (test_tree_map);
	_tmp9_ = _tmp8_;
	g_assert (_tmp7_ == ((void*) _tmp9_));
	g_value_unset (&value);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	_g_object_unref0 (test_tree_map);
}


void tree_map_tests_test_key_ordering (TreeMapTests* self) {
	GeeMap* _tmp0_;
	GeeTreeMap* _tmp1_;
	GeeTreeMap* test_tree_map;
	GeeSet* _tmp2_;
	GeeSet* _tmp3_;
	GeeSet* _tmp4_;
	GeeIterator* _tmp5_ = NULL;
	GeeIterator* _tmp6_;
	GeeIterator* iterator;
	gboolean _tmp7_ = FALSE;
	gpointer _tmp8_ = NULL;
	gchar* _tmp9_;
	gboolean _tmp10_ = FALSE;
	gpointer _tmp11_ = NULL;
	gchar* _tmp12_;
	gboolean _tmp13_ = FALSE;
	gpointer _tmp14_ = NULL;
	gchar* _tmp15_;
	gboolean _tmp16_ = FALSE;
	gpointer _tmp17_ = NULL;
	gchar* _tmp18_;
	gboolean _tmp19_ = FALSE;
	gpointer _tmp20_ = NULL;
	gchar* _tmp21_;
	gboolean _tmp22_ = FALSE;
	gpointer _tmp23_ = NULL;
	gchar* _tmp24_;
	gboolean _tmp25_ = FALSE;
	gpointer _tmp26_ = NULL;
	gchar* _tmp27_;
	gboolean _tmp28_ = FALSE;
	gpointer _tmp29_ = NULL;
	gchar* _tmp30_;
	gboolean _tmp31_ = FALSE;
	gpointer _tmp32_ = NULL;
	gchar* _tmp33_;
	gboolean _tmp34_ = FALSE;
	gpointer _tmp35_ = NULL;
	gchar* _tmp36_;
	gboolean _tmp37_ = FALSE;
	gpointer _tmp38_ = NULL;
	gchar* _tmp39_;
	gboolean _tmp40_ = FALSE;
	gpointer _tmp41_ = NULL;
	gchar* _tmp42_;
	gboolean _tmp43_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((MapTests*) self)->test_map;
	_tmp1_ = _g_object_ref0 (GEE_IS_TREE_MAP (_tmp0_) ? ((GeeTreeMap*) _tmp0_) : NULL);
	test_tree_map = _tmp1_;
	g_assert (test_tree_map != NULL);
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "one", "one");
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "two", "two");
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "three", "three");
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "four", "four");
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "five", "five");
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "six", "six");
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "seven", "seven");
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "eight", "eight");
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "nine", "nine");
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "ten", "ten");
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "eleven", "eleven");
	gee_abstract_map_set ((GeeAbstractMap*) test_tree_map, "twelve", "twelve");
	_tmp2_ = gee_map_get_keys ((GeeMap*) test_tree_map);
	_tmp3_ = _tmp2_;
	_tmp4_ = _tmp3_;
	_tmp5_ = gee_iterable_iterator ((GeeIterable*) _tmp4_);
	_tmp6_ = _tmp5_;
	_g_object_unref0 (_tmp4_);
	iterator = _tmp6_;
	_tmp7_ = gee_iterator_next (iterator);
	g_assert (_tmp7_);
	_tmp8_ = gee_iterator_get (iterator);
	_tmp9_ = (gchar*) _tmp8_;
	g_assert (g_strcmp0 (_tmp9_, "eight") == 0);
	_g_free0 (_tmp9_);
	_tmp10_ = gee_iterator_next (iterator);
	g_assert (_tmp10_);
	_tmp11_ = gee_iterator_get (iterator);
	_tmp12_ = (gchar*) _tmp11_;
	g_assert (g_strcmp0 (_tmp12_, "eleven") == 0);
	_g_free0 (_tmp12_);
	_tmp13_ = gee_iterator_next (iterator);
	g_assert (_tmp13_);
	_tmp14_ = gee_iterator_get (iterator);
	_tmp15_ = (gchar*) _tmp14_;
	g_assert (g_strcmp0 (_tmp15_, "five") == 0);
	_g_free0 (_tmp15_);
	_tmp16_ = gee_iterator_next (iterator);
	g_assert (_tmp16_);
	_tmp17_ = gee_iterator_get (iterator);
	_tmp18_ = (gchar*) _tmp17_;
	g_assert (g_strcmp0 (_tmp18_, "four") == 0);
	_g_free0 (_tmp18_);
	_tmp19_ = gee_iterator_next (iterator);
	g_assert (_tmp19_);
	_tmp20_ = gee_iterator_get (iterator);
	_tmp21_ = (gchar*) _tmp20_;
	g_assert (g_strcmp0 (_tmp21_, "nine") == 0);
	_g_free0 (_tmp21_);
	_tmp22_ = gee_iterator_next (iterator);
	g_assert (_tmp22_);
	_tmp23_ = gee_iterator_get (iterator);
	_tmp24_ = (gchar*) _tmp23_;
	g_assert (g_strcmp0 (_tmp24_, "one") == 0);
	_g_free0 (_tmp24_);
	_tmp25_ = gee_iterator_next (iterator);
	g_assert (_tmp25_);
	_tmp26_ = gee_iterator_get (iterator);
	_tmp27_ = (gchar*) _tmp26_;
	g_assert (g_strcmp0 (_tmp27_, "seven") == 0);
	_g_free0 (_tmp27_);
	_tmp28_ = gee_iterator_next (iterator);
	g_assert (_tmp28_);
	_tmp29_ = gee_iterator_get (iterator);
	_tmp30_ = (gchar*) _tmp29_;
	g_assert (g_strcmp0 (_tmp30_, "six") == 0);
	_g_free0 (_tmp30_);
	_tmp31_ = gee_iterator_next (iterator);
	g_assert (_tmp31_);
	_tmp32_ = gee_iterator_get (iterator);
	_tmp33_ = (gchar*) _tmp32_;
	g_assert (g_strcmp0 (_tmp33_, "ten") == 0);
	_g_free0 (_tmp33_);
	_tmp34_ = gee_iterator_next (iterator);
	g_assert (_tmp34_);
	_tmp35_ = gee_iterator_get (iterator);
	_tmp36_ = (gchar*) _tmp35_;
	g_assert (g_strcmp0 (_tmp36_, "three") == 0);
	_g_free0 (_tmp36_);
	_tmp37_ = gee_iterator_next (iterator);
	g_assert (_tmp37_);
	_tmp38_ = gee_iterator_get (iterator);
	_tmp39_ = (gchar*) _tmp38_;
	g_assert (g_strcmp0 (_tmp39_, "twelve") == 0);
	_g_free0 (_tmp39_);
	_tmp40_ = gee_iterator_next (iterator);
	g_assert (_tmp40_);
	_tmp41_ = gee_iterator_get (iterator);
	_tmp42_ = (gchar*) _tmp41_;
	g_assert (g_strcmp0 (_tmp42_, "two") == 0);
	_g_free0 (_tmp42_);
	_tmp43_ = gee_iterator_next (iterator);
	g_assert (_tmp43_ == FALSE);
	_g_object_unref0 (iterator);
	_g_object_unref0 (test_tree_map);
}


static void tree_map_tests_class_init (TreeMapTestsClass * klass) {
	tree_map_tests_parent_class = g_type_class_peek_parent (klass);
	GEE_TEST_CASE_CLASS (klass)->set_up = tree_map_tests_real_set_up;
	GEE_TEST_CASE_CLASS (klass)->tear_down = tree_map_tests_real_tear_down;
}


static void tree_map_tests_instance_init (TreeMapTests * self) {
}


GType tree_map_tests_get_type (void) {
	static volatile gsize tree_map_tests_type_id__volatile = 0;
	if (g_once_init_enter (&tree_map_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TreeMapTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) tree_map_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TreeMapTests), 0, (GInstanceInitFunc) tree_map_tests_instance_init, NULL };
		GType tree_map_tests_type_id;
		tree_map_tests_type_id = g_type_register_static (TYPE_MAP_TESTS, "TreeMapTests", &g_define_type_info, 0);
		g_once_init_leave (&tree_map_tests_type_id__volatile, tree_map_tests_type_id);
	}
	return tree_map_tests_type_id__volatile;
}



