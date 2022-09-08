#include "myframe.h"
#include <QPainter>
#include <iostream>

using namespace std;

Myframe::Myframe(QWidget *parent)
    : QFrame{parent}
{

}



//void ObjectGen::drawObj (){
//    cout << "hello world" ;
//}

//void ObjectRec::drawObj (){
//    rec.setRect(160,120,40,40);
//}

void Myframe::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);
    QPainter painter(this);
    painter.setPen(QPen(Qt::darkCyan, 2));
    QPainter *paints = &painter;
    rectang->type = 1;
    point->type = 2;
    line->type = 3;
    for (ObjectGen *x : displayFile) {
             redirectDraw(x, paints);
        }
}

void ObjectGen::redirectDraw(ObjectGen *x, QPainter *painter){

    if(x->type == 1){
        ObjectRec *re = (ObjectRec*) x;
        painter->drawRect(*re);
        re->setRect(160,120,40,40);
    }
    else if(x->type == 2){
        ObjectPoint *pt = (ObjectPoint*) x;
        painter->drawPoint(*pt);
        pt->setX(175);
        pt->setY(140);
    }
    else if(x->type == 3){
        ObjectLine *ln = (ObjectLine*) x;
        painter->drawLine(*ln);
        ln->setLine(300,500,10,10);
    }
}

void Myframe::DrawAll(){
    cout << "Entrou no Myfram::ClearForms" << endl;


    //
    update();
}

