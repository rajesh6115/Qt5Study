# Simple Desktop Notification Using DBus

Tools used
--------------
1. dbus-send --session --type=method_call --print-reply --dest=org.freedesktop.Notifications /org/freedesktop/Notifications org.freedesktop.DBus.Introspectable.Introspect > desktop_notifications.xml
2. qdbusxml2cpp -p DesktopNotification desktop_notifications.xml
3. d-feet
4. dbus-monitor



ISSUES FACED
--------
- Custom Datatype Required While Generating Stub/helper code using dbusxml2cpp

Error:
>qdbusxml2cpp: Got unknown type `a{sv}' processing 'desktop_notifications.xml'
>You should add ```<annotation name="org.qtproject.QtDBus.QtTypeName.In6" value="<type>"/> ```to the XML description

Solution:

>```<annotation name="org.qtproject.QtDBus.QtTypeName.In6" value="QVariantMap"/>``` added to the xml file as dbusxml2cpp required this

- I have Always Confusion Regarding Adaptor and Proxy Stub Code. Any way I have to use proxy as I will act as client.

External Links
==============
[Custom Data Types In Qt DBus](https://techbase.kde.org/Development/Tutorials/D-Bus/CustomTypes)

