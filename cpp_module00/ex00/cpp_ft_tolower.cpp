char ft_tolower_cpp(const char sy) {
    if (sy <= 'Z' && sy >= 'A')
        return sy - ('Z' - 'z');
    return sy;
}