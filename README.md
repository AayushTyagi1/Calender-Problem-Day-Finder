# Calender-Problem-Day-Finder
This is the simplest way of finding day at any particular Date
For using this just download the code and run it on g++ compiler
LOGIC:
# How to calculate the day of the DATE.
0 odd day = Sunday,
1 odd day = Monday,
2 odd days = Tuesday
3 odd days = Wednesday,
4 odd days = Thursday,
5 odd days = Friday
6 odd days = Saturday

## FORMULA:
# f = k + [ (13m – 1)/5] + D+ [D/4] + [C/4] – 2 x C

k = date and [ ] = greatest integer

m = month number, starting from March = 1, April = 2, May =3
………………………. January = 11, February = 12.

If year is X1 X2 Y1 Y2 then C = X1 X2 and D = Y1 Y2.

If m = 11 or 12 i.e. January or February then D should be taken
as (D –1) instead of D.
