/* rygel-media-export-database.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-media-export-database.vala, do not modify */

/*
 * Copyright (C) 2009,2011 Jens Georg <mail@jensge.org>.
 *
 * Author: Jens Georg <mail@jensge.org>
 *
 * This file is part of Rygel.
 *
 * Rygel is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Rygel is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>
#include <glib/gstdio.h>
#include <glib/gi18n-lib.h>


#define RYGEL_MEDIA_EXPORT_TYPE_SQLITE_WRAPPER (rygel_media_export_sqlite_wrapper_get_type ())
#define RYGEL_MEDIA_EXPORT_SQLITE_WRAPPER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQLITE_WRAPPER, RygelMediaExportSqliteWrapper))
#define RYGEL_MEDIA_EXPORT_SQLITE_WRAPPER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_SQLITE_WRAPPER, RygelMediaExportSqliteWrapperClass))
#define RYGEL_MEDIA_EXPORT_IS_SQLITE_WRAPPER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQLITE_WRAPPER))
#define RYGEL_MEDIA_EXPORT_IS_SQLITE_WRAPPER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_SQLITE_WRAPPER))
#define RYGEL_MEDIA_EXPORT_SQLITE_WRAPPER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQLITE_WRAPPER, RygelMediaExportSqliteWrapperClass))

typedef struct _RygelMediaExportSqliteWrapper RygelMediaExportSqliteWrapper;
typedef struct _RygelMediaExportSqliteWrapperClass RygelMediaExportSqliteWrapperClass;
typedef struct _RygelMediaExportSqliteWrapperPrivate RygelMediaExportSqliteWrapperPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_DATABASE (rygel_media_export_database_get_type ())
#define RYGEL_MEDIA_EXPORT_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_DATABASE, RygelMediaExportDatabase))
#define RYGEL_MEDIA_EXPORT_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_DATABASE, RygelMediaExportDatabaseClass))
#define RYGEL_MEDIA_EXPORT_IS_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_DATABASE))
#define RYGEL_MEDIA_EXPORT_IS_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_DATABASE))
#define RYGEL_MEDIA_EXPORT_DATABASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_DATABASE, RygelMediaExportDatabaseClass))

typedef struct _RygelMediaExportDatabase RygelMediaExportDatabase;
typedef struct _RygelMediaExportDatabaseClass RygelMediaExportDatabaseClass;
typedef struct _RygelMediaExportDatabasePrivate RygelMediaExportDatabasePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define RYGEL_MEDIA_EXPORT_TYPE_DATABASE_CURSOR (rygel_media_export_database_cursor_get_type ())
#define RYGEL_MEDIA_EXPORT_DATABASE_CURSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_DATABASE_CURSOR, RygelMediaExportDatabaseCursor))
#define RYGEL_MEDIA_EXPORT_DATABASE_CURSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_DATABASE_CURSOR, RygelMediaExportDatabaseCursorClass))
#define RYGEL_MEDIA_EXPORT_IS_DATABASE_CURSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_DATABASE_CURSOR))
#define RYGEL_MEDIA_EXPORT_IS_DATABASE_CURSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_DATABASE_CURSOR))
#define RYGEL_MEDIA_EXPORT_DATABASE_CURSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_DATABASE_CURSOR, RygelMediaExportDatabaseCursorClass))

typedef struct _RygelMediaExportDatabaseCursor RygelMediaExportDatabaseCursor;
typedef struct _RygelMediaExportDatabaseCursorClass RygelMediaExportDatabaseCursorClass;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

typedef enum  {
	RYGEL_MEDIA_EXPORT_DATABASE_ERROR_IO_ERROR,
	RYGEL_MEDIA_EXPORT_DATABASE_ERROR_SQLITE_ERROR
} RygelMediaExportDatabaseError;
#define RYGEL_MEDIA_EXPORT_DATABASE_ERROR rygel_media_export_database_error_quark ()
struct _RygelMediaExportSqliteWrapper {
	GObject parent_instance;
	RygelMediaExportSqliteWrapperPrivate * priv;
};

struct _RygelMediaExportSqliteWrapperClass {
	GObjectClass parent_class;
};

struct _RygelMediaExportDatabase {
	RygelMediaExportSqliteWrapper parent_instance;
	RygelMediaExportDatabasePrivate * priv;
};

struct _RygelMediaExportDatabaseClass {
	RygelMediaExportSqliteWrapperClass parent_class;
};


static gpointer rygel_media_export_database_parent_class = NULL;

GQuark rygel_media_export_database_error_quark (void);
gint rygel_media_export_utf8_collate_str (const gchar* a, const gchar* b);
GType rygel_media_export_sqlite_wrapper_get_type (void) G_GNUC_CONST;
GType rygel_media_export_database_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_MEDIA_EXPORT_DATABASE_DUMMY_PROPERTY
};
static void rygel_media_export_database_utf8_contains (sqlite3_context* context, sqlite3_value** args, int args_length1);
static gint rygel_media_export_database_utf8_collate (gint alen, void* a, gint blen, void* b);
RygelMediaExportDatabase* rygel_media_export_database_new (const gchar* name, GError** error);
RygelMediaExportDatabase* rygel_media_export_database_construct (GType object_type, const gchar* name, GError** error);
RygelMediaExportSqliteWrapper* rygel_media_export_sqlite_wrapper_new (const gchar* path, GError** error);
RygelMediaExportSqliteWrapper* rygel_media_export_sqlite_wrapper_construct (GType object_type, const gchar* path, GError** error);
void rygel_media_export_database_exec (RygelMediaExportDatabase* self, const gchar* sql, GValue* arguments, int arguments_length1, GError** error);
sqlite3* rygel_media_export_sqlite_wrapper_get_db (RygelMediaExportSqliteWrapper* self);
static void _rygel_media_export_database_utf8_contains_sqlite_user_func_callback (sqlite3_context* context, int values_length1, sqlite3_value** values);
static gint _rygel_media_export_database_utf8_collate_sqlite_compare_callback (gpointer self, gint alen, void* a, gint blen, void* b);
GType rygel_media_export_database_cursor_get_type (void) G_GNUC_CONST;
RygelMediaExportDatabaseCursor* rygel_media_export_database_exec_cursor (RygelMediaExportDatabase* self, const gchar* sql, GValue* arguments, int arguments_length1, GError** error);
RygelMediaExportDatabaseCursor* rygel_media_export_database_cursor_new (sqlite3* db, const gchar* sql, GValue* arguments, int arguments_length1, GError** error);
RygelMediaExportDatabaseCursor* rygel_media_export_database_cursor_construct (GType object_type, sqlite3* db, const gchar* sql, GValue* arguments, int arguments_length1, GError** error);
void rygel_media_export_sqlite_wrapper_throw_if_code_is_error (RygelMediaExportSqliteWrapper* self, gint sqlite_error, GError** error);
gboolean rygel_media_export_database_cursor_has_next (RygelMediaExportDatabaseCursor* self);
sqlite3_stmt* rygel_media_export_database_cursor_next (RygelMediaExportDatabaseCursor* self, GError** error);
gint rygel_media_export_database_query_value (RygelMediaExportDatabase* self, const gchar* sql, GValue* args, int args_length1, GError** error);
void rygel_media_export_database_analyze (RygelMediaExportDatabase* self);
void rygel_media_export_database_null (GValue* result);
void rygel_media_export_database_begin (RygelMediaExportDatabase* self, GError** error);
void rygel_media_export_database_commit (RygelMediaExportDatabase* self, GError** error);
void rygel_media_export_database_rollback (RygelMediaExportDatabase* self);


GQuark rygel_media_export_database_error_quark (void) {
	return g_quark_from_static_string ("rygel_media_export_database_error-quark");
}


/**
     * Function to implement the custom SQL function 'contains'
     */
