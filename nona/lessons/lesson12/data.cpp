#include <iostream>
#include <string>
#include "struct.h"

int main () {
    //Musaelyan Nona
    person nona;
    nona.first_name = "Nona";
    nona.last_name = "Musaelyan";
    nona.age = 19;
    nona.student = true;
    nona.gender = "female";
    //Melqumyan Lilit
    person lilit;
    lilit.first_name = "Lilit";
    lilit.last_name = "Melqumyan";
    lilit.age = 19;
    lilit.student = true;
    lilit.gender = "female";
    //Harutyunyan Arpine
    person arpine;
    arpine.first_name = "Arpine";
    arpine.last_name = "Harutyunyan";
    arpine.age = 23;
    arpine.student = true;
    arpine.gender = "female";
    //Harutyunyan Nvard
    person nvard;
    nvard.first_name = "Nvard";
    nvard.last_name = "Harutyunyan";
    nvard.age = 19;
    nvard.student = true;
    nvard.gender = "female";
    //Karapetyan Mariam
    person mariam;
    mariam.first_name = "Mariam";
    mariam.last_name = "Karapetyan";
    mariam.age = 21;
    mariam.student = true;
    mariam.gender = "female";
    //Hakobyan Ani
    person ani;
    ani.first_name = "Ani";
    ani.last_name = "Hakobyan";
    ani.age = 19;
    ani.student = true;
    ani.gender = "female";
    //Avagyan Aleksandr
    person aleksandr;
    aleksandr.first_name = "Aleksandr";
    aleksandr.last_name = "Avagyan";
    aleksandr.age = 20;
    aleksandr.student = true;
    aleksandr.gender = "male";
    //Hovhannisyan Tigran
    person tigran;
    tigran.first_name = "Tigran";
    tigran.last_name = "Hovhannisyan";
    tigran.age = 22;
    tigran.student = true;
    tigran.gender = "male";
    //Grigoryan Edgar
    person edgar;
    edgar.first_name = "Edgar";
    edgar.last_name = "Grigoryan";
    edgar.age = 17;
    edgar.student = false;
    edgar.gender = "male";
    //Gevorgyan Hrach
    person hrach;
    hrach.first_name = "Hrach";
    hrach.last_name = "Gevorgyan";
    hrach.age = 22;
    hrach.student = true;
    hrach.gender = "male";
    //Abrahamyan Armen
    person armen;
    armen.first_name = "Armen";
    armen.last_name = "Abrahamyan";
    armen.age = 20;
    armen.student = true;
    armen.gender = "male";
    //Gasparyan Artur
    person artur;
    artur.first_name = "Artur";
    artur.last_name = "Gasparyan";
    artur.age = 22;
    artur.student = true;
    artur.gender = "male";
    //Sargsyan Michael
    person michael;
    michael.first_name = "Michael";
    michael.last_name = "Sargsyan";
    michael.age = 17;
    michael.student = false;
    michael.gender = "male";
    int size = 13;
    std::string arr [size] = {"Nona", "Lilit", "Arpine", "Nvard", "Mariam", "Ani", "Aleksandr", "Tigran", "Edgar", "Hrach", "Armen", "Artur", "Michael"};
    std::string arr_first_name [size] = {nona.first_name, lilit.first_name, arpine.first_name, nvard.first_name, mariam.first_name, ani.first_name, aleksandr.first_name, tigran.first_name, edgar.first_name, hrach.first_name, armen.first_name, artur.first_name, michael.first_name};
    std::string arr_last_name [size] = {nona.last_name, lilit.last_name, arpine.last_name, nvard.last_name, mariam.last_name, ani.last_name, aleksandr.last_name, tigran.last_name, edgar.last_name, hrach.last_name, armen.last_name, artur.last_name, michael.last_name};
    int arr_age [size] = {nona.age, lilit.age, arpine.age, nvard.age, mariam.age, ani.age, aleksandr.age, tigran.age, edgar.age, hrach.age, armen.age, artur.age, michael.age};
    bool arr_student [size] = {nona.student, lilit.student, arpine.student, nvard.student, mariam.student, ani.student, aleksandr.student, tigran.student, edgar.student, hrach.student, armen.student, artur.student, michael.student};
    std::string arr_gender [size] = {nona.gender, lilit.gender, arpine.gender, nvard.gender, mariam.gender, ani.gender, aleksandr.gender, tigran.gender, edgar.gender, hrach.gender, armen.gender, artur.gender, michael.gender};
    std::cout << "Hello and Welcome to the ITC-2.\nHere is the members of the ITC-2.\n";
    for (int i = 0; i < size; i++) {
        std::cout << i+1 << ". ";
        if ((i + 1) / 10 == 0) {
            std::cout << " ";
        }
        std::cout << arr_first_name[i] << " " << arr_last_name[i] << std::endl;
    }
    std::cout << "You want to know about: ";
    std::string name;
    std::cin >> name;
    bool x = false;
    for (int i = 0; i < size; i++) {
        if (arr [i] == name) {
            std::cout << arr_first_name[i] << " ";
            std::cout << arr_last_name[i];
            std::cout << " is " << arr_age[i] << " years old. ";
            if (arr_gender [i] == "female") {
                std::cout << "She";
            } else {
                std::cout << "He";
            }
            if (arr_student[i]) {
                std::cout << " is ";
            } else {
                std::cout << " is not ";
            }
            std::cout << "student. ";
            if (arr_gender [i] == "female") {
                std::cout << "She";
            } else {
                std::cout << "He";
            }
            std::cout << " is " << arr_gender[i] << "." << std::endl;
            x = true;
            break;
        }
    }
    if (!x) {
        std::cout << "The name " << name <<  " isn't included in the list." << std::endl;
    }
    return 0;
}
