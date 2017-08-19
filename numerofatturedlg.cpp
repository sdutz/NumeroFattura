#include "numerofatturedlg.h"
#include "ui_numerofatturedlg.h"
#include "QLabel"
#include "QFont"

#define IDFATTURA "IdFattura"

NumeroFattureDlg::NumeroFattureDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NumeroFattureDlg)
{
    ui->setupUi(this);
    Init() ;
    UpdateLabel();
}

NumeroFattureDlg::~NumeroFattureDlg()
{
    m_sets.setValue( IDFATTURA, QString::number( m_nId));
    delete ui;
}

void NumeroFattureDlg::Init()
{
    QIcon qIcExit ;
    QIcon qIcPlus ;
    QIcon qIcMinus ;
    QIcon qIcReset ;
    QIcon qIcApp ;

    m_nId = std::max( m_sets.value( IDFATTURA).toInt(), 1) ;

    qIcExit.addFile( ":/it/images/exit.png");
    ui->btnExit->setIcon( qIcExit);
    ui->btnExit->setIconSize( ui->btnExit->size());

    qIcPlus.addFile( ":/it/images/plus.png");
    ui->btnUp->setIcon( qIcPlus);
    ui->btnUp->setIconSize( ui->btnUp->size());

    qIcMinus.addFile( ":/it/images/minus.png");
    ui->btnDown->setIcon( qIcMinus);
    ui->btnDown->setIconSize( ui->btnDown->size());

    qIcReset.addFile( ":/it/images/restart.png");
    ui->btnReset->setIcon( qIcReset);
    ui->btnReset->setIconSize( ui->btnReset->size());

    qIcApp.addFile( ":/it/images/app.png");
    setWindowIcon( qIcApp);
}

void NumeroFattureDlg::on_btnExit_clicked()
{
    m_sets.setValue( IDFATTURA, QString::number( m_nId));

    close() ;
}

void NumeroFattureDlg::on_btnUp_clicked()
{
    m_nId ++ ;

    UpdateLabel();
}

void NumeroFattureDlg::on_btnDown_clicked()
{
    if ( m_nId > 1) {
        m_nId -- ;
    }

    UpdateLabel();
}

void NumeroFattureDlg::on_btnReset_clicked()
{
    m_nId = 1 ;

    UpdateLabel();
}

void NumeroFattureDlg::UpdateLabel()
{
    ui->label->setText( QString::number( m_nId)) ;
}

