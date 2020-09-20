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


### Example 1:
Find the day of the week on (i) 16th July, 1776 (ii) 12th January, 1979.

• Solution:
(i) 16th July, 1776
f = k + [ (13m – 1)/5] + D+ [D/4] + [C/4] – 2 x C
So here k = 16, m = July = 5, C = 17 and D = 76
f = 16 + [ (13x5 – 1)/5] + 76+ [76/4] + [17/4] – 2 x 17
[76/4] =[19x4] = 19, [17/4] = [4x4+1] = 4(greatest integer)
= 16 +12 + 76 +19 +4 – 34 = 93, as it is greater than 7,
so remainder after dividing by 7 = 93/7 =(7x13 + 2) = remainder is 2, so 2 = Tuesday.


(ii) 12th January, 1979
f = k + [ (13m – 1)/5] + D+ [D/4] + [C/4] – 2 x C
k = 12, m = 11 = January, for 11 and 12 D should be (D – 1).
For 1979 C = 19 and D = 79, D – 1 = 79 – 1 = 78
f = 12 + [ (13x11 – 1)/5] + 78+ [78/4] + [19/4] – 2 x 19
f = 12 + 28 + 78 +19 +4 – 38 = 103,
dividing by 7 (103/7) = 14x7 + 5 = remainder is 5 i.e. Friday (not Thursday)


### Example 2
Find the day of the week on 1st July 2004

f = k + [ (13m – 1)/5] + D+ [D/4] + [C/4] – 2 x C

So here k = 1, m = July = 5, C = 20 and D = 04

f = 1 + [ (13x5 – 1)/5] + 04+ [04/4] + [20/4] – 2 x 20
= 1 +12 +4 +1 +5 -40
= 23 – 40 = – 17

Whenever a minus sign appears, discard it and find how much is added to the number so that it is divisible by 7.
In this case 17 + ( 4) = 21 so 4 odd days i.e., 1st July 2004 is Thursday
