# JavaScript

## What is JavaScript ?

**JavaScript:**

1. **Nature:**

   - Lightweight, cross-platform, and interpreted compiled programming language.
   - Often referred to as a scripting language for web pages.

2. **Key Features:**

   - Single-threaded.
   - Dynamically typed (weakly typed).
   - Supports both imperative and declarative programming.

3. **Usage:**

   - **Client-side:**

     - Controls browser behavior and interacts with the Document Object Model (DOM).
     - Used for enhancing user interfaces and interactivity on web pages.
     - Frameworks/libraries: AngularJS, ReactJS, VueJS, etc.

   - **Server-side:**
     - Enables server-side scripting, interacting with databases, and handling server-related tasks.
     - Notable framework: Node.js.

4. **Programming Paradigms:**

   - **Imperative Language:**

     - Concerned with how things are done.
     - Involves procedural and object-oriented programming approaches.
     - Async/await is an example of thinking about what is to be done next after an asynchronous call.

   - **Declarative Programming:**
     - Concerned with what is to be done.
     - Focuses on describing the desired result without specifying how to achieve it.
     - Examples include arrow functions.

JavaScript's versatility and widespread adoption make it a crucial language for web development, and its expansion into server-side applications with Node.js has further broadened its utility. The ability to handle both imperative and declarative programming makes it flexible for various programming paradigms.

## History of JS

- **Creation:**

  - JavaScript was created by Brendan Eich in 1995 while he was working as an engineer at Netscape.
  - Originally named LiveScript, it was later renamed to JavaScript for marketing reasons, leveraging the popularity of Java.

- **Purpose:**

  - Designed to be a scripting language for web browsers, enabling dynamic interactions with web pages.

- **Host Environment:**
  - JavaScript has no concept of input or output by itself.
  - It operates as a scripting language within a host environment, with the browser being the most common host environment.

## Features of JavaScript

1. **Popularity:**

   - According to a Stack Overflow survey, JavaScript is considered the most popular programming language globally.

2. **Evolution:**

   - JavaScript has evolved beyond its original role in web browsers.
   - Introduction of Node.js and other frameworks enables server-side development.

3. **Capabilities:**

   - **DOM Manipulation:**

     - Originally created for manipulating the Document Object Model (DOM) on web pages.
     - Transitioned static websites to dynamic ones.

   - **Functions as Objects:**

     - Functions in JavaScript are treated as objects with properties and methods.
     - They can be passed as arguments to other functions, providing flexibility in programming.

   - **Date and Time Handling:**

     - JavaScript has built-in capabilities for handling date and time.

   - **Form Validation:**

     - Enables form validation on web pages, enhancing user input handling.

   - **No Compiler Required:**
     - JavaScript is an interpreted language, and its code can be executed without the need for a separate compiler.
     - This contributes to its ease of use and quick development cycle.

## Applications of JavaScript

1. **Web Development:**

   - Adding interactivity and behavior to static websites.
   - Utilizing frameworks like AngularJS for efficient development.

2. **Web Applications:**

   - Creating robust web applications with enhanced user interfaces.
   - Leveraging APIs for functionalities, such as those seen in Google Maps.
   - Frameworks like Electron and React contribute to building powerful web applications.

3. **Server Applications:**

   - Node.js enables the use of JavaScript on the server side, facilitating server application development.
   - Node.js is known for its efficiency in handling asynchronous tasks and scalable server-side applications.

4. **Games:**

   - JavaScript is used in game development, particularly in conjunction with HTML5.
   - EaseJS library provides solutions for working with rich graphics, making JavaScript popular in the gaming industry.

5. **Smartwatches:**

   - JavaScript is used in developing applications for smartwatches.
   - PebbleJS library is an example of a framework for smartwatch applications that require internet functionality.

6. **Art:**

   - Artists and designers use JavaScript to draw on HTML5 canvas, creating dynamic and interactive visuals.
   - Libraries like p5.js enhance the capabilities of JavaScript for creative purposes.

7. **Machine Learning:**

   - The ml5.js library allows the integration of machine learning capabilities into web development using JavaScript.
   - JavaScript's versatility extends to the field of machine learning applications.

8. **Mobile Applications:**
   - JavaScript can be used to build mobile applications using frameworks like React Native.
   - Enables cross-platform development, allowing developers to write code once and use it across different operating systems.

## Limitations of JavaScript

1. **Security Risks:**

   - JavaScript can pose security risks, particularly through cross-site scripting (XSS) attacks.
   - It can be used to manipulate tags or fetch data, leading to unauthorized access and data breaches.

2. **Performance:**

   - JavaScript may not offer the same level of performance as some traditional languages.
   - Complex programs in JavaScript can be relatively slow compared to languages optimized for performance.
   - While performance may not be a major concern for simple tasks in the browser, it can be a limitation for resource-intensive applications.

3. **Complexity:**

   - JavaScript can be complex, requiring programmers to have a thorough understanding of various programming concepts.
   - Mastery of core language objects, client-side, and server-side objects is necessary for writing advanced scripts.
   - The evolving nature of JavaScript and the introduction of new features can add to the learning curve.

4. **Weak Error Handling and Type Checking:**
   - JavaScript is a weakly typed language, meaning there is no need to specify the data type of a variable explicitly.
   - Weak error handling and limited type checking can lead to runtime errors that might be challenging to identify and fix during development.
   - Lack of compile-time type checking can result in unexpected behavior and make it easier for errors to go unnoticed until runtime.

It's important to note that while JavaScript has these limitations, advancements in the language, tools, and best practices have been made to address some of these concerns. Developers can mitigate security risks through secure coding practices, enhance performance using optimization techniques, and improve error handling through thorough testing and debugging processes. Despite its limitations, JavaScript remains a fundamental and widely used language in web development.

## JavaScript as a Lightweight Programming Language

JavaScript is often considered lightweight due to several factors:

1. **Low CPU Usage:**

   - JavaScript is designed to have low CPU usage, making it efficient in terms of resource utilization.

2. **Easy Implementation:**

   - It is easy to implement, allowing developers to quickly add interactivity and dynamic behavior to web pages.

3. **Minimalist Syntax:**

   - JavaScript has a minimalist syntax, and everything is treated as an object.
   - The absence of explicit data types contributes to its simplicity and ease of use.

4. **Ease of Learning:**

   - The syntax of JavaScript is similar to that of C++ and Java, making it easy for developers to learn and adapt to.

5. **Resource Efficiency:**

   - JavaScript runs in the browser, utilizing fewer resources compared to other languages.
   - Node.js, a server-side JavaScript runtime, is known for both faster computations and efficient resource usage.

6. **Limited Built-in Libraries:**
   - JavaScript has fewer built-in libraries or frameworks compared to some other programming languages.
   - While this reduces the language's footprint, developers may need to incorporate external libraries and frameworks for certain functionalities.

### JavaScript as Compiled and Interpreted

JavaScript is both compiled and interpreted, exhibiting a hybrid nature:

1. **Interpreted:**

   - In the earlier versions of JavaScript, it used only an interpreter.
   - The interpreter executed code line by line, displaying results immediately.

2. **Compiled:**
   - With the advent of modern JavaScript engines like V8 (used in Chrome), Just-In-Time (JIT) compilation became prevalent.
   - JIT compilation optimizes the execution by generating bytecode, a set of highly optimized instructions.
   - The V8 engine initially uses an interpreter but identifies patterns in code execution and compiles frequently used functions and variables to improve performance.

This combination of interpretation and compilation allows JavaScript to strike a balance between flexibility and performance.

JavaScript's lightweight nature, combined with its versatility, has contributed to its widespread use not only in web development but also in various non-browser environments.

## JavaScript Versions

JavaScript was invented in the year 1995 by Brendan Eich. Over the years the language has improved a lot and a lot of new features have been added which make the coding process even easier. This language became an ECMA standard in the year 1997.

