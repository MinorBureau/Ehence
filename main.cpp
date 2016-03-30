#include <QCoreApplication>
#include <QString>
#include "database.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    Database :: ReadFile("filecsv.csv");



    return 0;
}
