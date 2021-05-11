#ifndef __RECTANGLE_TEST_HPP__
#define __RECTANGLE_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(Constructor, width3_height3) {
    Rectangle* rect1 = new Rectangle(3, 3);
    EXPECT_EQ(rect1->get_width(), 3);
    EXPECT_EQ(rect1->get_height(), 3);
}

TEST(Constructor, width0_height5) {
    Rectangle* rect1 = new Rectangle(0, 5);
    EXPECT_EQ(rect1->get_width(), 1);
    EXPECT_EQ(rect1->get_height(), 5);
}

TEST(Constructor, widthneg1_heightneg4) {
    Rectangle* rect1 = new Rectangle(-1, -4);
    EXPECT_EQ(rect1->get_width(), 1);
    EXPECT_EQ(rect1->get_height(), 1);
}

TEST(Perimeter, width3_height3) {
    Rectangle* rect1 = new Rectangle(3, 3);
    EXPECT_EQ(rect1->perimeter(), 12);
}

#endif //__RECTANGLE_TEST_HPP__