static void rygel_media_export_database_utf8_contains (sqlite3_context* context, sqlite3_value** args, int args_length1) {
	sqlite3_value** _tmp0_;
	gint _tmp0__length1;
	sqlite3_value** _tmp1_;
	gint _tmp1__length1;
	sqlite3_value* _tmp2_;
	const gchar* _tmp3_ = NULL;
	sqlite3_value** _tmp5_;
	gint _tmp5__length1;
	sqlite3_value* _tmp6_;
	const gchar* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	gchar* pattern;
	const gchar* _tmp9_;
	sqlite3_value** _tmp10_;
	gint _tmp10__length1;
	sqlite3_value* _tmp11_;
	const gchar* _tmp12_ = NULL;
	gboolean _tmp13_ = FALSE;
	g_return_if_fail (context != NULL);
	_tmp0_ = args;
	_tmp0__length1 = args_length1;
	g_return_if_fail (_tmp0__length1 == 2);
	_tmp1_ = args;
	_tmp1__length1 = args_length1;
	_tmp2_ = _tmp1_[1];
	_tmp3_ = sqlite3_value_text (_tmp2_);
	if (_tmp3_ == NULL) {
		sqlite3_context* _tmp4_;
		_tmp4_ = context;
		sqlite3_result_int (_tmp4_, 0);
		return;
	}
	_tmp5_ = args;
	_tmp5__length1 = args_length1;
	_tmp6_ = _tmp5_[1];
	_tmp7_ = sqlite3_value_text (_tmp6_);
	_tmp8_ = g_regex_escape_string (_tmp7_, -1);
	pattern = _tmp8_;
	_tmp9_ = pattern;
	_tmp10_ = args;
	_tmp10__length1 = args_length1;
	_tmp11_ = _tmp10_[0];
	_tmp12_ = sqlite3_value_text (_tmp11_);
	_tmp13_ = g_regex_match_simple (_tmp9_, _tmp12_, G_REGEX_CASELESS, 0);
	if (_tmp13_) {
		sqlite3_context* _tmp14_;
		_tmp14_ = context;
		sqlite3_result_int (_tmp14_, 1);
	} else {
		sqlite3_context* _tmp15_;
		_tmp15_ = context;
		sqlite3_result_int (_tmp15_, 0);
	}
	_g_free0 (pattern);
}