![JavaScript-Versions](https://i.imgur.com/vgEomjq.png)

```markdown
| Version | Name               | Year | Features                                     |
|---------|-------------------|------|-------------------------------------------|
| ES1     | ECMAScript 1      | 1997 | Initial Release                           |
| ES2     | ECMAScript 2      | 1998 | Minor Editorial Changes                   |
| ES3     | ECMAScript 3      | 1999 | - Regular Expression                      |
|         |                   |      | - try/catch                               |
|         |                   |      | - Exception Handling                      |
|         |                   |      | - switch case and do-while                |
| ES4     | ECMAScript 4      |      | Abandoned due to conflicts                |
| ES5     | ECMAScript 5      | 2009 | - JavaScript “strict mode”                |
|         |                   |      | - JSON support                            |
|         |                   |      | - JS getters and setters                  |
| ES6     | ECMAScript 2015   | 2015 | - let and const                           |
|         |                   |      | - Class declaration                       |
|         |                   |      | - import and export                       |
|         |                   |      | - for..of loop                            |
|         |                   |      | - Arrow functions                         |
| ES7     | ECMAScript 2016   | 2016 | - Block scope for variable                |
|         |                   |      | - async/await                             |
|         |                   |      | - Array.includes function                 |
|         |                   |      | - Exponentiation Operator                 |
| ES8     | ECMAScript 2017   | 2017 | - Object.values                           |
|         |                   |      | - Object.entries                          |
|         |                   |      | - Object.getOwnPropertiesDescriptors      |
| ES9     | ECMAScript 2018   | 2018 | - spread operator                         |
|         |                   |      | - rest parameters                         |
| ES10    | ECMAScript 2019   | 2019 | - Array.flat()                            |
|         |                   |      | - Array.flatMap()                         |
|         |                   |      | - Array.sort is now stable                |
| ES11    | ECMAScript 2020   | 2020 | - BigInt primitive type                   |
|         |                   |      | - nullish coalescing operator             |
| ES12    | ECMAScript 2021   | 2021 | - String.replaceAll() Method              |
|         |                   |      | - Promise.any() Method                    |
| ES13    | ECMAScript 2022   | 2022 | - Top-level await                         |
|         |                   |      | - New class elements                      |
|         |                   |      | - Static block inside classes             |
| ES14    | ECMAScript 2023   | 2023 | - toSorted method                         |
|         |                   |      | - toReversed                              |
|         |                   |      | - findLast, and findLastIndex             |
|         |                   |      |   methods on Array.prototype and          |
|         |                   |      |   TypedArray.prototypet                   |

```

## Adding JavaScript in HTML Document

### Add JavaScript Code inside the Head Section

JavaScript code is placed inside the head section of an HTML page and uses the `<script>` element. Insert the `<script>` tag between the opening `<head>` and closing `</head>` tags, and place your JavaScript code inside. This ensures the script is loaded and executed when the page loads.

```html
<head>
  <title>Add JavaScript Code inside Head Section</title>

  <script>
    //JavaScript Code Here
    function myFun() {
      document.getElementById("demo").innerHTML = "Content changed!";
    }
  </script>
</head>
```

### Add JavaScript Code inside Body Section

JavaScript Code is placed inside the body section of an HTML page and in this also we use `<script>` `</script>` tag inside and above the closing tag of `</body>`.

```html
<body>
  <h2>Add JavaScript Code inside Body Section</h2>

  <h3 id="demo" style="color:green;">GeeksforGeeks</h3>

  <button type="button" onclick="myFun()">Click Here</button>

  <script>
    // JavaScript Code Here
    function myFun() {
      document.getElementById("demo").innerHTML = "Content changed!";
    }
  </script>
</body>
```

### External JavaScript

JavaScript can also be used in external files. The file extension of the JavaScript file will be .js. To use an external script put the name of the script file in the src attribute of a script tag. External scripts cannot contain script tags.

**.html file:**

```html
<body>
  <h2>External JavaScript</h2>

  <h3 id="demo" style="color:green;">GeeksforGeeks</h3>

  <button type="button" onclick="myFun()">Click Here</button>

  <script src="script.js"></script>
</body>
```

**.js file:**

```js
function myFun() {
  document.getElementById("demo").innerHTML = "Paragraph Changed";
}
```

The advantages of using external JavaScript files and the different ways to reference them are indeed beneficial for web development. Let's elaborate on the mentioned advantages and references:

#### Advantages of External JavaScript

1. **Cached JavaScript files for faster page loading:**

   - External JavaScript files are often cached by the browser after the first visit to a website. This means that subsequent visits by the same user can load the JavaScript code from the cache rather than re-downloading it, resulting in faster page loading times.

2. **Readability and Maintainability:**

   - Separating JavaScript code from HTML makes the codebase cleaner and more readable. Developers can focus on the structure and content of HTML in one file and the behavior (JavaScript) in another. This separation enhances code maintainability, making it easier to find and fix issues.

3. **Code Reusability:**

   - External JavaScript files can be reused across multiple HTML pages. This promotes code reusability, reducing redundancy and making updates or changes more efficient. Any modifications made to the external JavaScript file automatically apply to all HTML pages referencing it.

4. **Separation of Concerns:**
   - External JavaScript helps in adhering to the principle of separation of concerns. HTML is responsible for the structure, CSS for styling, and JavaScript for behavior. This makes it easier to manage and understand each aspect of web development independently.

### External JavaScript References

1. **Full URL:**

   - This method involves referencing an external JavaScript file using its full URL. This is useful when the script is hosted on a different domain or CDN (Content Delivery Network).

     ```html
     <script src="https://www.geeksforgeek.org/js/script.js"></script>
     ```

2. **File Path:**

   ```html
   <script src="/js/script.js"></script>
   ```

3. **No Path (Same Directory):**

   - If the JavaScript file is in the same directory as the HTML file, you can reference it without using any path.

     ```html
     <script src="script.js"></script>
     ```

---

## JavaScript Output

**JavaScript Display Possibilities:**
JavaScript can "display" data in different ways:

- Writing into an HTML element, using `innerHTML`.
- Writing into the HTML output using `document.write()`.
- Writing into an alert box, using `window.alert()`.
- Writing into the browser console, using `console.log()`.

1. **innerHTML:**

   - **Usage:** Modifying the content of an HTML element.
   - Changing the innerHTML property of an HTML element is a common way to display data in HTML.
   - **Example:**

     ```javascript
     document.getElementById("exampleElement").innerHTML = "Hello, World!";
     ```

2. **document.write():**

   - **Usage:** Writing directly to the HTML document during or after page load.
   - Using `document.write()` after an HTML document is loaded, will delete all existing HTML
   - It should only be used for testing.
   - **Example:**

     ```javascript
     document.write("This will be written directly to the document.");
     ```

3. **window.alert():**

   - **Usage:** Displaying a pop-up alert box with a message.
   - You can skip the `window` keyword.
   - In JavaScript, the `window` object is the global scope object. This means that variables, properties, and methods by default belong to the `window` object. This also means that specifying the `window` keyword is optional
   - **Example:**

     ```javascript
     window.alert("This is an alert!");
     ```

4. **console.log():**

   - **Usage:** Writing messages to the browser console for debugging and development purposes.
   - **Example:**

     ```javascript
     console.log("Logging to the console for debugging purposes.");
     ```

5. **JavaScript Print**

   - JavaScript does not have any print object or print methods.
   - You cannot access output devices from JavaScript.
   - The only exception is that you can call the `window.print()` method in the browser to print the content of the current window.
   - **Example:**

     ```html
     <!DOCTYPE html>
     <html>
       <body>
         <button onclick="window.print()">Print this page</button>
       </body>
     </html>
     ```

## Case in JS

- All JavaScript identifiers are case sensitive.

- The variables `lastName` and `lastname`, are two different variables:

  ```js
  let lastname, lastName;
  lastName = "Bharambe";
  lastname = "xyz";
  ```

JavaScript does not interpret **`LET`** or **`Let`** as the keyword **`let`**.

### Variable Naming Conventions

- **Hyphens (-):** Hyphens are not allowed in JavaScript variable names. They are reserved for subtraction operations.
- **Underscores (\_):** Using underscores to separate words in variable names is a common convention in JavaScript. This is known as "snake_case," and it's widely used, especially when adhering to certain coding styles.
  - **eg. :** `first_name`, `last_name`, `master_card`, `inter_city`.
- **Upper Camel Case (Pascal Case):** In JavaScript, upper camel case is often used for naming constructor functions or classes. It involves capitalizing the first letter of each word without any separators.
  - **eg. :** `FirstName`, `LastName`, `MasterCard`, `InterCity`.
- **Lower Camel Case:** This is the most common naming convention in JavaScript. It involves starting the variable name with a lowercase letter and capitalizing the first letter of each subsequent concatenated word.
  - **eg. :** `firstName`, `lastName`, `masterCard`, `interCity`.

**Examples:**

```javascript
// Underscore (snake_case)
var first_name = "Aakash";

// Upper Camel Case (Pascal Case)
function Person(FirstName, LastName) {
  // constructor logic
}

// Lower Camel Case
var interCityTrain = "Express";
```

### JavaScript Character Set

- JavaScript uses the Unicode character set, which is a standardized encoding system that covers a vast range of characters, symbols, and diacritical marks from various writing systems around the world.
- This includes letters, digits, punctuation, mathematical symbols, emoji, and more.
- Unicode allows JavaScript to handle text in multiple languages and provides a comprehensive set of characters for programming purposes.

## Comments

JavaScript comments can be used to explain JavaScript code, and to make it more readable.

JavaScript comments can also be used to prevent execution, when testing alternative code.

### Single Line Comments

Single line comments start with `//`.

Any text between `//` and the end of the line will be ignored by JavaScript (will not be executed).

**Example:**

```js
// Change heading:
document.getElementById("myH").innerHTML = "My First Page";

let x = 5; // Declare x, give it the value of 5
```

### Multi-line Comments

Multi-line comments start with `/*` and end with `*/`.

Any text between `/*` and `*/` will be ignored by JavaScript.

**Example:**

```js
/*
The code below will change
the heading with id = "myH"
and the paragraph with id = "myP"
in my web page:
*/
document.getElementById("myH").innerHTML = "My First Page";
document.getElementById("myP").innerHTML = "My first paragraph";
```

## Variables

1. **Automatic Declaration:**

   - Variables can be used without explicit declaration. When you assign a value to an undeclared variable, JavaScript automatically declares it.

   ```javascript
   x = 5;
   y = 6;
   z = x + y;
   ```

   Note: While this is allowed, it's considered good practice to always declare variables explicitly to avoid potential issues and improve code readability.

2. **Declaration with `var`:**

   - The `var` keyword was traditionally used for variable declaration in JavaScript from 1995 to 2015.

   ```javascript
   var x = 5;
   var y = 6;
   var z = x + y;
   ```

   Note: `var` has some scoping peculiarities and is generally not recommended for modern JavaScript due to its functional-scoping behavior.

3. **Declaration with `let`:**

   - Introduced in ECMAScript 2015 (ES6), `let` allows block-scoped variable declaration.

   ```javascript
   let x = 5;
   let y = 6;
   let z = x + y;
   ```

   Note: Use `let` when you need block-scoping and plan to reassign the variable.

4. **Declaration with `const`:**

   - Also introduced in ECMAScript 2015, `const` is used to declare constants.

   ```javascript
   const x = 5;
   const y = 6;
   const z = x + y;
   ```

   Note: Use `const` when the variable is not meant to be reassigned. It enforces immutability.

### When to Use `var`, `let`, or `const`

1. **Always Declare Variables:**

   - It is considered good practice to always declare variables before using them to avoid potential issues and improve code readability.

2. **Always Use `const` for Values that Should Not Change:**

   - Use `const` when the value of a variable should remain constant throughout its scope. It enforces immutability.

   ```javascript
   const pi = 3.14;
   ```

3. **Always Use `const` for Types that Should Not Change (Arrays and Objects):**

   - Use `const` for arrays and objects when you want to ensure that the reference to the array or object remains constant. Note that it doesn't make the contents of the array or object immutable.

   ```javascript
   const myArray = [1, 2, 3];
   const myObject = { key: "value" };
   ```

4. **Use `let` When Reassignment Is Necessary:**

   - If you need to reassign a variable, use `let`. This is useful when the variable's value needs to change during its scope.

   ```javascript
   let counter = 0;
   counter = counter + 1; // Valid with let
   ```

5. **Use `var` Only for Supporting Old Browsers:**

   - `var` has functional-scoping behavior and is generally considered outdated. However, if you need to support older browsers that do not recognize `let` and `const`, you might use `var`.

   ```javascript
   var oldSchoolVariable = 42;
   ```

### JavaScript Identifiers

1. **Definition:**

   - Identifiers are names given to variables, functions, objects, and other items in JavaScript.

2. **Rules for Constructing Identifiers:**

   - Identifiers can contain:
     - Letters (both uppercase and lowercase).
     - Digits (`0-9`).
     - Underscores (`_`).
     - Dollar signs (`$`).
   - Identifiers must begin with a letter.
   - They can also begin with a dollar sign (`$`) or an underscore (`_`), though it's not commonly used in JavaScript.
   - Identifiers are case-sensitive, meaning `variableName` and `VariableName` are considered different.

3. **Examples:**

   - Valid identifiers: `x`, `y`, `age`, `sum`, `totalVolume`, `my_variable`.
   - Invalid identifiers: `123abc` (starts with a digit), `first-name` (contains a hyphen), `my variable` (contains a space).

4. **Case Sensitivity:**

   - JavaScript identifiers are case-sensitive. This means that `variableName` and `variablename` would be treated as two different variables.

   ```javascript
   var variableName = "Hello";
   var variablename = "World";

   console.log(variableName); // Outputs: Hello
   console.log(variablename); // Outputs: World
   ```

5. **Reserved Words:**

   - Reserved words, also known as keywords, cannot be used as identifiers because they have special meanings in JavaScript.

   ```javascript
   // Invalid use of a reserved word
   var if = 10; // Error: Unexpected token 'if'
   ```

   - Examples of reserved words include `if`, `else`, `while`, `function`, etc.

6. **Dollar Sign `$`:**

   - In JavaScript, the dollar sign is treated as a valid character for identifiers.
   - Examples of valid variable names:

   ```javascript
   let $ = "Hello World";
   let $$$ = 2;
   let $myMoney = 5;
   ```

   - While using the dollar sign is not very common in general JavaScript code, it's frequently employed in libraries and frameworks. For instance, in the jQuery library, the main function is often represented by the `$` symbol, which is used to select HTML elements.
     **Example:**

   ```javascript
   // jQuery example
   $("p"); // Selects all <p> elements
   ```

7. **Underscore `_`:**

   - In JavaScript, the underscore is also treated as a valid character for identifiers.
   - Examples of valid variable names:

   ```javascript
   let _lastName = "Bharambe";
   let _x = 2;
   let _100 = 5;
   ```

   - While using the underscore is not very common in general JavaScript code, it's a convention among professional programmers to use it as an alias for **"private"** or **"hidden"** variables. This indicates that the variable is intended for internal use within a specific scope.

### Declaration without Initialization

When you declare a variable using `let`, `var`, or `const` without assigning an initial value, it is automatically initialized with the value `undefined`.

**Example:**

```javascript
let carName;
console.log(carName); // Outputs: undefined
```

In this example, `carName` is declared but not assigned a value, so it automatically gets the default value of `undefined`.

#### Use of `undefined`

1. **Default Value:** Variables that are declared but not initialized have the default value of `undefined`. This can be useful when you want to check if a variable has been assigned a value.

   ```javascript
   let username;
   if (username === undefined) {
     console.log("Username is not defined.");
   } else {
     console.log("Username is defined.");
   }
   ```

2. **Implicit Initialization:** In some cases, variables may be implicitly assigned the value `undefined` if they are accessed before being assigned a value.

   ```javascript
   let city;
   console.log(city); // Outputs: undefined
   ```

3. **As a Return Value:** Functions that do not explicitly return a value will implicitly return `undefined`.

   ```javascript
   function doNothing() {
     // No return statement
   }

   console.log(doNothing()); // Outputs: undefined
   ```

It's important to handle cases where variables might be `undefined` in your code to prevent unexpected behavior. You can use conditional statements or default values to manage such scenarios effectively.

### Re-Declaring Variables

**Re-Declaring Variables with `var`:**

In JavaScript, if you use the `var` keyword to declare a variable and then later declare the same variable again using `var`, it will not lose its value. This behavior is known as **"variable hoisting."** The variable is moved to the top of its scope during the compilation phase, so re-declaring it later in the code does not reset its value.

**Example:**

```javascript
var carName = "Volvo";
var carName;
console.log(carName); // Outputs: Volvo
```

In this example, the variable `carName` is initially declared and assigned the value "Volvo." Later in the code, it is re-declared using `var`, but its value remains the same.

**Re-Declaring Variables with `let` or `const`:**

However, if you try to re-declare a variable using `let` or `const`, you will encounter an error. This is because variables declared with `let` and `const` have block-level scope, and re-declaring them within the same scope is not allowed.

**Example:**

```javascript
let carName = "Volvo";
let carName; // Error: Identifier 'carName' has already been declared
```

Attempting to re-declare `carName` using `let` results in an error.

### JavaScript `let`

- The `let` keyword was introduced in ECMAScript 2015 (ES6) to provide block-scoping capabilities.

#### Block Scope

- Before ES6 (2015), JavaScript had only global scope and function scope. Variables declared with `var` were function-scoped.

- ES6 introduced the `let` and `const` keywords, which provided block scope in JavaScript. Block scope means that variables declared within a block (enclosed by curly braces `{}`) are only accessible within that block.

**Example of Block Scope:**

```javascript
{
  let x = 2;
}
// x can NOT be used here
```

Here, `x` is only accessible within the block where it is declared.

#### Global Scope with `var`

- Variables declared with `var` always have global scope, regardless of where they are declared.

```javascript
{
  var x = 2;
}
// x CAN be used here
```

Here, `x` is accessible outside the block because it has global scope.

#### Redeclaring Variables with `var`

- Variables declared with `var` can be redeclared within the same scope, which can lead to unexpected behavior.

**Example:**

```javascript
var x = 10;
// Here x is 10

{
  var x = 2;
  // Here x is 2
}

// Here x is 2
```

#### Solving Redeclaration Issues with `let`

- Using `let` helps avoid the problem of redeclaring variables within the same scope.

**Example:**

```javascript
let x = 10;
// Here x is 10

{
  let x = 2;
  // Here x is 2
}

// Here x is 10
```

Using `let` inside a block keeps the variable's scope confined to that block.

### JavaScript `const`

The `const` keyword was introduced in ECMAScript 2015 (ES6) along with `let` to provide better variable declaration options in JavaScript.

#### Cannot be Reassigned

- Variables declared with `const` cannot be reassigned to a new value. Once assigned, their value remains constant throughout their scope.

  - **Example:**

    ```javascript
    const PI = 3.141592653589793;
    PI = 3.14; // Error: Assignment to constant variable
    PI = PI + 10; // Error: Assignment to constant variable
    ```

#### Must be Assigned

- Variables declared with `const` must be assigned a value at the time of declaration. Unlike `let`, you cannot declare a `const` variable without providing an initial value.

**Correct:**

```javascript
const PI = 3.14159265359;
```

**Incorrect:**

```javascript
const PI;
PI = 3.14159265359; // Error: Missing initializer in const declaration
```

#### Benefits of Using `const`

- Helps prevent accidental reassignment and promotes the use of immutable values.
- Improves code readability by signaling the developer's intent that the variable should not be changed.
- Provides a level of self-documentation in the code, indicating that the value is expected to remain constant.

#### `const` and Reference Immutability

- The `const` keyword in JavaScript does not create a constant value; instead, it creates a constant reference to a value.
- While you cannot reassign a constant value or a constant reference, you can still modify the content (elements or properties) of the referenced value.

**Constant Arrays:**

- You can change the elements of a constant array by modifying or adding elements.

**Example:**

```javascript
const cars = ["Saab", "Volvo", "BMW"];

// You can change an element:
cars[0] = "Toyota";

// You can add an element:
cars.push("Audi");
```

- However, you cannot reassign the entire array reference.

**Example:**

```javascript
const cars = ["Saab", "Volvo", "BMW"];

cars = ["Toyota", "Volvo", "Audi"]; // Error: Assignment to constant variable
```

**Constant Objects:**

- You can change the properties of a constant object by modifying existing properties or adding new ones.

**Example:**

```javascript
const car = { type: "Fiat", model: "500", color: "white" };

// You can change a property:
car.color = "red";

// You can add a property:
car.owner = "Aakash";
```

- Similar to arrays, you cannot reassign the entire object reference.

**Example:**

```javascript
const car = { type: "Fiat", model: "500", color: "white" };

// Error: Assignment to constant variable
car = { type: "Volvo", model: "EX60", color: "red" };
```

### Difference Between `let,` `const` and `var`

```markdown
| Var Type | Block Scope | Redeclare | Reassign | Hoisted | Binds this |
| -------- | ----------- | --------- | -------- | ------- | ---------- |
| var      | No          | Yes       | Yes      | Yes     | Yes        |
| let      | Yes         | No        | Yes      | No      | No         |
| const    | Yes         | No        | No       | No      | No         |
```

## JavaScript Operators

JavaScript operators are symbols that represent computations or actions to be performed on variables or values. They operate on operands and produce a result.

### 1. Arithmetic Operators

- Used for mathematical calculations.

  ```javascript
  let x = 10;
  let y = 5;

  // Addition
  let sum = x + y; // Result: 15

  // Subtraction
  let difference = x - y; // Result: 5

  // Multiplication
  let product = x * y; // Result: 50

  // Division
  let quotient = x / y; // Result: 2

  // Modulus (remainder)
  let remainder = x % y; // Result: 0

  // Exponentiation
  let power = x ** y; // Result: 100000
  ```

### 2. Comparison Operators

- Used to compare values and return a Boolean result.

  ```javascript
  let a = 5;
  let b = 10;
  let c = `5`;

  // Equality (checks only value)
  console.log(a == b); // false (5 == 10)
  console.log(a == c); // true (5 == `5`)

  // Inequality (checks only value)
  console.log(a != b); // true (5 != 10)
  console.log(a != c); // false (5 != `5`)

  // Strict Equality (checks datatype and value both)
  console.log(a === b); // false (5 === 10)
  console.log(a === c); // false (5 === `5`)

  // Strict Inequality (checks datatype and value both)
  console.log(a !== b); // true (5 !== 10)
  console.log(a !== c); // true (5 !== `5`)

  // Greater than
  console.log(a > b); // false

  // Less than
  console.log(a < b); // true

  // Greater than or equal to
  console.log(a >= b); // false

  // Less than or equal to
  console.log(a <= b); // true
  ```

### 3. Logical Operators

- Used for logical operations and combining conditions.

  ```javascript
  let p = true;
  let q = false;

  // Logical AND
  console.log(p && q); // false

  // Logical OR
  console.log(p || q); // true

  // Logical NOT
  console.log(!p); // false
  ```

### 4. Assignment Operators

- Used to assign values to variables.

  ```javascript
  let a = 10;

  // Assignment
  a = 5;

  // Addition assignment
  a += 3; // Equivalent to: a = a + 3

  // Subtraction assignment
  a -= 2; // Equivalent to: a = a - 2

  // Multiplication assignment
  a *= 4; // Equivalent to: a = a * 4

  // Division assignment
  a /= 2; // Equivalent to: a = a / 2

  // Modulus assignment
  a %= 2; // Equivalent to: a = a % 2

  // Exponentiation assignment
  a **= 4; // Equivalent to: a = a ** 4
  ```

### 5. Unary Operators

- Operators that perform operations on a single operand.

  ```javascript
  let num = 5;

  // Unary plus
  let positiveNum = +num; // Result: 5

  // Unary minus
  let negativeNum = -num; // Result: -5

  // Increment
  num++; // Equivalent to: num = num + 1

  // Decrement
  num--; // Equivalent to: num = num - 1
  ```

### 6. Ternary Operator/Conditional Operator (`?:`)

- A shorthand for an `if...else` statement.

  ```javascript
  let age = 20;

  let eligibility = age >= 18 ? "Eligible" : "Not eligible"; // Eligible
  ```

### 7. The Nullish Coalescing Operator (`??`)

- The `??` operator returns the first argument if it is not nullish (`null` or `undefined`).
- Otherwise it returns the second argument.

  ```js
  let name = null;
  let text = "missing";
  let result = name ?? text; // missing
  ```

### 8. The Optional Chaining Operator (`?.`)

- The `?.` operator returns `undefined` if an object is `undefined` or `null` (instead of throwing an error).

  ```js
  // Create an object:
  const car = { type: "Fiat", model: "500", color: "white" };
  // Ask for car name:
  document.getElementById("demo").innerHTML = car?.name; // undefined
  ```

### 9. Bitwise Operators

- Used for bitwise manipulation of integers.

  ```javascript
  let a = 5; // Binary: 101
  let b = 3; // Binary: 011

  // Bitwise AND
  let resultAnd = a & b; // Result: 1 (Binary: 001)

  // Bitwise OR
  let resultOr = a | b; // Result: 7 (Binary: 111)

  // Bitwise XOR
  let resultXor = a ^ b; // Result: 6 (Binary: 110)

  // Bitwise NOT
  let resultNot = ~a; // Result: -6 (Two's complement)

  // Left Shift
  let resultLeftShift = a << 1; // Result: 10 (Binary: 1010)

  // Right Shift
  let resultRightShift = a >> 1; // Result: 2 (Binary: 10)

  // Unsigned Right Shift
  let resultUnsignedRightShift = a >>> 1; // Result: 2 (Binary: 10)
  ```

### 10. Type Operators

- Used for checking the data type of a value.
- The typeofoperator is not a variable. It is an operator. Operators ( + - \* / ) do not have any data type.
- But, the typeof operator always returns a string (containing the type of the operand).

  ```javascript
  typeof variable; // Returns the data type of the variable

  typeof "Aakash"; // Returns "string"
  typeof 3.14; // Returns "number"
  typeof NaN; // Returns "number"
  typeof false; // Returns "boolean"
  typeof [1, 2, 3, 4]; // Returns "object"
  typeof { name: "Aakash", age: 21 }; // Returns "object"
  typeof new Date(); // Returns "object"
  typeof function () {}; // Returns "function"
  typeof myCar; // Returns "undefined"
  typeof null; // Returns "object"
  ```

### 11. The constructor Property

The constructor property returns the constructor function for all JavaScript variables.

```js
"Aakash".constructor               // Returns function String()  {[native code]}
(3.14).constructor               // Returns function Number()  {[native code]}
false.constructor                // Returns function Boolean() {[native code]}
[1,2,3,4].constructor            // Returns function Array()   {[native code]}
{name:'Aakash',age:21}.constructor // Returns function Object()  {[native code]}
new Date().constructor           // Returns function Date()    {[native code]}
function () {}.constructor       // Returns function Function(){[native code]}
```

### 12. String Concatenation

- Used to concatenate two strings (`str1` and `str2`)

  ```javascript
  let str1 = "Hello, ";
  let str2 = "world!";

  // String Concatenation
  let resultConcatenation = str1 + str2; // Result: "Hello, world!"
  ```

### 13. Comma Operator

- Used to evaluate multiple expressions and return the result of the last expression.

  ```javascript
  let x = (1 + 2, 3 * 4, 5 - 2);

  console.log(x); // Output: 3
  ```

### 14. `instanceOf` Operator

- Used to check if an object is an instance of a particular class or constructor.

  ```javascript
  // Define a simple class
  class Animal {
    constructor(name) {
      this.name = name;
    }
  }

  // Create an object/instance of the class
  let dog = new Animal("Dog");

  // Check if the object is an instance of a particular class using instanceof
  let isInstanceOfAnimal = dog instanceof Animal;

  // Output: true
  console.log("Is dog an instance of Animal?", isInstanceOfAnimal);
  ```

## JavaScript DataTypes

Certainly! JavaScript has several data types. Here's a simple JavaScript program that explains some of the basic data types and their usage:

```javascript
// Number
let num = 42;

// String
let str = "Hello, World!";

// Boolean
let bool = true;

// Undefined
let undefinedVar;

// Null
let nullVar = null;

// Object
let obj = { key: "value", age: 21 };

// Array
let arr = [1, 2, 3, 4, 5];

// Function
function sayHello() {
  console.log("Hello!");
}
sayHello();

// Symbol (introduced in ES6)
let sym = Symbol("unique");
```

This program demonstrates the following data types:

- **Number:** Represents numeric values.
- **String:** Represents text data.
- **Boolean:** Represents true or false.
- **Undefined:** Represents an uninitialized variable.
- **Null:** Represents the absence of a value.
- **Object:** Represents a collection of key-value pairs.
- **Array:** Represents an ordered list of values.
- **Function:** Represents a reusable block of code.
- **Symbol:** Represents a unique and immutable value (introduced in ECMAScript 6).

## JavaScript Functions

- A JavaScript function is a block of code designed to perform a particular task.
- A JavaScript function is executed when "something" invokes it (calls it).
- With functions you can reuse code
- You can write code that can be used many times.
- You can use the same code with different arguments, to produce different results.

**Example:**

```js
// Function to compute the product of p1 and p2
function myFunction(p1, p2) {
  return p1 * p2;
}
```

### JavaScript Function Syntax

- A JavaScript function is defined with the function keyword, followed by a name, followed by parentheses `()`.
- Function names can contain letters, digits, underscores, and dollar signs (same rules as variables).
- The parentheses may include parameter names separated by commas:
  `(parameter1, parameter2, ...)`
- The code to be executed, by the function, is placed inside curly brackets: `{}`

```js
function name(parameter1, parameter2, parameter3) {
  // code to be executed
}
```

- Function parameters are listed inside the parentheses `()` in the function definition.
- Function arguments are the values received by the function when it is invoked.
- Inside the function, the arguments (the parameters) behave as local variables.

### Function Invocation

The code inside the function will execute when "something" invokes (calls) the function:

- When an event occurs (when a user clicks a button)
- When it is invoked (called) from JavaScript code
- Automatically (self invoked)

### Function Return

When JavaScript reaches a return statement, the function will stop executing.

If the function was invoked from a statement, JavaScript will **"return"** to execute the code after the invoking statement.

Functions often compute a return value. The return value is **"returned"** back to the **"caller"**

**Example:**
Calculate the product of two numbers, and return the result:

```js
// Function is called, the return value will end up in x
let x = myFunction(4, 3);

function myFunction(a, b) {
  // Function returns the product of a and b
  return a * b;
}
```

If there is no return statement or if the return statement doesn't specify a value, the function returns undefined.

### The () Operator

The () operator invokes (calls) the function:

In JavaScript, when you reference a function without the parentheses, you are referring to the function itself, not the result of invoking the function.

```javascript
function add(a, b) {
  return a + b;
}

// Assigning the function to a variable
let referenceToFunction = add;

// Now referenceToFunction holds the function itself
console.log(referenceToFunction);
// Output: function add(a,b) { ... }

// If you want the result, you need to invoke the function with parentheses
let result = referenceToFunction(3, 2);
// OR let result = add(3,2);
console.log(result); // Output: 5
```

In this example:

- `referenceToFunction` holds a reference to the `add` function.
- When you log `referenceToFunction`, you see the function definition itself.
- To obtain the result of the function, you need to invoke it with parentheses, like `referenceToFunction(3,2)`, which will give you the result of the function for the input `3,2`.

This behavior is important in cases where you want to pass functions around as values or use them as callbacks, where you might want to reference the function without immediately invoking it.

### Local Variables

1. **Scope of Local Variables:**

   - Variables declared within a JavaScript function are local to that function.
   - They can only be accessed and used within the scope of the function in which they are declared.

2. **Example:**

   ```javascript
   // code here can NOT use carName

   function myFunction() {
     let carName = "Volvo";
     // code here CAN use carName
   }

   // code here can NOT use carName
   ```

3. **Scope Isolated to Functions:**

   - Since local variables are recognized only inside their functions, variables with the same name can be used in different functions without causing conflicts.

4. **Variable Lifecycle:**
   - Local variables are created when a function is called and initialized with the value assigned to them.
   - They exist throughout the execution of the function.
   - Once the function completes its execution, local variables are destroyed, and their memory is released.

## JavaScript Objects

- JavaScript variables are used as containers for data values.
- You can assign a simple value, like a string, to a variable, as in: `let car = "Fiat";`
- Objects in JavaScript are variables as well, but they can contain multiple values.

  - Values in objects are written as name-value pairs, separated by colons.
  - **Example:**

    ```javascript
    const car = { type: "Fiat", model: "500", color: "white" };
    ```

**Object Declaration with `const`:**

- It's a common practice to declare objects using the `const` keyword to indicate that the reference to the object cannot be reassigned. However, the properties of a `const` object can still be modified.

  ```javascript
  const car = { type: "Fiat", model: "500", color: "white" };
  ```

### Real Life Objects, Properties, and Methods

In real life, a car is an object.
A car has properties like weight and color, and methods like start and stop:

```markdown
| Object | Properties         | Methods     |
| ------ | ------------------ | ----------- |
| car    | car.name = Fiat    | car.start() |
|        | car.model = 500    | car.drive() |
|        | car.weight = 850kg | car.brake() |
|        | car.color = white  | car.stop()  |
```

- All cars have the same properties, but the property values differ from car to car.
- All cars have the same methods, but the methods are performed at different times.

### Object Definition

- You define (and create) a JavaScript object using an object literal.
- The object literal is a comma-separated list of name-value pairs, enclosed in curly braces `{}`.

**Example:**

```javascript
const person = {firstName: "Aakash", lastName: "Bharambe" age: 21, eyeColor: "black"};
```

- Spaces and line breaks are not essential in the object definition.
- The example can be written on a single line or span multiple lines for better readability.

  ```javascript
  const person = {
    firstName: "Aakash",
    lastName: "Bharambe",
    age: 21,
    eyeColor: "black",
  };
  ```

### Object Properties

- The name-value pairs in JavaScript objects are referred to as properties.
- Each property has a name (also known as a key) and an associated value.

**Accessing Object Properties:**

- You can access object properties using two syntaxes:

  - **Dot Notation:** `objectName.propertyName`

  ```javascript
  const person = {
    firstName: "Aakash",
    lastName: "Bharambe",
    age: 21,
    eyeColor: "black",
  };
  console.log(person.lastName); // Output: Bharambe
  ```

  - **Square Bracket Notation:** `objectName["propertyName"]`

  ```javascript
  const person = {
    firstName: "Aakash",
    lastName: "Bharambe",
    age: 21,
    eyeColor: "black",
  };
  console.log(person["lastName"]); // Output: Bharambe
  ```

### Object Methods

- Objects in JavaScript can have methods, which are functions stored as properties.
- Methods are actions that can be performed on objects.
- Methods are defined as function expressions within the properties of an object.

**Example:**

```javascript
const person = {
  firstName: "Aakash",
  lastName: "Bharambe",
  id: 5566,
  fullName: function () {
    return this.firstName + " " + this.lastName;
  },
};
```

- `this.firstName` refers to the `firstName` property of the `person` object.

**Understanding `this`:**

- In the context of an object method, the `this` keyword refers to the object on which the method is invoked.

- `this` refers to different objects depending on how it is used:

  - In an object method, `this` refers to the object itself.
  - Alone, outside any function, `this` refers to the global object.
  - In a function, `this` refers to the global object (unless in strict mode, where it is undefined).
  - In an event handler, `this` refers to the element that received the event.
  - Methods like `call()`, `apply()`, and `bind()` can be used to set the `this` value explicitly.

- `this` is a keyword, not a variable, and its value cannot be changed.
- Understanding the context in which `this` is used is crucial for correctly referencing properties and methods within objects.

**Accessing Object Methods:**

- You access an object method using the syntax `objectName.methodName()`.
- **Example:**

  ```javascript
  name = person.fullName();
  ```

**Accessing Method without Parentheses:**

- If you access a method without the `()` parentheses, it will return the function definition.
- **Example:**

  ```javascript
  name = person.fullName;
  ```

**Avoid Declaring Strings, Numbers, and Booleans as Objects:**

- When you use the `new` keyword with String, Number, or Boolean, JavaScript creates objects instead of primitive values.
- **Example:**

  ```javascript
  x = new String(); // Declares x as a String object
  y = new Number(); // Declares y as a Number object
  z = new Boolean(); // Declares z as a Boolean object
  ```

- It's recommended to avoid declaring strings, numbers, and booleans as objects, as it can complicate your code and slow down execution speed.
- Instead, use the primitive values for better performance and code clarity.

## Event Handlers

**HTML Events:**

- HTML events are occurrences that can happen to HTML elements.
- Events can be triggered by the browser or by user actions.
- HTML events include actions such as a web page finishing loading, a change in an input field, or a button being clicked.
- JavaScript can be used to react to HTML events. It allows you to execute code when events are detected.

**Event Handler Attributes:**

- HTML allows event handler attributes to be added to HTML elements, with JavaScript code embedded.
- Event handler attributes can be written with single quotes (`'`) or double quotes (`"`).

- **Example with onclick Attribute:**

  ```html
  <button onclick="document.getElementById('demo').innerHTML = Date()">
    The time is?
  </button>
  ```

  In this example, the `onclick` attribute is used to execute JavaScript code when the button is clicked.

- **Example with Function Call:**

  ```html
  <button onclick="this.innerHTML = Date()">The time is?</button>
  ```

  Here, the code in the `onclick` attribute changes the content of the button element.

- **Common HTML Event Attributes:**

```markdown
| Event            | Description                                         |
| ---------------- | --------------------------------------------------- |
| onabort          | The loading of an image is aborted                  |
| onafterprint     | A print job is complete                             |
| onbeforeprint    | A print job is started                              |
| onbeforeunload   | The user is about to leave the page                 |
| onblur           | An HTML element loses focus                         |
| oncanplay        | The browser can start playing the media             |
| oncanplaythrough | The browser can play through the media              |
| onchange         | An HTML element has been changed                    |
| onclick          | The user clicks an HTML element                     |
| oncontextmenu    | The user right-clicks on an HTML element            |
| oncopy           | The user copies content to the clipboard            |
| oncut            | The user cuts content from the clipboard            |
| ondblclick       | The user double-clicks an HTML element              |
| ondrag           | An element or text selection is being dragged       |
| ondragend        | The dragging of an element or text selection        |
|                  | is finished                                         |
| ondragenter      | The dragged element or text selection               |
|                  | enters a valid drop target                          |
| ondragleave      | The dragged element or text selection               |
|                  | leaves a valid drop target                          |
| ondragover       | The dragged element or text selection is            |
|                  | over a valid drop target                            |
| ondragstart      | The dragging of an element or text selection starts |
| ondrop           | An element is dropped on a valid drop target        |
| ondurationchange | The duration of the media changes                   |
| onemptied        | The media has become empty                          |
|                  | (e.g., audio/video is finished)                     |
| onended          | The media has reached the end                       |
| onerror          | An error occurs while loading an external resource  |
|                  | (e.g., image or script)                             |
| onfocus          | An HTML element receives focus                      |
| onhashchange     | The hash part of the URL changes                    |
| oninput          | An input value changes                              |
| oninvalid        | An invalid form element is detected                 |
| onkeydown        | The user pushes a keyboard key                      |
| onkeypress       | The user presses or holds down a key                |
| onkeyup          | The user releases a key                             |
| onload           | The browser has finished loading the page           |
| onloadeddata     | The browser has loaded the current frame's data     |
| onloadedmetadata | The browser has loaded metadata for the current     |
|                  | frame                                               |
| onloadstart      | The browser starts to load the media elements       |
| onmessage        | A message is received from a Web Worker or a        |
|                  | parent window/iframe                                |
| onmousedown      | A mouse button is pressed on an HTML element        |
| onmouseenter     | The mouse pointer enters an HTML element            |
| onmouseleave     | The mouse pointer leaves an HTML element            |
| onmousemove      | The mouse pointer is moving over an HTML element    |
| onmouseout       | The user moves the mouse away from an HTML element  |
| onmouseover      | The user moves the mouse over an HTML element       |
| onmouseup        | A mouse button is released on an HTML element       |
| onmousewheel     | The mouse wheel rolls up or down                    |
| onoffline        | The browser goes offline                            |
| ononline         | The browser goes online                             |
| onpagehide       | The user navigates away from a webpage              |
| onpageshow       | The user navigates to a webpage                     |
| onpaste          | The user pastes content from the clipboard          |
| onpause          | The media is paused                                 |
| onplay           | The media has been started or is no longer paused   |
| onplaying        | The media is playing after having been paused or    |
|                  | stopped                                             |
| onpopstate       | A user navigates backward or forward through the    |
|                  | history of the session                              |
| onprogress       | The browser is fetching the media data              |
| onratechange     | The playback rate of the media has changed          |
| onresize         | The browser window is resized                       |
| onreset          | The reset button in a form is clicked               |
| onscroll         | The user scrolls through an HTML element            |
| onsearch         | The user activates the search bar                   |
|                  | (only for input type "search")                      |
| onseeked         | The seeking of the media is complete                |
| onseeking        | The seeking of the media is in progress             |
| onselect         | Text is selected in an input or textarea            |
| onshow           | A context menu is shown                             |
| onstalled        | The browser is trying to get media data,            |
|                  | but data is not available                           |
| onsubmit         | A form is submitted                                 |
| onsuspend        | Browser is intentionally not fetching media data    |
| ontimeupdate     | The current playback position is updated            |
| ontoggle         | An element's "open" attribute is changed            |
| onunload         | The user is leaving the page                        |
| onvolumechange   | The volume of the media has changed                 |
| onwaiting        | The media is waiting for the user to take action    |
|                  | (e.g., press play)                                  |
| onwheel          | The mouse wheel is being rotated                    |
```

### JavaScript Event Handlers

Event handlers can be used to handle and verify user input, user actions, and browser actions:

- Things that should be done every time a page loads
- Things that should be done when the page is closed
- Action that should be performed when a user clicks a button
- Content that should be verified when a user inputs data
- And more ...

Many different methods can be used to let JavaScript work with events:

- HTML event attributes can execute JavaScript code directly
- HTML event attributes can call JavaScript functions
- You can assign your own event handler functions to HTML elements
- You can prevent events from being sent or being handled
- And more ...

## JavaScript Strings

JavaScript strings are sequences of characters, representing text and are one of the fundamental data types in the language.

**Creating Strings:**

- Strings can be created using single quotes (`'`), double quotes (`"`), or backticks (\`\`).

  ```javascript
  let singleQuotes = "Hello, World!";
  let doubleQuotes = "Hello, World!";
  let backticks = `Hello, World!`;
  ```

- You can use quotes inside a string, as long as they don't match the quotes surrounding the string:

  ```js
  let answer1 = "It's alright `Aakash`";
  let answer2 = 'It`s alright "Aakash"';
  let answer3 = `It's alright "Aakash"`;
  ```

**String Interpolation:**

- Templates were introduced with ES6 (JavaScript 2016).
- Templates are strings enclosed in backticks (\`This is a template string\`).
- Templates allow single and double quotes inside a string
- With the introduction of template literals (using backticks), you can interpolate variables directly into strings.

  ```javascript
  let name = "Aakash";
  let greeting = `Hello, ${name}!`;
  console.log(greeting); // Output: Hello, Aakash!
  ```

- Templates allow multiline strings:

  ```js
  let text = `The quick
  brown fox
  jumps over
  the lazy dog`;
  ```

- Template Strings allow expressions in strings:

  ```js
  let price = 10;
  let VAT = 0.25;

  console.log(`Total = ${(price * (1 + VAT)).toFixed(2)} Rs`);
  // Output: Total = 12.50 Rs
  ```

  - Automatic replacing of expressions with real values is called string interpolation.

**Escape Characters:**

- Escape sequences in programming languages are special combinations of characters used to represent characters that are hard to type directly or have special meanings. They usually start with a backslash `\` followed by one or more characters.

  ```javascript
  let stringWithNewLine = "This is a line\nThis is a new line";
  ```

  ```md
  | Code   | Result                                        |
  | ------ | --------------------------------------------- |
  | \b     | Backspace                                     |
  | \f     | Form Feed                                     |
  | \n     | New Line                                      |
  | \r     | Carriage Return                               |
  | \t     | Horizontal Tabulator                          |
  | \v     | Vertical Tabulator                            |
  | \'     | Single Quote                                  |
  | \"     | Double Quote                                  |
  | \\     | Backslash                                     |
  | \uXXXX | Unicode Escape (e.g., \u00A9 for ©)           |
  | \xXX   | Latin-1 character escape (e.g., \x41 for 'A') |
  ```

**Immutable Nature:**

- Strings in JavaScript are immutable, meaning once a string is created, its value cannot be changed. Operations on strings create new strings rather than modifying the existing one.

  ```javascript
  let originalString = "Hello";
  let newString = originalString.concat(", World!");
  console.log(originalString); // Output: Hello
  console.log(newString); // Output: Hello, World!
  ```

**Unicode Support:**

- JavaScript uses the Unicode character set, allowing the representation of a wide range of characters from various languages and symbols.

  ```javascript
  let unicodeString = "\u03A9"; // Represents the Greek letter Omega
  ```

### Strings as Objects

- Normally, JavaScript strings are primitive values, created from literals.

  ```js
  let x = "Aakash";
  ```

- However, you can also create strings as objects using the `new String()` syntax. This creates a String object instead of a primitive string.

  ```js
  let y = new String("Aakash");
  ```

- Do not create Strings objects.
- The new keyword complicates the code and slows down execution speed.
- When comparing strings created using literals and strings created as objects, you might encounter some unexpected behavior due to the differences in their types.

1. **Using == operator, x and y are equal:**

   ```javascript
   let x = "Aakash";
   let y = new String("Aakash");
   console.log(x == y); // true
   ```

   The `==` operator performs type coercion, so it converts the object to a primitive value before making the comparison. In this case, it converts the String object (`y`) to a primitive string, making the comparison true.

2. **Using === operator, x and y are not equal:**

   ```javascript
   let x = "Aakash";
   let y = new String("Aakash");
   console.log(x === y); // false
   ```

   The `===` operator checks both value and type without performing type coercion. Since `x` is a primitive string and `y` is a String object, they are of different types, and the comparison evaluates to false.

3. **Comparing two JavaScript objects:**

   ```javascript
   let x = new String("Aakash");
   let y = new String("Aakash");
   console.log(x === y); // false
   ```

   When comparing two JavaScript objects (including String objects), the `===` operator checks if they reference the exact same object in memory. In this case, `x` and `y` are two separate String objects, so the comparison returns false.

### String Methods

- JavaScript provides a variety of methods for manipulating strings. Some common methods include:

  - `length`: Returns the length of the string.
  - `charAt(index)`: Returns the character at the specified index.
  - `substring(start, end)`: Extracts a portion of the string between the specified indices.
  - `indexOf(substring)`: Returns the index of the first occurrence of a substring.
  - `concat(string2)`: Concatenates two strings.
  - `toUpperCase()`, `toLowerCase()`: Convert the string to uppercase or lowercase.
  - `split(separator)`: Splits the string into an array of substrings based on the specified separator.
  - `trim()`: Removes whitespace from both ends of a string.

  ```javascript
  let str = "Hello, World!";
  // Original String
  console.log(str);

  // Length of the string
  console.log(str.length); // Output: 13

  // Character at a specific position
  console.log(str.charAt(7)); // Output: W | -ve index not allowed
  console.log(str.at(7)); // Output: W | -ve index allowed
  console.log(str[7]); // Output: W | -ve index allowed

  // returns a UTF-16 code (an integer between 0 and 65535).
  console.log(str.charCodeAt(7)); // Output: W

  // Substring from index 0 to 4 (exclusive)
  console.log(str.substring(0, 5)); // Output: Hello

  // Index of the first occurrence of the substring "World"
  console.log(str.indexOf("World")); // Output: 7

  // Convert the string to uppercase
  console.log(str.toUpperCase()); // Output: HELLO, WORLD!

  // Convert the string to lowercase
  console.log(str.toLowerCase()); // Output: hello, world!

  // Replace a substring
  let replacedString = str.replace("World", "Universe");
  console.log(replacedString); // Output: Hello, Universe!

  // Concatenate strings
  let anotherStr = " Welcome!";
  let concatenatedString = str.concat(anotherStr);
  console.log(concatenatedString); // Output: Hello, World! Welcome!

  // Check if the string starts with a specific prefix
  console.log(str.startsWith("Hello")); // Output: true

  // Check if the string ends with a specific suffix
  console.log(str.endsWith("World!")); // Output: true

  // Extract a portion of the string using substr
  // Substring from index 7 upto length 5
  console.log(str.substr(7, 5)); // Output: World
  ```

## JavaScript Numbers

- JavaScript has only one type of number. Numbers can be written with or without decimals.

  ```js
  let x = 3.14; // A number with decimals
  let y = 3; // A number without decimals
  ```

- Extra large or extra small numbers can be written with scientific (exponent) notation:

  ```js
  let x = 123e5; // 12300000
  let y = 123e-5; // 0.00123
  ```

**JavaScript Numbers are Always 64-bit Floating Point.**

- Unlike many other programming languages, JavaScript does not define different types of numbers, like integers, short, long, floating-point etc.
- JavaScript numbers are always stored as double precision floating point numbers, following the international IEEE 754 standard.
- This format stores numbers in 64 bits, where the number (the fraction) is stored in bits 0 to 51, the exponent in bits 52 to 62, and the sign in bit 63:

  ```md
  | Value (aka Fraction/Mantissa) | Exponent          | Sign       |
  | ----------------------------- | ----------------- | ---------- |
  | 52 bits (0 - 51)              | 11 bits (52 - 62) | 1 bit (63) |
  ```

**Integer Precision:**

- Integers (numbers without a period or exponent notation) are accurate up to 15 digits.

  ```js
  let x = 999999999999999; // x will be 999999999999999
  let y = 9999999999999999; // y will be 10000000000000000
  ```

- The maximum number of decimals is 17.

**Floating Precision:**

- Floating point arithmetic is not always 100% accurate:

  ```js
  let x = 0.2 + 0.1; // x = 0.30000000000000004
  ```

- To solve the problem above, it helps to multiply and divide:

  ```js
  let x = (0.2 * 10 + 0.1 * 10) / 10; // x = 0.3
  ```

### Numeric Strings

- JavaScript strings can have numeric content:

  ```js
  let x = 100; // x is a number

  let y = "100"; // y is a string
  ```

- JavaScript will try to convert strings to numbers in all numeric operations

#### Adding Numbers and Strings

**Example 1:**

```javascript
let x = 5 + 2 + 3; // 10
```

In this example, the `+` operator is used for addition. The result is that `x` will be assigned the value `10` (5 + 2 + 3).

**Example 2:**

```javascript
let x = "Aakash" + " " + "Bharambe"; // Aakash Bharambe
```

Here, the `+` operator is used for string concatenation. The result is that `x` will be assigned the value `"Aakash Bharambe"`.

**Example 3:**

```javascript
let x = "5" + 2 + 3; // 523
```

In this case, the first value is a string (`"5"`), and the subsequent `+` operators perform string concatenation, not numerical addition. The result is the string `"523"`.

**Example 4:**

```javascript
let x = 2 + 3 + "5"; //55
```

This example demonstrates that JavaScript follows the left-to-right order of operations. The first addition operation is between two numbers (`2 + 3`), resulting in `5`. Then, the `+` operator is used to concatenate the string `"5"`. As a result, `x` will be assigned the value `"55"`.

**Example 5:**

```javascript
let x = 2 + 3 + +"5"; //10
```

Here, the unary plus (`+`) operator is used before the string `"5"`. The unary plus attempts to convert the string to a number. After the conversion, the expression becomes a numerical addition operation.

Breaking it down step by step:

1. `+"5"` converts the string to a number, resulting in `5`.
2. The expression then becomes `2 + 3 + 5`.
3. The addition is performed, and `x` is assigned the value `10`.

So, `x` will be `10` in this example.

**Important Note:**

- When using the `+` operator with strings and numbers, JavaScript follows a process known as **"type coercion."** If one operand is a string, JavaScript will treat the other operand as a string and perform concatenation. If both operands are numbers, it will perform addition.
- All other operators(`- * / % **`) will work normally.
- If type coversion is done by user it is known as conversion and if conversion is done by javascript then it is known as type coercion.

### `NaN`

`NaN` in JavaScript stands for **"Not a Number."** It is a special value representing an `undefined` or unrepresentable value in floating-point calculations. When attempting to perform arithmetic operations with non-numeric values, JavaScript will result in `NaN`.

Here are some examples to illustrate the behavior of `NaN`:

1. **Trying to do arithmetic with a non-numeric string:**

   ```javascript
   let x = 100 / "Apple";
   console.log(x); // NaN
   ```

2. **If the string is numeric, the result will be a number:**

   ```javascript
   let x = 100 / "10";
   console.log(x); // 10 (numeric result)
   ```

3. **Using `isNaN()` to check if a value is not a number:**

   ```javascript
   let x = 100 / "Apple";
   console.log(isNaN(x)); // true
   ```

4. **Mathematical operation with `NaN`:**

   ```javascript
   let x = NaN;
   let y = 5;
   let z = x + y;
   console.log(z); // NaN
   ```

5. **Concatenation with `NaN`:**

   ```javascript
   let x = NaN;
   let y = "5";
   let z = x + y;
   console.log(z); // NaN5 (string concatenation)
   ```

6. **Checking the type of `NaN`:**

   ```javascript
   console.log(typeof NaN); // "number"
   ```

It's important to note that even though the type of `NaN` is "number," `NaN` itself is not equal to any value, including itself. Therefore, you cannot use standard equality operators (`==` or `===`) to check if a value is `NaN`. Instead, you should use the `isNaN()` function or the `Number.isNaN()` method.

```javascript
let x = NaN;
console.log(isNaN(x)); // true
console.log(Number.isNaN(x)); // true
```

### HexaDecimal

In JavaScript, you can represent hexadecimal numbers by using the `0x` prefix. Hexadecimal is base-16, meaning it uses 16 different digits (0-9 and A-F, where A stands for 10, B for 11, and so on up to F for 15). Here are some examples:

**Defining a hexadecimal number:**

```javascript
let x = 0xff; // 255 in decimal
```

- In this example, `0xFF` is a hexadecimal representation of the decimal number 255.

It's important to note that while `0x` is used for hexadecimal, a leading zero alone can be interpreted as an octal (base-8) number in some JavaScript versions. To avoid confusion, it's recommended not to use a leading zero for numeric constants.

**Using the `toString()` method:**

The `toString()` method can be used to convert a number to a string representation in a specified base. Here's an example:

```javascript
let myNumber = 32;
console.log(myNumber.toString(32)); // Output: 10
console.log(myNumber.toString(16)); // Output: 20
console.log(myNumber.toString(12)); // Output: 28
console.log(myNumber.toString(10)); // Output: 32
console.log(myNumber.toString(8)); // Output: 40
console.log(myNumber.toString(2)); // Output: 100000
```

In this example, `toString()` is used with different base values to represent the same number (`32`) in various bases: 32, 16, 12, 10, 8, and 2.

### JavaScript Numbers as Objects

- Normally JavaScript numbers are primitive values created from literals:

  ```js
  let x = 123;
  ```

- But numbers can also be defined as objects with the keyword new:

  ```js
  let y = new Number(123);
  ```

- Do not create Number objects.
- The new keyword complicates the code and slows down execution speed.
- When comparing numbers created using literals and numbers created as objects, you might encounter some unexpected behavior due to the differences in their types.

1. **Using == operator, x and y are equal:**

   ```javascript
   let x = 500;
   let y = new Number(500);
   console.log(x == y); // true
   ```

   The `==` operator performs type coercion, so it converts the object to a primitive value before making the comparison. In this case, it converts the Number object (`y`) to a primitive number, making the comparison true.

2. **Using === operator, x and y are not equal:**

   ```javascript
   let x = 500;
   let y = new Number(500);
   console.log(x === y); // false
   ```

   The `===` operator checks both value and type without performing type coercion. Since `x` is a primitive number and `y` is a Number object, they are of different types, and the comparison evaluates to false.

3. **Comparing two Number objects:**

   ```javascript
   let x = new Number(500);
   let y = new Number(500);
   console.log(x === y); // false
   ```

   When comparing two JavaScript objects (including Number objects), the `===` operator checks if they reference the exact same object in memory. In this case, `x` and `y` are two separate Number objects, so the comparison returns false.

### BigInt

JavaScript `BigInt` variables are used to store big integer values that are too big to be represented by a normal JavaScript `Number`.

**JavaScript Integer Accuracy:**

- In JavaScript, all numbers are stored in a 64-bit floating-point format (IEEE 754 standard).
- JavaScript integers are only accurate up to 15 digits:
- With this standard, large integer cannot be exactly represented and will be rounded.

  ```js
  let x = 999999999999999; //999999999999999

  let y = 9999999999999999; // 10000000000000000
  ```

- Because of this, JavaScript can only safely represent integers:

  - Up to 9007199254740991 = +(2^53-1)
  - and
  - Down to -9007199254740991 = -(2^53-1).

- Integer values outside this range lose precision.

**How to Create a BigInt:**

To create a BigInt, append n to the end of an integer or call BigInt():

```js
let x = 9999999999999999;
let y = 9999999999999999n;
let x = 1234567890123456789012345n;
let y = BigInt(1234567890123456789012345);
```

- BigInt: A new JavaScript Datatype
- The JavaScript typeof a BigInt is "bigint":

  ```js
  let x = BigInt(999999999999999);
  let type = typeof x; //bigint
  ```

- BigInt is the second numeric data type in JavaScript (after Number).

#### Supported Operators for BigInt

BigInts in JavaScript support most of the standard arithmetic operators, making them suitable for various mathematical operations.

```javascript
// Addition (+)
let addition = bigInt1 + bigInt2;

// Subtraction (-)
let subtraction = bigInt1 - bigInt2;

// Multiplication (*)
let multiplicaion = bigInt1 * bigInt2;

// Division (/)
let division = bigInt1 / bigInt2;

// Modulus (%)
let modulus = bigInt1 % bigInt2;

// Exponentiation (**)
let exponentiation = bigInt1 ** exponent;

// Bitwise AND (&), OR (|), XOR (^), and NOT (~):
let resultAnd = bigInt1 & bigInt2;
let resultOr = bigInt1 | bigInt2;
let resultXor = bigInt1 ^ bigInt2;
let resultNot = ~bigInt1;

// Left Shift (<<) and Right Shift (>>)
let resultLeftShift = bigInt1 << shiftAmount;
let resultRightShift = bigInt1 >> shiftAmount;
```

**Note:**

1. **Type Conversion:**

   - Arithmetic operations between a BigInt and a regular Number are not allowed without explicit conversion, as it can result in loss of precision.

     ```javascript
     // This will throw an error
     let result = bigInt1 + regularNumber;
     ```

2. **Unsigned Right Shift (`>>>`):**

   - The unsigned right shift (`>>>`) is not supported on BigInts, as they don't have a fixed width. You can only use the signed right shift (`>>`) with BigInts.

     ```javascript
     // This will throw an error
     let resultUnsignedRightShift = bigInt1 >>> shiftAmount;
     ```

3. **BigInt Decimals:**

   - BigInts in JavaScript represent integers only, and they cannot have decimal places. Attempting to perform division with a BigInt will result in an error.

     ```javascript
     let x = 5n;
     let y = x / 2;
     // Error: Cannot mix BigInt and other types, use explicit conversion.
     ```

   - BigInts cannot be directly divided by other values in a mixed-type operation.

4. **Explicit Conversion:**

   - To perform division involving a BigInt, you need to explicitly convert the BigInt to a regular Number before dividing.

     ```javascript
     let x = 5n;
     let y = Number(x) / 2;
     ```

   - It's important to note that after converting a BigInt to a regular Number, you may lose precision, especially if the BigInt represents a large integer. BigInts are designed to handle arbitrary-precision integers without loss of accuracy, but converting to a regular Number may result in rounding or truncation.

#### BigInt Hex, Octal and Binary

- BigInt can also be written in hexadecimal, octal, or binary notation:

  ```js
  let hex = 0x20000000000003n;
  let oct = 0o400000000000000003n;
  let bin = 0b100000000000000000000000000000000000000000000000000011n;
  ```

#### Minimum and Maximum Safe Integers

- In JavaScript, the `MAX_SAFE_INTEGER` represents the maximum integer value that can be safely represented and manipulated without loss of precision using the standard `Number` type. It is defined as `(2^53 - 1)` or `9007199254740991`. The `MIN_SAFE_INTEGER` represents the minimum safe integer value, which is `-(2^53 - 1)` or `-9007199254740991`.
- However, it's important to note that JavaScript uses a 64-bit floating-point representation for numbers, following the IEEE 754 standard. Due to the limitations of this representation, precision can be lost when dealing with very large numbers.

  ```javascript
  9007199254740992 === 9007199254740993; // is true !!!
  ```

- This happens because `9007199254740992` is beyond the `MAX_SAFE_INTEGER`, and as a result, it loses precision. In JavaScript, integers beyond the safe range may not be accurately represented, leading to unexpected results.
- To address this, ECMAScript 6 (ES6) introduced the `Number.isSafeInteger()` method.

**`Number.isSafeInteger()`:**

It checks whether a given value is a safe integer. Safe integers are those that can be exactly represented as double-precision numbers without loss of precision.

```javascript
Number.isSafeInteger(10); // true
Number.isSafeInteger(12345678901234567890); // false
```

- The value `12345678901234567890` is not a safe integer because it falls outside the safe range.

**ES6 also added `Number.isInteger()` method to the Number object:**

- The `Number.isInteger()` method returns true if the argument is an integer.

  ```js
  Number.isInteger(10);
  Number.isInteger(10.5);
  ```

### Number Methods

```js
// Method 1: toExponential() - Converts a number to exponential notation
let num1 = 123.456;
console.log("1. toExponential():", num1.toExponential(2));
// Output: 1. toExponential(): 1.23e+2

// Method 2: toFixed() - Rounds a number to a specified number of decimal places
let num2 = 123.456789;
console.log("2. toFixed():", num2.toFixed(2));
// Output: 2. toFixed(): 123.46

// Method 3: toLocaleString() - Returns a string with a language-sensitive representation of the number
let num3 = 1234567.89;
console.log("3. toLocaleString():", num3.toLocaleString());
// Output: 3. toLocaleString(): 1,234,567.89

// Method 4: toPrecision() - Formats a number to a specified length
let num4 = 12345.6789;
console.log("4. toPrecision():", num4.toPrecision(6));
// Output: 4. toPrecision(): 12345.7

// Method 5: toString() - Converts a number to a string
let num5 = 42;
console.log("5. toString():", num5.toString());
// Output: 5. toString(): 42

// Method 6: valueOf() - Returns the primitive value of a number
let num6 = new Number(3.14);
console.log("6. valueOf():", num6.valueOf());
// Output: 6. valueOf(): 3.14

// Method 7: isNaN() - Checks if a value is NaN (Not a Number)
console.log("7. isNaN():", isNaN("Hello"));
// Output: 7. isNaN(): true

// Method 8: isFinite() - Checks if a value is a finite number
console.log("8. isFinite():", isFinite(42));
// Output: 8. isFinite(): true

// Method 9: parseInt() - Parses a string and returns an integer
let strInt = "123";
console.log("9. parseInt():", parseInt(strInt));
// Output: 9. parseInt(): 123

// Method 10: parseFloat() - Parses a string and returns a floating-point number
let strFloat = "3.14";
console.log("10. parseFloat():", parseFloat(strFloat));
// Output: 10. parseFloat(): 3.14
```

### Number Prperties

1. **EPSILON:**

   - `Number.EPSILON` represents the difference between 1 and the smallest floating-point number greater than 1.

   ```javascript
   let x = Number.EPSILON; //2.220446049250313e-16
   ```

2. **MAX_VALUE:**

   - `Number.MAX_VALUE` is a constant representing the largest possible number in JavaScript.

   ```javascript
   let x = Number.MAX_VALUE; // 1.7976931348623157e+308
   ```

3. **MIN_VALUE:**

   - `Number.MIN_VALUE` is a constant representing the smallest positive nonzero number in JavaScript.

   ```javascript
   let x = Number.MIN_VALUE; // 5e-324
   ```

4. **MAX_SAFE_INTEGER:**

   - `Number.MAX_SAFE_INTEGER` represents the maximum safe integer in JavaScript, which is (2^53 - 1).

   ```javascript
   let x = Number.MAX_SAFE_INTEGER; //9007199254740991 = (2^53 - 1)
   ```

5. **MIN_SAFE_INTEGER:**

   - `Number.MIN_SAFE_INTEGER` represents the minimum safe integer in JavaScript, which is -(2^53 - 1).

   ```javascript
   let x = Number.MIN_SAFE_INTEGER; // -9007199254740991 = -(2^53 - 1)
   ```

6. **POSITIVE_INFINITY:**

   - `Number.POSITIVE_INFINITY` represents positive infinity and is returned on overflow.

   ```javascript
   let x = Number.POSITIVE_INFINITY; // Infinity
   ```

7. **NEGATIVE_INFINITY:**

   - `Number.NEGATIVE_INFINITY` represents negative infinity and is returned on overflow.

   ```javascript
   let x = Number.NEGATIVE_INFINITY; // -Infinity
   ```

8. **NaN:**

   - `NaN` stands for "Not-a-Number" and represents an undefined or unrepresentable mathematical operation result.

   ```javascript
   let x = Number.NaN; //NaN
   ```

## JavaScript Array

In JavaScript, arrays are a type of object used to store and manipulate collections of values. Arrays are zero-indexed, which means the first element is at index 0, the second at index 1, and so on.

### Why use Arrays

The use of arrays in programming offers several advantages, making it easier to manage and manipulate collections of data. Here are some reasons why arrays are commonly used:

1. **Organizing Data:**

   - Arrays provide a structured way to organize and store multiple values under a single variable. This is especially useful when dealing with related or similar pieces of data.

2. **Efficient Access:**

   - Accessing elements in an array is efficient and straightforward using index notation. You can quickly retrieve a specific element based on its position in the array.

3. **Looping Through Elements:**

   - Arrays work well with loops, allowing you to iterate through each element in the array easily. This makes it practical to perform repetitive operations on sets of data.

4. **Dynamic Size:**

   - Arrays in many programming languages are dynamically sized, meaning you can add or remove elements as needed. This flexibility is essential when working with varying amounts of data.

5. **Ease of Modification:**

   - Adding, removing, or updating elements in an array is straightforward. This makes it convenient to modify data structures without the need to create entirely new variables.

6. **Grouping Similar Data:**

   - Arrays are excellent for grouping similar data. For example, if you have a list of names, an array allows you to store and manage those names together.

7. **Passing Collections to Functions:**

   - Arrays can be easily passed as parameters to functions, allowing you to work with collections of data within functions. This makes code more modular and reusable.

8. **Searching and Sorting:**

   - Arrays provide methods and algorithms for searching and sorting elements, making it efficient to find specific values or arrange data in a particular order.

9. **Memory Efficiency:**
   - Arrays are typically more memory-efficient compared to individual variables, especially when dealing with a large number of related values.

### Creating Arrays

1. **Literal Syntax:**

   - Using an array literal is the easiest way to create a JavaScript Array.

   ```javascript
   let fruits = ["apple", "orange", "banana"];
   ```

2. **Using the `Array` Constructor:**

   ```javascript
   let colors = new Array("red", "green", "blue");
   ```

- The two examples above do exactly the same.
- There is no need to use new Array().
- For simplicity, readability and execution speed, use the array literal method.

### Accessing Elements

- You access an array element by referring to the **index number.**

```javascript
let fruits = ["apple", "orange", "banana"];

console.log(fruits[0]); // Output: 'apple'
console.log(fruits[1]); // Output: 'orange'
console.log(fruits[2]); // Output: 'banana'
```

- Array indexes start with `0`.
- `[0]` is the first element. `[1]` is the second element.

### Modifying Arrays

1. **Adding Elements:**

   ```javascript
   fruits.push("grape"); // Adds 'grape' to the end of the array
   fruits.unshift("kiwi"); // Adds 'kiwi' to the beginning of the array
   ```

   In JavaScript, adding elements with high indexes that are not contiguous with the existing elements can create "holes" or undefined slots in the array. These undefined slots are sometimes referred to as **"sparse arrays."**

   ```javascript
   const fruits = ["Banana", "Orange", "Apple"];
   fruits[6] = "Lemon"; // Creates undefined "holes" in fruits
   ```

   After this operation, the `fruits` array will look like this:

   ```javascript
   ["Banana", "Orange", "Apple", , , , "Lemon"];
   ```

   - The slots at indexes 3, 4, and 5 are undefined or empty, creating holes in the array. These undefined slots do exist in memory but have no assigned values.

   It's important to be aware of this behavior, especially when dealing with array methods that rely on defined elements. To check if a specific index exists and has a value, you can use the `hasOwnProperty` method or check for `undefined`:

   ```javascript
   if (fruits.hasOwnProperty(3) && fruits[3] !== undefined) {
     // The element at index 3 exists and has a value
   }
   ```

2. **Removing Elements:**

   ```javascript
   fruits.pop(); // Removes the last element ('grape')
   fruits.shift(); // Removes the first element ('kiwi')
   ```

   **JavaScript Array `delete`:**

   - Using `delete` leaves undefined holes in the array.
   - Use `pop()` or `shift()` instead.

   ```js
   const fruits = ["Banana", "Orange", "Apple", "Mango"];
   delete fruits[0];

   // fruits after delete: [, "Orange", "Apple", "Mango"]
   ```

3. **Changing Elements:**

   ```javascript
   fruits[1] = "pear"; // Changes the second element to 'pear'
   ```

### Arrays as Objects

In JavaScript, arrays are a special type of object, and they can contain elements of various types, including other objects, functions, or even nested arrays. This flexibility allows you to create complex data structures and organize diverse data within a single array. Here's an example:

```javascript
// Array with different types of elements
let mixedArray = [
  42, // Number
  "hello", // String
  true, // Boolean
  { name: "Aakash", age: 21 }, // Object
  function () {
    // Function
    console.log("This is a function in the array.");
  },
  [1, 2, 3], // Nested Array
];

// Accessing elements
console.log(mixedArray[0]); // Output: 42
console.log(mixedArray[1]); // Output: 'hello'
console.log(mixedArray[3]); // Output: { name: 'Aakash', age: 21 }
mixedArray[4](); // Output: 'This is a function in the array.'
console.log(mixedArray[5]); // Output: [1, 2, 3]
```

In this example:

- The array `mixedArray` contains elements of various types, including a number, a string, a boolean, an object, a function, and a nested array.
- You can access each element using its index.
- The function stored in the array can be executed by calling it like any other function.

#### new Array()

- You can create an empty array using either the `new Array()` constructor or the array literal `[]`.

  ```javascript
  const points1 = new Array();
  const points2 = [];
  ```

- To create an array with specific values, you can use either the `new Array()` constructor or the array literal `[]`.

  ```javascript
  const points1 = new Array(40, 100, 1, 5, 25, 10);
  const points2 = [40, 100, 1, 5, 25, 10];
  ```

**Potential Issues with `new Array()`:**

- When using the `new Array()` constructor with a single numeric argument, it may lead to unexpected results. The argument is interpreted as the length of the array, not as the value of the first element.

  ```javascript
  // Creates an array with three elements
  const points1 = new Array(40, 100, 1);
  // Creates an array with two elements
  const points2 = new Array(40, 100);
  // Creates an array with 40 undefined elements
  const points3 = new Array(40);
  ```

- There is a common mistake when attempting to create an array with a single element. Using square brackets directly `[40]` is not equivalent to using the `new Array(40)` constructor. The former creates an array with one element, while the latter creates an array with a length of 40, filled with `undefined` elements.

  ```javascript
  // Creates an array with one element
  const points1 = [40];
  // Creates an array with 40 undefined elements
  const points2 = new Array(40);
  ```

### Array Methods

1. **Length:**

   ```javascript
   let fruits = ["apple", "orange", "banana"];
   let length = fruits.length;
   // Returns the number of elements in the array

   console.log(length);
   // Output: 3
   ```

1. **Sort:**

   ```javascript
   let fruits = ["apple", "orange", "banana"];
   fruits.sort();
   // Sorts the elements of the array alphabetically

   console.log(fruits);
   // Output: ["apple", "banana", "orange"]
   ```

1. **splice:**

   - The splice() method can be used to add new items to an array:

   ```js
   const fruits = ["Banana", "Orange", "Apple", "Mango"];
   fruits.splice(2, 0, "Lemon", "Kiwi");
   // Add items at index 2 and remove 0 elements

   console.log(fruits);
   // Output: [ 'Banana', 'Orange', 'Lemon', 'Kiwi', 'Apple', 'Mango' ]
   ```

   - The first parameter (2) defines the position where new elements should be added (spliced in).
   - The second parameter (0) defines how many elements should be removed.
   - The rest of the parameters ("Lemon" , "Kiwi") define the new elements to be added.
   - The splice() method returns an array with the deleted items

1. **Slice:**

   ```javascript
   let fruits = ["apple", "orange", "banana"];
   let slicedFruits = fruits.slice(1, 3);
   // Returns a portion of the array (index 1 to 2)

   console.log(slicedFruits);
   // Output: ['orange', 'banana']
   ```

1. **Concat:**

   ```javascript
   let fruits = ["apple", "orange", "banana"];
   let moreFruits = ["grape", "watermelon"];
   let combinedArray = fruits.concat(moreFruits);
   // Concatenates two arrays

   console.log(combinedArray);
   // Output: [ 'apple', 'orange', 'banana', 'grape', 'watermelon' ]
   ```

   - The concat() method does not change the existing arrays. It always returns a new array.
   - The concat() method can take any number of array arguments.

1. **copyWithin:**

   - The `copyWithin` method is used to copy a sequence of elements within the array to another location in the same array. The method takes three parameters:

     1. `target`: The index at which to copy the sequence to.
     2. `start`: The index at which to start copying elements from.
     3. `end` (optional): The index at which to stop copying elements. This parameter is not inclusive, meaning the element at the `end` index is not included in the copy.

   ```javascript
   let fruits = ["apple", "orange", "banana", "grape", "kiwi"];

   console.log(fruits.copyWithin(2, 0));
   // Output: ["apple", "orange", "apple", "orange", "banana"]

   console.log(fruits.copyWithin(2, 0, 2));
   // Output: ["apple", "orange", "apple", "orange", "kiwi"]
   ```

   **`console.log(fruits.copyWithin(2, 0))`:**

   - This statement copies elements starting from index 0 to the end of the array and pastes them starting at index 2.
   - The absence of the `end` parameter means it copies until the end of the array.

   **`console.log(fruits.copyWithin(2, 0, 2))`:**

   - This statement copies elements starting from index 0 up to (but not including) index 2 and pastes them starting at index 2.
   - The `end` parameter is set to 2, indicating that the copy operation should stop before including the element at index 2.

   **Note:**

   - The copyWithin() method overwrites the existing values.
   - The copyWithin() method does not add items to the array.
   - The copyWithin() method does not change the length of the array.

1. **IndexOf:**

   ```javascript
   let fruits = ["apple", "orange", "banana"];
   let index = fruits.indexOf("orange");
   // Returns the index of the first occurrence of 'orange'

   console.log(index);
   // Output: 1
   ```

1. **at():**

   ```js
   const fruits = ["Banana", "Orange", "Apple", "Mango"];
   let fruit = fruits.at(2);
   // Returns the third element of fruits

   console.log(fruit);
   // Output: Apple
   ```

   - The at() method returns an indexed element from an array.
   - The at() method returns the same as [].

   **Note:**

   - Many languages allows negative bracket indexing like `[-1]` to access elements from the end of an object / array / string.
   - This is not possible in JavaScript, because [] is used for accessing both arrays and objects. `obj[-1]` refers to the value of `key -1`, not to the last property of the object.
   - The `at()` method was introduced in ES2022 to solve this problem.

1. **Flat:**

   - The flat() method creates a new array with sub-array elements concatenated to a specified depth.

   ```js
   const myArr = [
     [1, 2],
     [3, 4],
     [5, 6],
   ];
   const newArr = myArr.flat();
   // convert a multi-dimensional array into a one-dimensional array

   console.log(newArr);
   // Output: [ 1, 2, 3, 4, 5, 6 ]
   ```

1. **Includes:**

   ```javascript
   let fruits = ["apple", "orange", "banana"];
   let includesOrange = fruits.includes("orange");
   // Returns true if 'orange' is in the array

   console.log(includesOrange);
   // Output: true
   ```

1. **forEach:**

   ```javascript
   let fruits = ["apple", "orange", "banana"];
   fruits.forEach((fruit) => console.log(fruit));
   // Iterates over each element in the array

   /* Output: apple
              orange
              banana */
   ```

1. **Map:**

   ```javascript
   let fruits = ["apple", "orange", "banana"];
   let uppercasedFruits = fruits.map((fruit) => fruit.toUpperCase());
   // Creates a new array with modified elements

   console.log(uppercasedFruits);
   // Output: [ 'APPLE', 'ORANGE', 'BANANA' ]
   ```

1. **Join:**

   ```javascript
   let fruits = ["apple", "orange", "banana"];
   let fruitString = fruits.join(", ");
   // Joins array elements into a string using the specified separator

   console.log(fruitString);
   // Output: apple, orange, banana
   ```

1. **toString():**

   ```javascript
   let fruits = ["apple", "orange", "banana"];
   let result = fruits.toString();
   // Converts an array to a string by joining its elements with commas.

   console.log(result);
   // Output: apple,orange,banana
   ```

1. **toLocaleString():**

   ```javascript
   let numbers = [1000, 2000, 3000];
   let result = numbers.toLocaleString();
   // Similar to `toString()`, but it can also
   // handle localization of the array elements.

   console.log(result);
   // Output: 1,000, 2,000, 3,000
   ```

1. **JSON.stringify():**

   ```javascript
   let mixedArray = [1, "apple", true];
   let jsonString = JSON.stringify(mixedArray);
   // If the array contains non-string elements,
   // `JSON.stringify()` converts the array to a JSON-formatted string.

   console.log(jsonString);
   // Output: '[1,"apple",true]'
   ```

#### Array Search Methods

```js
let fruits = ["apple", "orange", "banana", "grape", "kiwi"];

// indexOf: Returns the index of the first occurrence of a specified element.
let indexOrange = fruits.indexOf("orange");
console.log("indexOf 'orange':", indexOrange);
// Output: 1

// lastIndexOf: Returns the index of the last occurrence of a specified element.
let lastIndexGrape = fruits.lastIndexOf("grape");
console.log("lastIndexOf 'grape':", lastIndexGrape);
// Output: 3

// find: Returns the first element in the array that satisfies the provided testing function.
let foundElement = fruits.find((fruit) => fruit.length > 5);
console.log("find element with length > 5:", foundElement);
// Output: "banana"

// findIndex: Returns the index of the first element in the array that satisfies the provided testing function.
let foundIndex = fruits.findIndex((fruit) => fruit.startsWith("k"));
console.log("findIndex element starting with 'k':", foundIndex);
// Output: 4

// findLast: Start from the end of an array and return the value of the first element that satisfies a condition.
const temp = [27, 28, 30, 40, 42, 35, 30];
let high = temp.findLast((x) => x > 40);
console.log("findLast element > 40:", high);
//Output: 42

// findLastIndex: Finds the index of the last element that satisfies a condition.
const temp = [27, 28, 30, 40, 42, 35, 30];
let pos = temp.findLast((x) => x > 40);
console.log("findLastIndex element > 40:", pos);
// Output: 4

// includes: Determines whether an array includes a certain element.
let includesBanana = fruits.includes("banana");
console.log("includes 'banana':", includesBanana);
// Output: true

// some: Tests whether at least one element in the array passes the provided function.
let someFruitsStartWithA = fruits.some((fruit) => fruit.startsWith("a"));
console.log("some fruits start with 'a':", someFruitsStartWithA);
// Output: true

// every: Tests whether all elements in the array pass the provided function.
let allFruitsHaveLength = fruits.every((fruit) => fruit.length > 3);
console.log("every fruit has length > 3:", allFruitsHaveLength);
// Output: false
```

#### Array Sorting

##### Alphabetic Sort

Alphabetic sorting is the process of arranging elements in an array in alphabetical order.

**Array sort():**
The `sort()` method is used to sort the elements of an array in place. By default, it sorts the elements as strings.

```javascript
let fruits = ["banana", "apple", "orange", "grape"];
fruits.sort();
console.log(fruits); // Output: ['apple', 'banana', 'grape', 'orange']
```

**Array reverse():**
The `reverse()` method is used to reverse the order of elements in an array.

```javascript
let numbers = [1, 2, 3, 4, 5];
numbers.reverse();
console.log(numbers); // Output: [5, 4, 3, 2, 1]
```

##### Numeric Sort

To sort an array of numbers numerically, use the `sort()` method with a custom comparison function.

```javascript
let numbers = [10, 5, 8, 2, 7];
numbers.sort((a, b) => a - b);
console.log(numbers); // Output: [2, 5, 7, 8, 10]
```

**Reverse Sort:**

```javascript
let numbers = [10, 5, 8, 2, 7];
numbers.sort((a, b) => b - a);
console.log(numbers); // Output: [10, 8, 7, 5, 2]
```

**Random Sort:**
To randomly sort an array, you can use the `sort()` method with a function that returns a random value.

```javascript
let array = [1, 2, 3, 4, 5];
array.sort(() => Math.random() - 0.5);
console.log(array); // Output: Randomly sorted array
```

**Math.min.apply():**
The `Math.min.apply()` function returns the smallest of zero or more numbers.

```javascript
let array = [5, 2, 8, 1];
console.log(Math.min.apply(null, array)); // Output: 1
// Math.min(5, 2, 8, 1) // Output: 1
```

**Math.max.apply():**
The `Math.max.apply()` function returns the largest of zero or more numbers.

```javascript
let array = [5, 2, 8, 1];
console.log(Math.max.apply(null, array)); // Output: 8
// Math.max(5, 2, 8, 1) // Output: 8
```

**Home made Min():**
The fastest code to find the lowest number is to use a home made method.

```javascript
function customMin(arr) {
  return Math.min(...arr);
}

let minimum = customMin([5, 2, 8, 1]);
console.log(minimum); // Output: 1
```

**Home made Max():**
A custom function to find the maximum value in an array.

```javascript
function customMax(arr) {
  return Math.max(...arr);
}

let maximum = customMax([5, 2, 8, 1]);
console.log(maximum); // Output: 8
```

##### Sorting Objects

To sort an array of objects based on a specific property, you can use the `sort()` method with a custom comparison function.

```javascript
let people = [
  { name: "Alice", age: 30 },
  { name: "Bob", age: 25 },
  { name: "Charlie", age: 35 },
];

people.sort((a, b) => a.age - b.age);

console.log(people);
// Output: [ { name: 'Bob', age: 25 }, { name: 'Alice', age: 30 }, { name: 'Charlie', age: 35 } ]
```

#### Array Iteration

1. **Array `forEach`**

   - Iterates over each element in the array and executes a provided function for each element.

   ```javascript
   const numbers = [1, 2, 3, 4];

   numbers.forEach((num) => {
     console.log(num);
   });
   // Output:
   // 1
   // 2
   // 3
   // 4
   ```

2. **Array `map`**

   - Creates a new array by applying a function to each element in the existing array.

   ```javascript
   const numbers = [1, 2, 3, 4];

   const doubled = numbers.map((num) => {
     return num * 2;
   });
   // doubled: [2, 4, 6, 8]
   ```

3. **Array `flatMap`**

   - Similar to `map`, but flattens the result by one level.

   ```javascript
   const numbers = [1, 2, 3, 4];

   const flattened = numbers.flatMap((num) => {
     return [num, num * 2];
   });
   // flattened: [1, 2, 2, 4, 3, 6, 4, 8]
   ```

4. **Array `filter`**

   - Creates a new array with only the elements that pass a test implemented by the provided function.

   ```javascript
   const numbers = [1, 2, 3, 4];

   const evens = numbers.filter((num) => {
     return num % 2 === 0;
   });
   // evens: [2, 4]
   ```

5. **Array `reduce`**

   - Applies a function against an accumulator and each element in the array (from left to right) to reduce it to a single value.

   ```javascript
   const numbers = [1, 2, 3, 4];

   const sum = numbers.reduce((accumulator, current) => {
     return accumulator + current;
   }, 0);
   // sum: 10
   ```

6. **Array `reduceRight`**

   - Similar to `reduce`, but processes the elements from right to left.

   ```javascript
   const numbers = [1, 2, 3, 4];

   const reversedSum = numbers.reduceRight((accumulator, current) => {
     return accumulator + current;
   }, 0);
   // reversedSum: 10
   ```

7. **Array `every`**

   - Tests whether all elements in the array pass the provided function.

   ```javascript
   const numbers = [2, 4, 6, 8];

   const allEven = numbers.every((num) => {
     return num % 2 === 0;
   });
   // allEven: true
   ```

8. **Array `some`**

   - Tests whether at least one element in the array passes the provided function.

   ```javascript
   const numbers = [1, 3, 5, 6];

   const hasEven = numbers.some((num) => {
     return num % 2 === 0;
   });
   // hasEven: true
   ```

9. **Array `from`**

   - Creates a new array from an array-like or iterable object.

   ```javascript
   const arrayLike = "hello";

   const newArray = Array.from(arrayLike);
   // newArray: ['h', 'e', 'l', 'l', 'o']
   ```

10. **Array `keys`**

    - Returns a new array iterator that contains the keys for each index in the array.

    ```javascript
    const numbers = [10, 20, 30];

    const keysIterator = numbers.keys();
    for (const key of keysIterator) {
      console.log(key);
    }
    // Output:
    // 0
    // 1
    // 2
    ```

11. **Array `entries`**

    - Returns a new array iterator that contains key/value pairs for each index in the array.

    ```javascript
    const numbers = [10, 20, 30];

    const entriesIterator = numbers.entries();
    for (const [index, value] of entriesIterator) {
      console.log(`Index: ${index}, Value: ${value}`);
    }
    // Output:
    // Index: 0, Value: 10
    // Index: 1, Value: 20
    // Index: 2, Value: 30
    ```

12. **Array Spread (`...`)**

    - Allows the elements of an array to be spread out (or expanded) into individual elements.

    ```javascript
    const array1 = [1, 2, 3];
    const array2 = [4, 5, 6];

    const combinedArray = [...array1, ...array2];
    // combinedArray: [1, 2, 3, 4, 5, 6]
    ```

13. **Array `with`**

    - Safe way to update elements in an array without altering the original array.

    ```javascript
    const months = ["Januar", "Februar", "Mar", "April"];

    const myMonths = months.with(2, "March");
    // myMonths: ["Januar", "Februar", "March", "April"]
    ```

### Recognizing Array

The problem is that the JavaScript operator `typeof` returns **"object."**

```js
const fruits = ["Banana", "Orange", "Apple"];
let type = typeof fruits;
```

- The typeof operator returns object because a JavaScript array is an object.

**Using `Array.isArray()`:**

The `Array.isArray()` method was introduced in ECMAScript 5 to specifically check whether an object is an array. It returns `true` if the object is an array, and `false` otherwise.

```javascript
const fruits = ["Banana", "Orange", "Apple"];
let isArray = Array.isArray(fruits);
console.log(isArray); // Output: true
```

- The `Array.isArray()` method is generally recommended for checking if an object is an array because it is more specific and less prone to issues that may arise when using the `typeof` operator.

**Using `instanceof` Operator:**

The `instanceof` operator checks if an object is an instance of a particular class or constructor function. In this case, you can use it to check if an object is an instance of the `Array` constructor.

```javascript
const fruits = ["Banana", "Orange", "Apple"];
let isInstanceOfArray = fruits instanceof Array;
console.log(isInstanceOfArray); // Output: true
```

- Using `instanceof` can be less reliable in certain scenarios, especially if objects from different frames or iframes are involved. `Array.isArray()` is a safer and more straightforward choice.

### `const` Array

- An array declared with const cannot be reassigned:

  ```js
  const cars = ["Saab", "Volvo", "BMW"];
  cars = ["Toyota", "Volvo", "Audi"]; // ERROR
  ```

**Arrays are Not Constants.**

- The keyword const is a little misleading.
- It does NOT define a constant array. It defines a constant reference to an array.
- Because of this, we can still change the elements of a constant array.
- Elements Can be Reassigned
- You can change the elements of a constant array:

  ```js
  // You can create a constant array:
  const cars = ["Saab", "Volvo", "BMW"];

  // You can change an element:
  cars[0] = "Toyota";

  // You can add an element:
  cars.push("Audi");
  ```

- JavaScript const variables must be assigned a value when they are declared:
- Meaning: An array declared with const must be initialized when it is declared.
- Using const without initializing the array is a syntax error:

  ```js
  const cars;
  cars = ["Saab", "Volvo", "BMW"]; // Syntax Error
  ```

**`const` Block Scope:**

- An array declared with const has Block Scope.
- An array declared in a block is not the same as an array declared outside the block:

  ```js
  const cars = ["Saab", "Volvo", "BMW"];
  // Here cars[0] is "Saab"
  {
    const cars = ["Toyota", "Volvo", "BMW"];
    // Here cars[0] is "Toyota"
  }
  // Here cars[0] is "Saab"
  ```

## JavaScript Booleans

A JavaScript Boolean represents one of two values: **true** or **false.**

Very often, in programming, you will need a data type that can only have one of two values, like

- YES / NO
- ON / OFF
- TRUE / FALSE

For this, JavaScript has a Boolean data type. It can only take the values true or false.

**The Boolean() Function:**

- You can use the Boolean() function to find out if an expression (or a variable) is true:

  ```js
  Boolean(10 > 9)(
    // true

    // Or even easier:
    10 > 9
  ); // true
  10 > 9; // true
  ```

**Everything With a "Value" is True:**

```js
100; // True

3.14 - // True
  15; // True

("Hello"); // True

("false"); // True

7 + 1 + 3.14; // True
```

**Everything Without a "Value" is False:**

The Boolean value of **`0` (zero)** is false:

```js
let x = 0;
Boolean(x); // False
```

The Boolean value of **`-0` (minus zero)** is false:

```js
let x = -0;
Boolean(x); // False
```

The Boolean value of **`""` (empty string)** is false:

```js
let x = "";
Boolean(x); // False
```

The Boolean value of **`undefined`** is false:

```js
let x;
Boolean(x); // False
```

The Boolean value of **`null`** is false:

```js
let x = null;
Boolean(x); // False
```

The Boolean value of **`false`** is false:

```js
let x = false;
Boolean(x); // False
```

The Boolean value of **`NaN`** is false:

```js
let x = 10 / "Hallo";
Boolean(x); // False
```

### JavaScript Booleans as Objects

In JavaScript, booleans are primitive values, and they can be created directly using literals like `true` or `false`. However, you can also create boolean objects using the `new Boolean()` constructor. Here are some key points to note:

**Boolean Primitives:**

```javascript
let x = false;
```

Here, `x` is a boolean primitive.

**Boolean Objects:**

```javascript
let y = new Boolean(false);
```

Here, `y` is a boolean object.

**Avoid Creating Boolean Objects:**

It is generally recommended to avoid creating boolean objects using the `new` keyword. Using boolean primitives is more efficient and avoids potential issues.

**Unexpected Results with Boolean Objects:**

Boolean objects can behave unexpectedly when used in comparisons:

```javascript
let x = false;
let y = new Boolean(false);

console.log(x == y); // true
console.log(x === y); // false
```

Here, `x == y` returns `true` because the equality operator (`==`) performs type coercion. However, `x === y` returns `false` because the strict equality operator (`===`) does not perform type coercion.

```javascript
let x = new Boolean(true);
let y = new Boolean(true);

console.log(x == y); // false
console.log(x === y); // false
```

Comparing two boolean objects using the strict equality operator always returns `false` because they are distinct objects in memory.

## JavaScript Statements

### if Statement

```javascript
if (condition) {
  // block of code to be executed if the condition is true
}
```

- Executes a block of code if the specified condition is true.
- The block of code is enclosed in curly braces `{}`.

**Example:**

```javascript
if (hour < 18) {
  greeting = "Good day";
}
```

- If the `hour` is less than 18, the greeting will be "Good day."

### else Statement

```javascript
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}
```

- Executes the first block of code if the condition is true, otherwise executes the block following `else` if the condition is false.

**Example:**

```javascript
if (hour < 18) {
  greeting = "Good day";
} else {
  greeting = "Good evening";
}
```

- If the `hour` is less than 18, the greeting will be "Good day"; otherwise, it will be "Good evening."

### else if Statement

```javascript
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if condition1 is false and condition2 is true
} else {
  // block of code to be executed if both condition1 and condition2 are false
}
```

- Allows checking multiple conditions sequentially.

**Example:**

```javascript
if (time < 10) {
  greeting = "Good morning";
} else if (time < 20) {
  greeting = "Good day";
} else {
  greeting = "Good evening";
}
```

- If `time` is less than 10, "Good morning"; if less than 20, "Good day"; otherwise, "Good evening."

### Switch Statement

```javascript
switch (expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
  // code block
}
```

- The switch expression is evaluated once.
- The value of the expression is compared with the values of each case.
- If there is a match, the associated block of code is executed.
- If there is no match, the default code block is executed.

**Example:**

```javascript
switch (new Date().getDay()) {
  case 0:
    day = "Sunday";
    break;
  case 1:
    day = "Monday";
    // more cases...
    break;
  default:
    day = "Some other day";
}
```

#### The `break` Keyword

- When a `break` keyword is encountered, it exits the switch block.
- Omitting the `break` statement allows the flow to continue to the next case even if the condition is not met.

#### The `default` Keyword

- The `default` keyword specifies the code to run if there is no case match.
- It doesn't have to be the last case in the switch block.

**Example:**

```javascript
switch (new Date().getDay()) {
  case 6:
    text = "Today is Saturday";
    break;
  case 0:
    text = "Today is Sunday";
    break;
  default:
    text = "Looking forward to the Weekend";
}
```

#### Common Code Blocks

- You can have multiple cases share the same code block.
- This can be achieved by stacking multiple case labels without breaks.

**Example:**

```javascript
switch (new Date().getDay()) {
  case 4:
  case 5:
    text = "Soon it is Weekend";
    break;
  case 0:
  case 6:
    text = "It is Weekend";
    break;
  default:
    text = "Looking forward to the Weekend";
}
```

- If multiple cases match a case value, the first case encountered is selected.
- If no matching cases are found, the program continues to the `default` label.
- If no `default` label is found, the program continues to the statements after the switch.

#### Strict Comparison

Switch cases in JavaScript use strict comparison (`===`), which means that not only do the values need to be equal, but they must also be of the same type. In your example, there will be no match for `x` because the switch cases are using strict comparison:

```javascript
let x = "0";
switch (x) {
  case 0:
    text = "Off";
    break;
  case 1:
    text = "On";
    break;
  default:
    text = "No value found";
}
```

In this example, `x` is a string (`"0"`), and the cases are written with numeric values (`0` and `1`). Since strict comparison is used, the types must match as well. As a result, none of the cases will match, and the `default` block will be executed. The `text` variable will be assigned the value `"No value found"`.

## JavaScript Loops

- Loops are useful when you need to run the same code multiple times with different values.
- A common use case is iterating over elements in an array.

**Instead of writing:**

```javascript
text += cars[0] + "<br>";
text += cars[1] + "<br>";
text += cars[2] + "<br>";
text += cars[3] + "<br>";
text += cars[4] + "<br>";
text += cars[5] + "<br>";
```

**You can write:**

```javascript
for (let i = 0; i < cars.length; i++) {
  text += cars[i] + "<br>";
}
```

- In the loop example, a variable `i` is used as an index to iterate over the elements of the `cars` array.
- The loop runs as long as `i` is less than the length of the `cars` array (`cars.length`).
- The loop increments `i` with each iteration, allowing you to access each element of the array using `cars[i]`.

**Benefits of Using Loops:**

- Code is more concise and easier to maintain.
- You don't need to repeat the same lines of code for each element in the array.
- If the size of the array changes, you don't need to manually adjust the loop; it adapts dynamically.

**Different Kinds of Loops**
JavaScript supports different kinds of loops:

- for - loops through a block of code a number of times
- for/in - loops through the properties of an object
- for/of - loops through the values of an iterable object
- while - loops through a block of code while a specified condition is true
- do/while - also loops through a block of code while a specified condition is true

### for Loop

```javascript
for (expression1; expression2; expression3) {
  // code block to be executed
}
```

#### Expressions in the `for` Loop

**Expression 1:**

- Executed once before the loop starts.
- Typically used to initialize the loop variable.
- It is optional.

**Expression 2:**

- Defines the condition for executing the code block.
- It is evaluated before each iteration.
- If `expression2` evaluates to `true`, the loop continues; otherwise, it terminates.
- If you omit expression 2, you must provide a `break` inside the loop. Otherwise the loop will never end. This will crash your browser.

**Expression 3:**

- Executed after the code block in each iteration.
- Typically used to update the loop variable.
- It can also be omitted (like when you increment your values inside the loop).

**Examples:**

```javascript
for (let i = 0; i < 5; i++) {
  text += "The number is " + i + "<br>";
}
```

From the example above, you can read:

- Expression 1 sets a variable before the loop starts (let i = 0).
- Expression 2 defines the condition for the loop to run (i must be less than 5).
- Expression 3 increases a value (i++) each time the code block in the loop has been executed.

```javascript
for (let i = 0, len = cars.length, text = ""; i < len; i++) {
  text += cars[i] + "<br>";
}
```

You can initiate many values in expression 1 (separated by comma).

```javascript
let i = 2;
let len = cars.length;
let text = "";
for (; i < len; i++) {
  text += cars[i] + "<br>";
}
```

And you can omit expression 1 (like when your values are set before the loop starts).

**Example by omitting all expressions:**

```javascript
let counter = 0;

