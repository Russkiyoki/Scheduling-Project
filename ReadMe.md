# Scheduling Program  
Efficientely organize employees' working schedules to avoid certain conflicts such as
1. No more than 2 employees can work in all sectors but zone 41 and zone 10  
2. Dislikes for other employees.  
3. Days off (Weekly)  
4. PTOF 

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
g++ src/main.cpp src/MyWindow.cpp src/AddWindow.cpp -o Scheduling `pkg-config gtkmm-3.0 --cflags --libs`
```
__g++ main.cpp__ : g++ compiles it, and main.cpp is the source  
__-o app: -o tells__ the compiler what to name the file, app is what we name it.  
__pkg-config gtkmm-3.0__ --cflags --libs: pkg-config retrieves info about gtkmm-3.0

### Windows:  
```
x86_64-w64-mingw32-g++ -o SchedulingWindows.exe src/main.cpp src/AddWindows.cpp src/Employee.cpp src/MyWindow.cpp src/Sector.cpp

```

## Documentations to read for Developer
`https://gnome.pages.gitlab.gnome.org/gtkmm/group__Widgets.html`

## Compiling using Meson:
1. set up build directory  
``` meson setup {build folder name} ```
2. compile  
``` ninja -C build```
3. run  
``` ./{build folder name}/{program name}```