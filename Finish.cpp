// Program Billing Warnet. 
#include<iostream>
using namespace std;

int main()
{
    char nama[14];
    int totW;
    int jam,totJ;
    int menit,totM;
    int detik,totD;
    int w;
 
    cout<<"          **********   WELCOME TO ICHA NET ***********"<<endl<<endl;
 
 
    cout<<"*******************************************************************\n";
    cout<<"                   Tarif Rp 5000  per 1 jam \n\n";
    cout<<"           Masukkan Nama Kamu :  ";cin>>nama;
    cout<<"********************************************************************\n\n\n";
    cout<<"Berapa Lama Kamu Bermain :   \n";
    cout<<"masukkan jam :";
    cin>>jam;
   
 
    totJ=jam*1*5000;
  
 
    cout<<"Anda Harus Membayar Sebesar :   Rp. ";
    totW=totJ;
    cout<<totW<<endl<<endl;
    cout<<"##########################   Terima Kasih   #################################\n";
    cout<<"Program By: Icha";
    cin>>w;
}
