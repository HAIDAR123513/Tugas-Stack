#include <iostream>



using namespace std;

void baliknama();



int main()

{

    baliknama();

}

void baliknama ()

{int i,j, count;

  char nama[30];

  cout << "program membalik nama";

  cout << "\n\nMasukkan nama Anda = "; cin.ignore (); cin.getline(nama,sizeof(nama));

  cout << endl;

  

  for (i=0; i<=nama[i];i++)

  {

  count = i+1;

  }

  cout << "Nama terbalik anda = "; 

  for (j=count; j>=0;j--)

  {

  cout << nama[j];

  }

  cout <<endl;

}
