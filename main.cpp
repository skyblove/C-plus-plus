#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

    //3.42
int main()
{
    
    const int sz=5;
    vector<int> vInt;
    srand((unsigned) time(NULL)); //Rnadom generate seed
    cout<<" vector content "<<endl;
    for (int i=0; i<sz; i++)   //generate <10 number
        vInt.push_back(rand()%10);
    cout<<" the original genrated number is " <<endl;
    for (auto val:vInt)
        cout<<val<<" ";
    cout<<endl;

    auto it=vInt.cbegin();
    int a[vInt.size()];
    cout<< " the matrix is "<< endl;
    for (auto &val:a)
        {
        val=*it;
        cout<<val<<" ";
        it++;
        }
    cout<<endl;
    return 0;
}
