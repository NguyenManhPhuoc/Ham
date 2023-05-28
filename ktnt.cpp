#include<bits/stdc++.h>
using namespace std;
//Ham - Funciton
void ktnguyento(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n % i == 0)
		cout<<n<<" khong phai la so nguyen to"<<endl;
		return;
	}		
	cout<<n<<" la so nguyen to"<<endl;
	return;
}	
int main()
{
	int x = 3;
	int y = 4;
	ktnguyento(x);
	ktnguyento(y);
return 0;	
}
