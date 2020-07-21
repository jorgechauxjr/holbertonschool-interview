#!/usr/bin/python3

def canUnlockAll(boxes):
    num_of_boxes = len(boxes)
    list_of_keys = boxes[0]
    box_locked = [False] + [True] * (num_of_boxes - 1)
    for key in list_of_keys:
     if ((key < num_of_boxes) and (box_locked[key] == True)):
        box_locked[key] = False
        list_of_keys.extend(boxes[key])
    return not any(box_locked)
