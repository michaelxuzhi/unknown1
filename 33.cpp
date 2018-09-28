#include <iostream.h>

double f(double x,int n)
{
	if (n==0) return 1;
	if (n==1) return 2*x;
	return 2*x*f(x,n-1)-2*(n-1)*f(x,n-2); 
}

int main()
{
	double x;
	int n;
	cout<<"ÇëÊäÈëx,n";
	cin>>x>>n;
	for(int a=0;a<=n;a++)
	{
		cout<<a<<f(x,a)<<endl;
	}
	return 0;
}