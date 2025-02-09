#pragma once

#include "../Config.h"

void get_students_by_percent(Student* in_students, unsigned& in_size, Student* out_students, unsigned& out_size, unsigned& percent,
	Compare compare = Compare::Descending);