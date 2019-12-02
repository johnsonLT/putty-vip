#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
}

void Settings::initWidgetsVal()
{
    ui->protocolList->addItem(tr("Telnet"));
    ui->protocolList->addItem(tr("SSH"));
    ui->protocolList->addItem(tr("Serial"));

}

//读xml，匹配session name
void Settings::readSessionIni(const QString &sessionName)
{

}

bool Settings::readFile(const QString &filePath, const QString &sessionName)
{
    QFile iniFile(filePath);
    if(!iniFile.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::critical(this, tr("Error"),
                                     tr("Cannot read file %1").arg(filePath));
        return false;
    }
    reader.setDevice(&iniFile);
    while (!reader.atEnd()) {
       if (reader.isStartElement()) {
           if (reader.name() == "root") {
               readSessionElement(sessionName);
           } else {
               reader.raiseError(tr("Not a valid ini file"));
           }
       } else {
           reader.readNext();
       }
   }
   iniFile.close();
   if (reader.hasError()) {
      QMessageBox::critical(this, tr("Error"),
                            tr("Failed to parse file %1").arg(filePath));
      return false;
    } else if (iniFile.error() != QFile::NoError) {
      QMessageBox::critical(this, tr("Error"),
                            tr("Cannot read file %1").arg(filePath));
      return false;
    }
   return true;
}

void Settings::readSessionElement(const QString &sessionName)
{
    Q_ASSERT(reader.isStartElement() && reader.name() == "root");
    reader.readNext();
    while (!reader.atEnd()) {
        if (reader.isEndElement()) {
            reader.readNext();
            break;
        }

        if (reader.isStartElement()) {
            if (reader.name() == sessionName) {
                //readEntryElement(treeWidget->invisibleRootItem());
            } else {
                //skipUnknownElement();
            }
        } else {
            reader.readNext();
        }
    }
}



