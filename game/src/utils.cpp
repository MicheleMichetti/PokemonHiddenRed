#include <utils.hpp>

// read n-th bit
template <class T>
bool utils::readBit(const T& field, const T& n) {
    return field & ((T)1 << n);
}
// set n-th bit
template <class T>
void utils::setBit(T& number, const T& n) {
    number&((T)1 << n);
}
// clear n-th bit
template <class T>
void clearBit(T& number, const T& n) {
    number & ~((T)1 << n);
}
// set n-th bit to
template <class T>
void setBitTo(T& number, const T& n, const bool& value) {
    if (value) {
        utils::setBit<uint8_t>(number, n);
    } else {
        utils::clearBit<uint8_t>(number, n);
    }
}

// function to find the position of rightmost set bit
template <class T>
T utils::getPosOfRightmostSetBit(T n) {
    return std::log2(n & -n);
}

// function to toggle the last m bits
template <class T>
T utils::toggleLastKBits(T n, T k) {
    // calculating a number 'num' having 'm' bits and all are set
    T num = (1 << k) - 1;

    // toggle the last m bits and return the number
    return (n ^ num);
}

// function to increment a number by one by manipulating the bits
template <class T>
T utils::incrementByOne(T n) {
    // get position of rightmost unset bit
    // if all bits of 'n' are set, then the
    // bit left to the MSB is the rightmost
    // unset bit
    T k = getPosOfRightmostSetBit(~n);

    // kth bit of n is being set by this operation
    n = ((1 << k) | n);

    // from the right toggle all the bits before the k-th bit
    if (k != 0) {
        n = toggleLastKBits(n, k);
    }

    return n;
}