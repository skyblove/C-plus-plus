//
//  main.cpp
//  chater324
//

#include <iostream>
# include<vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
    //3.24

int main()
{
    vector<int>vInt;
    int iVal;
    cout<<" pls fill in a row number:"<<endl;
    while(cin>>iVal)
        vInt.push_back(iVal);
    if(vInt.cbegin()==vInt.cend())
        {
        cout<<"no elements"<<endl;
        return -1;
        }
    cout<<"the adjacent number sum is :"<<endl;
    for(auto it=vInt.cbegin();it!=vInt.cend()-1;it++)
        {
        cout<<(*it+*(++it))<<" ";
        //cout<<*it<<" "<<endl; 这个是可以的， 因为没有对指针进行改动
        //cout<<*(++it)<<" "<<endl;这个可能会不行，xcode 上不行，window上可以
        if((it-vInt.cbegin()+1)%10==0)
            cout<<endl;
        }
    if(vInt.size()%2!=0)
        cout<<*(vInt.cend()-1);
   //首尾之和
    for(auto it=vInt.cbegin();it!=vInt.cend();it++)
    {
    cout<<*it<< " ";
    }
     cout<<endl;
    cout<<"the top and end number sum is :"<<endl;
    auto beg=vInt.cbegin();
    cout<<"the begin is :"<<*(beg)<<endl;
    auto end=vInt.cend();
    cout<<"the end is :"<<*(end)<<endl;

    for(auto it=beg;it!=(beg +(end-beg)/2);it++)
        {
        cout<<(*it+*(beg+(end-it)+1))<<" "<<endl;
        if((it-beg+1)%10==0)
            cout<<endl;
        }
    if(vInt.size()%2!=0)
        cout<<*((beg +(end-beg)/2))<<endl;
    return 0;
}
