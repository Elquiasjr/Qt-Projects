#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>
#include <QPaintEvent>
#include <QRect>
#include <QList>
#include <QPainter>

class ObjectGen : public QRect, public QPoint, public QLine, public QPainter, public QFrame{
public:
    void drawObj(QPainter *paint);
};

class ObjectRec : public ObjectGen {

public:
    void drawObj(QPainter *paint);
    QRect rec;
};

class ObjectPoint : public ObjectGen {
    QPoint point;

};

class ObjectLine : public ObjectGen {
    QLine line;
};


class Myframe : public QFrame
{
    Q_OBJECT
private:
    ObjectRec *rectang = (ObjectRec*)malloc(sizeof(ObjectRec));
//    ObjectPoint *ponto = (ObjectPoint*)malloc(sizeof(ObjectPoint));
//    ObjectLine *linha = (ObjectLine*)malloc(sizeof(ObjectLine));
    QList<ObjectGen *> displayFile = {rectang};

public:
    explicit Myframe(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent * event) override;

public slots:
    //void ClearForms();
    //void DrawRect();
    //void DrawPoint();
    //void DrawLine();
    void DrawAll();
signals:

};


#endif // MYFRAME_H
