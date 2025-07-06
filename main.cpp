#include <iostream>
#include "vector.h"

int main() {
    Vector myVector;
    myVector.push_back(10);
    myVector.push_back(30);
    myVector.push_back(40);
    myVector.push_back(100);
    myVector.push_back(-50);

    std::cout << "myVector size: " << myVector.size() << std::endl;

    Vector myVector2 = myVector;

    myVector2.push_back(100);

    std::cout << "myVector2[5]: " << myVector2[5] << std::endl;

    if (myVector.size() > 5)
        std::cout << "myVector[5]: " << myVector[5] << std::endl;
    else
        std::cout << "myVector has no index 5!" << std::endl;

    std::cout << "myVector2 size: " << myVector2.size() << std::endl;

    Vector myVector3;
    myVector3.push_back(200);

    
    myVector3 = myVector3;

    myVector3 = myVector2 = myVector;

    myVector2.push_back(100); 

    std::cout << "myVector3[0]: " << myVector3[0] << std::endl;
    std::cout << "myVector3 empty: " << myVector3.empty() << std::endl;
    std::cout << "myVector3[3]: " << myVector3[3] << std::endl;

    myVector[0] = 1000; 
    std::cout << "myVector[0] after modification: " << myVector[0] << std::endl;
    std::cout << "myVector2[0] should not change: " << myVector2[0] << std::endl;


     Vector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::cout << "Front: " << v.front() << std::endl; 
    std::cout << "Back: " << v.back() << std::endl;   

    v.front() = 100;
    v.back() = 300;

    std::cout << "Modified Front: " << v.front() << std::endl; 
    std::cout << "Modified Back: " << v.back() << std::endl;   
    
    return 0;
}
