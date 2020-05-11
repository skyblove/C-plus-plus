#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

    //3.36

int main()
{
   const int sz=5;
    int a[sz], b[sz], i;
    srand((unsigned)time(NULL)); //Rnadom generate seed
    
   //part 1
    for (int i=0; i<sz; i++)   //generate <10 number
        a[i]=rand()%10;
    cout<<" the original genrated number is " <<endl;
    for (auto val:a)
        cout<<val<<" ";
    cout<<endl;
    
    cout<<" guess number 0~9" <<endl;
    int uVal;
    for (i=0; i<sz; i++)
        if(cin>>uVal)  //if后没有；
            b[i]=uVal;  //for一般只对紧跟他的一行有用， 为什么这个作用了两行
    cout<<endl;
    
    for (auto val:b)
        cout<<val<<" ";
    cout<<endl;
    
    int *p=begin(a), *q=begin(b);
    while(p!=end(a) && q !=end(b))
        {
        if (*p!=*q)
            {
            cout<< "your guess wrong"<<endl;
            return -1;
            }
        p++;
        q++;
        }
    cout<<" your guess correct " <<endl;
 
    
    //part2
    vector<int> c, d;
    for (int i=0; i<sz; i++)   //generate <10 number
        c.push_back(rand()%10);
    cout<<" the original genrated number is " <<endl;
    for (auto val:c)
        cout<<val<<" ";
    cout<<endl;
    
    cout<<" guess number 0~9" <<endl;
    int uVal1;
    for (i=0; i<sz; i++)
        if(cin>>uVal1)  //if后没有；
            d.push_back(uVal1);  //for一般只对紧跟他的一行有用， 为什么这个作用了两行
    cout<<endl;
    
    for (auto val:d)
        cout<<val<<" ";
    cout<<endl;
    
    auto  it1=c.cbegin(), it2=d.cbegin();// why no need *, 这儿为什么用auto
    while(it1!=c.cend() && it2!=d.cend())
        {
        if (*it1!=*it2)
            {
            cout<< "your guess wrong"<<endl;
            return -1;
            }
        it1++;
        it2++;
        }
    cout<<" your guess correct " <<endl;
    return 0;
}
