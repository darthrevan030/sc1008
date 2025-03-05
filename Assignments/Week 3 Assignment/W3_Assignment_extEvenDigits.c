int extEvenDigits1(int num) {
    int result = 0;
    int multiplier = 1;
    int hasEven = 0;
    
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            result = digit * multiplier + result;
            multiplier *= 10;
            hasEven = 1;
        }
        num /= 10;
    }
    
    return hasEven ? result : -1;
}

void extEvenDigits2(int num, int *result) {
    *result = 0;
    int multiplier = 1;
    int hasEven = 0;
    
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            *result = digit * multiplier + *result;
            multiplier *= 10;
            hasEven = 1;
        }
        num /= 10;
    }
    
    if (!hasEven) *result = -1;
}