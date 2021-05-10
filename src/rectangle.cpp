#include "../header/rectangle.hpp"

Rectangle::Rectangle() {}

Rectangle::Rectangle(int w, int h) {
    if (w > 0) {
        width = w;
    }
    else {
        throw "Cannot have negative or zero width";
    }

    if (h > 0) {
        height = h;
    }
    else {
        throw "Cannot have negative or zero height";
    }
}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::get_width() {
    if (width > 0) {
        return this->width;
    }
    else {
        throw "Cannot have negative or zero width";
    }
}

int Rectangle::get_height() {
    if (height > 0) {
        return this->height;
    }
    else {
        throw "Cannot have negative or zero height";
    }
}

int Rectangle::area() {
    return this->width * this->height;
}

int Rectangle::perimeter() {
    return (this->width * 2) + (this->height * 2);
}
