#ifndef VECTOR_H
#define VECTOR_H

class Vector{
public:
        Vector();
        ~Vector();

        Vector(const Vector& other);
        Vector& operator=(const Vector& rhs);

        void push_back(const int value);
        int& operator[](int index);
        const int& operator[](int index) const;
        int size() const;
        bool empty() const;

        Vector(Vector&& other);             
        Vector& operator=(Vector&& rhs);

        int& front();
        int& back();


private:
    int m_size;
    int m_capacity;
    int* m_arr=new int;
};

#endif
