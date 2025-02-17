#pragma once

#include <string>

class Attribute
{
    private:
        std::string _name;
        int         _baseValue;
        int         _modifiedValue;
    public:
        Attribute(const std::string& name, int baseVal) : _name(name), _baseValue(baseVal), _modifiedValue(baseVal) {}
};