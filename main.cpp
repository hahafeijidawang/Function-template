
#include <iostream>

using namespace std;

template <typename T>

void myswap( T &a,T &b){

    T c;

    c=a;

    a=b;

    b= c;
    cout<<"dhfdl moban"<<endl;
}
//函数模板的调用。
//显式调用
//自动类型推导
int main()
{
    int a=10;
    int b=11;
    myswap(a,b);
    myswap<int>(a,b);

            char c= 15;

    char d = 16;
    myswap<char>(d,c);


    return 0;
}

