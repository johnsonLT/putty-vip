#ifndef QMYLISTWIDGET_H
#define QMYLISTWIDGET_H

#include <QObject>
#include <QListWidget>
#include <QMenu>
#include <QAction>
#include <QContextMenuEvent>
#include <QMouseEvent>
#include "settings.h"

class QMyListWidget : public QListWidget
{
    Q_OBJECT
public:
    Settings *loginSetting;
public:
    QMyListWidget(QWidget *parent);
    ~QMyListWidget();
    void initConnect();

protected:
    void mousePressEvent(QMouseEvent *event);

private:
    QMenu *m_contextMenu;
    QAction *m_addAction;
    QAction *m_delAction;
    QAction *m_modifyAction;
    QAction *m_openPuttyAction;
public slots:
    void onAddItem();
    void onDelItem();
    void onModifyItem();
    void onOpenItem();
    void onRenameItem();
};

#endif // QMYLISTWIDGET_H