/**
     * Function to implement the custom SQLite collation 'CASEFOLD'.
     *
     * Uses utf8 case-fold to compare the strings.
     */
static gint rygel_media_export_database_utf8_collate (gint alen, void* a, gint blen, void* b) {
	gint result = 0;
	void* _tmp0_;
	guint8* _a;
	gint _a_length1;
	gint __a_size_;
	gint _tmp1_;
	gint _tmp2_;
	void* _tmp3_;
	guint8* _b;
	gint _b_length1;
	gint __b_size_;
	gint _tmp4_;
	gint _tmp5_;
	gchar* _tmp6_;
	gchar* str_a;
	gchar* _tmp7_;
	gchar* str_b;
	gint _tmp8_ = 0;
	_tmp0_ = a;
	_a = (guint8*) _tmp0_;
	_a_length1 = -1;
	__a_size_ = _a_length1;
	_tmp1_ = alen;
	_a_length1 = _tmp1_;
	_tmp2_ = _a_length1;
	_tmp3_ = b;
	_b = (guint8*) _tmp3_;
	_b_length1 = -1;
	__b_size_ = _b_length1;
	_tmp4_ = blen;
	_b_length1 = _tmp4_;
	_tmp5_ = _b_length1;
	_tmp6_ = g_strdup ((const gchar*) _a);
	str_a = _tmp6_;
	_tmp7_ = g_strdup ((const gchar*) _b);
	str_b = _tmp7_;
	_tmp8_ = rygel_media_export_utf8_collate_str (str_a, str_b);
	result = _tmp8_;
	_g_free0 (str_b);
	_g_free0 (str_a);
	return result;
}


