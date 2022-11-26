#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = 0);

signals:

public slots:
    //返回值类型为void  需要声明 需要实现  可以有参数 可以重载
    void treat();
    void treat(QString foodName);
};

#endif // STUDENT_H
