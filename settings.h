#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>
#include <QtWidgets>
#include <QDialog>

namespace Ui {
class Settings;
}
typedef struct _SessionInfo {
    QString name;
    QString protocol;
    QString ipAddress;
    qint32 port;
    QString userName;
    QString password;
}SessionInfo;
#define INI_FILEPATH
class Settings : public QDialog
{
    Q_OBJECT
public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

    void initWidgetsVal(void);
    void readSessionIni(const QString &sessionName);
private:
    bool readFile(const QString& filePath, const QString &sessionName);
    void readSessionElement(const QString &sessionName);
private:
    Ui::Settings *ui;
private:
    QString s_userName;
    QString s_password;
    QString s_protocol;
    QString s_ip;
    QString s_portNum;
    QXmlStreamReader reader;
    QString iniFilePath="../res/sessions_data.xml";
    SessionInfo locSessionInfo;

signals:

public slots:

};



#endif // SETTINGS_H
