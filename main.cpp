#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

    //3.43
int main()
{
    int ia[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
    cout<< " 利用范围for 输出多维数组: "<< endl;
    for( int(&row)[4]: ia)
        {
        cout<<*row<<" ";

        for (int &col:row)
            cout<<col<<" ";
        cout<<endl;
        }
    
    cout<< " 利用普通for 语句和下标运算输出多维数组: "<< endl;
    for( int i=0; i!=3;i++)
        {
        for (int j=0; j!=4;j++)
            cout<<ia[i][j]<<" ";
        cout<<endl;
        }
    
    cout<< " 利用范围for语句和指针 输出多维数组: "<< endl;
    for( int(*p)[4]=ia; p!=ia+3; p++)
        {
        for (int *q =*p; q!=*p+4; q++)
            cout<<*q<<" ";
        cout<<endl;
        }
    
//3.44*****************
    using int_array =int[4];
    cout<< " 利用范围for 输出多维数组: "<< endl;
    for( int_array &row: ia)
        {
        for (int &col:row)
            cout<<col<<" ";
        cout<<endl;
        }
    
    cout<< " 利用普通for 语句和下标运算输出多维数组: "<< endl;
    for( int i=0; i!=3;i++)
        {
        for (int j=0; j!=4;j++)
            cout<<ia[i][j]<<" ";
        cout<<endl;
        }
    
    cout<< " 利用范围for语句和指针 输出多维数组: "<< endl;
    for( int_array *p=ia; p!=ia+3; p++)
        {
        for (int *q =*p; q!=*p+4; q++)
            cout<<*q<<" ";
        cout<<endl;
        }
    
//3.45*****************
    cout<< " 利用范围for 输出多维数组: "<< endl;
    for( auto &row: ia)
        {
        for (auto &col:row)
            cout<<col<<" ";
        cout<<endl;
        }
    
    cout<< " 利用普通for 语句和下标运算输出多维数组: "<< endl;
    for( auto i=0; i!=3;i++)
        {
        for (auto j=0; j!=4;j++)
            cout<<ia[i][j]<<" ";
        cout<<endl;
        }
    
    cout<< " 利用范围for语句和指针 输出多维数组: "<< endl;
    for( auto p=ia; p!=ia+3; p++)
        {
        for (auto q =*p; q!=*p+4; q++)
            cout<<*q<<" ";
        cout<<endl;
        }
    
    
    return 0;
}