for (;;) {
  console.log("Current counter value:", counter);

  // Increment the counter
  counter++;

  // Break condition to exit the loop
  if (counter >= 5) {
    console.log("Exiting the loop.");
    break;
  }
}
```

In this example, the loop will iterate indefinitely, printing the current value of the `counter` variable on each iteration. The loop will exit when the `counter` reaches or exceeds the value of 5. The `for (;;)` creates the infinite loop, and the `break` statement is used to exit the loop when the condition is met.

### for in Loop

The `for...in` statement in JavaScript is used to iterate over the enumerable properties of an object.

```js
for (key in object) {
  // code block to be executed
}
```

```javascript
const person = { fname: "Aakash", lname: "Bharambe", age: 21 };

let text = "";
for (let x in person) {
  text += person[x];
} // text = AakashBharambe21
```

Here's how the loop works:

1. The `for...in` loop iterates over the properties of the `person` object.
2. In each iteration, the variable `x` holds the name of the current property (key).
3. `person[x]` is used to access the value associated with the current property, and this value is appended to the `text` variable.

While the `for...in` loop can be used to iterate over the properties of an array in JavaScript, it's not recommended for several reasons:

1. **Order of Iteration:** The order in which the `for...in` loop iterates over array elements is not guaranteed to be in the order of their indices. Different JavaScript engines may iterate over the array properties in different orders.

2. **Enumerable Properties:** The `for...in` loop not only iterates over array elements but also over any enumerable properties that the array may have. This means that if you or someone else has added custom properties to the array object, those properties will also be included in the iteration.

```javascript
const numbers = [45, 4, 9, 16, 25];

