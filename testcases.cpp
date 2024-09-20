#include <iostream>
#include <thread>
#include <atomic>
#include <unistd.h>
int f1=0;
int f2 =0;

class A{
    
    public:
    int a =10;
    void Aprint(){
        std::cout<<"the value <<"<<a<<"\n";
    }
};
A *p, *q;

    std::thread thread1;
    std::thread thread2;
    std::thread thread3;
void C() {
   A *c=new A();
    q = c;
   f2=1;
 //while(thread1.joinable());
 //std::cout << "c is done " << "\n";
 //sleep(3);
}

void B() {
    // f2=1;
    //   while( thread1.joinable());    
    while(f1!=1);
      sleep(2);
    
       // p->a=488;
       // std::cout << "The data p is " << p->a << "\n";
       
       p->Aprint();
       
       while(f2!=1);
       
       sleep(2);
       std::cout<<"printing q  \n";
       q->Aprint();
       
}

void A1() {
    
    A a1;
    
    p=&a1;
      f1=1;
    p->Aprint();
    //while (!f1 || !f2);  // Wait until both f1 and f2 are true
    //std::cout << "The data p is " << *p << "\n";
}
int main() {
    thread1 = std::thread(A1);
     thread2 = std::thread(B);
   thread3 = std::thread(C);
    thread1.join();
    thread2.join();
        // thread2.join();
     thread3.join();
        //q->a=4;
        //std::cout << "The data q in main is " << p->a << "\n";
        
    return 0;
}
