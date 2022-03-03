#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Иван е програмист в американска компания и работи от вкъщи средно N дни в месеца като изкарва
    средно по M долара на ден. В края на годината Иван получава бонус, който е равен на 2.5 месечни
    заплати. От спечеленото през годината му се удържат 25% данъци. Напишете програма, която да пресмята,
    колко е чистата средна печалба на Иван на ден в лева, тъй като той харчи изкараното в България. Приема
    се, че в годината има точно 365 дни. Курсът на долара спрямо лева ще се чете от конзолата.  */

    int workingDays;
    float USDPerDay, USD;

    printf("Enter the average working days per month: ");
    scanf("%d", &workingDays);
    printf("Enter the average income per day in USD: ");
    scanf("%f", &USDPerDay);
    printf("Enter the current amount USD to BGN: ");
    scanf("%f", & USD);

    float incomePerMonth = workingDays * USDPerDay;
    float incomePerYear = incomePerMonth * 12;
    incomePerYear += incomePerMonth * 2.5;
    incomePerYear -= incomePerYear * 0.25;
    float totalBGNPerYear = incomePerYear * USD;
    float averageBGNPerDay = totalBGNPerYear / 365;

    printf("The average profit in BGN per day is: %g", averageBGNPerDay);

    return 0;
}
