#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Введите число";
    cin>>n;
    for(int i=0; i<n; ++i){
cout<<"*";
    }
    cout<<endl;
    for(int i=0; i<n-1; ++i){
cout<<"*"<<endl;

    }
    return 0;
}
