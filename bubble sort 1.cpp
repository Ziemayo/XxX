#include <iostream.h>
#include <conio.h>

void v_tampil(int A[5],int N);

main()
{
	int A[5];
   int i,k,j,temp,maks,a,N;
   cout<<"Masukkan jumlah data :"; cin>>N;
for(i=0;i<N;i++)
{
	cout<<"Masukkan Data ke-"<<i+1<<"="; cin>>A[i];
}
	a=0;
   cout<<"\n";
for(k=(N-1);k>0;k--)
{
	maks=0;
   for(j=0;j<=k;j++)
   {
	if(A[j]>A[maks])
   {
   	maks=j;
   }
}
	temp=A[k];
   A[k]=A[maks];
   A[maks]=temp;
}

cout<<"\nData Selesai Di sort\n";
v_tampil(A,N);
getch();
}

void v_tampil(int A[5], int N)
{
	int i;
   for(i=0;i<N;i++)
   {
   	cout<<A[i]<<" ";
   }
cout<<"\nSorting Selesai\n";
}
