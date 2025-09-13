// no.5 in sheet 0
float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}


// no.6 in sheet 0
int greatest(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}


// no.7 in sheet 0
char grade(float s1, float s2, float s3) {
    float avg = (s1 + s2 + s3) / 3;
    if (avg >= 90) return 'A';
    else if (avg >= 70) return 'B';
    else if (avg >= 50) return 'C';
    else return 'F';
}


// no.8 in sheet 0
int isEven(int n) {
    return n % 2 == 0;
}


// no.9 in sheet 0
int compare(int a, int b) {
    if (a == b) return 0; // equal
    else if (a > b) return 1; // a greater
    else return -1; // b greater
}


// no.10 in sheet 0
int triangleType(int a, int b, int c) {
    if (a == b && b == c) return 1;       // equilateral
    else if (a == b || b == c || a == c) return 2; // isosceles
    else return 3; // acute
}


// no.11 in sheet 0
float calculator(int a, int b, int choice) {
    switch (choice) {
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4: return (b != 0) ? (float)a / b : 0;
        default: return 0;
    }
}


// no.12 in sheet 0
void patternDecreasingStars() {
    for (int i = 7; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


// no.13 in sheet 0
void patternDiamond() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}


// no.14 in sheet 0
int sumNatural(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    return sum;
}


// no.15 in sheet 0
int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
