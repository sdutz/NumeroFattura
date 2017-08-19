#ifndef NUMEROFATTUREDLG_H
#define NUMEROFATTUREDLG_H

#include <QDialog>
#include "QSettings"

namespace Ui {
class NumeroFattureDlg;
}

class NumeroFattureDlg : public QDialog
{
    Q_OBJECT

public:
    explicit NumeroFattureDlg(QWidget *parent = 0);
    ~NumeroFattureDlg();

private slots:
    void on_btnExit_clicked();

    void on_btnUp_clicked();

    void on_btnDown_clicked();

    void on_btnReset_clicked();

private :
    void Init() ;
    void UpdateLabel() ;

private:
    Ui::NumeroFattureDlg *ui;
    int                  m_nId ;
    QSettings            m_sets ;
};

#endif // NUMEROFATTUREDLG_H
