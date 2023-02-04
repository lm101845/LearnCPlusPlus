#ifndef SWIDGET_H
#define SWIDGET_H

#include <QWidget>

class SWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SWidget(QWidget *parent = 0);

signals:
    void back();//回退信号
public slots:
};

#endif // SWIDGET_H
