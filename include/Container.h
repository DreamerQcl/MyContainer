#pragma once
#include <iostream>

template<typename T>
class Container{
public:

    Container(){
        data = (T *) malloc(sizeof(T) * 10);
        size = 0;
        capacity = 10;
    }

    ~Container(){
        free(data);
        data = nullptr;
    }

    ///返回容器容量
    int Capacity(){
        return capacity;
    }

    ///返回元素个数
    int Size(){
        return size;
    }

    ///将元素添加至容器最后
    void Add(T values){
        if (size == capacity){
            UpdateCapacity(capacity);
        } else{
            data[size] = values;
            size++;
        }
    }

    ///删除容器中某个元素
    int Delete(int index){
        if (index < 0||index > capacity){
            return -1;
        } else{
            for (int i = index; i < size; i++){
                data[i] = data[i+1];
            }
            size--;
            return 0;
        }
    }

    ///插入
    int Insert(int index, T values){
       if(index < 0||index > capacity){
           return -1;
       } else{
           if (size == capacity){
               UpdateCapacity(capacity);
           } else{
               for(int i = size;i > index; i--){
                   data[i] = data[i - 1];
               }
               data[index] = values;
               size++;
           }
       }
        return 0;
    }

    ///判断容器是否为空
    int Empty(){
        if (size == 0){
            return 0;
        } else{
            return -1;
        }
    }

    ///获取元素
    T GetElem(int index){
        if (index < 0||index > capacity){
            return -1;
        } else{
            return data[index];
        }
    }

    void Show(){
        for (int i = 0; i < size; i++){
            std::cout<<data[i]<<std::endl;
        }
    }

private:

    int size;
    int capacity;
    T* data = nullptr;

    ///更新容器容量
    void UpdateCapacity(int numOfElement){
        T* newdata = (T *) malloc(numOfElement * 2 * sizeof(T));
        memcpy(newdata,data,size * sizeof (T));
        capacity = numOfElement * 2;
        free(data);
        data = newdata;
    }

};