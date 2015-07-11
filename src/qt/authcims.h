#ifndef AUTHCIMS_H
#define AUTHCIMS_H

#include <QDialog>

namespace Ui {
class AuthCIMS;
}

class AuthCIMS : public QDialog
{
    Q_OBJECT

public:
    explicit AuthCIMS(QWidget *parent = 0);
    ~AuthCIMS();

private:
    Ui::AuthCIMS *ui;
};

#endif // AUTHCIMS_H
