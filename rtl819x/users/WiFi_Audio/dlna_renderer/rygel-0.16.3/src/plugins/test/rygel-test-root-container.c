/* rygel-test-root-container.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-test-root-container.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali (Khattak) <zeeshanak@gnome.org>.
 * Copyright (C) 2008 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
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
#include <rygel-server.h>
#include <stdlib.h>
#include <string.h>


#define RYGEL_TEST_TYPE_ROOT_CONTAINER (rygel_test_root_container_get_type ())
#define RYGEL_TEST_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TEST_TYPE_ROOT_CONTAINER, RygelTestRootContainer))
#define RYGEL_TEST_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TEST_TYPE_ROOT_CONTAINER, RygelTestRootContainerClass))
#define RYGEL_TEST_IS_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TEST_TYPE_ROOT_CONTAINER))
#define RYGEL_TEST_IS_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TEST_TYPE_ROOT_CONTAINER))
#define RYGEL_TEST_ROOT_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TEST_TYPE_ROOT_CONTAINER, RygelTestRootContainerClass))

typedef struct _RygelTestRootContainer RygelTestRootContainer;
typedef struct _RygelTestRootContainerClass RygelTestRootContainerClass;
typedef struct _RygelTestRootContainerPrivate RygelTestRootContainerPrivate;

#define RYGEL_TEST_TYPE_AUDIO_ITEM (rygel_test_audio_item_get_type ())
#define RYGEL_TEST_AUDIO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TEST_TYPE_AUDIO_ITEM, RygelTestAudioItem))
#define RYGEL_TEST_AUDIO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TEST_TYPE_AUDIO_ITEM, RygelTestAudioItemClass))
#define RYGEL_TEST_IS_AUDIO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TEST_TYPE_AUDIO_ITEM))
#define RYGEL_TEST_IS_AUDIO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TEST_TYPE_AUDIO_ITEM))
#define RYGEL_TEST_AUDIO_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TEST_TYPE_AUDIO_ITEM, RygelTestAudioItemClass))

typedef struct _RygelTestAudioItem RygelTestAudioItem;
typedef struct _RygelTestAudioItemClass RygelTestAudioItemClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define RYGEL_TEST_TYPE_VIDEO_ITEM (rygel_test_video_item_get_type ())
#define RYGEL_TEST_VIDEO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TEST_TYPE_VIDEO_ITEM, RygelTestVideoItem))
#define RYGEL_TEST_VIDEO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TEST_TYPE_VIDEO_ITEM, RygelTestVideoItemClass))
#define RYGEL_TEST_IS_VIDEO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TEST_TYPE_VIDEO_ITEM))
#define RYGEL_TEST_IS_VIDEO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TEST_TYPE_VIDEO_ITEM))
#define RYGEL_TEST_VIDEO_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TEST_TYPE_VIDEO_ITEM, RygelTestVideoItemClass))

typedef struct _RygelTestVideoItem RygelTestVideoItem;
typedef struct _RygelTestVideoItemClass RygelTestVideoItemClass;

struct _RygelTestRootContainer {
	RygelSimpleContainer parent_instance;
	RygelTestRootContainerPrivate * priv;
};

struct _RygelTestRootContainerClass {
	RygelSimpleContainerClass parent_class;
};


static gpointer rygel_test_root_container_parent_class = NULL;

GType rygel_test_root_container_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TEST_ROOT_CONTAINER_DUMMY_PROPERTY
};
RygelTestRootContainer* rygel_test_root_container_new (const gchar* title);
RygelTestRootContainer* rygel_test_root_container_construct (GType object_type, const gchar* title);
RygelTestAudioItem* rygel_test_audio_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title);
RygelTestAudioItem* rygel_test_audio_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title);
GType rygel_test_audio_item_get_type (void) G_GNUC_CONST;
RygelTestVideoItem* rygel_test_video_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title);
RygelTestVideoItem* rygel_test_video_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title);
GType rygel_test_video_item_get_type (void) G_GNUC_CONST;


RygelTestRootContainer* rygel_test_root_container_construct (GType object_type, const gchar* title) {
	RygelTestRootContainer * self = NULL;
	const gchar* _tmp0_;
	RygelTestAudioItem* _tmp1_;
	RygelTestAudioItem* _tmp2_;
	RygelTestVideoItem* _tmp3_;
	RygelTestVideoItem* _tmp4_;
	g_return_val_if_fail (title != NULL, NULL);
	_tmp0_ = title;
	self = (RygelTestRootContainer*) rygel_simple_container_construct_root (object_type, _tmp0_);
	_tmp1_ = rygel_test_audio_item_new ("sinewave", (RygelMediaContainer*) self, "Sine Wave");
	_tmp2_ = _tmp1_;
	rygel_simple_container_add_child_item ((RygelSimpleContainer*) self, (RygelMediaItem*) _tmp2_);
	_g_object_unref0 (_tmp2_);
	_tmp3_ = rygel_test_video_item_new ("smtpe", (RygelMediaContainer*) self, "SMTPE");
	_tmp4_ = _tmp3_;
	rygel_simple_container_add_child_item ((RygelSimpleContainer*) self, (RygelMediaItem*) _tmp4_);
	_g_object_unref0 (_tmp4_);
	return self;
}


RygelTestRootContainer* rygel_test_root_container_new (const gchar* title) {
	return rygel_test_root_container_construct (RYGEL_TEST_TYPE_ROOT_CONTAINER, title);
}


static void rygel_test_root_container_class_init (RygelTestRootContainerClass * klass) {
	rygel_test_root_container_parent_class = g_type_class_peek_parent (klass);
}


static void rygel_test_root_container_instance_init (RygelTestRootContainer * self) {
}


/**
 * Represents the root container for Test media content hierarchy.
 */
GType rygel_test_root_container_get_type (void) {
	static volatile gsize rygel_test_root_container_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_test_root_container_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTestRootContainerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_test_root_container_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTestRootContainer), 0, (GInstanceInitFunc) rygel_test_root_container_instance_init, NULL };
		GType rygel_test_root_container_type_id;
		rygel_test_root_container_type_id = g_type_register_static (RYGEL_TYPE_SIMPLE_CONTAINER, "RygelTestRootContainer", &g_define_type_info, 0);
		g_once_init_leave (&rygel_test_root_container_type_id__volatile, rygel_test_root_container_type_id);
	}
	return rygel_test_root_container_type_id__volatile;
}


