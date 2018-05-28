#!/usr/bin/python3
import unittest

def is_prime(a):
    '''Return True if "a" is prime'''
    if a <= 0:
        return False
    for i in range(2,a):
        if a % i == 0:
            return False
    return True

class PrimeUnittest(unittest.TestCase):
    '''Tests for is_prime function'''
    def test_1_is_prime(self):
        '''Is 1 correctly determined to be prime?'''
        self.assertTrue(is_prime(1),"1 is prime")
    def test_2_is_prime(self):
        '''Is 2 correctly determined to be prime?'''
        self.assertTrue(is_prime(2),"2 is prime")
    def test_0_is_not_prime(self):
        '''Is 0 correctly determined not to be prime?'''
        self.assertFalse(is_prime(0),"0 is not prime")
    def test_negative_numbers(self):
        '''Is negative numbers correctly determined not to be prime?'''
        for i in range(-1,-11,-1):
            self.assertFalse(is_prime(i))

if __name__=='__main__':
    unittest.main()
