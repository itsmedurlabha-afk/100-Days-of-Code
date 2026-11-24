#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int getDays(enum Month m) {
    switch (m) {
        case JANUARY:   return 31;
        case FEBRUARY:  return 28;  // Not handling leap years here
        case MARCH:     return 31;
        case APRIL:     return 30;
        case MAY:       return 31;
        case JUNE:      return 30;
        case JULY:      return 31;
        case AUGUST:    return 31;
        case SEPTEMBER: return 30;
        case OCTOBER:   return 31;
        case NOVEMBER:  return 30;
        case DECEMBER:  return 31;
        default:        return -1;
    }
}

int main() {
    for (enum Month m = JANUARY; m <= DECEMBER; m++) {
        printf("Month %d has %d days
", m, getDays(m));
    }
    return 0;
}
