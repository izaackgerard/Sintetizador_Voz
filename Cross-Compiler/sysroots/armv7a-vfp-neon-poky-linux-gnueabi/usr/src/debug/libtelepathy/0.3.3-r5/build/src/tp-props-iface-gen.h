/* Generated by dbus-binding-tool; do not edit! */

#include <glib.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

#ifndef _DBUS_GLIB_ASYNC_DATA_FREE
#define _DBUS_GLIB_ASYNC_DATA_FREE
static
#ifdef G_HAVE_INLINE
inline
#endif
void
_dbus_glib_async_data_free (gpointer stuff)
{
	g_slice_free (DBusGAsyncData, stuff);
}
#endif

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_Telepathy_Properties
#define DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_Telepathy_Properties

static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
tp_props_iface_get_properties (DBusGProxy *proxy, const GArray* IN_properties, GPtrArray** OUT_arg1, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetProperties", error, dbus_g_type_get_collection ("GArray", G_TYPE_UINT), IN_properties, G_TYPE_INVALID, dbus_g_type_get_collection ("GPtrArray", dbus_g_type_get_struct ("GValueArray", G_TYPE_UINT, G_TYPE_VALUE, G_TYPE_INVALID)), OUT_arg1, G_TYPE_INVALID);
}

typedef void (*tp_props_iface_get_properties_reply) (DBusGProxy *proxy, GPtrArray *OUT_arg1, GError *error, gpointer userdata);

static void
tp_props_iface_get_properties_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  GPtrArray* OUT_arg1;
  dbus_g_proxy_end_call (proxy, call, &error, dbus_g_type_get_collection ("GPtrArray", dbus_g_type_get_struct ("GValueArray", G_TYPE_UINT, G_TYPE_VALUE, G_TYPE_INVALID)), &OUT_arg1, G_TYPE_INVALID);
  (*(tp_props_iface_get_properties_reply)data->cb) (proxy, OUT_arg1, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
tp_props_iface_get_properties_async (DBusGProxy *proxy, const GArray* IN_properties, tp_props_iface_get_properties_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetProperties", tp_props_iface_get_properties_async_callback, stuff, _dbus_glib_async_data_free, dbus_g_type_get_collection ("GArray", G_TYPE_UINT), IN_properties, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
tp_props_iface_list_properties (DBusGProxy *proxy, GPtrArray** OUT_arg0, GError **error)

{
  return dbus_g_proxy_call (proxy, "ListProperties", error, G_TYPE_INVALID, dbus_g_type_get_collection ("GPtrArray", dbus_g_type_get_struct ("GValueArray", G_TYPE_UINT, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_UINT, G_TYPE_INVALID)), OUT_arg0, G_TYPE_INVALID);
}

typedef void (*tp_props_iface_list_properties_reply) (DBusGProxy *proxy, GPtrArray *OUT_arg0, GError *error, gpointer userdata);

static void
tp_props_iface_list_properties_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  GPtrArray* OUT_arg0;
  dbus_g_proxy_end_call (proxy, call, &error, dbus_g_type_get_collection ("GPtrArray", dbus_g_type_get_struct ("GValueArray", G_TYPE_UINT, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_UINT, G_TYPE_INVALID)), &OUT_arg0, G_TYPE_INVALID);
  (*(tp_props_iface_list_properties_reply)data->cb) (proxy, OUT_arg0, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
tp_props_iface_list_properties_async (DBusGProxy *proxy, tp_props_iface_list_properties_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "ListProperties", tp_props_iface_list_properties_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
tp_props_iface_set_properties (DBusGProxy *proxy, const GPtrArray* IN_properties, GError **error)

{
  return dbus_g_proxy_call (proxy, "SetProperties", error, dbus_g_type_get_collection ("GPtrArray", dbus_g_type_get_struct ("GValueArray", G_TYPE_UINT, G_TYPE_VALUE, G_TYPE_INVALID)), IN_properties, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*tp_props_iface_set_properties_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
tp_props_iface_set_properties_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(tp_props_iface_set_properties_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
tp_props_iface_set_properties_async (DBusGProxy *proxy, const GPtrArray* IN_properties, tp_props_iface_set_properties_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "SetProperties", tp_props_iface_set_properties_async_callback, stuff, _dbus_glib_async_data_free, dbus_g_type_get_collection ("GPtrArray", dbus_g_type_get_struct ("GValueArray", G_TYPE_UINT, G_TYPE_VALUE, G_TYPE_INVALID)), IN_properties, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_Telepathy_Properties */

G_END_DECLS