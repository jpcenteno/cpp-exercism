#include "robot_name.h"

#include <random>
#include <string>

namespace robot_name {

    std::mt19937 gen(42); // PRNG, Always with same seed, this is an exercise.
    std::uniform_int_distribution<> letter_distribution(0, 'Z' - 'A');
    std::uniform_int_distribution<> digit_distribution(0, 9);

    std::string generate_name() {

        std::string name;

        name.push_back('A' + letter_distribution(gen));
        name.push_back('A' + letter_distribution(gen));
        name.push_back('0' + digit_distribution(gen));
        name.push_back('0' + digit_distribution(gen));
        name.push_back('0' + digit_distribution(gen));

        return name;

    }

    robot::robot() {
        _name = generate_name();
    }

    std::string robot::name() const {
        return _name;
    }

    void robot::reset() {
        _name = generate_name();
    }

}  // namespace robot_name
