#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "sput.h"
#include "power.h"
#include "exercises.h"

#define PI 3.14159265358979323846

static void test_power1(void) {
    sput_fail_unless(power1(2, 0) == 1, "power1(2, 0)");
    printf("Expected result: 1, actual result: %d\n", power1(2, 0));
    sput_fail_unless(power1(2, 1) == 2, "power1(2, 1)");
    printf("Expected result: 2, actual result: %d\n", power1(2, 1));
    sput_fail_unless(power1(2, 2) == 4, "power1(2, 2)");
    printf("Expected result: 4, actual result: %d\n", power1(2, 2));
    sput_fail_unless(power1(2, 3) == 8, "power1(2, 3)");
    printf("Expected result: 8, actual result: %d\n", power1(2, 3));
}

static void test_power2(void) {
    sput_fail_unless(power2(2, 0) == 1, "power2(2, 0)");
    printf("Expected result: 1, actual result: %d\n", power2(2, 0));
    sput_fail_unless(power2(2, 1) == 2, "power2(2, 1)");
    printf("Expected result: 2, actual result: %d\n", power2(2, 1));
    sput_fail_unless(power2(2, 2) == 4, "power2(2, 2)");
    printf("Expected result: 4, actual result: %d\n", power2(2, 2));
    sput_fail_unless(power2(2, 3) == 8, "power2(2, 3)");
    printf("Expected result: 8, actual result: %d\n", power2(2, 3));
}

static void test_power3(void) {
    sput_fail_unless(power3(2, 0) == 1, "power3(2, 0)");
    printf("Expected result: 1, actual result: %d\n", power3(2, 0));
    sput_fail_unless(power3(2, 1) == 2, "power3(2, 1)");
    printf("Expected result: 2, actual result: %d\n", power3(2, 1));
    sput_fail_unless(power3(2, 2) == 4, "power3(2, 2)");
    printf("Expected result: 4, actual result: %d\n", power3(2, 2));
    sput_fail_unless(power3(2, 3) == 8, "power3(2, 3)");
    printf("Expected result: 8, actual result: %d\n", power3(2, 3));
}

static void test_power4(void) {
    sput_fail_unless(power4(2, 0) == 1, "power4(2, 0)");
    printf("Expected result: 1, actual result: %d\n", power4(2, 0));
    sput_fail_unless(power4(2, 1) == 2, "power4(2, 1)");
    printf("Expected result: 2, actual result: %d\n", power4(2, 1));
    sput_fail_unless(power4(2, 2) == 4, "power4(2, 2)");
    printf("Expected result: 4, actual result: %d\n", power4(2, 2));
    sput_fail_unless(power4(2, 3) == 8, "power4(2, 3)");
    printf("Expected result: 8, actual result: %d\n", power4(2, 3));
}

static void test_factorial(void) {
    sput_fail_unless(factorial(0) == 1, "factorial(0)");
    printf("Expected result: 1, actual result: %d\n", factorial(0));
    sput_fail_unless(factorial(1) == 1, "factorial(1)");
    printf("Expected result: 1, actual result: %d\n", factorial(1));
    sput_fail_unless(factorial(2) == 2, "factorial(2)");
    printf("Expected result: 2, actual result: %d\n", factorial(2));
    sput_fail_unless(factorial(3) == 6, "factorial(3)");
    printf("Expected result: 6, actual result: %d\n", factorial(3));
    sput_fail_unless(factorial(4) == 24, "factorial(4)");
    printf("Expected result: 24, actual result: %d\n", factorial(4));
}

static void test_ordered_subsets(void) {
    sput_fail_unless(ordered_subsets(5, 1) == 5, "ordered_subsets(5, 1)");
    printf("Expected result: 5, actual result: %d\n", ordered_subsets(5, 1));
    sput_fail_unless(ordered_subsets(5, 2) == 20, "ordered_subsets(5, 2)");
    printf("Expected result: 20, actual result: %d\n", ordered_subsets(5, 2));
    sput_fail_unless(ordered_subsets(5, 3) == 60, "ordered_subsets(5, 3)");
    printf("Expected result: 60, actual result: %d\n", ordered_subsets(5, 3));
    sput_fail_unless(ordered_subsets(5, 4) == 120, "ordered_subsets(5, 4)");
    printf("Expected result: 120, actual result: %d\n", ordered_subsets(5, 4));
    sput_fail_unless(ordered_subsets(5, 5) == 120, "ordered_subsets(5, 5)");
    printf("Expected result: 120, actual result: %d\n", ordered_subsets(5, 5));
}

static void test_binomial(void) {
    sput_fail_unless(binomial(5, 1) == 5, "binomial(5, 1)");
    printf("Expected result: 5, actual result: %d\n", binomial(5, 1));
    sput_fail_unless(binomial(5, 2) == 10, "binomial(5, 2)");
    printf("Expected result: 10, actual result: %d\n", binomial(5, 2));
    sput_fail_unless(binomial(5, 3) == 10, "binomial(5, 3)");
    printf("Expected result: 10, actual result: %d\n", binomial(5, 3));
    sput_fail_unless(binomial(5, 4) == 5, "binomial(5, 4)");
    printf("Expected result: 5, actual result: %d\n", binomial(5, 4));
    sput_fail_unless(binomial(5, 5) == 1, "binomial(5, 5)");
    printf("Expected result: 1, actual result: %d\n", binomial(5, 5));
}

