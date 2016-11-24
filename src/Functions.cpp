/*
 * This exercise will introduce you to the basics of functions in C++
 *
 * Everything you need to do is documented by comments. In Eclipse these to do items are indicated by
 * the blue boxes along the scrollbar (You can click them) and also show up in the Tasks view.
 * The Tasks view is a tab in the area with Problems and Console. If you don't see it, try
 * Window->Show View->Tasks on the menu bar. (Eclipse also highlights fix me (without the space) in comments)
 */

#include <iostream>

const double PI = 3.14159265358979;

/*
 * This is a function prototype.
 * In C++ you must declare your functions with a prototype or completely define them (write out the code for how they
 * work before you can use them. This must happen before the line you try to call the function. If you don't do this,
 * you will get a compiler error about the symbol (function name) not being defined.
 *
 * This function prototype has a few important type of elements, from left to right:
 *
 * double       This is the type of value the function returns. In this case, the function returns a double.
 *              Functions may also return nothing, in which case the return type "void" is used instead.
 *
 * square       This is the name of the function
 *
 * (double n)   This is the function's parameters. In this case the function requires one parameter that is a double.
 *              Functions can require more than one parameter, and in that case, the parameters are separated by commas.
 *
 * Head to the definition of square for more important information on functions (in the comments above it).
 * Put your cursor in the function's name and press F3, or right click the function name
 * and pick "Open Declaration"
 */
// Returns the square of a given number
double square(double n);

/*
 * Here we have defined the function, rather than using a prototype.
 * The function is named circleArea, requires a parameter that is a double, and returns a double.
 * From the comment, we know it will calculate the area of a circle, and requires that we provide
 * the function with a radius greater than zero. Documenting your functions with comments is important,
 * especially when multiple programmers are working on a project.
 */
// ---- ADVANCED TOPIC ----
/*
 * Different programming languages have different support for documentation like this, for example Java has Javadoc -
 * a special comment format. In C++, a tool called Doxygen is often used to generate documentation from specially
 * formed comments automatically. FRC uses this approach to provide you with documentation.
 */
// Returns the area of a circle with a given radius
// Radius should be greater than zero
double circleArea(double radius)
{
    // TODO Implement this function
    /*
     * Note Eclipse warns you there is no return in your function that should return a double (yellow bug on the left edge)
     * You also have the clickable yellow box on the scrollbar.
     * Warnings and errors also appear in the Problems view in the bottom pane. If it's not there, go to
     * Window->Show View->Problems in the menu bar.
     *
     * IMPORTANT NOTE: Eclipse is tricky when used for C++, sometimes you have to save or re-build for the Problems view
     * and markers on the left and right sides to update.
     */
    // Hint: You will need to call the square() function
    /*
     * PI has been defined for you - Take a look at the Outline view in Eclipse
     * It should be a tab in the right hand pane. If it's not there, use Window->Show View->Outline on the menu bar.
     */
}

/*
 * Here's another function prototype, this time taking two parameters. Note that we don't have to name the parameters
 * in the prototype, but it makes it more confusing. In what order should our arguments be (we call them parameters in the
 * function, arguments when we provide them to the function when calling it)? Is it radius, height or height, radius?
 */
// Returns the volume of a cylinder given it's radius and height.
// Both radius and height should be greater than zero
double cylinderVolume(double, double);

// main is also a function, which requires no parameters and returns an integer
int main()
{
    double radius, height;

    std::cout << "Enter radius: ";
    std::cin >> radius;

    std::cout << "Circle area is: " << circleArea(radius) << std::endl;

    std::cout << "Enter height: ";
    std::cin >> height;

    // TODO Print out the volume of the cylinder in this line (i.e. call cylinderVolume())
    std::cout << "Cylinder volume is: " << std::endl;

    return 0;
}

/*
 * When calling a function, you simply use it's name. In this case, we could write:
 *      double number = 7;
 *      double numberSquared = square(number);
 * This calls the function square with the argument number, and stores it's return value in
 * a variable named numberSquared.
 *
 * When calling a function, the arguments in the brackets match up with the parameters the function
 * requires. In this case, the value of the variable number is copied to the parameter named in square.
 * Within the square function, you can then refer to this argument using the name n. Changing n will not
 * change number in this case, as we copied it
 * (but this is possible in C++ - see the advanced topic after this section)
 *
 * We don't have to call functions using variables for arguments, using a plain number (called a literal)
 * is perfectly acceptable:
 *      double numberSquared = square(8);
 * We also don't have to store what the function returns. We could write
 *      squareNumber(3);
 * and the compiler wouldn't care. Sometimes this is done intentionally, but sometimes you do it by accident.
 * Watch out for bugs like this!
 *
 * The function definition looks just like the prototype, but we followed it with the pair of
 * curly braces ({ }), and there is no semicolon after the round brackets anymore.
 * All the code within the braces is part of the function.
 * Note that you must give the parameters a name in the function definition, but you don't need to
 * do this in the prototype. This is because you are going to use these names in the function body
 * between the braces to write your function.
 */
// ---- ADVANCED TOPIC -----
/*
 * We are discussing what is called pass by value functions. In C++, you can also pass by reference,
 * allowing you to change the value of the parameter passed to function, and having those changes also
 * occur where the function was called. You could also have a function with a pointer (something not
 * yet discussed) parameter, and the function could use the pointer to change the computer's memory
 * where the pointer is pointing. When the code that called the function looks at the memory where
 * the pointer points, it will see the change the function made.
 */
double square(double n)
{
    // The return keyword immediately returns a value and stops executing a function
    // Any code after the return will not be executed
    return n * n;
}

double cylinderVolume(double radius, double height)
{
    // TODO Implement this function
    // Hint: Call circleArea from this function to help you out with the computation
}

