 
 #include <stdio.h>

int main() {
    float basic_salary = 5000;
    float DA, HRA, MA, gross_salary;

    DA = 0.70 * basic_salary;
    HRA = 0.15 * basic_salary;                                                
    MA = 0.05 * basic_salary;          

    gross_salary = basic_salary + DA + HRA + MA;

    printf("Basic salary: %.2f\n", basic_salary);
    printf("DA (70%%): %.2f\n", DA);
    printf("HRA (15%%): %.2f\n", HRA);
    printf("MA (5%%): %.2f\n", MA);
    printf("Gross salary: %.2f\n", gross_salary);

    return 0;
}
