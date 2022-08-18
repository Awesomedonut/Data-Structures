#include <iostream>
//Circular array implementation of a queue

class Queue{
private:
    int front_index;
    int back_index;
    int items_amt;

public:

    Queue(){
        front_index = 0;
        back_index = 0;
        items_amt = 0;
    }
};

int main(){
    std::cout << "hello i am a donut using online editor kek :D";
}