#include <iostream>
#include <functional>


 static std::function<void(void)>  x;

void temp3(std::function<void(void)>func22)
{

}
void temp2(std::function<void(void)>func11)
{
   x = func11;
    
// temp3(func11);
}
void temp(std::function<void(void)>func)
{
    if(1>2){
        int func=0;
        int p = func;
    }
    int a=10;
    temp2(func);
}

class MyClass {
public:
    MyClass(int value) : data(value) {}

    void  transientLambda() {
        
        int f=987;
      temp(  [&]() {	std::cout << "Transient lambda: " << f << std::endl;});
    }

private:
    int data=20;
};
void init(){

        MyClass *obj= new MyClass(42);
        obj->transientLambda();
        x();
        free(obj);
        
        // MyClass obj(42);
        // obj.transientLambda();

    }
//std::function<void(void)>func
int main() {

    init();
    x();
    return 0;
}
