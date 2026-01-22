
# 📘 README – Lab Tasks on If-Else and Nested If in C++

## Course Information
- **Course Code:** CS-1101  
- **Course Title:** Programming Fundamentals  
- **Lab Number:** 06,07  
- **Topic:** Control Structures – Decision Control (if-else / nested if)  
- **Instructor:** Engr. Muhammad Awais  

---

## 🎯 Lab Objectives
The objective of this lab is to learn how to use:
- **if – else if – else ladder**
- **nested if statements**

to control program flow based on multiple conditions and user inputs.

---

## 🧪 Lab Tasks

## 🔹 Basic Tasks – If / Else-If / Else

### Task 1: Positive, Negative, or Zero
Write a C++ program that:
- Takes an integer input from the user
- Checks whether the number is:
  - Positive  
  - Negative  
  - Zero

---

### Task 2: Temperature Advisory System
Write a C++ program that:
- Takes temperature (°C) as input
- Provides advice based on the temperature range:
  - **≥ 40°C** → Stay indoors (extremely hot)
  - **30–39°C** → Drink plenty of water
  - **20–29°C** → Pleasant weather for outdoor activities
  - **< 20°C** → Wear warm clothes

---

### Task 3: Simple Login System
Write a C++ program that:
- Prompts the user for **username** and **password**
- Uses predefined credentials:
  - Username: `admin`
  - Password: `12345`
- Displays:
  - **"Access Granted"** if both are correct
  - **"Wrong Password"** if username is correct but password is wrong
  - **"User Not Found"** if username is incorrect

---

## 🎓 Advanced Tasks – If-Else Ladder

### Task 4: University Exam Results & Scholarship System
Write a C++ program that:
- Takes marks of **three subjects**
- Calculates:
  - Total marks
  - Percentage
  - Grade for each subject

#### Grade Criteria:
- ≥ 90% → Grade A  
- ≥ 80% → Grade B  
- ≥ 70% → Grade C  
- ≥ 60% → Grade D  
- < 60% → Grade F  

#### Failure Condition:
- If **any subject** has Grade F → Student is **Failed**

#### Scholarship Eligibility:
- **Merit Scholarship**:
  - Grade A in all subjects
  - Total marks ≥ 270
- **Regular Scholarship**:
  - At least Grade B in all subjects
  - Total marks ≥ 240

Program should display:
- Total marks and percentage
- Grade of each subject
- Scholarship status or failure message

---

## 🔸 Nested If Tasks

### Task 5: Loan Eligibility Checker
Write a C++ program that:
- Takes **age** and **annual income**
- Conditions:
  - Age < 18 → Not eligible
  - Age ≥ 18 and income < $30,000 → Not eligible (low income)
  - Age ≥ 18 and income ≥ $30,000 → Eligible for loan
- Displays clear messages for each case

---

### Task 6: Role-Based Access System
Write a C++ program that:
- Authenticates user using:
  - Username: `admin`
  - Password: `password123`
- If authentication fails → **Access Denied**
- If authentication succeeds, check role:
  - **Admin** → Full Access
  - **Guest** → Limited Access
  - Any other role → No Access

---
