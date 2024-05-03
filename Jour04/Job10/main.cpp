#include <iostream>
#include <string>

struct Note
{
    std::string f_name;
    std::string l_name;
    double note;
};

Note createNote(){
    std::string f_name;
    std::cout << "First Name :" << std::endl;
    std::cin >> f_name;
    std::string l_name;
    std::cout << "Last Name :" << std::endl;
    std::cin >> l_name;
    double note;
    std::cout << "Grade :" << std::endl;
    std::cin >> note;

    Note grade;
    grade.f_name = f_name;
    grade.l_name = l_name;
    grade.note = note;

    std::cout << "Grade created" << std::endl;
    return grade;
}

void displayNotes(Note T[], int size){
    std::cout << "Grade list :" << std::endl;
    for (int i = 0; i < size; i++)
    {
        Note n = T[i];
        std::cout << "#" << i << " " << n.f_name << " " << n.l_name << " had a " << n.note << std::endl;
    }    
}

double averageOfNotes(Note T[], int size){
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        Note n = T[i];
        sum += n.note;
    }
    double avg = sum/(double)size;
    return avg;
}

int main() {
    Note T[100];
    int notesEntered = 0;
    bool running = true;
    std::cout << "Grade system" << std::endl;
    while (running){
        std::cout << "\nMenu \n1: Add a grade \n2: Display all grades \n3: Delete a grade \n4: Get average of grades \n5: Quit \n";
        int n;
        std::cout << "Choice :" << std::endl;
        std::cin >> n;
        switch (n)
        {
        case 1:
            {
                T[notesEntered] = createNote();
                notesEntered++;
                break;
            }
        case 2:
            {
                if (notesEntered > 0){
                    displayNotes(T, notesEntered);
                }
                else{
                    std::cout << "No grades yet" << std::endl;
                }
                break;
            }
        case 3:
            {
                if (notesEntered > 0){
                    displayNotes(T, notesEntered);
                    int d;
                    std::cout << "Choose a grade to delete : ";
                    std::cin >> d;
                    if (d < notesEntered){
                        for (int i = d; i < notesEntered; i++)
                        {
                            T[i] = T[i+1];
                        }
                        notesEntered--;
                        std::cout << "Grade deleted" << std::endl;     
                    }
                    else{
                        std::cout << "Grade doesn't exist, back to menu" << std::endl;
                    }
                }
                else{
                    std::cout << "No grades yet" << std::endl;
                }
                break;
            }
        case 4:
            {
                if (notesEntered > 0){
                    double avg = averageOfNotes(T, notesEntered);
                    std::cout << "Average of grades : " << avg << std::endl;
                    break;
                }
                else{
                    std::cout << "No grades yet" << std::endl;
                }
            }
        case 5:
            {
                running = false;
                break;
            }
        default:
            {
                std::cout << "This is not a valid choice" << std::endl;
                break;
            }
        }
    }
}