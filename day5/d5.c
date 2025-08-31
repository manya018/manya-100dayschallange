Write a program to calculate simple and compound interest for given principal, rate, and time.
  
  #include<stdio.h>
#include<math.h>

int main(){
    float p , r , t;
    float SI , CI , amount;
    // SI= simple interest & CI= compound interest
    printf("Enter Principal amount: ");
    scanf("%f", &p);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &r);

    printf("Enter Time (in years): ");
    scanf("%f", &t);

    // Simple Interest
SI = (p* r* t) / 100;
    // Compound Interest
    amount = p * pow((1 + r / 100), t);
 CI = amount - p;
  
//pow () is used When time is a fractional value (e.g., 2.5 years, 3.75 years):
  
 printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f\n", CI);
    return 0;
}
