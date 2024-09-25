#include<iostream>
using namespace std;



struct s{
    
    int *a;
};


s* f()
{
    
     s s1;
     
     s1.a=new int(5);
    
    
    cout<<" the value of a is "<<*(s1.a)<<"  \n";
    
    return &s1;
}


void b(  s * c)
{
    
cout<<"the value passed is "<<*(c->a)<<"  \n";


}

int main ()
{
    
    b(f());
    
    return 0;
}
