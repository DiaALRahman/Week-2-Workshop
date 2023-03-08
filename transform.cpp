#include <iostream>
#include <string>

std::string  reverseUltaBinary(std::string binaryToBeReversed)
{
    std::string fixedBinary; 
    // for (int i = -1; i <= -1*binaryToBeReversed.length(); i--)
    for (int i = binaryToBeReversed.length() -1; i >=0; i--)
    {
        fixedBinary += binaryToBeReversed[i]; 
    }
    return fixedBinary;
}

std::string decToBinary(int decNum)
{
    std::string ultaBinary = "";
    while  (decNum != 0)
    {
        int  remainder = decNum%2;
        decNum = decNum/2;
        ultaBinary += std::to_string(remainder);

    }
    return reverseUltaBinary(ultaBinary);
}

int main()
{
    std::cout<< decToBinary(75) <<std::endl;
    return  0;
}


