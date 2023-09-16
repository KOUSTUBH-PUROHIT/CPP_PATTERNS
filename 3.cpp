// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

    int i = 1;
    int n;
    cin >>  n;
    int count = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
        cout<< count << " ";
        j = j + 1;
        count  = count + 1;
        }
        cout<<endl;
        i = i+1;

    }

    return 0;
}
