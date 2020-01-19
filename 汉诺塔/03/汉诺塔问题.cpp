#include<iostream>
using namespace std;
void move(char a,char c)
{
	cout<<a<<"->"<<c<<"  ";
}
void funMove(int n,char a,char b,char c)
{
	if(n==1)
		move(a,c);
	else
	{
		funMove(n-1,a,c,b);
		move(a,c);
		funMove(n-1,b,a,c);
	}
}
int main()
{
	int n;
	cout<<"输入盘子个数";
	cin>>n;
	funMove(n,'A','B','C');
	cout<<endl;
	return 0;
}