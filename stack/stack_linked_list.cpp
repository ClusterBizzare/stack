#include<iostream>
#include<stdlib.h>
using namespace std;

template <class T>
class node{
	public:
	T data;
	node *next;
};

template <class T>
class stack:public node<T>{
	public:
		node<T> *top;
		stack()
		{
			top=NULL;
		}
		void push(T val)
		{
		  	node<T> *temp = new node<T>;
		  	if(top==NULL)
		  	{
		  	  top=temp;
			  temp->data=val;
			  temp->next=NULL;	
			}
			else
			{
				temp->data=val;
				temp->next=top;
				top=temp;
			}
		}
		
		void pop()
		{
			if(top==NULL)
			{
				cout<<"stack is empty"<<endl;
			}
			else
			{
			   top=top->next;
		    }
		}
		
		void print()
		{
			node<T> *d;
			d=top;
			while(d!=NULL)
			{
				cout<<d->data<<endl;
				d=d->next;
			}
		}
};

int main() {
	stack<char> s;
	s.push('k');
	s.push('c');
	s.push('a');
	s.push('t');
	s.push('a');
	s.pop();
	s.push('s');
	s.print();
	return 0;
}
