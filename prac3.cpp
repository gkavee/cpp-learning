#include <iostream>
#include <vector>
#include <string>

class Student {
public:
    std::string lastName;
    std::string firstName;
    std::string middleName;
    int birthYear;
    std::string group;
    int moduleGrade;

    // Конструктор для удобства создания объектов Student
    Student(std::string last, std::string first, std::string middle, int year, std::string grp)
        : lastName(last), firstName(first), middleName(middle), birthYear(year), group(grp), moduleGrade(-1) {}
};

class Teacher {
public:
    std::string lastName;
    std::string firstName;
    std::string middleName;
    int experience;
    std::string subject;
    std::vector<Student> students;

    // Конструктор для удобства создания объектов Teacher
    Teacher(std::string last, std::string first, std::string middle, int exp, std::string subj)
        : lastName(last), firstName(first), middleName(middle), experience(exp), subject(subj) {}

    // Добавление студента к списку студентов преподавателя
    void addStudent(Student student) {
        students.push_back(student);
    }

    // Проставление оценки студенту по его фамилии
    void gradeStudent(std::string studentLastName, int grade) {
        for (auto& student : students) {
            if (student.lastName == studentLastName) {
                student.moduleGrade = grade;
                break;
            }
        }
    }

    // Вывод информации о преподавателе и студентах
    void displayInfo() {
        std::cout << "Преподаватель: " << firstName << " " << lastName << " " << middleName << std::endl;
        std::cout << "Стаж работы: " << experience << " лет" << std::endl;
        std::cout << "Преподаваемый предмет: " << subject << std::endl;

        std::cout << "\nСписок студентов:" << std::endl;
        for (const auto& student : students) {
            std::cout << "Фамилия: " << student.lastName << ", Имя: " << student.firstName
                      << ", Отчество: " << student.middleName << ", Год рождения: " << student.birthYear
                      << ", Группа: " << student.group << ", Оценка за модуль: " << student.moduleGrade << std::endl;
        }
    }
};

int main() {
    std::string command;
    Teacher teacher("Иванов", "Иван", "Иванович", 10, "Математика");

    while (true) {
        std::cout << "Выберите команду (ДобавитьСтудента, ПроставитьОценку, ВывестиИнформацию, Выход): ";
        std::cin >> command;

        if (command == "ДобавитьСтудента") {
            std::string last, first, middle, group;
            int year;
            std::cout << "Введите фамилию студента: ";
            std::cin >> last;
            std::cout << "Введите имя студента: ";
            std::cin >> first;
            std::cout << "Введите отчество студента: ";
            std::cin >> middle;
            std::cout << "Введите год рождения студента: ";
            std::cin >> year;
            std::cout << "Введите группу студента: ";
            std::cin >> group;

            Student newStudent(last, first, middle, year, group);
            teacher.addStudent(newStudent);
        } else if (command == "ПроставитьОценку") {
            std::string studentLastName;
            int grade;
            std::cout << "Введите фамилию студента для проставления оценки: ";
            std::cin >> studentLastName;
            std::cout << "Введите оценку: ";
            std::cin >> grade;

            teacher.gradeStudent(studentLastName, grade);
        } else if (command == "ВывестиИнформацию") {
            teacher.displayInfo();
        } else if (command == "Выход") {
            teacher.displayInfo();
            break;
        } else {
            std::cout << "Неизвестная команда. Попробуйте еще раз." << std::endl;
        }
    }

    return 0;
}