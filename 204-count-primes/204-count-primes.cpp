class Solution {
public:
    bitset<10000001> Primes;
    void SieveOfEratosthenes(int n)
    {
        Primes[0] = 1;
        for (int i = 3; i*i <= n; i += 2) {
            if (Primes[i / 2] == 0) {
                for (int j = 3 * i; j <= n; j += 2 * i)
                    Primes[j / 2] = 1;
            }
        }
    }

    int countPrimes(int n) 
    {
         int count=0;
         SieveOfEratosthenes(n);
         for (int i = 1; i < n; i++) 
         {
            if (i == 2)
                count++;
            else if (i % 2 == 1 && Primes[i / 2] == 0)
                count++;
         }
        return count;
    }
};