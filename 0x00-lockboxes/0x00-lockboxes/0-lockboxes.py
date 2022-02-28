#!/usr/bin/python3
"""a method that determines if all the boxes can be opened."""


def canUnlockAll(boxes):
   
    keysList = [0]
    for key in keysList:
        for k in boxes[key]:
            if k not in keysList and k < len(boxes):
                keysList.append(k)
    for i in range(len(boxes)):
        if i not in keysList:
            return False
    return True
