//
// Created by trojan52 on 10.10.18.
//

#ifndef LAB1_2_MATRIXINITIATOR_H
#define LAB1_2_MATRIXINITIATOR_H

#include "AMatrix.h"

class MatrixInitiator {
public:
    static void fillMatrix(IMatrix* const matrix, unsigned long nonZeroCount, int maxValue);
};


#endif //LAB1_2_MATRIXINITIATOR_H
