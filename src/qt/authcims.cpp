#include "authcims.h"
#include "ui_authcims.h"

AuthCIMS::AuthCIMS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AuthCIMS)
{
    ui->setupUi(this);
}

AuthCIMS::~AuthCIMS()
{
    delete ui;
}
