#include <cmath>
#include <algorithm>

using namespace std;

double calcAngle(int hours, int minutes) {
    if (hours < 1 || hours > 12) {
        throw "Invalid hours value";
    }
    if (minutes < 0 || minutes > 59) {
        throw "Invalid minutes value";
    }

    constexpr int APH_H = 360 / 12; // Угол часовой стрелки за час
    constexpr double APM_H = APH_H / 60.0; // Угол часовой стрелки за минуту
    constexpr int APM_M = 360 / 60; // Угол минутной стрелки за минуту

    double angle = hours * APH_H;
    if (minutes) {
        angle += minutes * APM_H;
        angle = abs(angle - (minutes * APM_M));
    }
    angle = min(angle, 360 - angle);
    return angle;
}
