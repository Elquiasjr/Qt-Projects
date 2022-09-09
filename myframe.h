#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>
#include <QPaintEvent>
#include <QRect>
#include <QList>
#include <QPainter>
#include <list>

using namespace std;

enum Qtype {type_rec, type_point, type_line};

class ObjectGen {
public:
    Qtype type;
    void redirectDraw(ObjectGen *x, QPainter *painter);
};

class ObjectRec : public QRect, public ObjectGen {

public:
    QRect rec;
};

class ObjectPoint : public QPoint, public ObjectGen {
public:
    QPoint point;
};

class ObjectLine : public QLine, public ObjectGen {
public:
    QLine line;
};

class Myframe : public QFrame, ObjectRec, QPainter
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
    void DrawAll();

signals:

};


#endif // MYFRAME_H
