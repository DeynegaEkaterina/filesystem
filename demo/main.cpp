  #include <Analyzer.hpp>
  #include <iostream>


int main() {
  std::string path = "/home/ekaterina/CLionProjects/lab-04-filesystem/misc/ftp";
  Analyzer t(path);
  t.analyze_directory(path, std::cout);
  t.show_information(std::cout);
}