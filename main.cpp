

#include <iostream>
# include<vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
//https://github.com/skyblove/C-primer.git

//3.23

int main()
{
    vector<int>vInt;
    srand((unsigned) time(NULL));
    for(int i=0;i<10;i++)
    {
        vInt.push_back(rand()%1000);
    }
    cout<<"random 10 number"<<endl;
    for (auto it= vInt.cbegin(); it!=vInt.cend(); it ++)
        //只是输出，所以不做内容改变，这样就用cbegin
    {
        cout <<*it<< " ";
    }
    
    cout<<endl;
    cout<<" double of the 10 number"<< endl;
    for(auto it =vInt.begin();it!=vInt.cend();it++)
         //内容改变，这样就用begin
    {
        *it*=2;
        cout<<*it<<" ";
    }
    cout<<endl;
    for (auto it= vInt.cbegin(); it!=vInt.cend(); it ++)
      {
          cout <<*it<< " ";
      }
      cout<<endl;
 return 0;
}

