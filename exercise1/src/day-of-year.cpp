#include "day-of-year.hpp"
#include <array>

bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int dayOfYear(int month, int dayOfMonth, int year) {
    static constexpr std::array<int, 12> days_in_months = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    for (int i = 0; i < month - 1; ++i) {
        dayOfMonth += days_in_months[i];
    }

    if (month > 2 && is_leap_year(year)) {
        dayOfMonth += 1;
    }

    return dayOfMonth;
}
