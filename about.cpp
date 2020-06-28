#include "about.h"
#include "ui_about.h"

#include <QAbstractButton>

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

    ui->label_Version->setText(VERSION_APP);
}

About::~About()
{
    delete ui;
}

void About::setFIOVersion(const QString &version)
{
    ui->label_FIO->setText(version);
}

void About::on_buttonBox_clicked(QAbstractButton *)
{
    close();
}