let txt = "";
for (let x in numbers) {
  txt += numbers[x];
} // txt = 45491625
```

Using this approach might result in unexpected behavior if the order of array indices is important.

Instead, it's recommended to use other constructs like the `for` loop, `for...of` loop, or array methods like `Array.forEach()` when dealing with arrays, especially if the order of elements is crucial. For example:

```javascript
const numbers = [45, 4, 9, 16, 25];

let txt = "";
for (let i = 0; i < numbers.length; i++) {
  txt += numbers[i];
}

// OR

let txt2 = "";
for (const num of numbers) {
  txt2 += num;
}

// OR

const txt3 = "";
numbers.forEach((num) => {
  txt3 += num;
});
```

### for of Loop

The `for...of` statement in JavaScript is used to iterate over the values of an iterable object. It works with a variety of iterable data structures, such as arrays, strings, maps, and more.

```javascript
for (variable of iterable) {
  // code block to be executed
}
```

- **variable:**

  - For each iteration, the value of the next property in the iterable object is assigned to the variable.
  - The `variable` can be declared using `const`, `let`, or `var`.

- **iterable:**
  - An object that has iterable properties, meaning it can be iterated over.
  - Examples of iterable objects include arrays, strings, maps, sets, and other objects that implement the iterable protocol.

**Looping over an Array:**

```javascript
const cars = ["BMW", "Volvo", "Mini"];

