#include<stdio.h>
int main()
{
    float basic_pay,net_pay,house_rent;
    printf("Enter Basic pay: ");
    scanf("%f", &basic_pay);
    if(basic_pay<=250000)
    {
        house_rent = 0.3*basic_pay;
        printf("House Rent: %f\n", house_rent);
        net_pay = basic_pay + house_rent;
        printf("Net Pay: %f\n", net_pay);
    }
    else if((basic_pay>250000 )&& (basic_pay<=400000))
    {
        house_rent = 0.4*basic_pay;
        printf("House Rent: %f\n", house_rent);
        net_pay = basic_pay + house_rent;
        printf("Net Pay: %f\n", net_pay);
    }
    else
    {
        house_rent = 0.5*basic_pay;
        printf("House Rent: %f\n", house_rent);
        net_pay = basic_pay + house_rent;
        printf("Net Pay: %f\n", net_pay);
        return 0;
    } 
}  