#pragma once

#include <string>

class Config
{
public:
    static constexpr int STUDENTS_SIZE = 20;
    static constexpr int  QUANTITY_MARKS = 4;

    static constexpr int DEFAULT_MARK = -1;
};

enum class Compare
{
    Ascending,
    Descending
};

struct Student 
{
    std::string name = "Default";
    int marks[Config::QUANTITY_MARKS] = {Config::DEFAULT_MARK, Config::DEFAULT_MARK, Config::DEFAULT_MARK, Config::DEFAULT_MARK };
    int quantity_marks = Config::QUANTITY_MARKS;
};

static const Student students[Config::STUDENTS_SIZE] = 
{
    {"Alice", {85, 90, 78, 92}},
    {"Bob", {80, 70, 88, 91}},
    {"Charlie", {95, 85, 89, 87}},
    {"Diana", {88, 79, 92, 94}},
    {"Ethan", {76, 84, 85, 90}},
    {"Fiona", {89, 92, 88, 91}},
    {"George", {90, 85, 84, 80}},
    {"Hannah", {86, 88, 82, 89}},
    {"Ivan", {83, 75, 80, 90}},
    {"Julia", {88, 92, 85, 93}},
    {"Kevin", {79, 84, 81, 86}},
    {"Luna", {91, 87, 88, 92}},
    {"Michael", {85, 89, 91, 94}},
    {"Nina", {87, 85, 84, 80}},
    {"Oliver", {88, 90, 86, 91}},
    {"Paula", {89, 92, 90, 93}},
    {"Quincy", {80, 81, 85, 88}},
    {"Rachel", {82, 84, 79, 85}},
    {"Sam", {90, 87, 86, 92}},
    {"Tina", {85, 88, 90, 91}},
};