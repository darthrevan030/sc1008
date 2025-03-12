int digitPos1(int num, int digit) {
    int position = 1;
    
    while (num > 0) {
        if (num % 10 == digit)
            return position;
        position++;
        num /= 10;
    }
    return 0;
}

void digitPos2(int num, int digit, int *result) {
    *result = 0;
    int position = 1;
    
    while (num > 0) {
        if (num % 10 == digit) {
            *result = position;
            return;
        }
        position++;
        num /= 10;
    }
}