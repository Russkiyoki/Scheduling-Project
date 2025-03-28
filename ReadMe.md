# Scheduling Program  
Efficientely organize employees' working schedules to avoid certain conflicts such as
1. No more than 2 employees can work in all sectors but zone 41 and zone 10  
2. Dislikes for other employees.  
3. Days off (Weekly)  
4. PTOF 

## Employees:  
1. Daniel Jeffries, wednesday, (doesnt like emmons)  
2. Daniel Emmons, thursday, (doesnt like jeffries)  
3. Bobbie Adams, monday  
4. Jennifer Fawset, monday  
5. Aaron, tuesday  
6. Geoff Mannor, wednesday  
7. Matthew Parker, friday  
8. Arty, 8 hours (works every day?)  
9. Cami Miller, 8 hours  
10. Brandon Lerch, friday  
11. Spencer Cawgoar, thursday  
12. Ron, tuesday  
13. Sam Menus, tuesday  
14. Chris, wednesday  

## Steps  
1. Create objects of Employees(Name, DaysOff, Dislikes), Zones(Employee1, Employee2), MiniZone(Employee1)  
2. create shifts?  

## Unordered Steps  
Create a Table to easily edit the info  
add employee, delete employee  

## Desired Output:
Will include a nice looking GUI, with options to update info. 

## End Command
``` 
g++ main.cpp -o app `pkg-config gtkmm-3.0 --cflags --libs`
```
__g++ main.cpp__ : g++ compiles it, and main.cpp is the source  
__-o app: -o tells__ the compiler what to name the file, app is what we name it.  
__pkg-config gtkmm-3.0__ --cflags --libs: pkg-config retrieves info about gtkmm-3.0


## Documentations to read for Developer
`https://gnome.pages.gitlab.gnome.org/gtkmm/group__Widgets.html`