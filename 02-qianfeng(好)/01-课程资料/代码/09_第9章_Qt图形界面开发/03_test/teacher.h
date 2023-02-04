#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>
#include<QString>
class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = 0);

signals://自定义信号函数
    //定义信号的规则：返回值类型void 只需声明  不用实现  可以有参数 可以重载
    void hungry();
    void hungry(QString foodName);
public slots://自定义槽函数
};

#endif // TEACHER_H
