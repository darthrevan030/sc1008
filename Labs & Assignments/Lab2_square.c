int square1(int num) {
    int sum = 0;
    int odd = 1;
    
    for (int i = 0; i < num; i++) {
        sum += odd;
        odd += 2;
    }
    return sum;
}

void square2(int num, int *result) {
    *result = 0;
    int odd = 1;
    
    for (int i = 0; i < num; i++) {
        *result += odd;
        odd += 2;
    }
}