#import numpy as np

def dropped_frames(string):

# If contact is 1 that means there is a contact 
# If contact is 0 that menas there is not contact
    index = 0;compare = 0
    length = len(string)

    for i in range(len(string)):
        Split_Dataset = string.split("\n")[i]
        print(Split_Dataset)
        compare +=len(Split_Dataset)

        compare+=1 #for the loss of the new lines
    
        for x in Split_Dataset.split():
            if x.isdigit():
                arr[index]=x
                index+=1

                if index == 2:index = 0

        print(arr)
        if compare >= length:
            max_itteration = arr[0]
            print("\n")
            return(1)

#d
               

if __name__ == "__main__":
    # Data set 1w
    arr = [0,0]
    touch_data = """Frame: Frame #   17 % 0xFFFF  position: 0x0F000000  status: 0x0000 contacts: 1\nFrame: Frame #   18 % 0xFFFF  position: 0x0F000000  status: 0x0000  contacts: 1\nFrame: Frame #   19 % 0xFFFF  position: 0x0F000000  status: 0x0000  contacts: 1\nFrame: Frame #   21 % 0xFFFF  position: 0x0F000000  status: 0x0000  contacts: 0\nFrame: Frame #   22 % 0xFFFF  position: 0x0F000000  status: 0x0000  contacts: 0\nFrame: Frame #   25 % 0xFFFF  position: 0x0F000000  status: 0x0000  contacts: 1\nFrame: Frame #   26 % 0xFFFF  position: 0x0F000000  status: 0x0000  contacts: 1\nFrame: Frame #   27 % 0xFFFF  position: 0x0F000000  status: 0x0000  contacts: 1"""
    dropped_frames(touch_data)


    # Data set 2
    touch_data_2 = """Frame: Frame #  255 % 0xFFFF  position: 0x0F000000  status: 0x0000 contacts: 1\nFrame: Frame #    1 % 0xFFFF  position: 0x0F000000  status: 0x0000  contacts: 1\nFrame: Frame #    2 % 0xFFFF  position: 0x0F000000  status: 0x0000  contacts: 0\nFrame: Frame #    3 % 0xFFFF  position: 0x0F000000  status: 0x0000  contacts: 1\nFrame: Frame #    4 % 0xFFFF  position: 0x0F000000  status: 0x000F"""
    dropped_frames(touch_data_2)





#https://forum.arduino.cc/t/ili9341-touch-question-pauls-touch-lib-for-irq-example/583004 for status
# Use System of Serial_read.py to impliment this design Maybe
# USe split of at newline 

# To notice the loss of data this is depicted by frame Number making sure the next is a increment by 1 
# As well 


#Explaination:
'''
For this I'd like to split at each line and if a new line is not detected then ...
After each split, I'd index through each and check if the string value is a valid one
bettween 0 and 255 from this, if the values skip an index then it is also wrong.
Also if the contact is 0, then 

'''









""" Extra Credit 

2) Bonus: The frame number is 1 byte. How does your program handle frame number rollover?
"""

""" Since there are 8 bits in a byte in representation of our number of frames would go down by a sigificant amount




Is a byte 255 or 256?
A byte is defined as 8-bits and can represent values from 0 to 255, or 2 to the power of 8 different values. A byte represents 256 different values. So that's it. A byte is a unit of storage in a computer which contains 8-bits and can store 256 different values: 0 to 255.

"""