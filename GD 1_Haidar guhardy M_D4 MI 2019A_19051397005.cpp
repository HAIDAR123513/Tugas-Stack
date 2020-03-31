#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#define max 50
#define true 1
#define false 0
using std::cout;
using std::endl;
using namespace std; 
int pil;
char jwb;
void pilih();
struct stack
{     int top;
      int node[];
};float nodes; struct stack buatstack;
int stackpenuh()
{
      if(buatstack.top == max)
            return true;
      else
            return false;}
int stackkosong()
{
      if(buatstack.top == -1)
            return true;
      else
            return false;}
void push(float nodes)
{ if(stackpenuh() == true) 
      {
            puts("Stack Penuh"); }
      else{
            buatstack.top++;
            buatstack.node[buatstack.top]=nodes; }
}
void pop()
{ if(stackkosong() == true)
      {
            cout<<"Stack Kosong!!"; }
      else
      {
            cout<<"\nPop " <<buatstack.node[buatstack.top]<<endl;
            buatstack.top--;
      }
}

void bantu()
{
	coutnodes;
    push(nodes); 
}

void cetakstack()
{
      cout<<"-----------\n";
      cout<<"Isi Stack : \n";
      for(int i=0; i<=buatstack.top; i++)
      {
            cout<<"    "<<buatstack.node[i]<<endl;
            cout<<"-----------\n";
      }
}

int main ()
{
	buatstack.top = -1;
    do
    {
      cout<<endl;
      cout<<"\t\t==Menu Stack=="<<endl;
      cout<<"1. Push"<<endl;
      cout<<"2. Pop"<<endl;
      cout<<"3. Cetak Stack"<<endl;
      cout<<"4. Keluar"<<endl;
      coutpil;
      switch (pil){
		  case 1:{
		  do{
		  coutnodes;
          push(nodes); 
          coutjwb;
		  }while(jwb=='y');
		  system ("cls");
		  }
		  break;
		  case 2:
		  pop();
		  cout<<"Pop Berhasil!!\n";
		  getch();
		  system ("cls");
		  break;
		  case 3:
		  cetakstack();
		  getch();
		  system ("cls");
		  break;
		  case 4:
		  exit (0);
		  break;
		  }
    } while(pil!=7);
    while(jwb=='y'|| jwb=='Y');
}
