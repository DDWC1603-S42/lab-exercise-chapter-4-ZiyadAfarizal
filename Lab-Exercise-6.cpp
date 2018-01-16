//convert the program below to a "do...while" loop

int n;
cout<<"Enter a non-negative integer: ";
cin>>n;

while(n<0)
{
	cout<<"The integer your entered is negative."<<endl;
	cout<<"Enter a non-negative integer";
	cin>>n;
}
