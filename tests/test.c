#include "../checks.h"
#include "test.h"

void test_check_ret_false() {
    CHECK_RET(false);
    assert(false);
}

void test_check_ret_null() {
    CHECK_RET(NULL);
    assert(false);
}

void test_check_ret_zero() {
    CHECK_RET(0);
    assert(false);
}

bool check_false_ret_true() {
    CHECK_RET_VAL(false, true);
    return false;
}

void test_check_ret_val_false() {
    assert(check_false_ret_true);
}

bool check_null_ret_true() {
    CHECK_RET_VAL(NULL, true);
    return false;
}

void test_check_ret_val_null() {
    assert(check_null_ret_true);
}

bool check_zero_ret_true() {
    CHECK_RET_VAL(0, true);
    return false;
}

void test_check_ret_val_zero() {
    assert(check_zero_ret_true);
}

int main(int argc, char** argv) {
    TEST(test_check_ret_false);
    TEST(test_check_ret_null);
    TEST(test_check_ret_zero);
    TEST(test_check_ret_val_false);
    TEST(test_check_ret_val_null);
    TEST(test_check_ret_val_zero);
    return 0;
}
