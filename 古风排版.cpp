#include<bits/stdc++.h>
#include<cstring>
using namespace std;
string a;
int n,i,j;
char b[1001][1001];
int main()
{
	cin>>n;
	getchar();
	getline(cin,a);
	int len=a.length();
	int lie=len%n==0?len/n:len/n+1;
	for(i=1;i<=lie*n;i++)
	{
		if(i<=len)
			b[(i-1)/n+1][(i-1)%n+1]=a[i-1];
		else
			b[(i-1)/n+1][(i-1)%n+1]=' ';
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=lie;j++)
		{
			cout<<b[lie-j+1][i];
		}
		cout<<endl;
	}
	return 0;
}
