#include <iostream>
using namespace std;

class stackintialize
{
	public: int stack[20],n;
	public :void set()
	{
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	}
};
class Stackoperations:public stackintialize
{
	public: int choice,top=-1;
	
	void add()
	{   
	  
		while(choice!=4)
		{
		      cout<<"Enter the choice:"<<endl<<"1.push"<<endl<<"2.pop"<<endl<<"3.show"<<endl<<"4.exit"<<endl;
	        cin>>choice;
			switch(choice)
			{
				case 1:push();
				break;
				case 2:pop();
				break;
				case 3:show();
				break;
				case 4:cout<<"Exiting the operations."<<endl;
				break;
				default :cout<<"Invalid choice"<<endl;
				
			}
		}
	}
	void push()
	{
		int value;
		if(top==n-1)
		{
			cout<<"Stack is overflowed"<<endl;
		}
		else
		{
			top=top+1;
			cout<<"Enter the value to be added"<<endl;
			cin>>value;
			stack[top]=value;
			cout<<"Push done"<<endl;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack underflow"<<endl;
		}
		else
		{
			top=top-1;
			cout<<"Pop done"<<endl;
		}
	}
	void show()
	{
		int i=0;
		cout<<"The stack contents are"<<endl;
		for(i=top;i>=0;i--)
		{
			cout<<stack[i]<<endl;
		}
	}
};

int main()
{
	Stackoperations s;
	s.set();
	s.add();
}
	
	