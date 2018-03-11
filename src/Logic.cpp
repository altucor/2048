#include "Logic.h"
#include <ctime>
#include <cstdlib>

Logic::Logic(const uint64_t &size, const uint64_t &initPointsCount)
    : m_size(size),
    m_initPointsCount(initPointsCount)
{
    std::srand(unsigned(std::time(0)));

    std::vector<uint64_t> row(m_size, 0);
    for(uint64_t i=0; i<m_size; i++){
        m_matrix.push_back(row);
    }

    initialize();
    //getRandPosition();
    //ctor
}

Logic::~Logic()
{
    //dtor
}

void Logic::setMove(const int &direction)
{
    //
}

void Logic::initialize()
{
    for(uint64_t i=0; i<m_initPointsCount; i++){
        Point point = getRandPosition();
        m_matrix[point.x][point.y] = getRandValue();
    }
}

int Logic::getRandValue()
{
    int randMask = std::rand() % 2;
    if(randMask){
        return 2;
    } else {
        return 4;
    }
}

Point Logic::getRandPosition()
{
    Point newPoint;
    newPoint.x = std::rand() % m_size;
    newPoint.y = std::rand() % m_size;
    return newPoint;
}

void Logic::_debugPrintMap()
{
    for(uint64_t i = 0; i<m_size; i++){
        for(uint64_t j = 0; j<m_size; j++){
            std::cout << m_matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
}
