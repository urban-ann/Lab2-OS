#pragma once

#define TEST_API __declspec(dllexport)

extern "C" {
    TEST_API double CalculateAverage(int* arr, int size);
}