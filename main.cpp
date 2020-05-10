#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

    //3.41
int main()
{
    
    const int sz=5;
    int a[sz];
    srand((unsigned) time(NULL)); //Rnadom generate seed
    
    for(auto val:a)  //如果不是用&val, b就会出错， 为什么,因为 &val就相当于a的初始化，没有&，就没有初始化
        {
        val=rand()%100;
        cout<<val<< " ";
        }
    cout<<endl;
    
    
    cout<<" a "<<" ";
    for (auto &val:a)  //如果前面 for语句 没有&， a没有初始化，会是乱码
        cout<<val<<" ";
    
    vector<int> b (begin(a),end(a));
    cout<< "vector content is "<<endl;
    for (auto &val:b)  //如果前面 forr语句 没有&， 这儿用&val or val, b都会出错，
        cout<<val<<" ";

    cout<<endl;
    return 0;
}
