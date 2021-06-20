#pragma once

#include <algorithm>
#include <vector>
#include "Student.hpp"

class Database {
public:
    Database() {}

    void addStudent(Student student);
    void printById(const size_t& id);
    void printAll();
    void saveToFile(std::string fileName);
    void loadFromFile(std::string fileName);

    size_t getNumberOfStudents() const;

    std::vector<Student> searchByPesel(const std::string& pesel) const;
    std::vector<Student> searchByFirstName(const std::string& firstname) const;
    std::vector<Student> searchBySurName(const std::string& surname) const;
    std::vector<Student> searchByStreet(const std::string& street) const;
    std::vector<Student> searchByCity(const std::string& city) const;

    void sortByPesel();
    void sortBySurName();

    void deleteByPesel(std::string pesel);

private:
    std::vector<Student> students_;
};
