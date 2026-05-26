#include <stdio.h>
#include <math.h>

/*
 * CombinedCTutorial.c
 * A single structured C program that consolidates all examples from the C Tutorial folder.
 * Each example is implemented as a separate function with comments and a menu-driven interface.
 */

void addNumbers(void);
void subtractNumbers(void);
void multiplyNumbers(void);
void divideNumbers(void);
void computeAverage(void);
void computePercentage(void);
void cubeNumber(void);
void squareArea(void);
void circleArea(void);
void rectanglePerimeter(void);
void powerNumber(void);
void asciiConversion(void);
void caseCheckUpperLower(void);
void gradeMarks(void);
void largestOfThree(void);
void smallestOfThree(void);
void primeCheck(void);
void primeRange(void);
void printNumbersFor(void);
void printNumbersWhile(void);
void printNumbersDoWhile(void);
void printMultiplicationTable(void);
void weekdaySwitch(void);
void divisibleByTwo(void);

int main(void)
{
    int choice;

    do {
        printf("\n=== C Tutorial Examples Menu ===\n");
        printf("1. Add two numbers\n");
        printf("2. Subtract two numbers\n");
        printf("3. Multiply two numbers\n");
        printf("4. Divide two numbers\n");
        printf("5. Compute average of three numbers\n");
        printf("6. Compute percentage\n");
        printf("7. Compute cube of a number\n");
        printf("8. Compute square area\n");
        printf("9. Compute circle area\n");
        printf("10. Compute rectangle perimeter\n");
        printf("11. Compute power (c^b)\n");
        printf("12. ASCII code conversion\n");
        printf("13. Check upper / lower case letter\n");
        printf("14. Grade marks\n");
        printf("15. Largest of three numbers\n");
        printf("16. Smallest of three numbers\n");
        printf("17. Prime number check\n");
        printf("18. Prime numbers in range\n");
        printf("19. Print numbers with for loop\n");
        printf("20. Print numbers with while loop\n");
        printf("21. Print numbers with do-while loop\n");
        printf("22. Print multiplication table\n");
        printf("23. Weekday using switch\n");
        printf("24. Check if number is divisible by 2\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addNumbers(); break;
            case 2: subtractNumbers(); break;
            case 3: multiplyNumbers(); break;
            case 4: divideNumbers(); break;
            case 5: computeAverage(); break;
            case 6: computePercentage(); break;
            case 7: cubeNumber(); break;
            case 8: squareArea(); break;
            case 9: circleArea(); break;
            case 10: rectanglePerimeter(); break;
            case 11: powerNumber(); break;
            case 12: asciiConversion(); break;
            case 13: caseCheckUpperLower(); break;
            case 14: gradeMarks(); break;
            case 15: largestOfThree(); break;
            case 16: smallestOfThree(); break;
            case 17: primeCheck(); break;
            case 18: primeRange(); break;
            case 19: printNumbersFor(); break;
            case 20: printNumbersWhile(); break;
            case 21: printNumbersDoWhile(); break;
            case 22: printMultiplicationTable(); break;
            case 23: weekdaySwitch(); break;
            case 24: divisibleByTwo(); break;
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please choose a valid option.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}

void addNumbers(void)
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("The sum is: %d\n", a + b);
}

void subtractNumbers(void)
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("The difference is: %d\n", a - b);
}

void multiplyNumbers(void)
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("The product is: %d\n", a * b);
}

void divideNumbers(void)
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        printf("The quotient is: %d\n", a / b);
    }
}

void computeAverage(void)
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    printf("Average of a, b, c is: %.2f\n", (a + b + c) / 3.0);
}

void computePercentage(void)
{
    float dividend, divisor;
    printf("Enter dividend: ");
    scanf("%f", &dividend);
    printf("Enter divisor: ");
    scanf("%f", &divisor);
    if (divisor == 0.0f) {
        printf("Divisor cannot be zero.\n");
    } else {
        printf("Percentage = %.2f%%\n", 100.0f * (dividend / divisor));
    }
}

void cubeNumber(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The cube of %d is: %d\n", n, n * n * n);
}

void squareArea(void)
{
    int a;
    printf("Enter side length of square: ");
    scanf("%d", &a);
    printf("Area of square is: %d\n", a * a);
}

void circleArea(void)
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area of circle is: %.2f\n", 3.14f * radius * radius);
}

void rectanglePerimeter(void)
{
    int a, b;
    printf("Enter length: ");
    scanf("%d", &a);
    printf("Enter width: ");
    scanf("%d", &b);
    printf("Perimeter of rectangle is: %d\n", 2 * (a + b));
}

void powerNumber(void)
{
    float c, b;
    printf("Enter number c: ");
    scanf("%f", &c);
    printf("Enter power b: ");
    scanf("%f", &b);
    printf("The answer is: %.2f\n", pow(c, b));
}

void asciiConversion(void)
{
    int ascii;
    char character;

    printf("Enter ASCII code (integer): ");
    scanf("%d", &ascii);
    printf("Character for ASCII %d is: %c\n", ascii, (char)ascii);

    printf("Enter a character: ");
    scanf(" %c", &character);
    printf("ASCII code for '%c' is: %d\n", character, (int)character);
}

void caseCheckUpperLower(void)
{
    char ch;
    printf("Enter character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a lowercase letter.\n", ch);
    } else {
        printf("'%c' is not an English alphabet letter.\n", ch);
    }
}

void gradeMarks(void)
{
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Not valid. Please enter 0 to 100.\n");
    } else if (marks < 30) {
        printf("Grade C\n");
    } else if (marks < 70) {
        printf("Grade B\n");
    } else if (marks < 90) {
        printf("Grade A\n");
    } else {
        printf("Grade A+\n");
    }
}

void largestOfThree(void)
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("Largest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest number is: %d\n", b);
    } else {
        printf("Largest number is: %d\n", c);
    }
}

void smallestOfThree(void)
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && a <= c) {
        printf("Smallest number is: %d\n", a);
    } else if (b <= a && b <= c) {
        printf("Smallest number is: %d\n", b);
    } else {
        printf("Smallest number is: %d\n", c);
    }
}

void primeCheck(void)
{
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}

void primeRange(void)
{
    int start, end, i, j, isPrime;
    printf("Enter starting number of range: ");
    scanf("%d", &start);
    printf("Enter ending number of range: ");
    scanf("%d", &end);

    if (end < start) {
        printf("Invalid range. Make sure end is greater than or equal to start.\n");
        return;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        if (i <= 1) {
            continue;
        }
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void printNumbersFor(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        printf("%d\n", i);
    }
}

void printNumbersWhile(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int i = 0;
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }
}

void printNumbersDoWhile(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= n);
}

void printMultiplicationTable(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

void weekdaySwitch(void)
{
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Not a valid day number.\n"); break;
    }
}

void divisibleByTwo(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("%d is divisible by 2.\n", a);
    } else {
        printf("%d is not divisible by 2.\n", a);
    }
}
