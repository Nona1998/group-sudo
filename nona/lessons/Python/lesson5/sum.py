#!/usr/bin/python3
import unittest

def sum(a,b):
    '''Returns the sum of given 2 numbers'''
    return a+b

class SumUnittest(unittest.TestCase):
    '''Tests for "sum" function'''
    def test_sum_of_integers(self):
        '''Tests the sum of integers'''
        self.assertEqual(sum(5,12),17,"The sum of 5 and 12 is 17")
    def test_sum_of_strings(self):
        '''Tests the sum of strings'''
        self.assertEqual(sum("no","na"),"nona","The sum of 'no' and 'na' is 'nona'")
    def test_sum_of_negative_numbers(self):
        '''Tests the sum of negative numbers'''
        self.assertEqual(sum(-3,-1),-4,"The sum of -3 and -1 is -4")
    def test_sum_of_floats(self):
        '''Tests the sum of floats'''
        self.assertEqual(sum(6.8,-7.3),-0.5,"The sum of 6.8 and -7.3 is -0.5")

if __name__=="__main__":
    unittest.main()

