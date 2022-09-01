#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>
#include <QPaintEvent>
#include <QRect>

class Myframe : public QFrame
{
    Q_OBJECT
private:
    QRect rec;
    QPoint point;
    QLine line;
public:
    explicit Myframe(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent * event) override;

public slots:
    void ClearForms();
    void DrawRect();
    void DrawPoint();
    void DrawLine();
signals:

};

#endif // MYFRAME_H
