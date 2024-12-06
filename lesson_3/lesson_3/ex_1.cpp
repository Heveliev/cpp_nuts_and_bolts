// ex_1.cpp -- applications to translate seconds into days, hours, minutes, seconds

#include <iostream>

static void ex_1()
{
    int incoming_seconds;
    const int SECONDS_IN_MINUTE = 60;
    const int MINUTES_IN_HOUR = 60;
    const int HOURS_IN_DAY = 24;
    int seconds, minutes, hours, days;

    std::cout << "Enter the number of seconds:" << " ";
    std::cin >> incoming_seconds;
    seconds = (incoming_seconds % SECONDS_IN_MINUTE);
    minutes = (incoming_seconds / SECONDS_IN_MINUTE) % MINUTES_IN_HOUR;
    hours = (incoming_seconds / SECONDS_IN_MINUTE) / MINUTES_IN_HOUR % HOURS_IN_DAY;
    days = ((incoming_seconds / SECONDS_IN_MINUTE) / MINUTES_IN_HOUR) / HOURS_IN_DAY;

    std::cout << incoming_seconds << " " << "seconds =" << " "
        << days << " " << "days" << "," << " "
        << hours << " " << "hours" << "," << " "
        << minutes << " " << "minutes" << "," << " "
        << seconds << " " << "seconds" << std::endl;
}