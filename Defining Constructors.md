Employee employee1;
employee1.age = 33;
employee1.x = y;
etc

easier to write a constructor method
1) Has to be Public
2) No return Value
3) Same name as class


class Employee
{
private:
  string Name;
  string Company;
  int Age;
public:
  Employee(string name, string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;  
  }
};

How to use constructor?

Employee employee1 = Employee(name, company, age);


Remember constructor is a method, so write it like a procedure.

Lets go with the convention that variables defined in the class is Capital letter.

To be noted and researched, pass by reference vs pass by value.

When working on data, will have to pass by reference.

So in theory

