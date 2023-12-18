#include "Worker.h"


Worker::Worker(const std::string& fullName, const std::string& position, int startYear, double salary)
    : fullName(fullName), position(position), startYear(startYear), salary(salary) {}


std::string Worker::getFullName() const { return fullName; }
std::string Worker::getPosition() const { return position; }
int Worker::getStartYear() const { return startYear; }
double Worker::getSalary() const { return salary; }
