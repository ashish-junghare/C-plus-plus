#include<iostream>
using namespace std;

int Addition(int A,int B)
{
	return A+B;
}


int main()
{
	int No1=11,No2=21,iRet=0;

	iRet=Addition(No1,No2);
	cout<<"Addition is: "<<iRet<<endl;	
	return 0;
}