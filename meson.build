project('SchedulingProject', 'cpp', default_options : ['cpp_std=c++17'])

# Dependencies (e.g., GTKmm)
gtkmm_dep = dependency('gtkmm-3.0')

src_files = files('src/main.cpp', 'src/AddWindow.cpp', 'src/Employee.cpp', 'src/MyWindow.cpp', 'src/Sector.cpp')

# Define the executable and link libraries
executable('Scheduling', src_files, dependencies : gtkmm_dep)
