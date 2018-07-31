# cpp-knowledge-point

[1.模板中的名字查找问题](https://www.cnblogs.com/catch/p/3751353.html)

[2.模板类使用友元模板函数](http://blog.sina.com.cn/s/blog_7c2c21230100svc3.html)

[3.private继承并不意味着is-a关系](https://blog.csdn.net/yuchenshu89757/article/details/52262737)

[4.C++中对成员访问操作符->的重载](https://blog.csdn.net/u013009575/article/details/19246353)

> * 运算符 `->` 的重载比较特别，它只能是非静态的成员函数形式，而且没有参数。如果返回值是一个原始指针，那么就将运算符的右操作数当作这个原始指针所指向类型的成员进行访问；如果返回值是另一个类型的实例，那么就继续调用这个返回类型的 `operator->()` ，直到有一个调用返回一个原始指针为止，然后按第一种情况处理。
> * 如果上述条件不满足（如：右操作数不是返回的原始指针指向的类型的成员，或者，返回的非指针类型没有重载 `operator->()` ），那么编译将报错。