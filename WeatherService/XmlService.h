#pragma once
#include "Service.h"
#include <pugixml.hpp>
#include <stdexcept>

class XmlService : public Service {
public:
    Weather getWeather(std::string s) override;
    ~XmlService() override {}
};
