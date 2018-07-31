#include <iostream>

using namespace std;

struct A
{
    int x;
};

struct B
{
    A *y;
    A *operator->() const
    {
        return y;
    }
};

struct C
{
    B *z;
    B &operator->() const
    {
        return *z;
    }
};

int main(int argc, char const *argv[])
{
    A a;
    a.x = 5;
    B b;
    b.y = &a;
    C c;
    c.z = &b;

    cout << "b->x"
         << "\t\t\t\t" << b->x << endl;
    cout << "b.operator->()"
         << "\t\t\t" << b.operator->() << endl;
    cout << "b.operator->()->x"
         << "\t\t" << b.operator->()->x << endl;
    cout << "c->x"
         << "\t\t\t\t" << c->x << endl;
    cout << "&c.operator->()"
         << "\t\t\t" << &c.operator->() << endl;
    cout << "c.operator->()->x"
         << "\t\t" << c.operator->()->x << endl;
    cout << "c.operator->().operator->()"
         << "\t" << c.operator->().operator->() << endl;
    cout << "c.operator->().operator->()->x"
         << "\t" << c.operator->().operator->()->x << endl;
    return 0;
}
