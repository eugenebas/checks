#include "checks.hpp"
#include "test.h"
#include <exception>

void test_check_throw_false() {
    try {
        CHECK_THROW(false, std::exception());
        assert(false);
    } catch(std::exception){}
}

void test_check_throw_null() {
    try {
        CHECK_THROW(NULL, std::exception());
        assert(false);
    } catch(std::exception){}
}

void test_check_throw_nullptr() {
    try {
        CHECK_THROW(nullptr, std::exception());
        assert(false);
    } catch(std::exception){}
}

void test_check_throw_zero() {
    try {
        CHECK_THROW(nullptr, std::exception());
        assert(false);
    } catch(std::exception){}
}

struct TestStruct {
    operator bool() {
        return false;
    }
};

void test_check_throw_castable_struct() {
    try {
        CHECK_THROW(TestStruct(), std::exception());
        assert(false);
    } catch(std::exception){}
}

int main(int argc, char** argv) {
    TEST(test_check_throw_false);
    TEST(test_check_throw_null);
    TEST(test_check_throw_nullptr);
    TEST(test_check_throw_zero);
    TEST(test_check_throw_castable_struct);
    return 0;
}