/**
     * Open a database in the user's cache directory as defined by XDG
     *
     * @param name of the database, used to build full path
     * (<cache-dir>/rygel/<name>.db)
     */
static void _rygel_media_export_database_utf8_contains_sqlite_user_func_callback (sqlite3_context* context, int values_length1, sqlite3_value** values) {
	rygel_media_export_database_utf8_contains (context, values, values_length1);
}


static gint _rygel_media_export_database_utf8_collate_sqlite_compare_callback (gpointer self, gint alen, void* a, gint blen, void* b) {
	gint result;
	result = rygel_media_export_database_utf8_collate (alen, a, blen, b);
	return result;
}


RygelMediaExportDatabase* rygel_media_export_database_construct (GType object_type, const gchar* name, GError** error) {
	RygelMediaExportDatabase * self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* dirname;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_;
	gchar* _tmp7_ = NULL;
	gchar* _tmp8_;
	gchar* db_file;
	const gchar* _tmp9_;
	const gchar* _tmp10_;
	sqlite3* _tmp11_;
	sqlite3* _tmp12_;
	sqlite3* _tmp13_;
	sqlite3* _tmp14_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = g_get_user_cache_dir ();
	_tmp1_ = g_build_filename (_tmp0_, "rygel", NULL);
	dirname = _tmp1_;
	_tmp2_ = dirname;
	g_mkdir_with_parents (_tmp2_, 0750);
	_tmp3_ = dirname;
	_tmp4_ = name;
	_tmp5_ = g_strdup_printf ("%s.db", _tmp4_);
	_tmp6_ = _tmp5_;
	_tmp7_ = g_build_filename (_tmp3_, _tmp6_, NULL);
	_tmp8_ = _tmp7_;
	_g_free0 (_tmp6_);
	db_file = _tmp8_;
	_tmp9_ = db_file;
	self = (RygelMediaExportDatabase*) rygel_media_export_sqlite_wrapper_construct (object_type, _tmp9_, &_inner_error_);
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
			g_propagate_error (error, _inner_error_);
			_g_free0 (db_file);
			_g_free0 (dirname);
			_g_object_unref0 (self);
			return NULL;
		} else {
			_g_free0 (db_file);
			_g_free0 (dirname);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	_tmp10_ = db_file;
	g_debug ("rygel-media-export-database.vala:97: Using database file %s", _tmp10_);
	rygel_media_export_database_exec (self, "PRAGMA synchronous = OFF", NULL, 0, &_inner_error_);
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
			g_propagate_error (error, _inner_error_);
			_g_free0 (db_file);
			_g_free0 (dirname);
			_g_object_unref0 (self);
			return NULL;
		} else {
			_g_free0 (db_file);
			_g_free0 (dirname);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	rygel_media_export_database_exec (self, "PRAGMA temp_store = MEMORY", NULL, 0, &_inner_error_);
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
			g_propagate_error (error, _inner_error_);
			_g_free0 (db_file);
			_g_free0 (dirname);
			_g_object_unref0 (self);
			return NULL;
		} else {
			_g_free0 (db_file);
			_g_free0 (dirname);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	rygel_media_export_database_exec (self, "PRAGMA count_changes = OFF", NULL, 0, &_inner_error_);
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
			g_propagate_error (error, _inner_error_);
			_g_free0 (db_file);
			_g_free0 (dirname);
			_g_object_unref0 (self);
			return NULL;
		} else {
			_g_free0 (db_file);
			_g_free0 (dirname);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	_tmp11_ = rygel_media_export_sqlite_wrapper_get_db ((RygelMediaExportSqliteWrapper*) self);
	_tmp12_ = _tmp11_;
	sqlite3_create_function (_tmp12_, "contains", 2, SQLITE_UTF8, NULL, _rygel_media_export_database_utf8_contains_sqlite_user_func_callback, NULL, NULL);
	_tmp13_ = rygel_media_export_sqlite_wrapper_get_db ((RygelMediaExportSqliteWrapper*) self);
	_tmp14_ = _tmp13_;
	sqlite3_create_collation (_tmp14_, "CASEFOLD", SQLITE_UTF8, NULL, (int (*)(void *, int,  const void *, int,  const void *)) _rygel_media_export_database_utf8_collate_sqlite_compare_callback);
	_g_free0 (db_file);
	_g_free0 (dirname);
	return self;
}


