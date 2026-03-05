/* write a program to calculate gross salary of a person whose basic salary is 5000/- .
   He is also geting some allowance like DA,HRA,MA.
        a) DA is 70% of the basic salary
        b) HRA is 15% of the basic salary
        c) MA is 5% of the basic salary */

#include<stdio.h>
int main(){
    float basic_salary = 5000;
    float DA,HRA,MA,Gross_salary;
    DA = 0.70*basic_salary;
    HRA = 0.15 * basic_salary;
    MA = 0.05 * basic_salary;
    Gross_salary = basic_salary + DA + HRA + MA;
    printf("Basic salary : %f\n",basic_salary);
    printf("DA(70%%): %f\n",DA);
    printf("HRA(15%%) : %f\n",HRA);
    printf("MA(5%%) : %f\n",MA);
    printf("Gross salary : %f",Gross_salary );
    return 0;
}


