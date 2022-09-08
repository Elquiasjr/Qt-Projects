#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>
#include <QPaintEvent>
#include <QRect>
#include <QList>
#include <QPainter>
#include <list>

using namespace std;

class ObjectGen {
public:
    int type;
    //virtual void drawObj();
    virtual ~ObjectGen()
    { }
    void redirectDraw(ObjectGen *x, QPainter *painter);
};

class ObjectRec : public QRect, public ObjectGen {

public:
    int type = 1;
    QRect rec;
    //void drawObj();
    virtual ~ObjectRec()
    { }
};

class ObjectPoint : public QPoint, public ObjectGen {
public:
    QPoint point;
    int type = 2;
    virtual ~ObjectPoint()
    { }
};

class ObjectLine : public QLine, public ObjectGen {
public:
    int type = 3;
    QLine line;
    virtual ~ObjectLine()
    { }
};


class Myframe : public QFrame, ObjectRec
{
    Q_OBJECT
private:
    ObjectGen *rectang = (ObjectGen*)malloc(sizeof(ObjectGen));
    ObjectGen *point = (ObjectGen*)malloc(sizeof(ObjectGen));
    ObjectGen *line = (ObjectGen*)malloc(sizeof(ObjectGen));
   QList<ObjectGen *> displayFile = {rectang, point, line};

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