RygelMediaExportDatabase* rygel_media_export_database_new (const gchar* name, GError** error) {
	return rygel_media_export_database_construct (RYGEL_MEDIA_EXPORT_TYPE_DATABASE, name, error);
}


/**
     * SQL query function.
     *
     * Use for all queries that return a result set.
     *
     * @param sql The SQL query to run.
     * @param args Values to bind in the SQL query or null.
     * @throws DatabaseError if the underlying SQLite operation fails.
     */
RygelMediaExportDatabaseCursor* rygel_media_export_database_exec_cursor (RygelMediaExportDatabase* self, const gchar* sql, GValue* arguments, int arguments_length1, GError** error) {
	RygelMediaExportDatabaseCursor* result = NULL;
	sqlite3* _tmp0_;
	sqlite3* _tmp1_;
	const gchar* _tmp2_;
	GValue* _tmp3_;
	gint _tmp3__length1;
	RygelMediaExportDatabaseCursor* _tmp4_;
	RygelMediaExportDatabaseCursor* _tmp5_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (sql != NULL, NULL);
	_tmp0_ = rygel_media_export_sqlite_wrapper_get_db ((RygelMediaExportSqliteWrapper*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = sql;
	_tmp3_ = arguments;
	_tmp3__length1 = arguments_length1;
	_tmp4_ = rygel_media_export_database_cursor_new (_tmp1_, _tmp2_, _tmp3_, _tmp3__length1, &_inner_error_);
	_tmp5_ = _tmp4_;
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
			g_propagate_error (error, _inner_error_);
			return NULL;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	result = _tmp5_;
	return result;
}


/**
     * Simple SQL query execution function.
     *
     * Use for all queries that don't return anything.
     *
     * @param sql The SQL query to run.
     * @param args Values to bind in the SQL query or null.
     * @throws DatabaseError if the underlying SQLite operation fails.
     */
static gint _sqlite3_exec (sqlite3* self, const gchar* sql, sqlite3_callback callback, void* callback_target, gchar** errmsg) {
	gchar* _vala_errmsg = NULL;
	gint result = 0;
	const gchar* sqlite_errmsg = NULL;
	const gchar* _tmp0_;
	sqlite3_callback _tmp1_;
	void* _tmp1__target;
	const gchar* _tmp2_ = NULL;
	gint _tmp3_ = 0;
	gint ec;
	const gchar* _tmp6_;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (sql != NULL, 0);
	_tmp0_ = sql;
	_tmp1_ = callback;
	_tmp1__target = callback_target;
	_tmp3_ = sqlite3_exec (self, _tmp0_, _tmp1_, _tmp1__target, (char**) (&_tmp2_));
	sqlite_errmsg = _tmp2_;
	ec = _tmp3_;
	if ((&_vala_errmsg) != NULL) {
		const gchar* _tmp4_;
		gchar* _tmp5_;
		_tmp4_ = sqlite_errmsg;
		_tmp5_ = g_strdup (_tmp4_);
		_g_free0 (_vala_errmsg);
		_vala_errmsg = _tmp5_;
	}
	_tmp6_ = sqlite_errmsg;
	sqlite3_free ((void*) _tmp6_);
	result = ec;
	if (errmsg) {
		*errmsg = _vala_errmsg;
	} else {
		_g_free0 (_vala_errmsg);
	}
	return result;
}


void rygel_media_export_database_exec (RygelMediaExportDatabase* self, const gchar* sql, GValue* arguments, int arguments_length1, GError** error) {
	GValue* _tmp0_;
	gint _tmp0__length1;
	const gchar* _tmp5_;
	GValue* _tmp6_;
	gint _tmp6__length1;
	RygelMediaExportDatabaseCursor* _tmp7_ = NULL;
	RygelMediaExportDatabaseCursor* cursor;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (sql != NULL);
	_tmp0_ = arguments;
	_tmp0__length1 = arguments_length1;
	if (_tmp0_ == NULL) {
		sqlite3* _tmp1_;
		sqlite3* _tmp2_;
		const gchar* _tmp3_;
		gint _tmp4_ = 0;
		_tmp1_ = rygel_media_export_sqlite_wrapper_get_db ((RygelMediaExportSqliteWrapper*) self);
		_tmp2_ = _tmp1_;
		_tmp3_ = sql;
		_tmp4_ = _sqlite3_exec (_tmp2_, _tmp3_, NULL, NULL, NULL);
		rygel_media_export_sqlite_wrapper_throw_if_code_is_error ((RygelMediaExportSqliteWrapper*) self, _tmp4_, &_inner_error_);
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
				g_propagate_error (error, _inner_error_);
				return;
			} else {
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
		}
		return;
	}
	_tmp5_ = sql;
	_tmp6_ = arguments;
	_tmp6__length1 = arguments_length1;
	_tmp7_ = rygel_media_export_database_exec_cursor (self, _tmp5_, _tmp6_, _tmp6__length1, &_inner_error_);
	cursor = _tmp7_;
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
			g_propagate_error (error, _inner_error_);
			return;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
	while (TRUE) {
		RygelMediaExportDatabaseCursor* _tmp8_;
		gboolean _tmp9_ = FALSE;
		RygelMediaExportDatabaseCursor* _tmp10_;
		_tmp8_ = cursor;
		_tmp9_ = rygel_media_export_database_cursor_has_next (_tmp8_);
		if (!_tmp9_) {
			break;
		}
		_tmp10_ = cursor;
		rygel_media_export_database_cursor_next (_tmp10_, &_inner_error_);
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
				g_propagate_error (error, _inner_error_);
				_g_object_unref0 (cursor);
				return;
			} else {
				_g_object_unref0 (cursor);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
		}
	}
	_g_object_unref0 (cursor);
}


