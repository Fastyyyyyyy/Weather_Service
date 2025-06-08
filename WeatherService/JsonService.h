#pragma once
#include "Service.h"
#include <nlohmann/json.hpp>
#include <fstream>
#include <stdexcept>

class JsonService : public Service {
public:
    Weather getWeather(std::string s) override;
    ~JsonService() override {}
};