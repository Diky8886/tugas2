
#include <iostream>
using namespace std;
int main() {
string menu[2]={"soto","rawon"};
int harga[2]={10000,15000};
int porsi[2];
int total[2];
    int i;
    for(i=0;i<2;i++)
    {
       cout<<"menu "<<endl;
        cout<<menu[i]<<endl;
        cout<<"harga"<<endl;
        cout<<harga[i]<<endl;
        cout<<"masukkan porsi ";
        cin>>porsi[i];
        total[i]=harga[i]*porsi[i];
        cout<<total[i]<<endl;
         cout<<"________________"<<endl;
    }
    
    return 0;
}