static void test_cosine(void) {
    int n = 15;
    printf("\n\nTesting cosine\n\n");

    printf("Calculating cosine of 0 radians\n");
    printf("Calling standard library cos function, result = %.8f\n", cos(0));
    printf("Calling cosine function.\n");
    for (int i = 1; i <= n; i ++) {
        printf("# terms = %d, result = %.8f\n", i, cosine(0, i));
    }
    sput_fail_unless(cosine(0, n) == cos(0), "cosine(0, n)");
    printf("Expected result: %.8f, actual result: %.8f\n", cos(0), cosine(0, n));
    printf("\n");

    printf("Calculating cosine of PI/4 radians\n");
    printf("Calling standard library cos function, result = %.8f\n", cos(PI / 4));
    printf("Calling cosine function\n");
    for (int i = 1; i <= n; i ++) {
        printf("# terms = %d, result = %.8f\n", i, cosine(PI / 4, i));
    }
    sput_fail_unless(cosine(PI / 4, n) == cos(PI / 4), "cosine(PI/4, n)");
    printf("Expected result: %.8f, actual result: %.8f\n", cos(PI / 4), cosine(PI / 4, n));
    printf("\n");

    printf("Calculating cosine of PI/2 radians\n");
    printf("Calling standard library cos function, result = %.8f\n", cos(PI / 2));
    printf("Calling cosine function\n");
    for (int i = 1; i <= n; i ++) {
        printf("# terms = %d, result = %.8f\n", i, cosine(PI / 2, i));
    }
    sput_fail_unless(cosine(PI / 2, n) == cos(PI / 2), "cosine(PI/2, n)");
    printf("Expected result: %.8f, actual result: %.8f\n", cos(PI / 2), cosine(PI / 2, n));
    printf("\n");

    printf("Calculating cosine of PI radians\n");
    printf("Calling standard library cos function, result = %.8f\n", cos(PI));
    printf("Calling cosine function\n");
    for (int i = 1; i <= n; i ++) {
        printf("# terms = %d, result = %.8f\n", i, cosine(PI, i));
    }
    sput_fail_unless(cosine(PI, n) == cos(PI), "cosine(PI, n)");
    printf("Expected result: %.8f, actual result: %.8f\n", cos(PI), cosine(PI, n));
    printf("\n");
}

int main(void) {
    printf("Running test harness for SYSC 2006 Winter 2018 Lab 2\n\n");
    sput_start_testing();

    sput_enter_suite("Testing power1()");
    sput_run_test(test_power1);
    sput_leave_suite();

    if (sput_get_return_value() == EXIT_FAILURE) {
        printf("Tests for other functions won't be run until power1 " "passes all tests.\n");
        sput_finish_testing();
        return sput_get_return_value();
    }

    sput_enter_suite("Testing power2()");
    sput_run_test(test_power2);
    sput_leave_suite();

    if (sput_get_return_value() == EXIT_FAILURE) {
        printf("Tests for other functions won't be run until power2 " "passes all tests.\n");
        sput_finish_testing();
        return sput_get_return_value();
    }

    sput_enter_suite("Testing power3()");
    sput_run_test(test_power3);
    sput_leave_suite();

    if (sput_get_return_value() == EXIT_FAILURE) {
        printf("Tests for other functions won't be run until power2 " "passes all tests.\n");
        sput_finish_testing();
        return sput_get_return_value();
    }

    sput_enter_suite("Testing power4()");
    sput_run_test(test_power4);
    sput_leave_suite();

    if (sput_get_return_value() == EXIT_FAILURE) {
        printf("Tests for other functions won't be run until power4 " "passes all tests.\n");
        sput_finish_testing();
        return sput_get_return_value();
    }

    sput_enter_suite("Exercise 1: factorial()");
    sput_run_test(test_factorial);
    sput_leave_suite();

    if (sput_get_return_value() == EXIT_FAILURE) {
        printf("Tests for remaining exercises won't be run until factorial "
                       "passes all tests.\n");
        sput_finish_testing();
        return sput_get_return_value();
    }

    sput_enter_suite("Exercise 2: ordered_subsets()");
    sput_run_test(test_ordered_subsets);
    sput_leave_suite();

    if (sput_get_return_value() == EXIT_FAILURE) {
        printf("Tests for remaining exercises won't be run until ordered_subsets "
                       "passes all tests.\n");
        sput_finish_testing();
        return sput_get_return_value();
    }


    sput_enter_suite("Exercise 3: binomial()");
    sput_run_test(test_binomial);
    sput_leave_suite();

    if (sput_get_return_value() == EXIT_FAILURE) {
        printf("Tests for remaining exercises won't be run until binomial "
                       "passes all tests.\n");
        sput_finish_testing();
        return sput_get_return_value();
    }


    sput_enter_suite("Exercise 4: cosine()");
    sput_run_test(test_cosine);
    sput_leave_suite();

    sput_finish_testing();
    return sput_get_return_value();
}
