#include <iostream>
#include <string>

int main()
{
    std::string time;
    std::cout << "What time is it : ";
    std::cin >> time;
    bool correct = true;
    if (time.length() != 5){
        correct = false;
    }
    else{
        int hour = 0 + std::stoi(time.substr(0,2));
        int minutes = 0 + std::stoi(time.substr(3,2));
        if (time[2] != 'h'){
            correct = false;
        }
        if (hour > 23 || hour < 0 || minutes > 59 || minutes < 0){
            correct = false;
        }
    }
    if (!correct){
        std::cout << "This isn't readable (should look something like 01h23)";
    }
    else{
        std::cout << time << "? Fine, I trust you";
    }
}