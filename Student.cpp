#include "Student.hpp"

Student::Student(std::string firstName, std::string sureName, std::string city, std::string street, std::string numberOfStreet, std::string pesel)
    : firstName_(firstName), sureName_(sureName), address{city, street, numberOfStreet}, pesel_(pesel) {}

void Student::setFirstName(const std::string& firstName) {
    firstName_ = firstName;
}

void Student::setSureName(const std::string& sureName) {
    sureName_ = sureName;
}

void Student::setCity(const std::string& city) {
    address.city_ = city;
}

void Student::setStreet(const std::string& street) {
    address.street_ = street;
}

void Student::setNumberOfStreet(const std::string& numberOfStreet) {
    address.numberOfStreet_ = numberOfStreet;
}

void Student::setPesel(const std::string& pesel) {
    pesel_ = pesel;
}

void Student::setGender(const Gender& gender) {
    gender_ = gender;
}

std::string Student::getFirstName() const {
    return firstName_;
}

std::string Student::getSureName() const {
    return sureName_;
}

std::string Student::getCity() const {
    return address.city_;
}

std::string Student::getStreet() const {
    return address.street_;
}

std::string Student::getNumberOfStreet() const {
    return address.numberOfStreet_;
}

std::string Student::getPesel() const {
    return pesel_;
}

void Student::printbyId(const size_t& id) {}
void Student::printAll() {}
void Student::searchByFirstName() {}
void Student::searchBySecondName() {}
void Student::searchByStreet() {}
void Student::searchByCity() {}
