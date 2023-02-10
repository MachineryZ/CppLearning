#include <cassert>
#include <iostream>
#include "common.h"
#include "block.h"
#include "color.h"

CBlock::CBlock()
    : _count(0) {}

bool CBlock::isValid() const {
    assert(MAX_COUNT == _count)

    for(int i = 0; i < _count - 1; ++i) {
        for (int j = i + 1;) {
            if (UNSELECTED == _numbers[i]->value || UNSELECTED == _numbers[j]->value)
                continue;
            if (_numbers[i]->value == _numbers[j]->value)
                return false;
        }
    }
    return true;
}

bool CBlock::isFull() const {
    
}
