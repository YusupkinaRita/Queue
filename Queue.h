

template <typename T>


class Queue{
private:
    size_t _size;
    T* _array;
    size_t _start;//индекс начального
    size_t _end;//индекс последнего +1

public:
    Queue(size_t size){
        _array=new T [size];
        _start=0;
        _size=size;
        _end=0;

        
    }
    void Push(const T& elem){
        if(_end!=_size){
            _array[_end]=elem;
            _end++;
        }
        else
            throw "queue is full";
    }

    T Pop(){
        if(!IsEmpty()){
            T tmp=_array[_start];
            _start++;
            return tmp;
        }
        else{
            _start=0;
            _end=0;
            throw "queue is empty";
        }
    }

    size_t GetSize(){
        return _end-_start;

    }
    T& Front(){
        return _array[_start];

    }

    T& Back(){
        return _array[_end-1];

    }

    bool IsEmpty() const{
        return ((_end-_start) ==0);
    }


    ~Queue(){
        delete [] _array;
    }

    friend std::ostream& operator<<(std::ostream& os, const Queue& q){
        if(q.IsEmpty())
            os<<"queue is empty";
        else{
            for(size_t i=q._start; i<q._end;i++)
                os<<q._array[i]<<" ";
        }
            
        
        return os;
    }



};