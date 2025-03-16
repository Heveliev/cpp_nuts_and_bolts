// lesson_25.cpp --

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Vector.h"
#include "Vector2d.h"
// DEBUG
#include "TestVector2d.h"
//#define DEBUG_TEST_VECTOR2D
// END DEBUG

int main()
{
	// DEBUG
#ifdef DEBUG_TEST_VECTOR2D
	TestVector2d();
#endif // DEBUG


	sf::RenderWindow window(sf::VideoMode{ {1280,720} }, "Vector");

	Vector2d vec(30.f, -50.f, 100.f, 70.f);
	Vector2d vec2(140.f, 240.f, 210.f, 360.f); //-> Identical
	Vector2d vec3(60.f, -100.f, 200.f, 140.f); //-> coDirected
	Vector2d vec4(100.f, 70.f, 30.f, -50.f); //-> OppositeDirected
	Vector2d vec5(30.f, -50.f, 120.f, 80.f); //-> AcuteAngle
	Vector2d vec6(30.f, -50.f, 80.f, -100.f);//-> ObtuseAngle
	Vector2d vec7(30.f, -50.f, -90.f, 20.f);//-> RightAngle

	Vector2d vec8 = vec + vec6;
	Vector2d vec9 = vec4 + vec7;
	Vector2d vec10 = vec7;
	vec10 *= 2;




	std::cout << "vec2: " << relativeStateToString(vec.getRelativeState(vec2)) << std::endl;
	std::cout << "vec3: " << relativeStateToString(vec.getRelativeState(vec3)) << std::endl;
	std::cout << "vec4: " << relativeStateToString(vec.getRelativeState(vec4)) << std::endl;
	std::cout << "vec5: " << relativeStateToString(vec.getRelativeState(vec5)) << std::endl;
	std::cout << "vec6: " << relativeStateToString(vec.getRelativeState(vec6)) << std::endl;
	std::cout << "vec7: " << relativeStateToString(vec.getRelativeState(vec7)) << std::endl;


	Vector vecPrt(&window, &vec);
	Vector vecPrt2(&window, &vec2);
	Vector vecPrt3(&window, &vec3);
	Vector vecPrt4(&window, &vec4);
	Vector vecPrt5(&window, &vec5);
	Vector vecPrt6(&window, &vec6);
	Vector vecPrt7(&window, &vec7);

	Vector vecPrt8(&window, &vec8);
	Vector vecPrt9(&window, &vec9);
	Vector vecPrt10(&window, &vec10);



	sf::Clock frameRateClock;

	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
			{
				window.close();
			}
			if (auto keyPressedEvent = event->getIf<sf::Event::KeyPressed>())
			{
				if (keyPressedEvent->code == sf::Keyboard::Key::Escape)
				{
					window.close();
				}
			}

			if (const auto* resized = event->getIf<sf::Event::Resized>())
			{
				sf::FloatRect visibleArea({ 0.f, 0.f }, sf::Vector2f(resized->size));
				window.setView(sf::View(visibleArea));
			}
		}




		window.clear(sf::Color::Black);

		//update


		//draw

		vecPrt.draw();
		vecPrt2.draw();
		vecPrt3.draw();
		vecPrt4.draw();
		vecPrt5.draw();
		vecPrt6.draw();
		vecPrt7.draw();

		vecPrt8.draw();
		vecPrt9.draw();
		vecPrt10.draw();



		window.display();
	}

	return 0;
}