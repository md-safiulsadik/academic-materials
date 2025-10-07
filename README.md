# 🎓 Academic Materials Backup

> 📚 **A centralized, organized archive for all my university study materials, notes, code, assignments, and projects.**  
> 👨‍💻 _Department of Computer Science & Engineering | Structured by Trimester & Course_

---

## 📖 Table of Contents
- [Goal / Purpose](#-goal--purpose)
- [Topics / Features / Modules](#-topics--features--modules)
- [Progress / Status](#-progress--status)
- [Resources / References](#-resources--references)
- [How I’m Learning / Approach / Usage](#-how-im-learning--approach--usage)
- [Example Snippets](#-example-snippets)
- [Final Thoughts / Notes](#-final-thoughts--notes)

---

## 🎯 Goal / Purpose

This repository is my personal knowledge base and digital backup throughout my university journey in CSE. It is designed to:

- 🗂️ Keep all subjects, trimesters, and coursework organized in one place.
- 🔄 Enable quick review and revision of past topics.
- 📌 Track my academic and project progress.
- ✅ Maintain regular backups of crucial study resources.
- 🏆 Foster continuous learning and self-improvement.

---

## 📦 Topics / Features / Modules

The repository is organized by academic trimester and course, typically containing:

- **Lecture-Notes/**: Course slides, handwritten notes, and study guides.
- **Code/**: Programming labs, assignments, and mini-projects (C, Python, Java, etc.).
- **Assignments/**: Submitted solutions and detailed reports.
- **Experiments/**: Lab manuals, data sheets, and experiment results.
- **Questions/**: Practice problems, exam questions, and lab reports in HTML/PDF.

**Sample Courses & Materials:**
- `Trimester-1/CSE 1110 (O)`: Foundational C programming, practice code, class notes.
- `Trimester-2/CSE 1111 (C) - CSE 1112 (D) SPL`: Algorithms, coding exercises, midterm code.
- `Trimester-3/CSE 1116-OOP (lab)`: Java OOP labs, employee management, student classes.
- `Trimester-3/CSE 1325-DLD`: Digital Logic Design, lab reports, truth tables, HTML documentation.

---

## 🚦 Progress / Status

- [x] Trimester 1 Materials
- [x] Trimester 2 Materials
- [x] Trimester 3 Materials
- [ ] Ongoing updates as new coursework is completed

> **Repository Status:**  
> ![Public Badge](https://img.shields.io/badge/visibility-public-brightgreen)  
> _May become private to comply with academic policies or protect original work._

---

## 📚 Resources / References

- University course syllabi and lecture notes.
- Standard textbooks for C, Python, Java, and Digital Logic Design.
- Personal handwritten notes and experiment reports.
- External documentation, tutorials, and online courses as cited in code comments or notes.

---

## 🚀 How I’m Learning / Approach / Usage

**My Approach:**
- Each trimester and subject is organized in its own directory for clarity.
- Code is written from scratch to reinforce learning, with inline explanations and comments.
- Lab reports and assignments follow academic guidelines, including both code and theoretical analysis.

**How to Use This Repo:**
- **Students:** Browse by trimester/course for lecture notes, code samples, or assignment templates.
- **Learners:** Reference code and reports for foundational C, Java, and digital electronics.
- **Review:** Use the HTML and PDF lab reports for logic design and experiment walkthroughs.

---

## 💡 Example Snippets

Here are some real-world examples directly from this repository, illustrating key programming concepts and documentation skills:

<details>
<summary><strong>C: Even/Odd and Divisibility Check</strong></summary>

```c
// File: Trimester-1/CSE 1110 (O)/Class/prc.c
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a % 2 == 0) {

        if (a % 22 == 0) {
            printf("Even and Divisible by 22\n");
        }
        else {
            printf("Even but NOT divisible by 22\n");
        }
    }
    else {
        if (a % 19 == 0) {
            printf("Odd and divisible by 19\n");
        }
        else {
            printf("Odd but not divisible by 19\n");
        }
    }    
    
    return 0;
}
```
*Checks if a number is even or odd, and tests for specific divisibility. Demonstrates conditional logic in C.*

</details>

<details>
<summary><strong>C: Factorial Calculation with Input Validation</strong></summary>

```c
// File: Trimester-2/CSE 1111 (C) - CSE 1112 (D)  SPL/Codes/Q9.c
#include <stdio.h>

long double factorial(int num) {
    long double result = 1.0;
    while (num > 1) {
        result *= num;
        num--;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number to get its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    long double fact = factorial(num);
    printf("%d! = %.4Lf\n", num, fact);
    return 0;
}
```
*Computes the factorial of a number with validation for negative input—shows use of functions and error handling in C.*

</details>

<details>
<summary><strong>Java: OOP – Employee Salary Calculation</strong></summary>

```java
// File: Trimester-3/CSE 1116-OOP (lab)/CP-1/src/Employee.java

public class Employee {

    private String name;
    private String employee_id;
    private float yearly_salary;
    private float year_of_experience;

    public Employee(String name, String employee_id, float yearly_salary, float year_of_experience) {
        this.name = name;
        this.employee_id = employee_id;
        this.yearly_salary = yearly_salary;
        this.year_of_experience = year_of_experience;
    }

    public void increaseSalary(float raise) {
        this.yearly_salary = yearly_salary + (yearly_salary / 100) * raise ;
    }

    public float totalEarnings() {
        return (yearly_salary * year_of_experience);
    }

    // ... Other methods omitted for brevity
}
```
*Shows encapsulation and methods for salary management in an Employee class.*

</details>

<details>
<summary><strong>Java: Employee Management and Input Handling</strong></summary>

```java
// File: Trimester-3/CSE 1116-OOP (lab)/CP-1/src/Main.java

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Employee[] employees = new Employee[3];

        for (int i = 0; i < employees.length; i++) {
            System.out.print("Name: ");
            String name = input.nextLine();

            System.out.print("Id: ");
            String id = input.nextLine();

            System.out.print("Yearly salary: ");
            float salary = input.nextInt();
            input.nextLine();

            System.out.print("Year of Experience: ");
            float yearOfExperience = input.nextInt();
            input.nextLine();

            employees[i] = new Employee(name, id, salary, yearOfExperience);
        }

        for (Employee employee : employees) {
            System.out.println(employee.toString());
        }

        System.out.println("After raise");
        for (Employee employee : employees) {
            employee.increaseSalary(10);
            System.out.println("Total earning of " + employee.getName() + ": " + employee.totalEarnings());
        }
    }
}
```
*Demonstrates array usage, object creation, and interactive input/output in Java.*

</details>

<details>
<summary><strong>HTML: Digital Logic Lab Report (Structure)</strong></summary>

```html
<!-- File: Trimester-3/CSE 1325-DLD/Questions/lab.html -->
<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width,initial-scale=1">
  <title>Lab Report — Full Adder and Multi-bit Adders</title>
  <!-- Styles omitted for brevity -->
</head>
<body>
  <header>
    <h1>Lab Report: Full Adder & Multi-bit Adders</h1>
    <p><strong>Student:</strong> __________________ &nbsp; | &nbsp; <strong>Date:</strong> __________________</p>
    <p>Course: Digital Logic Lab &nbsp; | &nbsp; Submission: softcopy (PDF) — this HTML contains the full content to convert to PDF.</p>
  </header>
  <section>
    <h2>1. Objective</h2>
    <p>Understand and design a 1-bit full adder (truth table, logic equations and hardware using XOR gates), and implement multi-bit adders in Logisim using:</p>
    <ul>
      <li>4 × 1-bit full adders (ripple-carry 4-bit adder)</li>
      <li>2 × 2-bit full adders (compose two 2-bit blocks)</li>
      <li>1 × 4-bit full adder module (single 4-bit adder block)</li>
    </ul>
  </section>
<!-- More content omitted -->
</body>
</html>
```
*Shows structured HTML documentation for a digital logic lab report.*

</details>

---

*These authentic examples reflect my hands-on learning approach across multiple languages and documentation styles, showcasing both foundational and practical skills.*

---

## 📈 Final Thoughts / Notes

Pursuing a degree in Computer Science & Engineering is a journey of continuous growth. This repository is more than just a backup—it's a reflection of my commitment to learning, organizing, and sharing knowledge for future reference and for helping fellow students.

- **Motivation:** Stay organized, never lose critical work, and always be ready to review or help others.
- **Next Steps:** Continue updating with new trimesters, advanced projects, and deeper lab experiments.
- **Feedback:** Suggestions and collaboration are welcome!  
- **License:** [Creative Commons BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/)
  

**Note:** This README is based on a partial file/folder listing. [See more in the repository.](https://github.com/md-safiulsadik/academic-materials)
