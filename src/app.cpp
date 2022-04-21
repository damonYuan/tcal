// A simple program that computes the square root of a number
#include <iostream>
#include <tcal/all.hpp>
#include <httplib.h>

int main(int argc, char* argv[])
{
  std::cout << tcal::GetLibVersion() << std::endl;
  
  httplib::Server svr;
  svr.Get("/hi", [](const httplib::Request &, httplib::Response &res) {
    res.set_content("Hello World!", "text/plain");
  });
  svr.listen("0.0.0.0", 8080);
}