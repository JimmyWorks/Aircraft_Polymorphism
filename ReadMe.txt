The input file for program 4 is "input.txt. 

The contents are:
_________


n 0
n 0, 2, 6
n 0, 4, 5
n 0, 2
n 1, 3, 5
n 1, 3, 4, 5, 2, 2
n 2, 2.2, 400, 5000
n 2, 5.1, 500, 3000, 4, 4
n 3, 5, 2
n 3, 6, 3, 2, 2
p 0
p 1
p 3
p 5
p 6
p 9
p 11
Debug this line

_________
Comments:

The first ten lines simply create a new aircraft and store them in the vector
within the program which holds Aircraft pointers.  The first four will create
objects of base class Aircraft with 0, 2, 2, and 1 argument, testing for
default arguments with none or some arguments passed to the constructor.  This is
similarly tested for the other created objects for the derived classes, some with
few arguments passed and some fully defined.  

The eleventh line, "p 0", will test for calls that ask for a fully printed inventory of
all aircrafts created and defined within the database vector.  This will print
out every aircraft stored and will state the numeric index for that location, the type,
and all the base-characteristics and specialized-characteristics of that craft.
This will reveal any errors in the construction of these aircrafts.

The five lines following this calls specific numbered indexes to call the print function
for the aircraft in that specific index.

The last two lines are debugging line.  "p 11" tests what will happen should a print-call
is executed to a vector that does not exist.  "Debug this line" tests to see how the
program handles improperly written lines in the input file.