#include <iostream>

using namespace std;

int main(){

int** a = new int*[10];
for(int i = 0; i < 10; ++i)
    a[i] = new int[10];

cout<<"Hello World"<<endl;
cout<<"NEW UPDATE"<<endl;

cout<<"SECOND UPDATE"<<endl;

    

    for(int i = 0; i < 10; ++i) {
        delete [] a[i];
    }
    delete [] a;
return 0;
}

