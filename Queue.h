

template <typename T>


class Queue{
private:
    size_t _size;
    T* _array;
    size_t _start;//индекс начального
    size_t _end;//индекс последнего +1(?)

public:
    Queue(size_t size=10){
        _array=new T [size];
        _start=0;
        _size=size;
        _end=0;

        
    }
    void Push(const T& elem){
        //size_t next_ind=(_end+1)%_size;
        if(!IsFull()){
            _array[(_end++)%_size]=elem;
            //_end=next_ind;
        }
        else
            throw "queue is full";
    }

    void Pop(){
        if(!IsEmpty()){
            _start=(_start+1)%_size;
        }
        else{
    
            throw "queue is empty";
        }
    }

    size_t GetCount()const{
        
        return _size+_start-_end;

    }
    T& Front(){
        return _array[_start];

    }
    const T& Front()const{
        return _array[_start];

    }

    T& Back(){
        return _array[_end-1];

    }

    const T& Back()const{
        return _array[_end-1];

    }

    bool IsEmpty() const{
        return (_end==_start);
    }

    bool IsFull() const{
        if(IsEmpty())
            return false;
        else
            return (_end%_size==_start);
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