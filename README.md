### README.md  

# Student Records Management System  

This project implements a simple **Student Records Management System** in C++ for maintaining student details. The system includes functionalities such as adding, displaying, searching, modifying, and deleting student records. The data is stored in a binary file for persistence.

---

## Features  
- **Add New Student Records**: Register a student with details like roll number, name, course, gender, age, and standard.
- **View All Records**: Display the complete list of student records.
- **Search Records**: Search student details by:
  - Roll Number
  - Name
- **Modify Records**: Update an existing student's details.
- **Delete Records**: Remove a student record.
- **Exit**: Quit the application.

---

## File Structure  
- **Main File**: `main.cpp`  
  Contains the entire implementation of the program.
- **Data File**: `Doc 1.xlsx`  
  A binary file where all student records are stored.

---

## Requirements  
- **C++ Compiler**: Compatible with GCC, MinGW, or Visual Studio.
- **Standard Libraries**: `<iostream>`, `<fstream>`, `<iomanip>`, `<conio.h>`

---

## Compilation and Execution  
### Compile  
```bash
g++ main.cpp -o student_records
```  
### Run  
```bash
./student_records
```  

---

## How to Use  
1. Launch the application.
2. Choose from the available options on the menu:
   - Enter `1` to register a new student.
   - Enter `2` to display all student records.
   - Enter `3` to search by roll number.
   - Enter `4` to search by name.
   - Enter `5` to modify a student record.
   - Enter `6` to delete a student record.
   - Enter `0` to exit the program.

3. Follow the prompts to input required data or navigate through the records.

---

## Limitations  
- The application currently handles a maximum of 10 student records in memory.
- The file name `Doc 1.xlsx` does not represent an actual Excel file but a binary storage file. Ensure the correct file handling mechanism is applied.

---

## Contributions  
Contributions are welcome! Feel free to fork the repository, make changes, and submit a pull request.  

---

## Author  
**Randilu**  
*Developed with a focus on demonstrating file handling and object-oriented programming in C++.*

---

## License  
This project is open-sourced under the MIT License. See the LICENSE file for details.
