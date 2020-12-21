// Copyright 2020 Your Name <your_email>

#include <gtest/gtest.h>
#include "Analyzer.hpp"
#include <boost/filesystem.hpp>

TEST(Example, Check) {
    boost::filesystem::path path_to_ftp =
        "/home/ekaterina/CLionProjects/lab-04-filesystem/misc/ftp";
    Analyzer test(path_to_ftp);
    test.show_information(std::cout);
    test.analyze_directory(path_to_ftp, std::cout);
EXPECT_TRUE(true);
}
