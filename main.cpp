//
//  main.cpp
//  chapter 3
//
//  Created by Bo Tao on 12/4/20.
//  Copyright © 2020 Bo Tao. All rights reserved.
//

#include <iostream>
# include<vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
//https://github.com/skyblove/C-primer.git
// how to set git and git hub
//3.23

int main()
{
    //3.22
    vector<string> text;
    string s;
    cout<<"fill in string"<<endl;
    getline(cin,s);
        text.push_back(s);
    cout<<"cout 1 for key in "<<endl;

    for (auto &mem: text)
          cout<<mem<<endl;
    
    cout<<"cout 2 book "<<endl;
    for(auto it=text.begin();it!=text.end()&&!it->empty();it++)
    {
        for(auto it2=it->begin();it2!=it->end();it2++)
            *it2=toupper(*it2);
        //  cout<<*it2<<endl;  这个不行，因为for循环之后的第一句默认属于for的循环体， 这句已经脱离了
        cout<<*it<<endl;
    }
    
    cout<<"cout 3 i modify , 2 for cycle{} "<<endl;

 for(auto it=text.begin();it!=text.end()&&!it->empty();it++)
    {
        for(auto it2=it->begin();it2!=it->end();it2++)
        {
            *it2=toupper(*it2);
        cout<<*it2;
           // cout<<endl;放在这儿会一个一个输出
        }
        cout<<endl; // 如果没有这个， 会连在一起
        cout<<*it<<endl;
    }
  
    cout<<"cout4 for original daat check"<<endl;
    for (auto &mem: text)  //原始的输入已经全部改成大些的了
          cout<<mem;
        cout<<endl;
    return 0;
}
