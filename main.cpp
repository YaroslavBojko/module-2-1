#include <iostream>

int main() {
    int lap = 4;
    int engine = 254;
    int wheels = 93;
    int steerinWheel = 49;
    int wind = 21;
    int rain = 17;
    int speed = engine + wheels + steerinWheel - wind - rain;

    std::cout << "===================" << std::endl;
    std::cout << "Super race. Lap " << lap << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "Schumacher (" << speed << ")" << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "Driver: Schumacher" << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "Equipment" << std::endl;
    std::cout << "Engine: +" << engine << std::endl;
    std::cout << "Wheels: +" << wheels << std::endl;
    std::cout << "Steerin Wheel: +" << steerinWheel << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "Bad weather actions" << std::endl;
    std::cout << "Wind: -" << wind << std::endl;
    std::cout << "Rain: -" << rain << std::endl;
}