/**
     * Execute a SQL query that returns a single number.
     *
     * @param sql The SQL query to run.
     * @param args Values to bind in the SQL query or null.
     * @return The contents of the first row's column as an int.
     * @throws DatabaseError if the underlying SQLite operation fails.
     */
gint rygel_media_export_database_query_value (RygelMediaExportDatabase* self, const gchar* sql, GValue* args, int args_length1, GError** error) {
	gint result = 0;
	const gchar* _tmp0_;
	GValue* _tmp1_;
	gint _tmp1__length1;
	RygelMediaExportDatabaseCursor* _tmp2_ = NULL;
	RygelMediaExportDatabaseCursor* cursor;
	RygelMediaExportDatabaseCursor* _tmp3_;
	sqlite3_stmt* _tmp4_ = NULL;
	sqlite3_stmt* statement;
	sqlite3_stmt* _tmp5_;
	gint _tmp6_ = 0;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (sql != NULL, 0);
	_tmp0_ = sql;
	_tmp1_ = args;
	_tmp1__length1 = args_length1;
	_tmp2_ = rygel_media_export_database_exec_cursor (self, _tmp0_, _tmp1_, _tmp1__length1, &_inner_error_);
	cursor = _tmp2_;
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
			g_propagate_error (error, _inner_error_);
			return 0;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return 0;
		}
	}
	_tmp3_ = cursor;
	_tmp4_ = rygel_media_export_database_cursor_next (_tmp3_, &_inner_error_);
	statement = _tmp4_;
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
			g_propagate_error (error, _inner_error_);
			_g_object_unref0 (cursor);
			return 0;
		} else {
			_g_object_unref0 (cursor);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return 0;
		}
	}
	_tmp5_ = statement;
	_tmp6_ = sqlite3_column_int (_tmp5_, 0);
	result = _tmp6_;
	_g_object_unref0 (cursor);
	return result;
}


