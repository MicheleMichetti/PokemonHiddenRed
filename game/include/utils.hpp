#pragma once

#include <bits/stdc++.h>
#include <stdint.h>

namespace utils {
struct Coordinate {
    int x;
    int y;
};

enum Direction : uint8_t {
    up = 0b00000001,
    down = 0b00000010,
    left = 0b00000100,
    right = 0b00001000,
    none = 0b00010000,
};

enum InteractionType : uint8_t {
    text_object = 0b00000001,
    text_human = 0b00000010,
    simple_choice = 0b00000100,
    multiple_choice = 0b00001000,
    collect_object = 0b00010000,
    movable_objects = 0b00100000,
    trigger = 0b01000000,
    trainer = 0b10000000
};

enum InteractionStatus : uint8_t {
    ENABLED = 0b00000001,
    INTERACTION_NEVER_HAPPENED = 0b00000010,
    IS_PLAYING = 0b00000100,
    INTERACTION_ENDED = 0b00001000,
    PLAYED_BIT1 = 0b00010000,
    PLAYED_BIT2 = 0b00100000,
    PLAYED_BIT3 = 0b01000000,
    PLAYED_BIT4 = 0b10000000

};

// read n-th bit
template <class T>
bool readBit(const T& field, const T& n);
// set n-th bit
template <class T>
void setBit(T& number, const T& n);
// clear n-th bit
template <class T>
void clearBit(T& number, const T& n);
// set n-th bit to
template <class T>
void setBitTo(T& number, const T& n, const bool& value);

// function to find the position of rightmost set bit
template <class T>
T getPosOfRightmostSetBit(T n);

// function to toggle the last m bits
template <class T>
T toggleLastKBits(T n, T k);

// function to increment a number by one by manipulating the bits
template <class T>
T incrementByOne(T n);

enum MapTypes : uint8_t { generic_building = 0b00000001, outside_world = 0b00000010, gym = 0b00000100, rocket_hideout = 0b00001000, cave = 0b00010000, dark_cave = 0b00100000 }

}  // namespace utils
