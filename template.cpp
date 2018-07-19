#include <iostream>

using namespace std;

template <class T>
class A
{
protected:
    // ������ģ�����
    void f()
    {
        cout << "A::f()" << endl;
    }
    // pChar �����Ͷ����Ǳ���
    typedef char* p_Char;
};

template <class E>
class B : public A<E>
{
public:
    void g()
    {
        // f();     �ú���������ģ��������������ⲿ����
        this->f();
        A<E>::f();
    }
    // �������typename����Ĭ��PChar�Ǳ����������
    typename A<E>::p_Char c = "hello";
};

int main()
{
    B<int> b;
    b.g();

    cout << b.c << endl;

    return 0;
}