// compare_by_average_grade.cpp -- function to sort array of students by average grade best/worst

#include <algorithm>

#include "../Config.h"

#include "../average_mark/average_mark.h"

bool compareByAverageGradeDesc(const Student& a, const Student& b) {
    return average_mark(a, Config::QUANTITY_MARKS) > average_mark(b, Config::QUANTITY_MARKS);
}

bool compareByAverageGradeAsc(const Student& a, const Student& b) {
    return average_mark(a, Config::QUANTITY_MARKS) < average_mark(b, Config::QUANTITY_MARKS);
}

void compare_by_average_grade(Student* in_students, unsigned& in_size, Student* sorted, Compare compare)
{
    std::copy(in_students, in_students + in_size, sorted);

    if (compare == Compare::Descending)
    {
        std::sort(sorted, sorted + in_size, compareByAverageGradeDesc);
    }
    else
    {
        std::sort(sorted, sorted + in_size, compareByAverageGradeAsc);
    }

}
    