/**
     * Analyze triggers of database
     */
void rygel_media_export_database_analyze (RygelMediaExportDatabase* self) {
	sqlite3* _tmp0_;
	sqlite3* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = rygel_media_export_sqlite_wrapper_get_db ((RygelMediaExportSqliteWrapper*) self);
	_tmp1_ = _tmp0_;
	_sqlite3_exec (_tmp1_, "ANALYZE", NULL, NULL, NULL);
}


/**
     * Special GValue to pass to exec or exec_cursor to bind a column to
     * NULL
     */
void rygel_media_export_database_null (GValue* result) {
	GValue _tmp0_ = {0};
	GValue v;
	g_value_init (&_tmp0_, G_TYPE_POINTER);
	v = _tmp0_;
	g_value_set_pointer (&v, NULL);
	*result = v;
	return;
}


/**
     * Start a transaction
     */
void rygel_media_export_database_begin (RygelMediaExportDatabase* self, GError** error) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	rygel_media_export_database_exec (self, "BEGIN", NULL, 0, &_inner_error_);
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
			g_propagate_error (error, _inner_error_);
			return;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
}


/**
     * Commit a transaction
     */
void rygel_media_export_database_commit (RygelMediaExportDatabase* self, GError** error) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	rygel_media_export_database_exec (self, "COMMIT", NULL, 0, &_inner_error_);
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
			g_propagate_error (error, _inner_error_);
			return;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
}


/**
     * Rollback a transaction
     */
void rygel_media_export_database_rollback (RygelMediaExportDatabase* self) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	{
		rygel_media_export_database_exec (self, "ROLLBACK", NULL, 0, &_inner_error_);
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == RYGEL_MEDIA_EXPORT_DATABASE_ERROR) {
				goto __catch2_rygel_media_export_database_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
	goto __finally2;
	__catch2_rygel_media_export_database_error:
	{
		GError* _error_ = NULL;
		const gchar* _tmp0_ = NULL;
		GError* _tmp1_;
		const gchar* _tmp2_;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_tmp0_ = _ ("Failed to roll back transaction: %s");
		_tmp1_ = _error_;
		_tmp2_ = _tmp1_->message;
		g_critical (_tmp0_, _tmp2_);
		_g_error_free0 (_error_);
	}
	__finally2:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static void rygel_media_export_database_class_init (RygelMediaExportDatabaseClass * klass) {
	rygel_media_export_database_parent_class = g_type_class_peek_parent (klass);
}


static void rygel_media_export_database_instance_init (RygelMediaExportDatabase * self) {
}


/**
 * This class is a thin wrapper around SQLite's database object.
 *
 * It adds statement preparation based on GValue and a cancellable exec
 * function.
 */
GType rygel_media_export_database_get_type (void) {
	static volatile gsize rygel_media_export_database_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_export_database_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaExportDatabaseClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_media_export_database_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediaExportDatabase), 0, (GInstanceInitFunc) rygel_media_export_database_instance_init, NULL };
		GType rygel_media_export_database_type_id;
		rygel_media_export_database_type_id = g_type_register_static (RYGEL_MEDIA_EXPORT_TYPE_SQLITE_WRAPPER, "RygelMediaExportDatabase", &g_define_type_info, 0);
		g_once_init_leave (&rygel_media_export_database_type_id__volatile, rygel_media_export_database_type_id);
	}
	return rygel_media_export_database_type_id__volatile;
}


