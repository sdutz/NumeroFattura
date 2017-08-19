#include "numerofatturedlg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("NewTecnotetto") ;
    QCoreApplication::setOrganizationDomain("NewTecnotetto") ;
    QCoreApplication::setApplicationName("NumeroFattura") ;

    NumeroFattureDlg w;

    w.show();

    return a.exec();
}
