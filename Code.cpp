#include<iostream>

using namespace std;

int main()
{
	int a,b,c,d,per;
	cout<<"Enter the marks in four subjects:";
	cin>>a>>b>>c>>d;
	per=(a+b+c+d)/4;
	cout<<"Percentage is :"<<per;
	if(per>75 && per<=100)
	    cout<<"Grade 'A'";
	else if(per>50 && per<=75)
	    cout<<"Grade 'B'";
	else if(per>33 && per<=50)
	    cout<<"Grade 'C'";
	else
	    cout<<"Grade 'D'";
return 0;
}
