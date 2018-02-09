/* rygel-media-player.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-media-player.vala, do not modify */

/*
 * Copyright (C) 2008 OpenedHand Ltd.
 * Copyright (C) 2009,2010 Nokia Corporation.
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Jorn Baayen <jorn@openedhand.com>
 *         Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
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
#include <gst/gst.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include "rygel-libpre.h"

#define RYGEL_TYPE_MEDIA_PLAYER (rygel_media_player_get_type ())
#define RYGEL_MEDIA_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_PLAYER, RygelMediaPlayer))
#define RYGEL_IS_MEDIA_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_PLAYER))
#define RYGEL_MEDIA_PLAYER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_MEDIA_PLAYER, RygelMediaPlayerIface))

typedef struct _RygelMediaPlayer RygelMediaPlayer;
typedef struct _RygelMediaPlayerIface RygelMediaPlayerIface;

struct _RygelMediaPlayerIface {
	GTypeInterface parent_iface;
	gboolean (*seek) (RygelMediaPlayer* self, GstClockTime time);
	gchar** (*get_protocols) (RygelMediaPlayer* self, int* result_length1);
	gchar** (*get_mime_types) (RygelMediaPlayer* self, int* result_length1);
	gchar* (*get_playback_state) (RygelMediaPlayer* self);
	void (*set_playback_state) (RygelMediaPlayer* self, const gchar* value);
	gchar* (*get_uri) (RygelMediaPlayer* self);
	void (*set_uri) (RygelMediaPlayer* self, const gchar* value);
	gdouble (*get_volume) (RygelMediaPlayer* self);
	void (*set_volume) (RygelMediaPlayer* self, gdouble value);
	gint64 (*get_duration) (RygelMediaPlayer* self);
	gchar* (*get_metadata) (RygelMediaPlayer* self);
	void (*set_metadata) (RygelMediaPlayer* self, const gchar* value);
	gchar* (*get_mime_type) (RygelMediaPlayer* self);
	void (*set_mime_type) (RygelMediaPlayer* self, const gchar* value);
	gchar* (*get_content_features) (RygelMediaPlayer* self);
	void (*set_content_features) (RygelMediaPlayer* self, const gchar* value);

	guint* (*get_seek_mode_by_op_param) (RygelMediaPlayer* self);
	void (*set_seek_mode_by_op_param) (RygelMediaPlayer* self, const gchar* value);
	guint (*get_dlna_flags) (RygelMediaPlayer* self);
	void (*set_dlna_flags) (RygelMediaPlayer* self, const guint value);
	guint (*get_renderer_seek_mode) (RygelMediaPlayer* self);
	void (*set_renderer_seek_mode) (RygelMediaPlayer* self, const guint value);

	gint64 (*get_position) (RygelMediaPlayer* self);
	gchar* (*get_current_transport_actions) (RygelMediaPlayer* self);
};



GType rygel_media_player_get_type (void) G_GNUC_CONST;
gboolean rygel_media_player_seek (RygelMediaPlayer* self, GstClockTime time);
gchar** rygel_media_player_get_protocols (RygelMediaPlayer* self, int* result_length1);
gchar** rygel_media_player_get_mime_types (RygelMediaPlayer* self, int* result_length1);
gchar* rygel_media_player_get_playback_state (RygelMediaPlayer* self);
void rygel_media_player_set_playback_state (RygelMediaPlayer* self, const gchar* value);
gchar* rygel_media_player_get_uri (RygelMediaPlayer* self);
void rygel_media_player_set_uri (RygelMediaPlayer* self, const gchar* value);
gdouble rygel_media_player_get_volume (RygelMediaPlayer* self);
void rygel_media_player_set_volume (RygelMediaPlayer* self, gdouble value);
gint64 rygel_media_player_get_duration (RygelMediaPlayer* self);
gchar* rygel_media_player_get_metadata (RygelMediaPlayer* self);
void rygel_media_player_set_metadata (RygelMediaPlayer* self, const gchar* value);
gchar* rygel_player_controller_get_current_transport_actions (RygelMediaPlayer* self);
gchar* rygel_media_player_get_mime_type (RygelMediaPlayer* self);
void rygel_media_player_set_mime_type (RygelMediaPlayer* self, const gchar* value);
gchar* rygel_media_player_get_content_features (RygelMediaPlayer* self);
void rygel_media_player_set_content_features (RygelMediaPlayer* self, const gchar* value);
gchar* rygel_media_player_get_duration_as_str (RygelMediaPlayer* self);
gchar* rygel_gst_utils_time_to_string (GstClockTime time);
gint64 rygel_media_player_get_position (RygelMediaPlayer* self);
gchar* rygel_media_player_get_position_as_str (RygelMediaPlayer* self);
gint64 rygel_media_player_get_duration_as_time (RygelMediaPlayer* self);
gchar* rygel_media_player_get_seek_mode_by_op_param (RygelMediaPlayer* self);
void rygel_media_player_set_seek_mode_by_op_param (RygelMediaPlayer* self, const gchar* value);

gboolean rygel_media_player_seek (RygelMediaPlayer* self, GstClockTime time) {
	g_return_val_if_fail (self != NULL, FALSE);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->seek (self, time);
}


gchar** rygel_media_player_get_protocols (RygelMediaPlayer* self, int* result_length1) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_protocols (self, result_length1);
}


gchar** rygel_media_player_get_mime_types (RygelMediaPlayer* self, int* result_length1) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_mime_types (self, result_length1);
}


gchar* rygel_media_player_get_playback_state (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_playback_state (self);
}

extern void ChangeDlnaStateOwner(unsigned int state);
void rygel_media_player_set_playback_state (RygelMediaPlayer* self, const gchar* value) {
	g_return_if_fail (self != NULL);
	
#if defined(CONFIG_RTL_PRE_EMPTIVE)	
	if(!strcmp(value, "STOPPED")) {
		//g_message("%s %d", __FUNCTION__, __LINE__);
		ChangeDlnaStateOwner(1);
		rygel_media_player_set_metadata((RygelMediaPlayer*)self, "");
	}
#endif
	RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->set_playback_state (self, value);
}


gchar* rygel_media_player_get_uri (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_uri (self);
}


void rygel_media_player_set_uri (RygelMediaPlayer* self, const gchar* value) {
	g_return_if_fail (self != NULL);
	RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->set_uri (self, value);
}


gdouble rygel_media_player_get_volume (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, 0.0);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_volume (self);
}


void rygel_media_player_set_volume (RygelMediaPlayer* self, gdouble value) {
	g_return_if_fail (self != NULL);
	RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->set_volume (self, value);
}


gint64 rygel_media_player_get_duration (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, 0LL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_duration (self);
}


gchar* rygel_media_player_get_metadata (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_metadata (self);
}


void rygel_media_player_set_metadata (RygelMediaPlayer* self, const gchar* value) {
	g_return_if_fail (self != NULL);
	RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->set_metadata (self, value);
}

gchar* rygel_player_controller_get_current_transport_actions (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_current_transport_actions (self);
}


gchar* rygel_media_player_get_mime_type (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_mime_type (self);
}

extern void enlarge_buffer_duration(unsigned int isEnlarge);
void rygel_media_player_set_mime_type (RygelMediaPlayer* self, const gchar* value) {
	g_return_if_fail (self != NULL);
	RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->set_mime_type (self, value);
	//g_warning("%s, %d, MIME=%s", __FUNCTION__, __LINE__, value);
	if(!strcmp(value, "audio/mp4") ||!strcmp(value, "audio/aac")){
//		g_warning("%s, %d, En-large bufferation to 6 seconds", __FUNCTION__, __LINE__);
		enlarge_buffer_duration(1);
	}else
		enlarge_buffer_duration(0);
}


gchar* rygel_media_player_get_content_features (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_content_features (self);
}


void rygel_media_player_set_content_features (RygelMediaPlayer* self, const gchar* value) {
	g_return_if_fail (self != NULL);
	RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->set_content_features (self, value);
}

gchar* rygel_media_player_get_seek_mode_by_op_param (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_seek_mode_by_op_param (self);
}


void rygel_media_player_set_seek_mode_by_op_param (RygelMediaPlayer* self, const gchar* value) {
	g_return_if_fail (self != NULL);
	RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->set_seek_mode_by_op_param (self, value);
}


guint rygel_media_player_get_player_dlna_flags (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_dlna_flags (self);
}


void rygel_media_player_set_player_dlna_flags (RygelMediaPlayer* self, const guint value) {
	g_return_if_fail (self != NULL);
	RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->set_dlna_flags (self, value);
}
guint rygel_media_player_get_renderer_seek_mode (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_renderer_seek_mode (self);
}


void rygel_media_player_set_renderer_seek_mode (RygelMediaPlayer* self, const guint value) {
	g_return_if_fail (self != NULL);
	RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->set_renderer_seek_mode (self, value);
}



gchar* rygel_media_player_get_duration_as_str (RygelMediaPlayer* self) {
	gchar* result;
	gint64 _tmp0_;
	gint64 _tmp1_;
	gchar* _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = rygel_media_player_get_duration (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = rygel_gst_utils_time_to_string ((GstClockTime) _tmp1_);
	result = _tmp2_;
	return result;
}
gint64 rygel_media_player_get_duration_as_time (RygelMediaPlayer* self) {
	gint64 _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = rygel_media_player_get_duration (self);
	return _tmp0_;
}


gint64 rygel_media_player_get_position (RygelMediaPlayer* self) {
	g_return_val_if_fail (self != NULL, 0LL);
	return RYGEL_MEDIA_PLAYER_GET_INTERFACE (self)->get_position (self);
}


gchar* rygel_media_player_get_position_as_str (RygelMediaPlayer* self) {
	gchar* result;
	gint64 _tmp0_;
	gint64 _tmp1_;
	gchar* _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = rygel_media_player_get_position (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = rygel_gst_utils_time_to_string ((GstClockTime) _tmp1_);
	result = _tmp2_;
	return result;
}
static void rygel_media_player_base_init (RygelMediaPlayerIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		g_object_interface_install_property (iface, g_param_spec_string ("playback-state", "playback-state", "playback-state", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("uri", "uri", "uri", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_double ("volume", "volume", "volume", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_int64 ("duration", "duration", "duration", G_MININT64, G_MAXINT64, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("metadata", "metadata", "metadata", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("mime-type", "mime-type", "mime-type", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("content-features", "content-features", "content-features", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_int64 ("position", "position", "position", G_MININT64, G_MAXINT64, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("current-transport-actions", "current-transport-actions", "current-transport-actions", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("seek-mode", "seek-mode", "seek-mode", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE|G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_uint ("dlna-flags", "dlna-flags", "dlna-flags", 0, G_MAXUINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE|G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_uint ("renderer-seek-mode", "renderer-seek-mode", "renderer-seek-mode", 0, G_MAXUINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE|G_PARAM_WRITABLE));

	}
}


/**
 * Interface for mapping AVTransport:2 methods to the specific implementation.
 *
 * This class is useful only when implementing Rygel plugins.
 */
GType rygel_media_player_get_type (void) {
	static volatile gsize rygel_media_player_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_player_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaPlayerIface), (GBaseInitFunc) rygel_media_player_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType rygel_media_player_type_id;
		rygel_media_player_type_id = g_type_register_static (G_TYPE_INTERFACE, "RygelMediaPlayer", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (rygel_media_player_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&rygel_media_player_type_id__volatile, rygel_media_player_type_id);
	}
	return rygel_media_player_type_id__volatile;
}


