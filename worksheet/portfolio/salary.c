#include <stdio.h>

/*
* Portfolio submission
* Name: oscar hazel
* ID: 201941466
*/

int main(void)
{

    // define and initialise variables for the problem data 
    //*
    //for submission
    float salary=36250;
    float ni=0.08f;
    float tax=0.15f;
    //*/

    /*
    //always leaves £12500
    float salary=36250;
    float ni=0.f;
    float tax=1.f;
    //*/

    /*
    //reduces by 10%
    float salary=36250;
    float ni=0.1f;
    float tax=0.f;
    //*/

    // calculate the deductions and final take-home salary
    float niContrib=salary*ni; //amount to reduce salary by
    float salary2=salary-niContrib; //salary2 will be the take home salary after both reductions
    float taxContrib=0;
    if(salary2>12500)
    {
        float taxable=salary2-12500; //amount of money that the tax applies to
        taxContrib=taxable*tax; //amount to reduce salary2 by
        salary2-=taxContrib;
    }

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",niContrib);
    printf("Tax contribution £%.2f\n",taxContrib);
    printf("Take home salary £%.2f\n",salary2);
    return 0;
}