#include "vector.h"

    Vector::Vector(){
        m_size=0;
        m_capacity=4;
        m_arr=new int[m_capacity];

    }

    Vector::~Vector(){
        delete m_arr;
    }

    Vector::Vector(const Vector& other){
        m_arr=other.m_arr;
        m_capacity=other.m_capacity;
        m_size=other.m_size;
    };

    Vector::Vector(Vector&& other)
    : m_arr(other.m_arr), m_size(other.m_size), m_capacity(other.m_capacity) 
{
    other.m_arr = nullptr;
    other.m_size = 0;
    other.m_capacity = 0;
}

    Vector& Vector::operator=(const Vector& rhs){
     if (this != &rhs) {
        delete[] m_arr;
        m_size = rhs.m_size;
        m_capacity = rhs.m_capacity;
        m_arr = new int[m_capacity];
        for (int i = 0; i < m_size; ++i) {
            m_arr[i] = rhs.m_arr[i];
        }
    }
    return *this;
}

    Vector& Vector::operator=(Vector&& rhs){
     if (this != &rhs) {
        delete[] m_arr;
        m_size = rhs.m_size;
        m_capacity = rhs.m_capacity;
        m_arr = new int[m_capacity];
        
        rhs.m_arr = nullptr;
        rhs.m_size = 0;
        rhs.m_capacity = 0;
        }
            return *this;

    }

    int& Vector::operator[](int index){
        return m_arr[index];
    }

    void Vector::push_back(int element){
        if(m_size >= m_capacity){
            m_capacity*=2;
            int* tmp=new int;
                for(int i;i<m_size;i++){
                    tmp[i] = m_arr[i];
                }
            delete [] m_arr;

            m_arr=tmp;
            tmp=nullptr;
        }
        m_arr[m_size]=element;
        ++m_size;

    }
    
    int Vector::size() const{
        return m_size;
    }

    bool Vector::empty() const{
        return m_size==0;
    }
