#!/usr/bin/python3
def copyPaste(h):
    return h + h

def minOperations(n):
    h, cont = 1, 0

    while(h < n):
        cont = cont + 1
        h = copyPaste(h)
    return cont * 2
