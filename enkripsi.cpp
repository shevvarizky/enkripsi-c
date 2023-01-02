#include <iostream>
#include <string.h>
#define maks 500
using namespace std;
 
int main(){
    char chiper[maks];
    char plain[maks];
    int key;
    int jumlah=0;
   
    cout<<"Masukkan kata : ";
    cin.getline(chiper, sizeof(chiper));
   
    cout<<"Masukkan key : ";
    cin>>key;
    //merubah plaintext menjadi chipper text
    for(int i=0; i<strlen(chiper); i++){
        cout<<chiper[i] <<"( "<<int(chiper[i])<< " )"; //manggil code asci
        jumlah=jumlah+int(chiper[i]);
        chiper[i] =(chiper[i]+key)%128;
       
    }
   
    cout<<endl;
    cout<<"total = "<<jumlah;
   
    cout<<"\nhasil enkripsi : "; //manggil kode setelah di enkripsi
    for(int i = 0; i<strlen(chiper); i++){
        if(chiper[i]>=90){
        //Agar ketika Melebihi 90 Di kurang dengan 26 supaya tidak lebih dari 90
        //jika melebihi maka beberbeda dengan hasil manual, karena ini berdasarakan tabel ascii
            chiper[i]=chiper[i]-26;
            cout<<chiper[i];
        }
        else{
        cout<<chiper[i];
        }
    }
   
    
}