
// Convert interger to string with fixed width
std::string to_string_fixed_width(const int line_number, const int width)
{
    std::ostringstream ss;
    ss << std::setw(width) << std::setfill('0') << line_number;
    std::string line_number_str{ss.str()};
    return line_number_str;
}

