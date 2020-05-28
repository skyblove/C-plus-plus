#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

    //6.7
unsigned myCnt()
{
    static unsigned iCnt =-1;
    ++iCnt;
    return iCnt;
}

int main()
{
    cout<< "psl fill a number"<<endl;
    char ch;
    while (cin>>ch)
        {
        cout<< " my Cnt () de number is "<<myCnt()<<endl;
        // 为什么会输入几个字符就是计数几次
        }

    return 0;
}
