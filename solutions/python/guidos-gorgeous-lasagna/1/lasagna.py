"""Functions used in preparing Guido's gorgeous lasagna.

Learn about Guido, the creator of the Python language:
https://en.wikipedia.org/wiki/Guido_van_Rossum

This is a module docstring, used to describe the functionality
of a module and its functions and/or classes.
"""

EXPECTED_BAKE_TIME = 40
#TODO: define your EXPECTED_BAKE_TIME (required) and PREPARATION_TIME (optional) constants below.


#TODO: Remove 'pass' and complete the 'bake_time_remaining()' function below.
def bake_time_remaining():
    """bake time remaining const !!"""
    EXPECTED_BAKE_TIME = 40


#TODO: Define the 'preparation_time_in_minutes()' function below.
def bake_time_remaining(x: int):
    """The time remaining for baking"""
    TIME_REMAINING = EXPECTED_BAKE_TIME - x
    return TIME_REMAINING
# To avoid the use of magic numbers (see: https://en.wikipedia.org/wiki/Magic_number_(programming)), you should define a PREPARATION_TIME constant.
# You can do that on the line below the 'EXPECTED_BAKE_TIME' constant.
# This will make it easier to do calculations, and make changes to your code.
def preparation_time_in_minutes(number_of_layers: int):
    """The total time for preparation in mintues"""
    time_to_prepare = number_of_layers * 2
    return time_to_prepare 

def elapsed_time_in_minutes(number_of_layers: int,elapsed_bake_time: int):
    """Calculate the total elapsed minutes."""
    y = number_of_layers * 2
    value = y + elapsed_bake_time
    return value 

    


#TODO: define the 'elapsed_time_in_minutes()' function below.


# TODO: Remember to go back and add docstrings to all your functions
#  (you can copy and then alter the one from bake_time_remaining.)
