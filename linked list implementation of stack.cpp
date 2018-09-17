/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdlib.h>
//#define max 100
int n,m;
using namespace std;
struct node{
int data;
node* next;
};
node* head=NULL;

void push(int da)
{
    if (head==NULL)
     {
         node* temp=new node();
         temp->data=da;
         temp->next=NULL;
         head=temp;
     }
     else{
        node *temp=new node();
        temp->data=da;
        temp->next=head;
        head=temp;

     }

}
void pop()
{
    if(head==NULL)
    {
        cout<<"stack underflow";
        return;
    }
    node* temp=head;
    head=temp->next;
    delete temp;
}
void print()
{
    cout<<"Your stack is:\n";
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }cout<<endl;
}

void choice()
    {   while(1)
        {
        int ch,d;
        cout<<"ENTER YOUR CHOICE FROM BELOW:-"<<endl;
        cout<<"1.push element in stack:\n";
        cout<<"2.pop element from the stack\n";
        cout<<"3.print stack element\n";
        cout<<"4.to Exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"how many elements you want to enter in stack:";
                    cin>>n;
                    for(int i=1;i<=n;i++)
                    {
                        cout<<"enter "<<i<<"st element:";
                        cin>>d;
                        push(d);
                        cout<<"Pushed in stack"<<endl;
                    }
                    break;

            case 2: cout<<"how many element you want to pop:";
                    cin>>m;
                    for(int j=1;j<=m;j++)
                    {
                        pop();
                        cout<<"poped "<<j<<" times "<<endl;
                    }
                    break;
            case 3: print();
                    break;
            case 4: exit(1);
            default:
                     cout<<"Invalid choice!"<<endl;
                     break;
        }  cout<<endl;
        }

    }
int main()
{
    choice();

    return 0;
}


