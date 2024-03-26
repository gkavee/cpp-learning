#include <iostream>
#include <vector>
#include <string>
#include <locale>
#include <cstdlib>

using namespace std;

class Student {
public:
    string name;
    string surname;
    string patronymic;
    int birth_year;
    string group;
    int grade;

    // Конструктор класса Student
    Student(string _name, string _surname, string _patronymic, int _birth_year, string _group)
        : name(_name), surname(_surname), patronymic(_patronymic), birth_year(_birth_year), group(_group), grade(0) {}
};

class Teacher {
public:
    string name;
    string surname;
    string patronymic;
    int experience;
    string subject;
    vector<Student> students;

    // Конструктор класса Teacher
    Teacher(string _name, string _surname, string _patronymic, int _experience, string _subject)
        : name(_name), surname(_surname), patronymic(_patronymic), experience(_experience), subject(_subject) {}

    // Метод для добавления студента
    void addStudent() {
        string name, surname, patronymic, group;
        int birth_year;

        cout << "Введите имя студента: ";
        cin >> name;
        cout << "Введите фамилию студента: ";
        cin >> surname;
        cout << "Введите отчество студента: ";
        cin >> patronymic;
        cout << "Введите год рождения студента: ";
        while (!(cin >> birth_year)) {
            cin.clear();
            cin.ignore();
            cout << "Неверный ввод. Пожалуйста, введите корректный год рождения: ";
        }
        cout << "Введите группу студента: ";
        cin >> group;

        students.push_back(Student(name, surname, patronymic, birth_year, group));
    }

    // Метод для постановки оценки
    void setGrade() {
        if (students.empty()) {
            cout << "Пока не добавлены студенты." << endl;
            return;
        }

        cout << "Введите фамилию студента для постановки оценки: ";
        string surname;
        cin >> surname;

        for (Student& student : students) {
            if (student.surname == surname) {
                cout << "Введите оценку для " << student.surname << ": ";
                cin >> student.grade;
                return;
            }
        }
        cout << "Студент с фамилией " << surname << " не найден." << endl;
    }

    // Метод для вывода списка студентов
    void printStudents() {
        if (students.empty()) {
            cout << "Пока не добавлены студенты." << endl;
            return;
        }

        cout << "Список студентов:" << endl;
        for (const Student& student : students) {
            cout << student.surname << " " << student.name << " " << student.patronymic << " - " << student.group << " - Оценка: " << student.grade << endl;
        }
    }

    // Метод для вывода информации о преподавателе
    void printTeacherInfo() {
        cout << "Преподаватель: " << name << " " << surname << " " << patronymic << " - Опыт: " << experience << " лет - Предмет: " << subject << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    system("chcp 1251");

    string name, surname, patronymic, subject;
    int experience;
    cout << "Введите имя преподавателя: ";
    cin >> name;
    cout << "Введите фамилию преподавателя: ";
    cin >> surname;
    cout << "Введите отчество преподавателя: ";
    cin >> patronymic;
    cout << "Введите опыт работы преподавателя (в годах): ";
     while (!(cin >> experience)) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод. Пожалуйста, введите корректный опыт работы (в годах): ";
    }
    cin.ignore();
    cout << "Введите предмет преподавания: ";
    getline(cin, subject);

    Teacher teacher(name, surname, patronymic, experience, subject);

    int choice;
    do {
        cout << "\nМеню:" << endl;
        cout << "1. Добавить студента" << endl;
        cout << "2. Поставить оценку" << endl;
        cout << "3. Вывести список студентов" << endl;
        cout << "4. Вывести информацию о преподавателе" << endl;
        cout << "5. Выйти" << endl;
        cout << "Введите ваш выбор: ";
        cin >> choice;

        switch (choice) {
            case 1:
                teacher.addStudent();
                break;
            case 2:
                teacher.setGrade();
                break;
            case 3:
                teacher.printStudents();
                break;
            case 4:
                teacher.printTeacherInfo();
                break;
            case 5:
                cout << "Завершение программы..." << endl;
                break;
            default:
                cout << "Неверный выбор. Пожалуйста, введите число от 1 до 5." << endl;
                return 0;
        }
    } while (choice != 5);

    return 0;
}
