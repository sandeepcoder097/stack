/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define max 100
int a[max];
int top=-1,n,m;
using namespace std;
void push(int data)
{
    if (top==max-1)
     {
         cout<<"stack overflow";
         return; 
     }
     top++;
     a[top]=data;
    
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack underflow";
        return;
    }
    top--;
}
void print(int T)
{
    cout<<"Your stack is:\n";
    while(T>=0)
    {
        cout<<a[T]<<endl;
       T--;
    }
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
            case 3: print(top);
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


