// compare_by_average_grade.cpp -- function to sort array of students by average grade best/worst

#include <algorithm>

#include "../Config.h"

#include "../average_mark/average_mark.h"

bool compareByAverageGradeDesc(const Student& a, const Student& b) {
    return average_mark(a, a.quantity_marks) > average_mark(b, b.quantity_marks);
}

bool compareByAverageGradeAsc(const Student& a, const Student& b) {
    return average_mark(a, a.quantity_marks) < average_mark(b, b.quantity_marks);
}

void compare_by_average_grade(unsigned& in_size, Student* sorted, Compare compare)
{
    if (compare == Compare::Descending)
    {
        std::sort(sorted, sorted + in_size, compareByAverageGradeDesc);
    }
    else
    {
        std::sort(sorted, sorted + in_size, compareByAverageGradeAsc);
    }

}
    