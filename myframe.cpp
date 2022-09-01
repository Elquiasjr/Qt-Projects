#include "myframe.h"
#include <QPainter>
#include <iostream>

using namespace std;

Myframe::Myframe(QWidget *parent)
    : QFrame{parent}
{

}


void Myframe::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);
    QPainter painter(this);
    painter.setPen(QPen(Qt::darkCyan, 2));

    painter.drawRect(rec);
    painter.drawPoint(point);
    painter.drawLine(line);
}

void Myframe::ClearForms()
{
    cout << "entrou no Myframe::ClearForms" << endl;
    rec.setRect(0,0,0,0);
    point.setX(0);
    point.setY(0);
     line.setLine(0,0,0,0);
    update();
}

void Myframe::DrawRect()
{
    ClearForms();
    cout << "entrou no Myframe::DrawRect" << endl;
    rec.setRect(160,120,40,40);
    update();

}

void Myframe::DrawPoint()
{
    ClearForms();
    cout << "entrou no Myframe::DrawPoint" << endl;
    point.setX(175);
    point.setY(140);
    update();


}

void Myframe::DrawLine()
{
    ClearForms();
    cout << "entrou no Myframe::DrawLine" << endl;
    line.setLine(300,500,10,10);
    update();

}
