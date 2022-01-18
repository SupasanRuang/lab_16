#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *k,int *l,int *m,int *n)
{
	
	int i,temp,a[]={*k,*l,*m,*n};
	
	i=rand()%4;
	temp=a[0];
	a[0]=a[i];
	a[i]=temp;

	i=rand()%3+1;
	temp=a[1];
	a[1]=a[i];
	a[i]=temp;

	i=rand()%2+2;
	temp=a[2];
	a[2]=a[i];
	a[i]=temp;

	*k=a[0];
	*l=a[1];
	*m=a[2];
	*n=a[3];


}
