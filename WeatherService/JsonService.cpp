#include "JsonService.h"

using nlohmann::json;

Weather JsonService::getWeather(std::string s) {
    std::ifstream fin(s);
    if (!fin) throw std::runtime_error("Ошибка открытия файла");

    json j;
    j = json::parse(fin);

    std::string city = j["name"];
    double lon = j["coord"]["lon"];
    double lat = j["coord"]["lat"];
    double temperature = j["main"]["temp"];
    std::string weather = j["weather"][0]["description"];
    double windSpeed = j["wind"]["speed"];
    int clouds = j["clouds"]["all"];

    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}