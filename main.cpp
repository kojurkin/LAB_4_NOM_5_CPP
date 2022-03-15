#include <iostream>

static const int MAX_SIZE = 50;

void sum_of_IJ(int array[MAX_SIZE][MAX_SIZE], int width, int height)
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            array[i][j] = i + j + 2;
        }
    }
};

int main()
{
    int array[MAX_SIZE][MAX_SIZE];
    int width, height;
    do
    {
        std::cout << "Enter width and height < " << MAX_SIZE;
        std::cin >> width >> height;
    } while (width > MAX_SIZE && height > MAX_SIZE);
    sum_of_IJ(array, width, height);
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}