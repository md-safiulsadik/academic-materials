
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

    public String getName() {
        return name;
    }

    public String getEmployee_id() {
        return employee_id;
    }

    public float getYearly_salary() {
        return yearly_salary;
    }

    public float getYear_of_experience() {
        return year_of_experience;
    }

    @Override
    public String toString() {
        return  "Name: " + this.getName() + "\n" +
                "Id: " + this.getEmployee_id() + "\n" +
                "Yearly Salary: " + this.getYearly_salary() + "\n" +
                "Year of Experience: " + this.getYear_of_experience() + "\n" +
                "Total Earning: " + this.totalEarnings() + "\n";
    }

}
