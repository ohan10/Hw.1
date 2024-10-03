#include <stdio.h>

int main() {
    float total_distance_miles, gas_price_per_gallon, distance_per_gallon, parking_fee, toll_fee;
    float total_cost, gas_needed;

    // User inputs
    printf("Enter total miles driven per day (miles): ");
    scanf_s("%f", &total_distance_miles);
    printf("Enter gas price per gallon: ");
    scanf_s("%f", &gas_price_per_gallon);
    printf("Enter miles per gallon (miles/gallon): ");
    scanf_s("%f", &distance_per_gallon);
    printf("Enter daily parking fee: ");
    scanf_s("%f", &parking_fee);
    printf("Enter daily toll fee: ");
    scanf_s("%f", &toll_fee);

    // Calculate gas needed and total cost
    gas_needed = total_distance_miles / distance_per_gallon;
    total_cost = (gas_needed * gas_price_per_gallon) + parking_fee + toll_fee;

    // Display result
    printf("Total driving cost for the day: %.2f\n", total_cost);

    return 0;
}