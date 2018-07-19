#include <iostream>

using namespace std;

template <class T>
class A
{
protected:
    // 不依赖模板参数
    void f()
    {
        cout << "A::f()" << endl;
    }
    // pChar 是类型而不是变量
    typedef char* p_Char;
};

template <class E>
class B : public A<E>
{
public:
    void g()
    {
        // f();     该函数不依赖模板参数，被当做外部符号
        this->f();
        A<E>::f();
    }
    // 如果不加typename，则默认PChar是变量，会出错
    typename A<E>::p_Char c = "hello";
};

int main()
{
    B<int> b;
    b.g();

    cout << b.c << endl;

    return 0;
}