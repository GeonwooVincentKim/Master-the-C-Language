#define PAYRATE 12.00
#define FIRST_PAY_RATE .15
#define NEXT_PAY_RATE .20
#define REST_RATE .25

#include <stdio.h>

int main() {
  int workHours = 0;
  printf("test: ");
  scanf("%d", &workHours);

  double grossPay = 0.0;
  double taxes = 0.0;
  double netPay = 0.0;

  if (workHours <= 40) {
    grossPay = workHours * PAYRATE;
  } else {
    grossPay = 40 * PAYRATE;
    
    double overTimePay = (workHours - 40) * (PAYRATE * 1.5);
    grossPay += overTimePay;
  }

  if (grossPay <= 300) {
    taxes = grossPay * FIRST_PAY_RATE;
  } else if (grossPay > 300 && grossPay <= 450) {
    taxes = 300 * FIRST_PAY_RATE;
    taxes += (grossPay - 300) * NEXT_PAY_RATE;
  } else if (grossPay > 450) {
    taxes = 300 * FIRST_PAY_RATE;
    taxes += 150 * NEXT_PAY_RATE;
    taxes += (grossPay - 450) * REST_RATE;
  }

  netPay = grossPay - taxes;

  printf("GrossPay: %.2f\n", grossPay);
  printf("Taxes: %.2f\n", taxes);
  printf("NetPay: %.2f\n", netPay);

  return 0;
}