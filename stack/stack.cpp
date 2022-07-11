#include<iostream>
using namespace std;

template <class T>
class stack{
private:
	T *stk;
	int top;
	int size;
public:
	stack(int sz) {
		size=sz;
		top=-1;
		stk=new T[sz];
	}
	void push(T data){
		if(top==size-1)
		{
			cout<<"stack full"<<endl;
		}
		else
		{
			top++;
			stk[top]=data;
		}
	}
	void pop(){
		if(top==-1)
		{
			cout<<"stack empty"<<endl;
		}
		else
		{
			top--;
		}
	}
	void peek(int val) {
		cout<<stk[top-(val-1)];
	}
	void display(){
		if(top==-1)
		{
			cout<<"stack empty"<<endl;
		}
		else
		{
			int t;
			t=top;
			while(t!=-1)
			{
				cout<<stk[t]<<endl;
				t--;
			}
		}
}
};

int main() {
	stack<char> s(3);
	s.push('k');
	s.push('t');
	s.push('j');
	s.pop();
	s.push('s');
	s.display();
	s.peek(1);
	return 0;
}
