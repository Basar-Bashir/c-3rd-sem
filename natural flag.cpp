#include <iostream>
using namespace std;
int main()
{
    int num =1;
    bool flag = true;
    while(flag){
        cout<<num<<endl;
        num++;
        if(num > 100){
            flag = false;
        }
    }
    return 0;
}