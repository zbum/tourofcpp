#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>

class Vector {
private:
    double* elem;  // elements
    int sz;        // number of elements

public:
    // Constructor
    Vector(int s);
    
    // Destructor
    ~Vector();
    
    // Copy constructor
    Vector(const Vector& a);
    
    // Copy assignment
    Vector& operator=(const Vector& a);
    
    // Move constructor
    Vector(Vector&& a);
    
    // Move assignment
    Vector& operator=(Vector&& a);
    
    // Element access
    double& operator[](int i);
    const double& operator[](int i) const;
    
    // Size
    int size() const;
    
    // Add element
    void push_back(double d);
    
    // Remove last element
    void pop_back();
    
    // Clear all elements
    void clear();
    
    // Check if empty
    bool empty() const;
};

#endif // VECTOR_H
