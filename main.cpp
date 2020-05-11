
#include <vector>
#include <iostream>

using namespace std;

    //3.35

int main()
{
    const int sz=10;
    int a[sz];
    for (int i=0; i<sz; i++)
        a[i]=i;
    cout<<" the original number is " <<endl;
    for (auto val:a)
        cout<<val<<" ";
    cout<<endl;
    
    int *p=begin(a);
    cout<<" *p "<<*p<<" "<<endl; //0 指针指向地址的值
    cout<<" &p "<<&p<<" "<<endl; // 0x7ffeefbff4a8；指针自己的地址
    cout<<"  p "<<p<<" "<<endl; // 0x7ffeefbff4e0； 指针指向的地址， 这儿指向数组第一个
    cout<<" begin(a) "<<begin(a)<<" "<<endl; // 0x7ffeefbff4e0 ；数组第一个
    cout<<" end(a) "<<end(a)<<" "<<endl; // 0x7ffeefbff508 ； 数组最后一个
    
    while(p!=end(a))  //为什么会不需要用*，看上面的
        {
        *p=0;
        p++;
        }
    cout<<" the revised number is " <<endl;
    for (auto val:a)
        cout<<val<<" ";
    cout<<endl;
    return 0;
}
