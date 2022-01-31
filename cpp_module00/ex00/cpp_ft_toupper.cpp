char ft_toupper_cpp(const char sy) {
    if (sy <= 'z' && sy >= 'a')
        return sy - ('z' - 'Z');
    return sy;
}