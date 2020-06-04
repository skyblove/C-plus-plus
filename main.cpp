#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdlib>
# include <typeinfo>
# include <string>

using namespace std;

    //6.17
bool HasUpper(const string &str) // for captical alpha
{
   for (auto c: str)
       if (isupper(c))  //is upper
           return true;
    return false;
}

void ChangToLower(string &str) // for captical alpha
{
    for (auto &c: str)
        c=tolower(c);   // to lower
}

int main()
{
    cout <<" psl fill in a string: " << endl; //思考怎么输入有空格的字符串
    string str;
    cin>> str;
    if(HasUpper(str))
        {
        ChangToLower(str);
        cout<< " after be lower is : " << str<<endl;
        }
    else
        cout<< " no upper alpha, no need change: " << endl;
    return 0;
}

