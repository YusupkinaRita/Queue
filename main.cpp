#include <iostream>
#include "Queue.h"




int main(){
    Queue<int> queue=Queue<int>(2);
    queue.Push(10);
    //queue.Push(2);
    std::cout<<queue<<std::endl;
    queue.Pop();
    std::cout<<queue<<std::endl;
    std::cout<<queue.IsEmpty()<<std::endl;
    std::cout<<queue.IsFull()<<std::endl;
    


    // std::cout<< queue.Pop()<<std::endl;
    // std::cout<< queue.Pop()<<std::endl;
    // try{
    // std::cout<< queue.Pop()<<std::endl;
    // }
    // catch(const char* text){
    //     std::cout<<text<<std::endl;


    // }
    // queue.Push(26);
    // std::cout<< queue.Pop()<<std::endl;
    // std::cout<< queue.Pop()<<std::endl;






    //реализовать все функции с cpp reference emplace не надо
    //пуш с перемещением, константные фронт и бэк, правильный поп
    




    
}