#include <iostream>

void addNum(){
    int a;
    int b;
    std::cout << "a : ";
    std::cin >> a;
    std::cout << "b : ";
    std::cin >> b;
    int c = a+b;
    std::cout << a << " + " << b << " = " << c << std::endl;
}

void substractNum(){
    int a;
    int b;
    std::cout << "a : ";
    std::cin >> a;
    std::cout << "b : ";
    std::cin >> b;
    int c = a-b;
    std::cout << a << " - " << b << " = " << c << std::endl;
}

void multiplyNum(){
    int a;
    int b;
    std::cout << "a : ";
    std::cin >> a;
    std::cout << "b : ";
    std::cin >> b;
    int c = a*b;
    std::cout << a << " * " << b << " = " << c << std::endl;
}

void divideNum(){
    int a;
    int b;
    std::cout << "a : ";
    std::cin >> a;
    std::cout << "b : ";
    std::cin >> b;
    if (b != 0){
        int c = a/b;
        std::cout << a << " / " << b << " = " << c << std::endl;
    }
    else{
        std::cout << "You can't divide by 0";
    }    
}

int main()
{
    bool running = true;
    std::cout << "Calculator" << std::endl << std::endl;
    while (running){
        bool correct = false;
        char operation;
        while (!correct){
            operation = '.';
            std::cout << "What operation ? (+, -, / or *)" << std::endl;
            std::cin >> operation;
            if (operation == '+' || operation == '-' || operation == '/' || operation == '*'){
                correct = true;
            }
        }
        switch (operation)
        {
        case '+':
            addNum();
            break;
        case '-':
            substractNum();
            break;
        case '/':
            divideNum();
            break;
        case '*':
            multiplyNum();
            break;
        default:
            break;
        }
        correct = false;
        while (!correct){
            char stop;
            std::cout << "Continue ? (y/n)" << std::endl;
            std::cin >> stop;
            if (stop == 'y'){
                correct = true;
            }
            else if (stop == 'n'){
                running = false;
                correct = true;
            }
        }
    }
}