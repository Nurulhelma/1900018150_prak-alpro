#include <iostream>
#include <stdlib.h>

using namespace std;
class node{
      public:
             int data;
             node *berikut;
             };
           
int main(int argc, char *argv[])
{
                  //langkah satu
                  node *baru;
                  baru = new node;
                  int satu;
                  cout<<"isi data node adalah :";
                  cin>>satu;
                  baru -> data=satu;
                  baru -> berikut=NULL;
                 
                 
                 
                  //langkah 2
                  node *lain;
                  lain = new node;
                  int dua;
                  cout<<"isi data node adalah :";
                  cin>>dua;
                  lain->data=dua;
                  lain->berikut=NULL;
                 
                                   
                  node *a;
                  a = new node;
                  int tiga;
                  cout<<"isi data node adalah :";
                  cin>>tiga;
                  a->data=tiga;
                  a->berikut=NULL;
                 
                 
                  node *b;
                  b = new node;
                  int empat;
                  cout<<"isi data node adalah :";
                  cin>>empat;
                  b->data=empat;
                  b->berikut=NULL;
                 
                 
                  //langkah 3
                 
                  baru->berikut=lain;
                  cout<<"isi data node lain dicetak dari node baru adalah:";
                  cout<<baru->berikut->data<<endl;
                 
                  lain->berikut=a;
                  cout<<"isi data node lain dicetak dari node baru adalah:";
                  cout<<lain->berikut->data<<endl;
                 
                  a->berikut=b;
                  cout<<"isi data node lain dicetak dari node baru adalah:";
                  cout<<a->berikut->data<<endl;
                 
                
                 
                  //langkah 4
                  node *kepala=baru;
                  cout<<"mencetak node pertama dari pointer :";
                  cout<<kepala->data<<endl;
                  cout<<"mencetak node kedua dari pointer :";
                  cout<<kepala->berikut->data<<endl;
                 
                  cout<<"mencetak node ketiga dari pointer :";
                  cout<<lain->berikut->data<<endl;
                 
                  cout<<"mencetak node keempat dari pointer :";
                  cout<<a->berikut->data<<endl;
                 
                  //langkah lima:pointer yang jalan2
                  cout<<"menggunakan perulangan untuk mencetak setiap data pada rantai"<<endl;
                  node *jalan = kepala;
                  int i = 1;
                  while(jalan !=NULL){
                              cout<<"data ke-"<<i<<">"<<jalan->data<<endl;
                              i++;
                              jalan = jalan->berikut;
                  }
                 
                  //langkah terakhir
                  cout<<"mencetak node pertama dari pointer :";
                  cout<<kepala->data<<endl;
                  cout<<"mencetak node kedua dari pointer :";
                  cout<<kepala->berikut->data<<endl<<endl<<endl;

                 
                  cout<<"Banyak Data : "<<i-1<<endl<<endl;
                             
system("PAUSE");
    return EXIT_SUCCESS;
}
