#ifndef WORKER_H
#define WORKER_H

#include <string>

class Worker {
public:
    explicit Worker(const std::string& fullName, const std::string& position, int startYear, double salary);

    
    std::string getFullName() const;
    std::string getPosition() const;
    int getStartYear() const;
    double getSalary() const;

private:
    std::string fullName;
    std::string position;
    int startYear;
    double salary;
};

#endif

