#include <iostream>
using namespace std;
class node {
	public:
		int data;
		node * berikut;
};

int main(){
	//LANGKA SATU
	node * baru;
	baru = new node;
	baru->data= 5;
	baru->data =5;
	baru->berikut = NULL;
	cout<<"isi data node baru adalah :"<<baru->data<<endl;
	
	//LANGKA KEDUA
	node * lain;
	lain = new node;
	lain->data = 6;
	lain->berikut = NULL;
	cout<<"isi data node lain adalah :"<<lain->data<<endl;
	
	//LANGKA KETIGA
	baru->berikut =lain;
	cout<<"isi data node lain dicetak dari node baru adalah :";
	cout<<baru->berikut->data<<endl; //6
	
	//LANGKA KEEMPAT
	node * kepala = baru;
	cout<<"mencetak node pertama dari pointer kepala :";
	cout<<kepala->data<<endl; // 5
	cout<<"Mencetak node kedua dari pointer kepala :";
	cout<<kepala->berikut->data<<endl; //6
	
	//LANGKA KELIMA
	cout<<"Mengunakan perulangan untuk mencetak setiap data";
	node * jalan = kepala;
	int i = 1;
	while(jalan != NULL){
		cout<<"Data ke ="<<i<<">"<<jalan->data<<endl; //6
		i++;
		jalan = jalan->berikut;
	}
	//LANGKA KEENAM
	cout<<"Mencetak node pertama dari pointer kepala :";
	cout<<kepala->data<<endl; //5
	cout<<"Mencetak node kedua dari pointer kepala :";
	cout<<kepala->berikut->data<<endl; //6
	
}
