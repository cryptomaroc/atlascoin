#ifndef QPAGESENDATC_H
#define QPAGESENDATC_H

#include "qstealthpage.h"
#include "qhoverbutton.h"
#include "sendcoinsdialog.h"
#include <QLabel>
#include <QTextEdit>
#include <QLineEdit>

class QPageSendATC : public QStealthPage
{
    Q_OBJECT
public:
    explicit QPageSendATC(QWidget *parent = 0);

    void setModel(WalletModel *model);
    void showOutOfSyncWarning(bool fShow);

public:
    SendCoinsDialog *sendCoinsPage;
};

#endif // QPAGESENDATC_H
