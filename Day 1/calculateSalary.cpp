// WAP that demonstrates function overloading to calculate the salary of employees at different levels in company hierarchy. Implement overloaded functions to compute salary for intern(basic stipend), regular employee (base salary + bonuses) , manager(base salary + bonuses + performance incentives)

#include <iostream>
using namespace std;
void Salary(int Stipend)
{
    cout << "Stipend of intern: " << Stipend << endl;
}
void Salary(int baseSalary, int bonus)
{
    cout << "Salary of Employee: " << baseSalary + bonus << endl;
}

void Salary(int managerSalary, int bonuses, int incentives)
{
    cout << "Salary of Manager: " << managerSalary + bonuses + incentives << endl;
}

int main()
{
    int Stipend;
    cout << "Enter the Stipend of Intern: " << endl;
    cin >> Stipend;
    Salary(Stipend);

    int baseSalary;
    cout << "Enter base salary of employee: " << endl;
    cin >> baseSalary;

    int bonus;
    cout << "Enter bonus of employee: " << endl;
    cin >> bonus;

    Salary(baseSalary, bonus);

    int managerSalary;
    cout << "Enter salary of manager: " << endl;
    cin >> managerSalary;

    int bonuses;
    cout << "Enter bonus of manager: " << endl;
    cin >> bonuses;

    int incentives;
    cout << "Enter incentives of manager: " << endl;
    cin >> incentives;

    Salary(managerSalary, bonuses, incentives);

    return 0;
}