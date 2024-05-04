#include <iostream>
#include <string>
#include "Operation.hpp"

Operation::Operation(int num)
    : num(num)
{
}

Operation::~Operation()
{
}

Operation& Operation::operator+=(const Operation &op){
    this->num += op.num;
    return *this;
}

Operation& Operation::operator-=(const Operation &op){
    this->num -= op.num;
    return *this;
}

Operation& Operation::operator*=(const Operation &op){
    this->num *= op.num;
    return *this;
}

Operation& Operation::operator/=(const Operation &op){
    this->num /= op.num;
    return *this;
}

bool Operation::operator==(const Operation &op){
    return this->num == op.num;
}

void Operation::display(){
    std::cout << "Number is " << this->num << std::endl;
}

int main(){
    Operation x = Operation(5);
    Operation y = Operation(3);
    Operation z = Operation(8);
    x += y;
    if (x == z){
        x.display();
        z.display();
    }
    z -= y;
    z.display();
    y *= z;
    y.display();
    y /= z;
    y.display();
}