#include <sstream>
#include <iomanip>

// Convert interger to string with fixed width
std::string to_string_fixed_width(const int number, const int width)
{
    std::ostringstream ss;
    ss << std::setw(width) << std::setfill('0') << number;
    std::string number_str{ss.str()};
    return number_str;
}