let text = "";
for (let x of cars) {
  text += x;
}
```

In this example, the `for...of` loop iterates over each element in the `cars` array, and the value of each element is assigned to the variable `x`. The concatenated values are then stored in the `text` variable.

**Looping over a String:**

```javascript
let language = "JavaScript";

let text = "";
for (let x of language) {
  text += x;
}
```

In this case, the `for...of` loop iterates over each character in the `language` string, and the value of each character is assigned to the variable `x`. The concatenated characters are then stored in the `text` variable.

### While Loop

```javascript
while (condition) {
  // code block to be executed
}
```

The `while` loop in JavaScript continues to execute a block of code as long as a specified condition remains true.

```javascript
let i = 0;
let text = "";

while (i < 10) {
  text += "The number is " + i;
  i++;
}
```

In this example, the code inside the `while` loop will execute repeatedly as long as the condition `i < 10` remains true. The loop increments the variable `i` with each iteration.

**Note:**

- It's crucial to ensure that the condition in the `while` loop eventually becomes false. Otherwise, you might end up with an infinite loop, which can lead to browser crashes or unresponsiveness.
- In the provided example, `i++` increments the variable `i` with each iteration, ensuring that the loop will eventually terminate when `i` becomes equal to or greater than 10.

### Do While Loop

```javascript
do {
  // code block to be executed
} while (condition);
```

The `do...while` loop is a variation of the `while` loop where the code block is executed at least once, even if the condition is initially false. Here's a breakdown:

```javascript
let i = 0;
let text = "";

