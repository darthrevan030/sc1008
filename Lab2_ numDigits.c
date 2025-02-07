int numDigits1(int num) {
    int count = 0;
    
    // Handle case of 0 separately
    if (num == 0) 
        return 1;
        
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

void numDigits2(int num, int *result) {
    *result = 0;
    
    // Handle case of 0 separately
    if (num == 0) {
        *result = 1;
        return;
    }
    
    while (num != 0) {
        (*result)++;
        num /= 10;
    }
}