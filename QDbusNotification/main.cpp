#include <QCoreApplication>
#include <DesktopNotification.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    OrgFreedesktopNotificationsInterface desktopNotification("org.freedesktop.Notifications", "/org/freedesktop/Notifications", QDBusConnection::sessionBus(), 0);
    QStringList dontknow;
    QVariantMap evenDontKnow;
    desktopNotification.Notify("QT DEMO APPLICATION", 0, "", "title", "hello world description", dontknow, evenDontKnow, 10000);
    return a.exec();
}
