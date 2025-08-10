#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>

//double sqrt(double);

class Vector {
private:
    double* elem;  // elements
    int sz;        // number of elements

public:
    Vector(int s);
    double& operator[](int i);
    int size();
    
};

#endif // VECTOR_H