do {
  text += "The number is " + i;
  i++;
} while (i < 10);
```

In this example, the code block inside the `do` is executed first, and then the condition `i < 10` is checked. The loop will continue to execute as long as the condition remains true. Importantly, the code inside the `do` block runs at least once.

**Note:**

- It's crucial to ensure that the variable used in the condition is modified inside the loop so that the loop can eventually exit.
- The `i++` increment in the example ensures that the loop will eventually terminate when `i` becomes equal to or greater than 10.

## Type Conversion

Type conversion in JavaScript refers to the explicit conversion of a value from one data type to another. Unlike type coercion, which is implicit and done automatically by the JavaScript engine, type conversion is performed explicitly by the developer using predefined functions or methods.

Here are some common methods for explicit type conversion in JavaScript:

1. **String Conversion:**

   - To convert a value to a string, you can use the `String()` function or the `toString()` method.

   ```javascript
   var num = 42;
   var numString = String(num);
   console.log(numString); // Output: "42"
   ```

2. **Number Conversion:**

   - To convert a value to a number, you can use the `Number()` function or the `parseInt()` or `parseFloat()` functions.

   ```javascript
   var numString = "42";
   var num = Number(numString);
   console.log(num); // Output: 42
   ```

3. **Boolean Conversion:**

   - To convert a value to a boolean, you can use the `Boolean()` function.

   ```javascript
   var value = "Hello";
   var booleanValue = Boolean(value);
   console.log(booleanValue); // Output: true (unless the value is an empty string, null, undefined, 0, or false)
   ```

4. **Array and Object Conversion:**

   - To convert an object or an array to a string, you can use the `JSON.stringify()` method.

   ```javascript
   var obj = { key: "value" };
   var objString = JSON.stringify(obj);
   console.log(objString); // Output: '{"key":"value"}'
   ```

   - To convert a JSON string back to an object, you can use `JSON.parse()`.

   ```javascript
   var jsonString = '{"key":"value"}';
   var obj = JSON.parse(jsonString);
   console.log(obj); // Output: { key: "value" }
   ```

## JavaScript Regular Expression

1. **Definition:**

   - A regular expression (often abbreviated as regex or regexp) is a powerful tool for matching patterns in text.
   - It provides a concise and flexible syntax for specifying patterns, allowing you to describe complex search criteria.

2. **Basic Syntax:**

   - The basic syntax for a regular expression in JavaScript is enclosed between two forward slashes (`/`).
   - Modifiers can be added after the second slash to alter the behavior of the pattern matching.

3. **Example Breakdown:**

   - `/Aakash/i` is a regular expression.
   - `Aakash` is the pattern to be matched in a search.
   - `i` is a modifier that makes the search case-insensitive.

4. **Common Modifiers:**

   - `i`: Case-insensitive search.
   - `g`: Global search (matches all occurrences, not just the first).
   - `m`: Multiline search.
   - `d`: Perform start and end matching.

5. **Common Patterns:**

   - `.`: Matches any single character except for a newline.
   - `*`: Matches 0 or more occurrences of the preceding character.
   - `+`: Matches 1 or more occurrences of the preceding character.
   - `?`: Matches 0 or 1 occurrence of the preceding character.
   - `[ ]`: Matches any one of the characters inside the brackets.
   - `(x|y)`: Find any of the alternatives separated with `|`.
   - `^`: Matches the beginning of a string.
   - `$`: Matches the end of a string.

6. **MetaCharacters:**

   - `\d`: Find a digit.
   - `\s`: Find a whitespace character.
   - `\b`: Find a match at the beginning of a word .like this: \bWORD, or at the end of a word like this: WORD\b.
   - `\uxxxx`: Find the Unicode character specified by the hexadecimal number xxxx.

7. **Quantifiers:**

   - `n+`: Matches any string that contains at least one n.
   - `n*`: Matches any string that contains zero or more occurrences of n.
   - `n?`: Matches any string that contains zero or one occurrences of n.

### RegExp object

1. **Creating a RegExp Object:**

   - You can create a `RegExp` object using the constructor function or a literal notation (e.g., `/pattern/`).
   - Examples:

     ```javascript
     const pattern = new RegExp("e");
     // or
     const patternLiteral = /e/;
     ```

2. **Using `test()` Method:**

   - The `test()` method is a RegExp expression method used to search a string for a pattern.
   - It returns `true` if the pattern is found in the string, otherwise, it returns `false`.
   - Example:

     ```javascript
     const pattern = /e/;
     const result = pattern.test("The best things in life are free!");
     // result will be true
     ```

   - The RegExp literal can also be used directly without assigning it to a variable:

     ```javascript
     /e/.test("The best things in life are free!");
     // This also returns true
     ```

3. **Using `exec()` Method:**

   - The `exec()` method is another RegExp expression method used to search a string for a specified pattern.
   - It returns an array if a match is found, and `null` if no match is found.
   - Example:

     ```javascript
     const result = /e/.exec("The best things in life are free!");
     // result will be an array if "e" is found, otherwise null
     ```

   - The array returned by `exec()` contains information about the match, including the matched text and capturing groups.

## Operator Precedence

| Val                                 | Operator     | Description                 | Example                   |
| ----------------------------------- | ------------ | --------------------------- | ------------------------- |
| 18                                  | `( )`        | Expression Grouping         | `(100 + 50) \* 3`         |
| 17                                  | `.`          | Member Of                   | `person.name`             |
| 17                                  | `[]`         | Member Of                   | `person["name"]`          |
| 17                                  | `?.`         | Optional Chaining (ES2020)  | `x ?. y`                  |
| 17                                  | `()`         | Function Call               | `myFunction()`            |
| 17                                  | `new`        | New with Arguments          | `new Date("June 5,2022")` |
| 16                                  | `new`        | New without Arguments       | `new Date()`              |
| **Increment Operators:**            |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 15                                  | `++`         | Postfix Increment           | `i++`                     |
| 15                                  | `--`         | Postfix Decrement           | `i--`                     |
| 14                                  | `++`         | Prefix Increment            | `++i`                     |
| 14                                  | `--`         | Prefix Decrement            | `--i`                     |
| **NOT Operators:**                  |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 14                                  | `!`          | Logical NOT                 | `!(x==y)`                 |
| 14                                  | `~`          | Bitwise NOT                 | `~x`                      |
| **Unary Operators:**                |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 14                                  | `+`          | Unary Plus                  | `+x`                      |
| 14                                  | `-`          | Unary Minus                 | `-x`                      |
| 14                                  | `typeof`     | Data Type                   | `typeof x`                |
| 14                                  | `void`       | Evaluate Void               | `void(0)`                 |
| 14                                  | `delete`     | Property Delete             | `delete myCar.color`      |
| **Arithmetic Operators:**           |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 13                                  | `**`         | Exponentiation (ES2016)     | `10 ** 2`                 |
| 12                                  | `*`          | Multiplication              | `10 * 5`                  |
| 12                                  | `/`          | Division                    | `10 / 5`                  |
| 12                                  | `%`          | Division Remainder          | `10 % 5`                  |
| 11                                  | `+`          | Addition                    | `10 + 5`                  |
| 11                                  | `-`          | Subtraction                 | `10 - 5`                  |
| 11                                  | `+`          | Concatenation               | `"Aakash" + "Bharambe"`   |
| **Shift Operators:**                |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 10                                  | `<<`         | Shift Left                  | `x << 2`                  |
| 10                                  | `>>`         | Shift Right (signed)        | `x >> 2`                  |
| 10                                  | `>>>`        | Shift Right (unsigned)      | `x >>> 2`                 |
| **Relational Operators:**           |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 9                                   | `in`         | Property in Object          | `"PI" in Math`            |
| 9                                   | `instanceof` | Instance of Object          | `x instanceof Array`      |
| **Comparison Operators:**           |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 9                                   | `<`          | Less than                   | `x < y`                   |
| 9                                   | `<=`         | Less than or equal          | `x <= y`                  |
| 9                                   | .`>`         | Greater than                | `x > y`                   |
| 9                                   | `>=`         | Greater than or equal       | `x >= Array`              |
| 8                                   | `==`         | Equal                       | `x == y`                  |
| 8                                   | `===`        | Strict equal                | `x === y`                 |
| 8                                   | `!=`         | Unequal                     | `x != y`                  |
| 8                                   | `!==`        | Strict unequal              | `x !== y`                 |
| **Bitwise Operators:**              |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 7                                   | `&`          | Bitwise AND                 | `x & y`                   |
| 6                                   | .`^`         | Bitwise XOR                 | `x ^ y`                   |
| 5                                   | \|           | Bitwise OR                  | `x \| y`                  |
| **Logical Operators:**              |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 4                                   | `&&`         | Logical AND                 | `x && y`                  |
| 3                                   | \|\|         | Logical OR                  | `x \|\| y`                |
| 3                                   | `??`         | Nullish Coalescing (ES2020) | `x ?? y`                  |
| **Conditional (Ternary) Operator:** |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 2                                   | `? :`        | Condition                   | `? "yes" : "no"`          |
| **Assignment Operators:**           |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 2                                   | `=`          | Simple Assignment           | `x = y`                   |
| 2                                   | `:`          | Colon Assignment            | `x: 5`                    |
| 2                                   | `+=`         | Addition Assignment         | `x += y`                  |
| 2                                   | `-=`         | Subtraction Assignment      | `x -= y`                  |
| 2                                   | `*=`         | Multiplication Assignment   | `x *= y`                  |
| 2                                   | `**=`        | Exponentiation Assignment   | `x **= y`                 |
| 2                                   | `/=`         | Division Assignment         | `x /= y`                  |
| 2                                   | `%=`         | Remainder Assignment        | `x %= y`                  |
| 2                                   | `<<=`        | Left Shift Assignment       | `x <<= y`                 |
| 2                                   | `>>=`        | Right Shift Assignment      | `x >>= y`                 |
| 2                                   | `>>>=`       | Unsigned Right Shift        | `x >>>= y`                |
| 2                                   | `&=`         | Bitwise AND Assignment      | `x &= y`                  |
| 2                                   | `\|=`        | Bitwise OR Assignment       | `x \|= y`                 |
| 2                                   | `^=`         | Bitwise XOR Assignment      | `x ^= y`                  |
| 2                                   | `&&=`        | Logical AND Assignment      | `x &&= y`                 |
| 2                                   | `\|\|=`      | Logical OR Assignment       | `x \|\|= y`               |
| **Miscellaneous Operators:**        |              |                             |                           |
| **Val**                             | **Operator** | **Description**             | **Example**               |
| 2                                   | =>           | Arrow                       | `x => y`                  |
| 2                                   | `yield`      | Pause / Resume              | `yield x`                 |
| 2                                   | `yield*`     | Delegate                    | `yield* x`                |
| 2                                   | `...`        | Spread                      | `... x`                   |
| 1                                   | `,`          | Comma                       | `x , y`                   |
