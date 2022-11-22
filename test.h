bool isPrimeNumber (int Num) {
    if (Num <= 1) return false;
    for(int i = 2; i <= Num/2; i++) {
        if (Num % i == 0) return false;
    }
    return true;
}