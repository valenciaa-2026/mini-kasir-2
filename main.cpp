#include <iostream>
using namespace std;
int main() {
    string menu[5]={"soto","rawon","pecel","teh","kopi"};
    int harga[5]={15000,20000,10000,3000,5000};
    int porsi[5];
    int total[5];
    int i;
    int semua=0;
    for(i=0;i<5;i++)
        {
            cout<<"masukkan menu: ";
            cout<<menu[i]<<endl;
            cout<<"harga perporsi: Rp";
            cout<<harga[i]<<endl;
            cout<<"masukkan porsi: ";
            cin>>porsi[i];
            total[i]=porsi[i]*harga[i];
            cout<<"total: Rp";
            cout<<total[i]<<endl;
            cout<<"___________________________"<<endl;

            semua=semua+total[i];
        }
    cout<<"Total semua pesanan: Rp"<<semua <<endl;
    system("pause");
    return 0;
}
