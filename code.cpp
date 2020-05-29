#include<iostream>
using namespace std;
class complex{
	int i,r;
	public:
		complex()
		{
			i=0;
			r=0;
		}
		complex(int j)
		{
			cout<<j<<" Real number:";
			cin>>r;
			cout<<"Imaginary number:";
			cin>>i;
		}
	friend	ostream& operator <<(ostream& out,complex A)
		{
			out<<A.r<<"+"<<A.i<<"i"<<endl;
			return out;
		}
		complex operator +(complex B)
		{
			complex temp;
			temp.r=r+B.r;
			temp.i=i+B.i;
			return temp;
		}
};
int main()
{
	int i,n;
	cout<<"Enter number of entry:";
	cin>>n;
	complex A[n];
	for(i=0;i<n;i++)
	{
		A[i]=(i+1);
	}
	for(i=0;i<n;i++)
	{
	cout<<A[i];
    }
    complex c;
    for(i=0;i<n;i++)
    {
    	c=c+A[i];
	}
    cout<<endl<<c;
}
