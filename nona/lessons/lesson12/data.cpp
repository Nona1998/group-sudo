#include <iostream>
#include <string>
#include "struct.h"

int main () {
    person group[13];
    group[0] = {"Nona", "Musaelyan", 19, true, "female", "isn't married"};
    group[1] = {"Lilit", "Melqumyan", 19, true, "female", "isn't married"};
    group[2] = {"Arpine","Harutyunyan", 23, true, "female", "isn't married"};
    group[3] = {"Nvard", "Harutyunyan", 19, true, "female", "isn't married"};
    group[4] = {"Mariam", "Karapetyan", 21, true, "female", "isn't married"};
    group[5] = {"Ani", "Hakobyan", 19, true, "female", "isn't married"};
    group[6] = {"Aleksandr", "Avagyan", 20, true, "male", "isn't married"};
    group[7] = {"Tigran", "Hovhannisyan", 20, true, "male", "isn't married"};
    group[8] = {"Edgar", "Grigoryan", 16, false, "male", "isn't married"};
    group[9] = {"Hrach", "Gevorgyan", 21, true, "male", "isn't married"};
    group[10] = {"Armen", "Abrahamyan", 19, true, "male", "isn't married"};
    group[11] = {"Artur", "Gasparyan", 25, false, "male", "isn't married"};
    group[12] = {"Michael", "Sargsyan", 17, true, "male", "isn't married"};
    std::cout << "Hello and Welcome to the ITC-2.\nHere is the members of the ITC-2.\n";
    for (int i = 0; i <= 12; i++) {
        std::cout << i+1 << ". ";
        if ((i + 1) / 10 == 0) {
            std::cout << " ";
        }
        std::cout << group[i].first_name << " " << group[i].last_name << std::endl;
    }
    std::cout << "You want to know about: ";
    std::string name;
    std::cin >> name;
    bool x = false;
    for (int i = 0; i <= 12; i++) {
        if (name == group[i].first_name) {
            std::cout << group[i].first_name << " " << group[i].last_name << " is " << group[i].age << " years old. ";
            if (group[i].gender == "female") {
                std::cout << "She";
            } else {
                std::cout << "He";
            }
            std::cout << " is " << group[i].gender << ". " << group[i].first_name << " is ";
            if (!group[i].student) {
                std::cout << "not ";
            }
            std::cout << "student. ";
            if (group[i].gender == "female") {
                if (group[i].status == "isn't married") {
                    std::cout << "Miss ";
                } else {
                    std::cout << "Mrs. ";
                }
            } else {
                std::cout << "Mr. ";
            }
            std::cout << group[i].first_name << " " << group[i].status << "." << std::endl;
            x = true;
            break;
        }
    }
    if (!x) {
        std::cout << name <<  " isn't member of the ITC-2." << std::endl;
    }
    return 0;
}
