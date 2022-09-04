#include "myframe.h"
#include <QPainter>
#include <iostream>

using namespace std;

Myframe::Myframe(QWidget *parent)
    : QFrame{parent}
{

}

//void ObjectRec::drawObject(){


//}

void Myframe::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);
    QPainter painter(this);
    painter.setPen(QPen(Qt::darkCyan, 2));

    painter.drawRect(*rectang);
    //painter.drawPoint();
    //painter.drawLine();
}


void Myframe::DrawAll(){
    cout << "Entrou no Myfram::ClearForms" << endl;
    displayFile[0]->setRect(160,120,40,40);
    //obj2->setX(175);
    //obj2->setY(140);
    //displayFile[2]->setLine(300,500,10,10);
    update();
}

//void Myframe::ClearForms()
//{
//    cout << "entrou no Myframe::ClearForms" << endl;
//    objetos.rec.setRect(0,0,0,0);
//    objetos.point.setX(0);
//    objetos.point.setY(0);
//    objetos.line.setLine(0,0,0,0);
//    update();
//}

//void Myframe::DrawRect()
//{
//    ClearForms();
//    cout << "entrou no Myframe::DrawRect" << endl;
//    objetos.rec.setRect(160,120,40,40);
//    update();

//}

//void Myframe::DrawPoint()
//{
//    ClearForms();
//    cout << "entrou no Myframe::DrawPoint" << endl;
//    objetos.point.setX(175);
//    objetos.point.setY(140);
//    update();


//}

//void Myframe::DrawLine()
//{
//    ClearForms();
//    cout << "entrou no Myframe::DrawLine" << endl;
//    objetos.line.setLine(300,500,10,10);
//    update();

//}
