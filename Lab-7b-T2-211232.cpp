#include <iostream>

using namespace std;
//print fibinacci series upto number of terms entered
int main() 
{
	    int num1=0,num2=1,sum,terms;
	cout<<"Enter number of terms: "; cin>>terms;
	if(terms==0)
	    cout<<" ";
	else if(terms==1)
	    cout<<num1;
	else
	{
    cout<<num1<<", "<<num2<<", ";
	sum=num1+num2;
	int i=2;
	while(i<terms)
	{
		cout<<sum<<", ";
		num1=num2;
		num2=sum;
		sum=num1+num2;
		i++;
		
	}
}
	return 0;
}
