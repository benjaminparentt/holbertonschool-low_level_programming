/**
 * flip_bits - Returns the number of bits needed to flip to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int count = 0;
    unsigned long int xor_result = n ^ m;

    while (xor_result)
    {
        count += xor_result & 1;
        xor_result >>= 1;
    }

    return count;
}

