/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef ____DAEMON_DBUS_GKD_INTERNAL_GENERATED_H__
#define ____DAEMON_DBUS_GKD_INTERNAL_GENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.keyring.InternalUnsupportedGuiltRiddenInterface */

#define GKD_TYPE_EXPORTED_INTERNAL (gkd_exported_internal_get_type ())
#define GKD_EXPORTED_INTERNAL(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GKD_TYPE_EXPORTED_INTERNAL, GkdExportedInternal))
#define GKD_IS_EXPORTED_INTERNAL(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GKD_TYPE_EXPORTED_INTERNAL))
#define GKD_EXPORTED_INTERNAL_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GKD_TYPE_EXPORTED_INTERNAL, GkdExportedInternalIface))

struct _GkdExportedInternal;
typedef struct _GkdExportedInternal GkdExportedInternal;
typedef struct _GkdExportedInternalIface GkdExportedInternalIface;

struct _GkdExportedInternalIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_change_with_master_password) (
    GkdExportedInternal *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_collection,
    GVariant *arg_original,
    GVariant *arg_master);

  gboolean (*handle_change_with_prompt) (
    GkdExportedInternal *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_collection);

  gboolean (*handle_create_with_master_password) (
    GkdExportedInternal *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_attributes,
    GVariant *arg_master);

  gboolean (*handle_unlock_with_master_password) (
    GkdExportedInternal *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_collection,
    GVariant *arg_master);

};

GType gkd_exported_internal_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gkd_exported_internal_interface_info (void);
guint gkd_exported_internal_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gkd_exported_internal_complete_change_with_master_password (
    GkdExportedInternal *object,
    GDBusMethodInvocation *invocation);

void gkd_exported_internal_complete_change_with_prompt (
    GkdExportedInternal *object,
    GDBusMethodInvocation *invocation,
    const gchar *prompt);

void gkd_exported_internal_complete_create_with_master_password (
    GkdExportedInternal *object,
    GDBusMethodInvocation *invocation,
    const gchar *collection);

void gkd_exported_internal_complete_unlock_with_master_password (
    GkdExportedInternal *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void gkd_exported_internal_call_change_with_master_password (
    GkdExportedInternal *proxy,
    const gchar *arg_collection,
    GVariant *arg_original,
    GVariant *arg_master,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gkd_exported_internal_call_change_with_master_password_finish (
    GkdExportedInternal *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gkd_exported_internal_call_change_with_master_password_sync (
    GkdExportedInternal *proxy,
    const gchar *arg_collection,
    GVariant *arg_original,
    GVariant *arg_master,
    GCancellable *cancellable,
    GError **error);

void gkd_exported_internal_call_change_with_prompt (
    GkdExportedInternal *proxy,
    const gchar *arg_collection,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gkd_exported_internal_call_change_with_prompt_finish (
    GkdExportedInternal *proxy,
    gchar **out_prompt,
    GAsyncResult *res,
    GError **error);

gboolean gkd_exported_internal_call_change_with_prompt_sync (
    GkdExportedInternal *proxy,
    const gchar *arg_collection,
    gchar **out_prompt,
    GCancellable *cancellable,
    GError **error);

void gkd_exported_internal_call_create_with_master_password (
    GkdExportedInternal *proxy,
    GVariant *arg_attributes,
    GVariant *arg_master,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gkd_exported_internal_call_create_with_master_password_finish (
    GkdExportedInternal *proxy,
    gchar **out_collection,
    GAsyncResult *res,
    GError **error);

gboolean gkd_exported_internal_call_create_with_master_password_sync (
    GkdExportedInternal *proxy,
    GVariant *arg_attributes,
    GVariant *arg_master,
    gchar **out_collection,
    GCancellable *cancellable,
    GError **error);

void gkd_exported_internal_call_unlock_with_master_password (
    GkdExportedInternal *proxy,
    const gchar *arg_collection,
    GVariant *arg_master,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gkd_exported_internal_call_unlock_with_master_password_finish (
    GkdExportedInternal *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gkd_exported_internal_call_unlock_with_master_password_sync (
    GkdExportedInternal *proxy,
    const gchar *arg_collection,
    GVariant *arg_master,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define GKD_TYPE_EXPORTED_INTERNAL_PROXY (gkd_exported_internal_proxy_get_type ())
#define GKD_EXPORTED_INTERNAL_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GKD_TYPE_EXPORTED_INTERNAL_PROXY, GkdExportedInternalProxy))
#define GKD_EXPORTED_INTERNAL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GKD_TYPE_EXPORTED_INTERNAL_PROXY, GkdExportedInternalProxyClass))
#define GKD_EXPORTED_INTERNAL_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GKD_TYPE_EXPORTED_INTERNAL_PROXY, GkdExportedInternalProxyClass))
#define GKD_IS_EXPORTED_INTERNAL_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GKD_TYPE_EXPORTED_INTERNAL_PROXY))
#define GKD_IS_EXPORTED_INTERNAL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GKD_TYPE_EXPORTED_INTERNAL_PROXY))

typedef struct _GkdExportedInternalProxy GkdExportedInternalProxy;
typedef struct _GkdExportedInternalProxyClass GkdExportedInternalProxyClass;
typedef struct _GkdExportedInternalProxyPrivate GkdExportedInternalProxyPrivate;

struct _GkdExportedInternalProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GkdExportedInternalProxyPrivate *priv;
};

struct _GkdExportedInternalProxyClass
{
  GDBusProxyClass parent_class;
};

GType gkd_exported_internal_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GkdExportedInternalProxy, g_object_unref)
#endif

void gkd_exported_internal_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GkdExportedInternal *gkd_exported_internal_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GkdExportedInternal *gkd_exported_internal_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gkd_exported_internal_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GkdExportedInternal *gkd_exported_internal_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GkdExportedInternal *gkd_exported_internal_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GKD_TYPE_EXPORTED_INTERNAL_SKELETON (gkd_exported_internal_skeleton_get_type ())
#define GKD_EXPORTED_INTERNAL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GKD_TYPE_EXPORTED_INTERNAL_SKELETON, GkdExportedInternalSkeleton))
#define GKD_EXPORTED_INTERNAL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GKD_TYPE_EXPORTED_INTERNAL_SKELETON, GkdExportedInternalSkeletonClass))
#define GKD_EXPORTED_INTERNAL_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GKD_TYPE_EXPORTED_INTERNAL_SKELETON, GkdExportedInternalSkeletonClass))
#define GKD_IS_EXPORTED_INTERNAL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GKD_TYPE_EXPORTED_INTERNAL_SKELETON))
#define GKD_IS_EXPORTED_INTERNAL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GKD_TYPE_EXPORTED_INTERNAL_SKELETON))

typedef struct _GkdExportedInternalSkeleton GkdExportedInternalSkeleton;
typedef struct _GkdExportedInternalSkeletonClass GkdExportedInternalSkeletonClass;
typedef struct _GkdExportedInternalSkeletonPrivate GkdExportedInternalSkeletonPrivate;

struct _GkdExportedInternalSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GkdExportedInternalSkeletonPrivate *priv;
};

struct _GkdExportedInternalSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gkd_exported_internal_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GkdExportedInternalSkeleton, g_object_unref)
#endif

GkdExportedInternal *gkd_exported_internal_skeleton_new (void);


G_END_DECLS

#endif /* ____DAEMON_DBUS_GKD_INTERNAL_GENERATED_H__ */
