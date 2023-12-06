#include <stdio.h>

int main() {
  enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
  enum Company myCompany = GOOGLE;
  enum Company myCompany1 = XEROX;
  enum Company myCompany2 = EBAY;

  printf("%d", myCompany);
  printf("%d", myCompany1);
  printf("%d", myCompany2);

  return 0;
}
