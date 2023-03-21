/**
 *   @file: prog2.cc
 * @author: Allison McKee
 *   @date: 02-07-2023
 *  @brief: bicycle company payment plans
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    const double RATE = 5.50;
    const double COMMISSION_ONE = 0.01;
    const double COMMISSION_TWO = 0.15;
    double sales, plan_one, plan_two;

    cout << fixed <<setprecision(2);

    // weekly sales
    cout << "Enter the weekly sales amount > ";
    cin >> sales;

    // amount of sales
    cout << "Amount of sales $" << sales << endl;

    // plan one calculation
    plan_one = (RATE * 40) + (COMMISSION_ONE * sales);
    cout << "Plan 1 pays $" << plan_one << endl;

    // plan two calculation
    plan_two = (COMMISSION_TWO * sales);
    cout << "Plan 2 pays $" << plan_two << endl;

    // if-else
    if (plan_one > plan_two)
    {
        cout << "Plan 1 is better" << endl;
    }
    else
    {
        cout << "Plan 2 is better" << endl;
    }
    
    return 0;
}