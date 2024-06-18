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

//read n-th bit
template <class T>
bool readBit(T field, T n) {
    return field & ((T)1<<n);
}
//TODO below have to be template func
// function to find the position of rightmost set bit
uint8_t getPosOfRightmostSetBit(uint8_t n) {
    return std::log2(n & -n);
}
 
// function to toggle the last m bits
uint8_t toggleLastKBits(uint8_t n, uint8_t k) {
    // calculating a number 'num' having 'm' bits and all are set
    uint8_t num = (1 << k) - 1;
 
    // toggle the last m bits and return the number
    return (n ^ num);
}
 
// function to increment a number by one by manipulating the bits
uint8_t incrementByOne(uint8_t n) {
    // get position of rightmost unset bit
    // if all bits of 'n' are set, then the
    // bit left to the MSB is the rightmost
    // unset bit
    uint8_t k = getPosOfRightmostSetBit(~n);
 
    // kth bit of n is being set by this operation
    n = ((1 << k) | n);
 
    // from the right toggle all the bits before the k-th bit
    if (k != 0) {
        n = toggleLastKBits(n, k);
    }

    return n;
}

}  // namespace utils
