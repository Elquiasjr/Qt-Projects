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
    QPainter *paints = &painter;
    rectang->type = type_rec;
    point->type = type_point;
    line->type = type_line;
    for (ObjectGen *x : displayFile) {
             redirectDraw(x, paints);
        }
}

void ObjectGen::redirectDraw(ObjectGen *x, QPainter *painter){
    switch(x->type){
    case type_rec:{
        ObjectRec *re = (ObjectRec*) x;
        painter->drawRect(*re);
        re->setRect(160,120,40,40);
        break;
    }
    case type_point:{
        ObjectPoint *pt = (ObjectPoint*) x;
        painter->drawPoint(*pt);
        pt->setX(175);
        pt->setY(140);
        break;
    }
    case type_line:{
        ObjectLine *ln = (ObjectLine*) x;
        painter->drawLine(*ln);
        ln->setLine(300,500,10,10);
        break;
    }
    }
}

void Myframe::DrawAll(){
    cout << "Entrou no Myfram::ClearForms" << endl;

    update();
}

