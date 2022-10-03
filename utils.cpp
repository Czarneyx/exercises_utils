#include <iostream>

int Random(int _min, int _max) {

    return rand() % (_max - _min) + _min; 

}


void Swap(int &_value1, int &_value2) {

    int _tmp = _value1;
    _value1 = _value2;
    _value2 = _tmp;

}

void Short(int *_array, int _length) {

    for(int i = 0; i < _length; i++)
        Swap(_array[i], _array[MinIndex(_array, i, _length)]);

}

int MinIndex(int *_array, int _start, int _length) {

    int _index = _start;
    
    for(int i = _index+1; i < _length; i++) 
        if(_array[i] < _array[_index])
            _index = i;

    return _index;

}

void FillRandomly(int *_array, int _min, int _max, int _length) {

    for(int i = 0; i < _length; i++) 
        _array[i] = Random(_min, _max);

}

void UserFillArray(int *_array, int _length) {

    for(int i = 0; i < _length; i++) {
        
        std::cout << "Enter the value n " << i+1 << " of the array: ";
        std::cin >> _array[i]; 

    }

}

int GetBufferInput(char *_buffer, int _maxLength) {

    int _length = 0;

    for(int i = 0; i < _maxLength; i++) {

        char _tmp = std::getchar();

        if((int)_tmp == 10)
            break;

        _buffer[i] = _tmp;
        _length++;

    }

    return _length;

}

void PrintArray(int *_array, int _length) {

    std::cout << "[";
    for(int i = 0; i < _length; i++) {

        std::cout << _array[i] << ((i != _length-1) ? (", ") : (""));

    }
    std::cout << "]" << std::endl;

}

void ShuffleArray(int *_array, int _length) {

    for(int i = 0; i < _length; i++)
        _array[i] = _array[Random(0,_length-1)];


}

void CopyArray(char *_arrayCopy, char *_arrayBase, int _length) {

    for(int i = 0; i < _length; i++)
        _arrayCopy[i] = _arrayBase[i];

}

int MaxIndex(int *_array, int _length) {

    int index = 0;

    for(int i = 1; i < _length; i++) 
        if(_array[i] > _array[index])
            index = i;

    return index;

}

int MaxValue(int *_array, int _length) {

    int _max = _array[0];
    for(int i = 1; i < _length; i++) 
        if(_array[i] > _max)
            _max = _array[i];

    return _max;

}

bool ArrayContains(int *_array, int _value, int _length) {

    for(int i = 0; i < _length; i++) 
        if(_array[i] == _value) 
            return true;

    return false;

}

int ArraySum(int *_array, int _length) {

    int _sum = 0;

    for(int i = 0; i < _length; i++) 
        _sum += _array[i];

    return _sum;

}

int Count(int *_array, int _value, int _length) {

    int _n = 0;
    for(int i = 0; i < _length; i++) 
        if(_array[i] == _value)
            _n++;

    return _n;

}

bool IsPalindrome(char *_array, int _length) {

    for(int i = 0; i < (_length/2 + _length%2); i++)
        if(_array[i] != _array[(_length-1)-i]) 
            return false;

    return true;

}

void FillRandomlyMatrix10(int _matrix[][10], int _min, int _max, int _length) {

    for(int y = 0; y < _length; y++) 
        for(int x = 0; x < _length; x++)
            _matrix[x][y] = Random(_min, _max);

}

void PrintMatrix10(int _matrix[][10], int _length) {

    for(int y = 0; y < _length; y++) 
        PrintArray(_matrix[y], _length);

}

void GetDiagonalMatrix10(int _matrix[][10], int *_array, int _length) {

    for(int i = 0; i < _length; i++) 
        _array[i] = _matrix[i][i];

}

int Pow(int _base, int _exponent) {

    if(_exponent == 1)
        return _base;

    return _base * Pow(_base, _exponent-1);

}

int Factorial(int number) {

    if(number == 1)
        return 1;

    return number * Factorial(number-1);

}

int Fibonacci(int _number) {

    if(_number == 0)
        return 0;
    
    if(_number == 1)
        return 1;

    return Fibonacci(_number-1)+Fibonacci(_number-2);

}
