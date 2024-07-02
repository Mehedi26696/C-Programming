#include <stdio.h>
int main()
{
  char input;
  float kmsTomiles = 0.621371;
  float inchesTofeets = 0.0833333;
  float cmsToinches = 0.393701;
  float poundsTokgs = 0.453592;
  float inchesTometers = 0.0254;
  float first, second;

  while (1)
  {
    printf("Enter the input character.\n q. for quit\n 1.kms to miles\n 2.inches to feets\n 3.cms to inches\n 4.pounds to kgs\n 5.inches to meters\n");
    scanf("%c", &input);
    switch (input)
    {
    case 'q':
      printf("Quit this program");
      goto end;
      break;
    case '1':
      printf("Enter the quantity in terms of first unit\n");
      scanf("%f", &first);
      second = first * kmsTomiles;
      printf("%.2f kms is equal to %.2f miles\n", first, second);
      break;
    case '2':
      printf("Enter the quantity in terms of first unit\n");
      scanf("%f", &first);
      second = first * inchesTofeets;
      printf("%.2f inches is equal to %.2f feets\n", first, second);
      break;
    case '3':
      printf("Enter the quantity in terms of first unit\n");
      scanf("%f", &first);
      second = first * cmsToinches;
      printf("%.2f cms is equal to %.2f inches\n", first, second);
      break;
    case '4':
      printf("Enter the quantity in terms of first unit\n");
      scanf("%f", &first);
      second = first * poundsTokgs;
      printf("%.2f pounds is equal to %.2f kgs\n", first, second);
      break;
    case '5':
      printf("Enter the quantity in terms of first unit\n");
      scanf("%f", &first);
      second = first * inchesTometers;
      printf("%.2f inches is equal to %.2f meters\n", first, second);
      break;

    default:
      printf("Default now\n");
      break;
    }
  }
end:
  return 0;
}
