#include<iostream>
using namespace std;

int main()
{
    int n;
    int greatest = -2147483648;
    for(int i=0;i<3;i++){
        cin >> n;
        if(n>greatest){
            greatest = n;
        }

    }

    cout << greatest << " eh o maior" << endl;

}
