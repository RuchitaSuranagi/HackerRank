#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the extraLongFactorials function below.
def extraLongFactorials(n):
    f=1
    i=1
    while i<=n:
        f = f*i
        i+=1
    print(f)


if __name__ == '__main__':
    n = int(input())

    extraLongFactorials(n)
