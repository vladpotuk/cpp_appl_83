#include <iostream>
#include "Worker.h"

int main() {
    system("chcp 1251");
    system("cls");
    Worker workers[] = {
        
        Worker("Черній Владислав Ігорович", "Інженер", 2015, 50000),
        Worker("Майсон Котляр Максим", "Менеджер", 2018, 60000),
        Worker("Потук Владислав Олексійович", "Програміст", 2010, 70000),
    
    };

    int experienceThreshold = 5;
    std::cout << "Список працівників із стажем більше " << experienceThreshold << " років:\n";
    for (const auto& worker : workers) {
        if (2023 - worker.getStartYear() > experienceThreshold) {
            std::cout << "ПІБ: " << worker.getFullName() << ", Посада: " << worker.getPosition() << "\n";
        }
    }

    double salaryThreshold = 60000;
    std::cout << "\nСписок працівників із зарплатою більше " << salaryThreshold << ":\n";
    for (const auto& worker : workers) {
        if (worker.getSalary() > salaryThreshold) {
            std::cout << "ПІБ: " << worker.getFullName() << ", Посада: " << worker.getPosition() << "\n";
        }
    }

    std::string targetPosition = "Менеджер";
    std::cout << "\nСписок працівників із посадою " << targetPosition << ":\n";
    for (const auto& worker : workers) {
        if (worker.getPosition() == targetPosition) {
            std::cout << "ПІБ: " << worker.getFullName() << ", Зарплата: " << worker.getSalary() << "\n";
        }
    }

    return 0;
}
