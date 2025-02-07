// lesson_17.cpp -- function "main" project launch

#include <iostream>

#include "Vector2d.h"

int main()
{
    Vector2d* vec1 = new Vector2d(1.0f, 1.0f);

    Vector2d* vec2 = new Vector2d(2.0f, 2.0f);


    Vector2d* vec3 = new Vector2d{ *vec1 + *vec2 };


    std::cout << "vec1 + vec2 =" << ' ' << *vec3 << std::endl;

    *vec3 = *vec2 - *vec1;

    std::cout << "vec2 - vec1 =" << ' ' << *vec3 << std::endl;


    *vec1 *= 5;

    std::cout << "vec1 * 5 =" << ' ' << *vec1 << std::endl;

    Vector2d vec4;
    vec4 = *vec1;

    std::cout << "vec4[0] =" << ' ' << vec4[0] << ';';
    std::cout << ' ';
    std::cout << "vec4[1] =" << ' ' << vec4[1] << ';';
    std::cout << std::endl;

    std::cout << "Length vec1:" << ' ' << vec1->operator()() << std::endl;
    std::cout << "Length vec1:" << ' ' << vec4() << std::endl;


    std::cout << "Instances(4):" << ' ' << Vector2d::getInstances() << std::endl;

    delete vec1;
    delete vec2; 
    delete vec3;

    std::cout << "Instances(1):" << ' ' << Vector2d::getInstances() << std::endl;

    Vector2d vec5;

    std::cout << "Enter x y with space:" << ' ';
    std::cin >> vec5;
    std::cout << vec5 << std::endl;

    std::cout << std::endl << std::endl;
    

    return 0;

    
}
