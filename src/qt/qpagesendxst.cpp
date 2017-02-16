#include "qpagesendxst.h"

QPageSendATC::QPageSendATC(QWidget *parent) :
    QStealthPage(parent)
{
    sendCoinsPage = new SendCoinsDialog(this);
    sendCoinsPage->setGeometry(0, 0, SC_PAGE_WIDTH, SC_PAGE_HEIGHT);
    sendCoinsPage->showNormal();
}

void QPageSendATC::setModel(WalletModel *model)
{
    sendCoinsPage->setModel(model);
}

void QPageSendATC::showOutOfSyncWarning(bool fShow)
{
    sendCoinsPage->showOutOfSyncWarning(fShow);
}

