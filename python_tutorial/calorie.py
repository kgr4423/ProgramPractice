print("What date is it today?")
date = input()
print("Breakfast calories?")
cal1 = int(input())
print("Lunch calories?")
cal2 = int(input())
print("Dinner calories?")
cal3 = int(input())
print("Snack calories?")
cal4 = int(input())
sum = cal1 + cal2 + cal3 + cal4
print("Calorie content for " + date + ": " + str(sum))
