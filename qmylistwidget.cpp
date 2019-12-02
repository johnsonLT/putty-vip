#include "qmylistwidget.h"
#include <qlogging.h>
#include <QtDebug>

QMyListWidget::QMyListWidget(QWidget *parent)
    : QListWidget(parent)
{
    //创建一个菜单
    m_contextMenu = new QMenu;
    m_addAction = new QAction(tr("新建"), this);
    m_delAction = new QAction(tr("删除"), this);
    m_modifyAction = new QAction(tr("修改"), this);
    m_openPuttyAction = new QAction(tr("打开"), this);
    m_contextMenu->addAction(m_addAction);
    m_contextMenu->addAction(m_delAction);

}

QMyListWidget::~QMyListWidget()
{
    delete m_addAction;
    delete m_delAction;
    delete m_modifyAction;
}

void QMyListWidget::initConnect()
{
    connect(m_addAction, SIGNAL(triggered()), this, SLOT(onAddItem()));
    connect(m_delAction, SIGNAL(triggered()), this, SLOT(onDelItem()));
    connect(m_modifyAction, SIGNAL(triggered()), this, SLOT(onModifyItem()));
    connect(m_openPuttyAction, SIGNAL(triggered()), this, SLOT(onOpenItem()));
}

void QMyListWidget::mousePressEvent(QMouseEvent *event)
{
    if(this->itemAt(mapFromGlobal(QCursor::pos())) != nullptr)
    {
        m_contextMenu->addSeparator();
        m_contextMenu->addAction(m_modifyAction);
        m_contextMenu->addAction(m_openPuttyAction);
    }
    else
    {
        m_contextMenu->removeAction(m_modifyAction);
        m_contextMenu->removeAction(m_openPuttyAction);
    }
    //确保右键点击，然后跳出菜单.
    if (event->button() == Qt::RightButton)
    {
        m_contextMenu->exec(event->globalPos());
    }

    //要继续保留QListWidget原有的点击事件.
    QListWidget::mousePressEvent(event);
}

void QMyListWidget::onAddItem()
{
    qDebug() << "add item";
    loginSetting = new Settings(this);
    loginSetting->show();
    loginSetting->initWidgetsVal();
    this->addItem(tr("新建会话"));
}

//删除item
void QMyListWidget::onDelItem()
{
    qDebug() << "delete item";
    QListWidgetItem *curItem = this->currentItem();
    this->removeItemWidget(curItem);
    delete curItem;
}

//修改配置
void QMyListWidget::onModifyItem()
{
    qDebug() << "#modify item#";
    loginSetting = new Settings(this);
    loginSetting->show();
    QListWidgetItem *curItem = this->currentItem();
    loginSetting->readSessionIni(curItem->text());
    delete curItem;
}

//启动putty
void QMyListWidget::onOpenItem()
{
    qDebug() << "open putty item";

}

//重命名
void QMyListWidget::onRenameItem()
{
    qDebug() << "rename item";

}
