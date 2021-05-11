#include "../header/rectangle.hpp"

Rectangle::Rectangle() {}

Rectangle::Rectangle(int w, int h) {
    if (w > 0) {
        width = w;
    }
    else {
        width = 1;
    }

    if (h > 0) {
        height = h;
    }
    else {
        height = 1;
    }
}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::get_width() {
    return this->width;
}

int Rectangle::get_height() {
    return this->height;
}

int Rectangle::area() {
    return this->width * this->height;
}

int Rectangle::perimeter() {
    return (this->width * 2) + (this->height * 2);
}
