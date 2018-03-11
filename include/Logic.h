#ifndef LOGIC_H
#define LOGIC_H

#include <iostream>
#include <vector>

struct Point{
    uint64_t x;
    uint64_t y;
};

class Logic
{
    public:
        Logic(const uint64_t &size, const uint64_t &initPointsCount);
        ~Logic();
        std::vector<std::vector<uint64_t>> getMatrix(){ return m_matrix; };
        uint64_t getMatrixSize(){ return m_size; };
        void setMove(const int &direction);
        void _debugPrintMap();
    private:
        uint64_t m_size = 0;
        uint64_t m_initPointsCount = 0;
        std::vector<std::vector<uint64_t>> m_matrix;
        void initialize();
        int getRandValue();
        Point getRandPosition();
};

#endif // LOGIC_H
