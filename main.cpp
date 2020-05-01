
#include <iostream>
# include<vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
    //3.25

int main()
{
    // record people number per marks, original mark is 0
    vector<unsigned> vUS(11);
    auto it=vUS.begin();
    int iVal;
    cout<<"输入一组成绩(0~100): " <<endl;
    while(cin>>iVal)
        if(iVal<101)
            ++*(it+iVal/10); //计数法，记住
    cout<<iVal<< " "<<endl; //为什么没有办法输出s输入的值呢，临时存储吗？


    cout<< "n总计输入了" <<vUS.size()<<" 个成绩"<<endl;
    cout<< "各分段的人数分布是 from low to high: "<<endl;
    //cout all the elements
    for (it=vUS.begin(); it!=vUS.end();it++)
        {
        cout<<*it<< " ";
        }
    cout<<endl;
    return 0;
}
