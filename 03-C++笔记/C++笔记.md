# C++笔记

**typedef enum COLOR{GREEN ,RED,YELLOW} color;这段C++代码什么意思**

这段 C++ 代码定义了一个名为 `color` 的枚举类型，并将 `GREEN`、`RED` 和 `YELLOW` 作为该枚举类型的枚举常量。

枚举类型是一种特殊的整型类型，它可以用来定义命名的常量。例如，通过定义上面的枚举类型，我们可以定义一个名为 `color c` 的变量，并为其赋值为 `GREEN`、`RED` 或 `YELLOW`。

下面是一个简单的示例，展示了如何使用上面定义的枚举类型：

```c++
Copy code
#include <iostream>
using namespace std;

typedef enum COLOR{GREEN ,RED,YELLOW} color; // 定义枚举类型

int main()
{
    color c = GREEN; // 定义枚举类型变量并赋初值
    cout << c << endl; // 输出枚举类型变量的值
    return 0;
}
```

上面的代码会输出 `0`，因为 `GREEN` 的值为 `0`。

注意，在 C++11 之前，枚举类型的定义方式与上面稍有不同，它应该写成下面这样：

```c++
Copy code
enum COLOR{GREEN ,RED,YELLOW};
typedef enum COLOR color;
```

上面的代码将定义一个名为 `COLOR` 的枚举类型，并使用 `typedef` 将其定义为名为 `color` 的新类型。