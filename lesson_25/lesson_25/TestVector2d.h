#pragma once

#include <iostream>
#include <string>

#include "Vector2d.h"

std::string relativeStateToString(const VectorRelativeState& state)
{
	switch (state)
	{
	case VectorRelativeState::Identical:
		return "Identical";
	case VectorRelativeState::coDirected:
		return "coDirected";
	case VectorRelativeState::OppositeDirected:
		return "OppositeDirected";
	case VectorRelativeState::AcuteAngle:
		return "AcuteAngle";
	case VectorRelativeState::ObtuseAngle:
		return "ObtuseAngle";
	case VectorRelativeState::RightAngle:
		return "RightAngle";
	case VectorRelativeState::Invalid:
		return "Invalid";
	default:
		break;
	}
}


inline void TestVector2d()
{
	//Case 1:
	Vector2d vec1;
	std::cout << "Init vec1(no parameters): " << std::endl;
	std::cout << vec1 << std::endl;
	if (vec1[0] == 0 && vec1[1] == 0)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "All parameters are equal to 0 (correct operation)" << std::endl;
	}
	else
	{
		std::cout << "FIX!" << std::endl;
		std::cout << "Need to fix default constructor( Vector2d vec1; )" << std::endl;
	}
	std::cout << std::endl << std::endl;

	// Case 2:
	Vector2d vec2(10.f, -5.f);
	std::cout << "Init vec2(10.f, -5.f): " << std::endl;
	std::cout << vec2 << std::endl;
	if (vec2[0] == 10.f && vec2[1] == -5.f)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "As expected: {0;0}, {10;-5}" << std::endl;
	}
	else
	{
		std::cout << "FIX!" << std::endl;
		std::cout << "Need to fix the constructor with 2 variables( Vector2d vec2(10.f, -5.f); )" << std::endl;
	}
	std::cout << std::endl << std::endl;

	// Case 3:
	Vector2d vec3(3.f, -5.f, 10.f, 7.f);
	std::cout << "Init vec3(3.f, -5.f, 10.f, 7.f): " << std::endl;
	std::cout << vec3 << std::endl;
	if (vec3[0] == 7.f && vec3[1] == 12.f)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "As expected: {7;12}" << std::endl;
	}
	else
	{
		std::cout << "FIX!" << std::endl;
		std::cout << "Need to fix the constructor with 4 variables(  Vector2d vec3(3.f, -5.f, 10.f, 7.f); )" << std::endl;
	}
	std::cout << std::endl << std::endl;

	// Case 4:
	Vector2d vec4 = vec3 + vec2;
	std::cout << "vec4 = vec3 + vec2: " << std::endl;
	std::cout << vec4 << std::endl;
	if (vec4[0] == 17.f && vec4[1] == 7.f )
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "As expected: {17;7}" << std::endl;
	}
	else
	{
		std::cout << "FIX!" << std::endl;
		std::cout << "Need to fix the operator+" << std::endl;
	}
	std::cout << std::endl << std::endl;

	// Case 5:
	Vector2d vec5 = vec3 - vec2;
	std::cout << "vec5 = vec3 - vec2: " << std::endl;
	std::cout << vec5 << std::endl;
	if (vec5[0] == -3.f && vec5[1] == 17.f)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "As expected: {-3;17}" << std::endl;
	}
	else
	{
		std::cout << "FIX!" << std::endl;
		std::cout << "Need to fix the operator-" << std::endl;
	}
	std::cout << std::endl << std::endl;

	// Case 6:
	vec3 *= 2.f;
	std::cout << "vec3 *= 2.f: " << std::endl;
	std::cout << vec3 << std::endl;
	if (vec3[0] == 14.f && vec3[1] == 24.f)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "As expected: {14;24}" << std::endl;
	}
	else
	{
		std::cout << "FIX!" << std::endl;
		std::cout << "Need to fix the operator*=" << std::endl;
	}
	vec3 /= 2.f;
	std::cout << std::endl << std::endl;

	// Case 7:
	std::cout << "vec3()" << std::endl;
	std::cout << vec3 << std::endl;
	float magnitude = vec3();
	std::cout << "magnitude: " << magnitude << std::endl;
	if (magnitude >= 13.87 && magnitude <= 13.91)
	{
		std::cout << "Expected: 13.9" << std::endl;
		std::cout << "CORECT!" << std::endl;
	}
	else
	{
		std::cout << "FIX!" << std::endl;
		std::cout << "Need to fix the operator()" << std::endl;
	}
	std::cout << std::endl << std::endl;

	// Case 8:
	Vector2d vec6(1.f, 1.f, 2.f, 2.f);
	float dotProduct = vec3.dotProduct(vec6);
	std::cout << "vec3.dotProduct(vec6)" << std::endl;
	std::cout << vec3 << std::endl;
	std::cout << vec6 << std::endl;
	std::cout << "dotProduct: " << dotProduct << std::endl;
	if (dotProduct == 19)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "Expected: 19" << std::endl;
	}
	else
	{
		std::cout << "FIX!" << std::endl;
		std::cout << "vec3.dotProduct(vec6)" << std::endl;
	}
	std::cout << std::endl << std::endl;

	// Case 9:
	Vector2d vec7 = vec3.negate();
	std::cout << "vec3.negate()" << std::endl;
	std::cout << vec3 << std::endl;
	std::cout << vec7 << std::endl;
	if (vec7[0] == -7.f && vec7[1] == -12.f)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "As expected: {-7;-12}" << std::endl;
	}
	else
	{
		std::cout << "FIX!" << std::endl;
		std::cout << "vec3.negate()" << std::endl;
	}
	std::cout << std::endl << std::endl;

	// Case 10:
	std::cout << "vec3.getRelativeState(other):" << std::endl;

	//Vector2d vec8(3.f, -5.f, 10.f, 7.f); //->(7;12)
	//Vector2d vec8(7.f, 12.f, 14.f, 24.f); //-> (7;12)
	Vector2d vec8(7.f, 12.f); //-> (7;12)
	//Vector2d vec8(14.f, 24.f, 21.f, 36.f); //-> (7;12)
	// 
	//Vector2d vec3(10.f, 20.f, 40.f, 60.f);// ->(30;40)
	//Vector2d vec8(20.f, 40.f, 50.f, 80.f); //-> (30;40)
	std::cout << vec3 << std::endl;
	std::cout << vec8 << std::endl;
	std::cout << "Expected: Identical" << std::endl;
	if (vec3.getRelativeState(vec8) == VectorRelativeState::Identical)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "Identical" << std::endl;
	}
	else
	{
		std::cout << relativeStateToString(vec3.getRelativeState(vec8));
		std::cout << "FIX!" << std::endl;
	}
	std::cout << std::endl << std::endl;



	 //Case 11:
	//Vector2d vec9(6.f, -10.f, 20.f, 14.f);
	Vector2d vec9(1.5f, -2.5f, 5.f, 3.5f);
	std::cout << vec3 << std::endl;
	std::cout << vec9 << std::endl;
	std::cout << "Expected: coDirected" << std::endl;
	if (vec3.getRelativeState(vec9) == VectorRelativeState::coDirected)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "coDirected" << std::endl;
	}
	else
	{
		std::cout << relativeStateToString(vec3.getRelativeState(vec9));
		std::cout << "FIX!" << std::endl;
	}
	std::cout << std::endl << std::endl;


	// Case 12:
	//Vector2d vec10(10.f, 7.f, 3.f, -5.f); //->-7-12
	Vector2d vec10(20.f, 14.f, 6.f, -10.f);
	std::cout << vec3 << std::endl;
	std::cout << vec10 << std::endl;
	std::cout << "Expected: OppositeDirected" << std::endl;
	if (vec3.getRelativeState(vec10) == VectorRelativeState::OppositeDirected)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "OppositeDirected" << std::endl;
	}
	else
	{
		std::cout << relativeStateToString(vec3.getRelativeState(vec10));
		std::cout << "FIX!" << std::endl;
	}
	std::cout << std::endl << std::endl;

	// Case 13:
	//Vector2d vec11(3.f, -5.f, 12.f, 8.f);
	Vector2d vec11(3.f, -5.f, 11.f, 10.f);
	std::cout << vec3 << std::endl;
	std::cout << vec11 << std::endl;
	std::cout << "Expected: AcuteAngle" << std::endl;
	if (vec3.getRelativeState(vec11) == VectorRelativeState::AcuteAngle)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "AcuteAngle" << std::endl;
	}
	else
	{
		std::cout << relativeStateToString(vec3.getRelativeState(vec11));
		std::cout << "FIX!" << std::endl;
	}
	std::cout << std::endl << std::endl;

	// Case 14:
	//Vector2d vec12(3.f, -5.f, 8.f, -10.f);
	Vector2d vec12(3, -5, 2, -15);
	std::cout << vec3 << std::endl;
	std::cout << vec12 << std::endl;
	std::cout << "Expected: ObtuseAngle" << std::endl;
	if (vec3.getRelativeState(vec12) == VectorRelativeState::ObtuseAngle)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "ObtuseAngle" << std::endl;
	}
	else
	{
		std::cout << relativeStateToString(vec3.getRelativeState(vec12));
		std::cout << "FIX!" << std::endl;
	}
	std::cout << std::endl << std::endl;

	// Case 15:
	//Vector2d vec13(3.f, -5.f, -9.f, 2.f);
	Vector2d vec13(3.f, -5.f, 15.f, -12.f);
	std::cout << vec3 << std::endl;
	std::cout << vec13 << std::endl;
	std::cout << "Expected: RightAngle" << std::endl;
	if (vec3.getRelativeState(vec13) == VectorRelativeState::RightAngle)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "RightAngle" << std::endl;
	}
	else
	{
		std::cout << relativeStateToString(vec3.getRelativeState(vec13));
		std::cout << "FIX!" << std::endl;
	}
	std::cout << std::endl << std::endl;

	//Case 16:
	Vector2d vec14(1.f, 1.f);
	std::cout << "vec14.scale(3,4)" << std::endl;
	std::cout << vec14 << std::endl;
	vec14.scale(3, 4);
	std::cout << vec14 << std::endl;
	if (vec14[0] == 3.f && vec14[1] == 4.f)
	{
		std::cout << "CORECT!" << std::endl;
		std::cout << "As expected: {3;4}" << std::endl;
	}
	else
	{
		std::cout << "FIX!" << std::endl;
		std::cout << "vec14.scale()" << std::endl;;
	}
	std::cout << std::endl << std::endl;


	//Case 17:
	Vector2d vec15;
	std::cout << "cin >> vec14" << std::endl;
	std::cout << "Enter x y with space:" << ' ';
	std::cin >> vec15;
	std::cout << vec15 << std::endl;

	std::cout << std::endl << std::endl;
}