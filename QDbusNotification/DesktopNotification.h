/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -p DesktopNotification desktop_notifications.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DESKTOPNOTIFICATION_H
#define DESKTOPNOTIFICATION_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freedesktop.Notifications
 */
class OrgFreedesktopNotificationsInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.Notifications"; }

public:
    OrgFreedesktopNotificationsInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopNotificationsInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> CloseNotification(uint arg_0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(arg_0);
        return asyncCallWithArgumentList(QStringLiteral("CloseNotification"), argumentList);
    }

    inline QDBusPendingReply<QStringList> GetCapabilities()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetCapabilities"), argumentList);
    }

    inline QDBusPendingReply<QString, QString, QString, QString> GetServerInformation()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetServerInformation"), argumentList);
    }
    inline QDBusReply<QString> GetServerInformation(QString &arg_1, QString &arg_2, QString &arg_3)
    {
        QList<QVariant> argumentList;
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("GetServerInformation"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 4) {
            arg_1 = qdbus_cast<QString>(reply.arguments().at(1));
            arg_2 = qdbus_cast<QString>(reply.arguments().at(2));
            arg_3 = qdbus_cast<QString>(reply.arguments().at(3));
        }
        return reply;
    }

    inline QDBusPendingReply<uint> Notify(const QString &arg_0, uint arg_1, const QString &arg_2, const QString &arg_3, const QString &arg_4, const QStringList &arg_5, const QVariantMap &arg_6, int arg_7)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(arg_0) << QVariant::fromValue(arg_1) << QVariant::fromValue(arg_2) << QVariant::fromValue(arg_3) << QVariant::fromValue(arg_4) << QVariant::fromValue(arg_5) << QVariant::fromValue(arg_6) << QVariant::fromValue(arg_7);
        return asyncCallWithArgumentList(QStringLiteral("Notify"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void ActionInvoked(uint arg_0, const QString &arg_1);
    void NotificationClosed(uint arg_0, uint arg_1);
};

namespace org {
  namespace freedesktop {
    typedef ::OrgFreedesktopNotificationsInterface Notifications;
  }
}
#endif
