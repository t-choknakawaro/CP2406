import person;
import <iostream>;
import <sstream>;
import <fstream>;

int main()
{
    Person person{ "John", "Doe" };

    person.output(std::cout);

    std::ostringstream oss;
    person.output(oss);
    std::cout << oss.str() << std::endl;

    std::ofstream outFile{ "person.txt" };
    person.output(outFile);
}
