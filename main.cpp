#include <iostream>
#include "Worker.h"

int main() {
    system("chcp 1251");
    system("cls");
    Worker workers[] = {
        
        Worker("����� ��������� ��������", "�������", 2015, 50000),
        Worker("������ ������ ������", "��������", 2018, 60000),
        Worker("����� ��������� ����������", "���������", 2010, 70000),
    
    };

    int experienceThreshold = 5;
    std::cout << "������ ���������� �� ������ ����� " << experienceThreshold << " ����:\n";
    for (const auto& worker : workers) {
        if (2023 - worker.getStartYear() > experienceThreshold) {
            std::cout << "ϲ�: " << worker.getFullName() << ", ������: " << worker.getPosition() << "\n";
        }
    }

    double salaryThreshold = 60000;
    std::cout << "\n������ ���������� �� ��������� ����� " << salaryThreshold << ":\n";
    for (const auto& worker : workers) {
        if (worker.getSalary() > salaryThreshold) {
            std::cout << "ϲ�: " << worker.getFullName() << ", ������: " << worker.getPosition() << "\n";
        }
    }

    std::string targetPosition = "��������";
    std::cout << "\n������ ���������� �� ������� " << targetPosition << ":\n";
    for (const auto& worker : workers) {
        if (worker.getPosition() == targetPosition) {
            std::cout << "ϲ�: " << worker.getFullName() << ", ��������: " << worker.getSalary() << "\n";
        }
    }

    return 0;
}
