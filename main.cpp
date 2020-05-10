
#include <vector>
#include <iostream>

using namespace std;

    //3.28

int main()
{
    const int sz=10;
    int a[sz], b[sz];
    for (int i=0; i<sz; i++)
        a[i]=i;
    for (int j=0; j<sz; j++)
        b[j]=a[j];
    for (auto val:b)
        cout<<val<<" ";
    cout<<endl;
    
    vector <int> vInt1, vInt2;
    for (int i=0; i<sz; i++)
        vInt1.push_back(i);
    for (int j=0; j<sz; j++)
         vInt2.push_back(vInt1[j]);
    for (auto val1:vInt2)
        cout<<val1<<" ";
    cout<<endl;
    
    return 0;
}
