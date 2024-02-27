- [HTML](#html)
  - [What is HTML?](#what-is-html)
  - [Features of HTML](#features-of-html)
  - [Why the Term HyperText \& Markup Language?](#why-the-term-hypertext--markup-language)
  - [History of HTML](#history-of-html)
  - [Overview of Frontend and Backend Development](#overview-of-frontend-and-backend-development)
  - [How do websites work?](#how-do-websites-work)
  - [Basic Website Workflow](#basic-website-workflow)
    - [Browser Functionality](#browser-functionality)
  - [HTML Page Structure](#html-page-structure)
  - [HTML Tags](#html-tags)
    - [Commonly used tags in HTML](#commonly-used-tags-in-html)
    - [Paired and Unpaired Tags](#paired-and-unpaired-tags)
      - [1. Paired Tags (Container Tags)](#1-paired-tags-container-tags)
      - [2. Unpaired Tags (Self-Closing Tags or Stand-Alone Tags)](#2-unpaired-tags-self-closing-tags-or-stand-alone-tags)
  - [HTML Element](#html-element)
    - [Nested HTML Element](#nested-html-element)
    - [Empty HTML Element](#empty-html-element)
  - [HTML Attributes](#html-attributes)
    - [Core Attributes](#core-attributes)
      - [ID Attribute](#id-attribute)
      - [Class Attribute](#class-attribute)
      - [Title Attribute](#title-attribute)
      - [Style Attribute](#style-attribute)
      - [Case Sensitivity](#case-sensitivity)
  - [HTML Comments](#html-comments)
    - [Types of Comments in HTML](#types-of-comments-in-html)
  - [HTML Id \& Classes](#html-id--classes)
    - [ID](#id)
    - [Classes](#classes)
    - [Style Tag](#style-tag)
    - [CSS Selection using IDs and Classes](#css-selection-using-ids-and-classes)
    - [Differences Between IDs and Classes](#differences-between-ids-and-classes)
  - [HTML Basic Tags](#html-basic-tags)
    - [Skeletal Tags](#skeletal-tags)
      - [`<html>` Tag: "Root of an HTML Page"](#html-tag-root-of-an-html-page)
        - [`<head>` Tag: "Header Part of an HTML Page"](#head-tag-header-part-of-an-html-page)
        - [`<title>` Tag: "Title Part of an HTML Page"](#title-tag-title-part-of-an-html-page)
        - [`<body>` Tag: "Body Part of an HTML Page"](#body-tag-body-part-of-an-html-page)
    - [Heading Tags in HTML](#heading-tags-in-html)
    - [`<p>` Tag: Defining a Paragraph in HTML](#p-tag-defining-a-paragraph-in-html)
    - [`<hr>` Tag: Horizontal Line in HTML](#hr-tag-horizontal-line-in-html)
    - [`<br>` Tag: Line Break in HTML](#br-tag-line-break-in-html)
    - [`<a>` Tag: Anchor Tag for HTML Links](#a-tag-anchor-tag-for-html-links)
      - [Essential Attributes](#essential-attributes)
    - [`<img>` Tag: Embedding Images in HTML](#img-tag-embedding-images-in-html)
    - [`<pre>` Tag: Preserving Formatting in HTML](#pre-tag-preserving-formatting-in-html)
    - [`<code>` Tag: Inline Code in HTML](#code-tag-inline-code-in-html)
  - [HTML Block-level \& Inline Tags](#html-block-level--inline-tags)
    - [Inline Elements in HTML](#inline-elements-in-html)
    - [HTML Block Elements](#html-block-elements)
  - [HTML Lists](#html-lists)
    - [HTML Unordered List](#html-unordered-list)
    - [HTML Ordered List](#html-ordered-list)
    - [HTML Definition Lists](#html-definition-lists)
  - [HTML Tables](#html-tables)
    - [Rowspan and Colspan Attributes](#rowspan-and-colspan-attributes)
    - [Adding a Caption](#adding-a-caption)
    - [Table Headers and Footers](#table-headers-and-footers)
    - [Column Groups](#column-groups)
    - [Accessibility in Tables](#accessibility-in-tables)
      - [Sample HTML Table](#sample-html-table)
  - [HTML Forms](#html-forms)
    - [HTML Input Types](#html-input-types)
    - [Textarea \& Select in HTML Forms](#textarea--select-in-html-forms)
    - [Attributes and Validation](#attributes-and-validation)
  - [HTML Meta Tags and Favicon](#html-meta-tags-and-favicon)
    - [Adding Favicon in HTML](#adding-favicon-in-html)
    - [Link \& Script Tags](#link--script-tags)
      - [The `<link>` Tag](#the-link-tag)
      - [The `<script>` Tag](#the-script-tag)
  - [HTML Media](#html-media)
    - [The `<video>` Tag](#the-video-tag)
    - [The `<audio>` Tag](#the-audio-tag)
    - [SVG in HTML](#svg-in-html)
      - [What is SVG?](#what-is-svg)
      - [Benefits of Using SVG in HTML](#benefits-of-using-svg-in-html)
      - [SVG Attributes](#svg-attributes)
    - [iFrames in HTML](#iframes-in-html)
  - [Semantic Tags](#semantic-tags)
  - [HTML Canvas](#html-canvas)
    - [Attributes of Canvas](#attributes-of-canvas)
  - [HTML Global Attributes](#html-global-attributes)
    - [Using Global Attributes](#using-global-attributes)
  - [HTML Entities](#html-entities)
    - [Using HTML Entities](#using-html-entities)
  - [HTML Quotation Tag](#html-quotation-tag)
    - [`<blockquote>` and `<q>` Tags](#blockquote-and-q-tags)
      - [`<blockquote>` Tag](#blockquote-tag)
      - [`<q>` Tag](#q-tag)
    - [Attributes](#attributes)
  - [Obsolete HTML Tags](#obsolete-html-tags)
    - [The `<font>` Tag](#the-font-tag)
      - [The `<center>` Tag](#the-center-tag)
      - [The `<u>` Tag](#the-u-tag)
    - [Modern Alternatives](#modern-alternatives)
      - [Replacing `<font>`](#replacing-font)
      - [Replacing `<center>`](#replacing-center)
      - [Replacing `<u>`](#replacing-u)
  - [Character Set](#character-set)

# HTML

---

Hyper Text Markup Language

## What is HTML?

HTML (HyperText Markup Language) was created by **Tim Berners-Lee** in **1991** as a standard for creating web pages. It's a **markup language** used to structure content on the web, defining elements like headings, paragraphs, links, and images. HTML forms the backbone of web content. In layman's terms, **HTML is like the skeleton of a website.** It's a set of instructions that tells a web browser how to display text, images, videos, and other elements on a webpage.

- HTML is the language of the web, used to create websites.
- HTML defines the barebone structure or layout of web pages that we see on the Internet.
- HTML consists of a set of tags contained within an HTML document, and the associated files typically have either a **".html"** or **".htm"** extension.
- There are several versions of HTML, with **HTML5** being the most recent version.

## Features of HTML

- It is **platform-independent.**
- Images, videos, and audio can be added to a web page.
- HTML is a **markup language** and not a programming language.
- It can be **integrated with other languages** like CSS, JavaScript, etc. to show interactive (or dynamic) web pages.

## Why the Term HyperText & Markup Language?

The term **'Hypertext Markup Language'** is composed of two main words: **'hypertext'** and **'markup language.'**
**'Hypertext'** refers to the linking of text with other documents,
**'Markup Language'** denotes a language that utilizes a specific set of tags.

Thus, HTML is the practice of displaying text, graphics, audio, video etc. in a certain way using special tags.

![html-car-example](https://i.imgur.com/8IV0bJe.png)

In building a webpage, think of HTML, CSS, and JavaScript as different parts of a car. HTML is like the car's skeleton, forming the basic structure and frame. CSS adds the paint and finishing touches, making the car look appealing with color, style, and design. JavaScript is similar to the engine and mechanical parts, infusing the car with functionality, movement, and interactive features.

## History of HTML

1. **1989:** Tim Berners-Lee, a British computer scientist, conceived the idea of the World Wide Web (www) while working at CERN (European Organization for Nuclear Research).

2. **1990:** Tim Berners-Lee began working on the first web browser, called "WorldWideWeb" (later renamed Nexus). During this time, he also created the first version of HTML to structure documents on the web.

3. **1991:** The first publicly available description of HTML was released by Tim Berners-Lee in a document titled "HTML Tags."

4. **1993:** The first graphical web browser, Mosaic, was introduced, bringing a more user-friendly experience to the web.

5. **1995:** HTML 2.0 was published as the first formal specification by the Internet Engineering Task Force (IETF). This version included new features like tables and text alignment.

6. **1996:** The World Wide Web Consortium (W3C) was founded by Tim Berners-Lee to standardize web technologies. HTML 3.2 was released, introducing support for scripting languages and applets.

7. **1997:** HTML 4.0, with CSS (Cascading Style Sheets) support, was published as a W3C Recommendation. This version marked a significant step forward in separating content from presentation, allowing for more sophisticated web designs.

8. **1999:** The HTML 4.01 specification was released as a minor revision to HTML 4.0, addressing some issues and providing clarifications.

9. **2008:** HTML5 was introduced as a draft by the Web Hypertext Application Technology Working Group (WHATWG). This version aimed to modernize and extend HTML, incorporating new elements, attributes, and APIs.

10. **2014:** HTML5 was finalized as a W3C Recommendation, marking its official status as a web standard. HTML5 brought improvements in multimedia support, offline web applications, and enhanced semantics.

## Overview of Frontend and Backend Development

**Frontend Development:**
Frontend development involves building the user interface and user experience that users interact with directly. It focuses on creating a visually appealing and responsive design that ensures a seamless and intuitive user experience. The technologies commonly used for frontend development include:

1. **HTML (Hypertext Markup Language):** Defines the structure and content of web pages.
2. **CSS (Cascading Style Sheets):** Controls the presentation and layout of HTML elements, providing styling and design.
3. **JavaScript:** Adds interactivity and dynamic behavior to web pages. It allows for client-side scripting, making web applications more responsive.

Frontend developers work on the look and feel of a website or web application, ensuring that it is visually appealing, user-friendly, and functions well on different devices and screen sizes.

**Backend Development:**
Backend development focuses on the server-side of web development. It involves handling data, user authentication, server configuration, and other behind-the-scenes operations. The backend is responsible for processing requests from the frontend, interacting with databases, and delivering the necessary data. Common technologies and languages used for backend development include:

1. **Server-Side Languages:** Such as Python, Ruby, Java, PHP, Node.js, etc., are used to handle server-side logic.
2. **Databases:** Like MySQL, PostgreSQL, MongoDB, etc., are used to store and retrieve data.
3. **Server Environment:** Such as Node.js, Apache, Nginx, etc., is responsible for serving the web application.

Backend developers ensure that the application works smoothly, manages data effectively, and handles the business logic. They also play a crucial role in security, ensuring that data is handled securely and user authentication is robust.

In summary, frontend and backend development are two essential components of web development that work together to create a complete and functional web application. Frontend is what users see and interact with, while backend manages the server-side operations and data processing. The collaboration between frontend and backend is crucial for delivering a seamless and efficient web experience.

## How do websites work?

When we want to access any information on the internet, we search for it using a web browser. The web browser retrieves the content from web servers, where it is stored in the form of HTML documents.

An HTML document is created by writing code with specific tags in a code editor of your choice. The document is then saved with the '.html' extension. Once saved, the browser interprets the HTML document, reads it, and renders the web page.

![how html homeworks](https://i.imgur.com/sUdkqmY.png)

The text editor has the HTML code of a website. This website can now be viewed in a beautifully rendered format using a computer program known as a web browser.

Your explanations are accurate! Let me add a bit more detail for further clarification:

**Web Browser:**

A web browser is a software application that allows users to access and view information on the World Wide Web. Common web browsers include Google Chrome, Mozilla Firefox, Microsoft Edge, Safari, and others. Web browsers interpret HTML, CSS, and JavaScript to render web pages in a human-readable format. They also support features like bookmarking, history, and extensions to enhance the browsing experience.

**HTML Document:**

An HTML document is a plain text file containing markup tags that define the structure and content of a web page. HTML stands for Hypertext Markup Language. Each tag serves a specific purpose and helps organize the content on a webpage. Tags are enclosed in angle brackets (`< >`). For example, `<html>`, `<head>`, `<body>`, `<p>`, and `<a>` are common HTML tags. The document usually begins with a `<!DOCTYPE html>` declaration to specify the HTML version.

**Rendered Page:**

The rendered page is the visual output displayed in a web browser after interpreting and processing the HTML, CSS, and JavaScript of a web page. The rendering process involves the browser parsing the HTML to create a Document Object Model (DOM) and applying styles with CSS to create the visual layout. JavaScript can enhance interactivity and dynamic content on the rendered page. The final result is what users see and interact with when they visit a website.

Your explanation is quite accurate and provides a good overview of how a basic website works and the role of a web browser. Let me summarize and add a few points:

## Basic Website Workflow

1. **User Request:** A user enters a website's address (URL) into the web browser.

2. **DNS Resolution:** The browser uses the Domain Name System (DNS) to translate the human-readable domain name into an IP address.

3. **HTTP Request:** The browser sends a request to the web server identified by the IP address.

4. **Server Response:** The web server processes the request and sends back HTML, CSS, and JavaScript files to the browser.

5. **Parsing and Rendering:** The browser interprets and parses the received HTML, CSS, and JavaScript files. It constructs the Document Object Model (DOM) from the HTML, applies styles from the CSS, and executes any JavaScript code.

6. **Rendering the Page:** The browser renders the web page, displaying it on the user's screen with all the visual elements and interactivity.

### Browser Functionality

A web browser plays a crucial role in parsing and rendering HTML code to the client. A web browser is a complex program that performs many tasks behind the scenes. Here's a summary of how it works:

- A browser is an application that reads HTML documents and displays them as web pages. Browsers can't access the content directly from where it's stored; this is where servers come into play.
- A server acts as an intermediary, listening to browser requests and fulfilling them by delivering the HTML document to the browser.

1. **Parsing:** The browser parses HTML to create a DOM tree. CSS is used to style the elements, and JavaScript adds dynamic behavior.

2. **DOM (Document Object Model):** The DOM is a tree-like structure representing the document. It allows JavaScript to interact with and manipulate the content dynamically.

3. **Rendering:** The browser converts the DOM into a visual representation on the screen, taking into account styles, layout, and any dynamic changes.

4. **User Interaction:** Browsers handle user input, such as clicks and form submissions, triggering further requests to the server or dynamic changes on the page.

5. **Extensions and Plugins:** Browsers support extensions and plugins that can enhance functionality, provide additional features, or modify the appearance of websites.

## HTML Page Structure

An HTML document is structured using a set of nested tags. Each tag is enclosed within `<…>` angle brackets and acts as a container for content or other HTML tags.

```html
<!DOCTYPE html> 
<html>
<head>
    <title>Document</title>
</head>
<body>
   <!-- content -->
</body>
</html>
```

**DOCTYPE Declaration:**

```html
<!DOCTYPE html>
```

The `<!DOCTYPE html>` declaration informs the web browser about the HTML version being used. The latest version is HTML5. But if this changes in the future, the doctype declaration will be helpful!

**HTML Root Element:**

```html
<html> <!-- tag is the root element that encapsulates 
            all the content on the page.-->

</html> <!-- tag marks the end of the <html> section.-->
```

**Head Section:**

```html
<head> <!-- tag contains metadata and links to external 
            resources like CSS and JavaScript files. -->

</head> <!-- tag marks the end of the <head> section.-->
```

**Title Tag:**

```html
<title>Document</title> <!-- tag sets the title of the web page,
                    which is displayed in the browser's title bar or tab.-->
```

**Body Tag:**

```html
<body> <!-- tag contains the visible content of the web page.

This is where text, images, and other elements go. -->

</body> <!-- tag marks the end of the visible content of the web page.-->
```

**Visualization of an HTML Document:**

![html-tag-structure-image](https://i.imgur.com/q314hu3.png)

## HTML Tags

If you want to build a beautiful website, tags are essential elements that help you achieve that.

An HTML tag acts as a container for content or other HTML tags. Tags are words enclosed within < and > angle brackets.

They serve as keywords that instruct the web browser on how to format and display the content.

### Commonly used tags in HTML

Here are some commonly used tags in HTML. These are the only tags used 70% of the time
Your explanation provides a clear and concise overview of commonly used HTML tags across various categories. This is a great resource for beginners learning HTML. Let's break down the categories a bit further:

**Document Structure Tags:**

```html
1. <!DOCTYPE html> <!--Specifies the document type.-->

2. <html> <!--Encloses the entire HTML document.-->

3. <head> <!--Contains meta-information and links to scripts and stylesheets.-->

4. <body> <!--Contains the content of the web page.-->
```

**Metadata Tags:**

```html
1. <title> <!-- Sets the title of the web page.-->

2. <meta> <!-- Provides metadata such as character set,
                author, and viewport settings.-->
3. <link> <!-- Links external resources like stylesheets.-->
```

**Text Formatting Tags:**

```html
1. <p> <!-- Paragraph.-->

2. <h1>, <h2>, <h3>, <h4>, <h5>, <h6> <!-- Headings.-->

3. <strong> <!-- Strong emphasis (typically bold).-->

4. <em> <!-- Emphasis (typically italic).-->

5. <br> <!-- Line break.-->

6. <hr> <!-- Horizontal rule.-->
```

**List Tags:**

```html
1. <ul> <!-- Unordered list.-->

2. <ol> <!-- Ordered list.-->

3. <li> <!-- List item.-->
```

**Hyperlink and Media Tags:**

```html
1. <a> <!-- Anchor (used for links).-->

2. <img> <!-- Image.-->

3. <audio> <!-- Audio content.-->

4. <video> <!-- Video content.-->
```

**Form Tags:**

```html
1. <form> <!-- Form.-->

2. <input> <!-- Input field.-->

3. <textarea> <!-- Text area.-->

4. <button> <!-- Button.-->

5. <select> <!-- Dropdown list.-->

6. <option> <!-- Options within a <select> or <datalist>.-->
```

**Table Tags:**

```html
1. <table> <!-- Table.-->

2. <tr> <!-- Table row.-->

3. <td> <!-- Table data cell.-->

4. <th> <!-- Table header cell.-->

5. <thead> <!-- Table header group.-->

6. <tbody> <!-- Table body group.-->

7. <tfoot> <!-- Table footer group.-->
```

**Semantic Tags:**

```html
1. <header> <!-- Header section.-->

2. <footer> <!-- Footer section.-->

3. <article> <!-- Article.-->

4. <section> <!-- Section.-->

5. <nav> <!-- Navigation.-->

6. <aside> <!-- Sidebar content.-->
```

### Paired and Unpaired Tags

#### 1. Paired Tags (Container Tags)

These are tags that come in pairs, consisting of an opening tag and a corresponding closing tag. The content goes between these two tags.

- **Opening Tag:** Starts with `<` and ends with `>`. Example: `<p>`
- **Closing Tag:** Starts with `<` followed by `/` and ends with `>`. Example: `</p>`

**Examples:**

- Paragraphs: `<p>This is a paragraph.</p>`
- Headings: `<h1>This is a heading.</h1>`

#### 2. Unpaired Tags (Self-Closing Tags or Stand-Alone Tags)

These are tags that don't require a closing tag. They are self-contained, encapsulating all the information within a single tag.

- **Self-Closing Tag:** Starts with `<` and ends with `/>` (though the `/` is optional in HTML5).

**Examples:**

- Line Break: `<br/>`
- Horizontal Rule: `<hr/>`
- Image: `<img src="image.jpg" alt="An example image"/>`

**Note:** Later if you happen to use react or a framework like Next.js, you will have to close the tag like this `<br/> <hr/>`. So it is better to cultivate the habit!

![representation-of-html-tags](https://i.imgur.com/hDbgIMX.png)

---

## HTML Element

- An HTML element is a complete set consisting of a start tag (opening tag), content, and an end tag (closing tag).
- **HTML Element = Start Tag + Content + End Tag.**
**Example:**

```html
<h1>This is our first heading</h1>
```

where `<h1>` is the start tag, "This is our first heading" is the content, and `</h1>` is the end tag.

### Nested HTML Element

- A nested HTML element is a structure where one element is placed inside another element.
- The enclosing element is the **"parent,"** and the enclosed element is the **"child."**
**Example:**

```html
<h1><b>This is our first heading</b></h1>
```

where `<h1>` is the parent element, and `<b>` (bold) is the child element nested inside.

### Empty HTML Element

- An empty HTML element is one that does not have a closing tag or content. Also known as **"void elements"** or **"self-closing elements."**
- Example: `<br />` is a break tag with no content and no closing tag. It's used for line breaks. Another example is `<hr />` for horizontal rules.

## HTML Attributes

- HTML attributes define the characteristics of an HTML element.
- They consist of a name and a value.
- Attributes are placed within an element's opening tag.

**Types of HTML Attributes:**

1. **Core Attributes:**
   - Basic attributes applicable to most HTML elements.
   - Examples: `id`, `class`, `style`.

2. **Internationalization Attributes:**
   - Aid in adapting the document to different languages and regions.
   - Examples: `lang`, `dir`.

3. **Generic Attributes:**
   - Provide additional information about the element without necessarily affecting appearance or behavior.
   - Examples: `data-*` attributes for storing custom data private to the page or application.

### Core Attributes

#### ID Attribute

The ID attribute is used to assign a unique identifier to an HTML element. Each element with an ID has its own unique identity, similar to how each individual has a unique identity. Multiple elements cannot have the same ID.

- **Example:**

  ```html
  <p id="html">This is an HTML tutorial</p>
  <p id="python">This is a Python tutorial</p>
  ```

#### Class Attribute

The ID attribute is used to assign a unique identifier to an HTML element. Each element with an ID has its own unique identity, similar to how each individual has a unique identity. Multiple elements cannot have the same ID.

- **Example:**

  ```html
  <p class="highlight">This is a highlighted paragraph</p>
  <p class="highlight">Another highlighted paragraph</p>
  ```

#### Title Attribute

The title attribute provides additional information about an element and is often displayed as a tooltip when the mouse hovers over it.

- **Example:**

  ```html
  <h4 title="hello, motto">Title attribute</h4>
  ```

#### Style Attribute

The style attribute allows for inline styling of HTML elements. It is used in conjunction with CSS properties to directly style individual elements within the HTML code.

- **Example:**

  ```html
  <p style="color: blue; font-size: 16px;">
        Blue text with a larger font size
  </p>
  ```

#### Case Sensitivity

- **Recommendation:** While HTML attribute names are case-insensitive, it is recommended to use lowercase attributes for best practices and compatibility with stricter document types like XHTML.

Your explanation of HTML comments is clear and covers the key points effectively. Let's summarize:

---

## HTML Comments

- Comments in HTML are ignored by web browsers.
- They are useful for improving code readability and documentation.
- HTML comments are denoted by `<!-- content -->`.
- HTML supports both single-line and multi-line comments.

### Types of Comments in HTML

1. **Single-line Comments:**
   - Contained within one line.
   - Useful for short annotations.
   - Example:

     ```html
     <!-- This is a single-line comment -->
     ```

2. **Multi-line Comments:**
   - Span across multiple lines.
   - Ideal for detailed explanations or temporarily disabling blocks of code.
   - Example:

     ```html
     <!-- 
     This is a multi-line comment.
     It spans multiple lines.
     -->
     ```

---

## HTML Id & Classes

### ID

An ID is a unique identifier assigned to only one HTML element within a page.

- **Usage:** Often used for unique styling and JavaScript manipulations.
- **Example:**

  ```html
  <div id="myUniqueID">This is a div with an ID.</div>
  ```

### Classes

The class attribute allows multiple HTML elements to share the same name.

- **Usage:** Used for applying the same styles or behaviors to a group of elements.
- **Example:**

  ```html
  <div class="myClass">This is a div with a class.</div>
  <p class="myClass">This is a paragraph with the same class.</p>
  ```

### Style Tag

The style tag in HTML is used to include embedded CSS within an HTML document.

- **Usage:** Defines the look and feel of various HTML elements on the page.
- **Example:**

  ```html
  <style>
    p {
      color: blue;
      font-size: 18px;
    }
    .highlight {
      background-color: yellow;
    }
  </style>
  ```

### CSS Selection using IDs and Classes

- **ID in CSS:** Selected using a hash (#) symbol before the ID name.

  ```css
  /* CSS for ID */
  #myUniqueID {
    background-color: yellow;
  }
  ```

- **Class in CSS:** Selected using a dot (.) symbol before the class name.

  ```css
  /* CSS for Class */
  .myClass {
    font-size: 18px;
  }
  ```

### Differences Between IDs and Classes

- **Uniqueness:** IDs are unique, and classes can be reused.
- **JavaScript:** IDs are often used for JavaScript operations.
- **Styling:** Both can be used for styling, but IDs have higher specificity.

## HTML Basic Tags

### Skeletal Tags

#### `<html>` Tag: "Root of an HTML Page"

- **Syntax:**

  ```html
  <html>
    <!-- Content -->
  </html>
  ```

- **Description:** The `<html>` tag is the root element that wraps all the content on the page. It typically contains two main sections: the header (`<head>...</head>`) and the body (`<body>...</body>`).

##### `<head>` Tag: "Header Part of an HTML Page"

- **Syntax:**

  ```html
  <head>
    <!-- Header Content -->
  </head>
  ```

- **Description:** The `<head>` tag contains meta-information and the title of the document. The title is displayed in the browser tab, and meta information is often used for SEO purposes.

##### `<title>` Tag: "Title Part of an HTML Page"

- **Syntax:**

  ```html
  <title>
    <!-- Title Name -->
  </title>
  ```

- **Description:** The `<title>` tag defines the title of the document, which is displayed in the browser's title tab.

##### `<body>` Tag: "Body Part of an HTML Page"

- **Syntax:**

  ```html
  <body>
    <!-- Body Content -->
  </body>
  ```

- **Description:** The `<body>` tag encloses the main content of the page, and everything within this tag is displayed in the browser.

---

### Heading Tags in HTML

- Proper use of heading tags creates a hierarchical structure for content.
- `<h1>` is typically used for the main title, and subsequent levels (`<h2>` to `<h6>`) are used for subheadings.
- Correct heading hierarchy improves readability and search engine optimization.

1. **`<h1>` Tag: First-Level Heading**
   - **Usage:** Defines the first-level heading, typically the largest and boldest.
   - **Example:**

     ```html
     <h1>
       <!-- Heading content -->
     </h1>
     ```

2. **`<h2>` Tag: Second-Level Heading**
   - **Usage:** Used for second-level headings, slightly smaller than `<h1>`.
   - **Example:**

     ```html
     <h2>
       <!-- Heading content -->
     </h2>
     ```

3. **`<h3>` Tag: Third-Level Heading**
   - **Usage:** Used for third-level headings, smaller than `<h2>`.
   - **Example:**

     ```html
     <h3>
       <!-- Heading content -->
     </h3>
     ```

4. **`<h4>` Tag: Fourth-Level Heading**
   - **Usage:** Defines a fourth-level heading, smaller than `<h3>`.
   - **Example:**

     ```html
     <h4>
       <!-- Heading content -->
     </h4>
     ```

5. **`<h5>` Tag: Fifth-Level Heading**
   - **Usage:** Used for fifth-level headings, smaller than `<h4>`.
   - **Example:**

     ```html
     <h5>
       <!-- Heading content -->
     </h5>
     ```

6. **`<h6>` Tag: Sixth-Level Heading**
   - **Usage:** Defines the sixth-level heading, the smallest among heading tags.
   - **Example:**

     ```html
     <h6>
       <!-- Heading content -->
     </h6>
     ```

---

### `<p>` Tag: Defining a Paragraph in HTML

To create well-structured text in your HTML document, the `<p>` tag is essential for defining paragraphs.

- **Usage:**

  ```html
  <p>
    <!-- Paragraph content -->
  </p>
  ```

- **Description:** The `<p>` tag is used to format text into distinct paragraphs. Each paragraph is separated by automatic empty line spaces above and below the content.

**Attributes and Styling:**

- **Attributes:** You can enhance the `<p>` tag's functionality using attributes like `class` or `id` for CSS styling.

  ```html
  <p class="example" style="color: blue;">
    This is a styled paragraph.
  </p>
  ```

**Best Practices:**

- **Textual Content:** It's advisable to use the `<p>` tag for textual content and not for layout control.
- **Layout Considerations:** For layout purposes, consider using HTML5 semantic tags like `<section>`, `<article>`, or CSS techniques.

---

### `<hr>` Tag: Horizontal Line in HTML

- **Usage:**

  ```html
  <hr>
  ```

- **Description:** The `<hr>` tag is an empty or self-closing tag, and it doesn't require a closing tag.
- **Purpose:** It serves as a visual separator, creating a horizontal line to divide different sections of the document.

---

### `<br>` Tag: Line Break in HTML

- **Usage:**

  ```html
  <br>
  ```

- **Description:** The `<br>` tag is an empty or self-closing tag, and it doesn't require a closing tag.
- **Purpose:** It is used to insert line breaks in text or paragraphs, automatically moving the text following the tag to the next line.
- **Common Use Cases:** Useful for preserving line breaks in addresses, poems, song lyrics, or any content where maintaining the original line structure is crucial for readability or visual layout.

---

### `<a>` Tag: Anchor Tag for HTML Links

- **Usage:**

  ```html
  <a href="Your specified path">
      content
  </a>
  ```

- **Description:** The `<a>` tag, also known as the Anchor tag, is used for creating hyperlinks to link one document to another. It includes a closing tag `</a>`.
  
#### Essential Attributes

1. **`href` Attribute:**
   - Defines the URL the link points to.

2. **`target` Attribute:**
   - Specifies where to open the linked document.
   - Values:
     - `_blank`: Opens the linked document in a new window or tab.
     - `_top`: Opens the document in the full body of the window.
     - `_self`: Opens the document in the same window or tab (default behavior).
     - `_parent`: Opens the linked document in the parent frame.

**Linking to Specific Page Sections:**

- To link to a specific section, use:
  - The name or id attribute of the target section.
  - A hyperlink with a hash (#) followed by the target id or name.

**Example:**

```html
<!DOCTYPE html>
<html>
<head>
  <title>My Webpage</title>
</head>
<body>

  <!-- Link at the top -->
  <a href="#gardening-tips">Go to Gardening Tips</a>

  <!-- Some content -->
  <p>Here is some other content...</p>

  <!-- Gardening Tips Section -->
  <h2 id="gardening-tips">Gardening Tips</h2>
  <p>This section provides tips on how to garden...</p>

</body>
</html>
```

**Link Colors:**

- Links have different colors based on their state:
  - Active: Red and underlined.
  - Visited: Purple and underlined.
  - Unvisited: Blue and underlined.

---

### `<img>` Tag: Embedding Images in HTML

- **Basic Syntax:**

  ```html
  <img src="image's path" />
  ```

- **Key Features:**
  - Self-closing tag: Doesn't require a corresponding closing tag.
  - Supports various image formats including PNG, JPEG, JPG, and GIF.

**Mandatory Attributes:**

- **`src` Attribute:**
  - Specifies the path to the image file.
- **`alt` Attribute:**
  - Provides a text description for the image.

  ```html
  <img src="images/profile_picture.jpg" alt="Profile Picture" />
  ```

**Setting Image Dimensions:**

- While dimensions can be set using "width" and "height" attributes in the `<img>` tag, modern best practices recommend using CSS for this purpose.

  ```html
  <img src="image.png" alt="Description" width="300" height="100" />
  ```

**Impact on SEO:**

- Specifying width and height attributes in the `<img>` tag can positively impact SEO by improving Cumulative Layout Shift (CLS) score.
- A better CLS score can lead to a higher page ranking in search engine results.

**Note:**

- Styling dimensions and other properties are now commonly managed through CSS for better flexibility and maintainability.

---

### `<pre>` Tag: Preserving Formatting in HTML

- **Usage:**

  ```html
  <pre>
    <!-- code snippet in any programming language -->
  </pre>
  ```

- **Description:** The `<pre>` tag preserves the original formatting of text, making it suitable for displaying code snippets where spacing and indentation are crucial.

**Key Features:**

- The `<pre>` tag maintains both spaces and line breaks, ensuring that text appears exactly as originally formatted.
- It has both an opening tag `<pre>` and a closing tag `</pre>`.
- Additional attributes can be added for further customization.

**When to Use the `<pre>` Tag:**

- The `<pre>` tag is most effective when you want the text to display on your HTML page exactly as it was typed, without any formatting changes.
- It is especially useful for displaying code snippets or preformatted text from data files.

---

### `<code>` Tag: Inline Code in HTML

- **Usage:**

  ```html
  <code>
    <!-- inline code snippet -->
  </code>
  ```

- **Description:** The `<code>` tag is used for embedding inline code snippets within text. It is ideal for highlighting short pieces of code, variable names, or commands.

**Key Features:**

- The `<code>` tag is an inline element, allowing it to be inserted within a line of text without creating new blocks.
- It is commonly used in combination with other tags, such as `<p>` for paragraphs or `<span>` for inline styling.
- The tag is part of HTML's semantic elements, helping browsers and developers identify and style code within the content.

**When to Use the `<code>` Tag:**

- Use the `<code>` tag when you want to present short sections of code within the flow of a paragraph or sentence.
- It helps maintain a consistent font style and distinguishes code snippets from regular text.

---

## HTML Block-level & Inline Tags

![inline-block-image](https://i.imgur.com/M5gc5NB.jpg)

No matter what the width is, block elements will always start on a new line and take up the full available width of their container by default. This means they essentially claim all the horizontal space for themselves, pushing any content that comes after them to a new line. But the inline elements will fit snugly within the flow of other elements, taking up only as much width as their content requires.

### Inline Elements in HTML

- **Definition:**
  - Inline elements do not start on a new line and only take up as much width as necessary. They are part of the flow within other elements.
  - They fit snugly within the content flow and don't force a new line to start.

- **Nesting:**
  - Inline elements can contain other inline elements but generally should not contain block-level elements.
  - Example of nesting: `<span>This is <strong>important</strong> text.</span>`
  - Incorrect nesting, such as placing a block-level element inside an inline element, is generally not recommended.

  ```html
  <!-- Incorrect nesting -->
  <span>This is <div>not recommended</div> text.</span>
  ```

- **Common Inline Elements:**
  - `<span>`: A generic inline container for text.
  - `<a>`: Defines a hyperlink.
  - `<strong>`: Defines important text.
  - `<em>`: Defines emphasized text.
  - `<img>`: Embeds an image.
  - `<input>`: Defines an input control.

- **Styling Inline Elements:**
  - CSS can be used to style inline elements. However, certain properties like width and height may not apply uniformly.

- **Examples:**

    ```html
    <p>This text contains a <a href="link">link</a>,
    an <strong>important text</strong>, and
    an <em>emphasized text.</em></p>
    ```

- **List of Common Inline Elements:**

```html
1. <a> <!-- Defines a hyperlink.-->

2. <abbr> <!-- Represents an abbreviation or acronym with a tooltip.-->

3. <acronym> <!-- Represents an acronym (deprecated; use `<abbr>` instead).-->

4. <b> <!-- Represents bold text.-->

5. <bdo> <!-- Overrides the text direction (left-to-right or right-to-left).-->

6. <big> <!-- Renders text in a larger font size (deprecated).-->

7. <br> <!-- Inserts a line break within text.-->

8. <button> <!-- Defines a clickable button.-->

9. <cite> <!-- Defines the title of a creative work.-->

10. <code> <!-- Represents a piece of code.-->

11. <dfn> <!-- Marks the defining instance of a term.-->

12. <em> <!-- Indicates text with emphasized importance.-->

13. <i> <!-- Represents italicized text.-->

14. <img> <!-- Embeds an image.-->

15. <input> <!-- Creates an input control.-->

16. <kbd> <!-- Represents user input (typically keyboard input).-->

17. <label> <!-- Associates a label with a form element.-->

18. <map> <!-- Defines a client-side image map.-->

19. <object> <!-- Embeds external objects, such as multimedia or plugins.-->

20. <output> <!-- Represents the result of a calculation or user action.-->

21. <samp> <!-- Represents sample output from a program.-->

22. <script> <!-- Embeds or references an external script.-->

23. <select> <!-- Creates a dropdown list.-->

24. <small> <!-- Represents smaller text.-->

25. <span> <!-- A generic inline container for text.-->

26. <strong> <!-- Represents strongly emphasized text.-->

27. <sub> <!-- Renders text as subscript.-->

28. <sup> <!-- Renders text as superscript.-->

29. <time> <!-- Represents a specific period in time.-->

30. <tt> <!-- Renders text in a monospaced or fixed-width font (deprecated).-->

31. <u> <!-- Represents underlined text.-->

32. <var> <!-- Represents the name of a variable in programming or mathematics.-->
```

### HTML Block Elements

You already know about HTML inline elements. All HTML tags have specific display behavior: they are either block-level elements or inline elements.

**What are Block-level Elements?**
Block-level elements are those that start on a new line and take up the entire width of their container by default. They essentially claim all the horizontal space for themselves, pushing any content that comes after them to a new line.

**Characteristics of Block-level Elements:**

- Always start on a new line.
- Take up the full width available.
- Width and height can be controlled via CSS.
- Can contain other block-level as well as inline elements.

**Common Block-level Elements:**

```html
1. <h1>,<h2>,<h3>,<h4>,<h5>,<h6> <!-- Headings-->

2. <p> <!-- Paragraphs-->

3. <hr> <!-- Horizontal rule-->

4. <address> <!-- Address information-->

5. <article> <!-- Article content-->

6. <aside> <!-- Sidebar content-->

7. <blockquote> <!-- Block quotations-->

8. <canvas> <!-- Drawing area-->

9. <dd> <!-- Description in a description list-->

10. <div> <!-- Generic container-->

11. <dl> <!-- Description list-->

12. <dt> <!-- Term in a description list-->

13. <fieldset> <!-- Group of related form elements-->

14. <figcaption> <!-- Caption for a figure-->

15. <figure> <!-- Image or media with a caption-->

16. <footer> <!-- Footer of a section or page-->

17. <form> <!-- HTML form-->

18. <header> <!-- Header of a section or page-->

19. <li> <!-- List item-->

20. <main> <!-- Main content of a document-->

21. <nav> <!-- Navigation links-->

22. <noscript> <!-- Alternate content when JavaScript is not enabled-->

23. <ol> <!-- Ordered list-->

24. <ul> <!-- Unordered list-->

25. <pre> <!-- Preformatted text-->

26. <section> <!-- Standalone section in a document-->

27. <table> <!-- Table-->

28. <video> <!-- Video content-->
```

## HTML Lists

Our day-to-day lives often involve the use of lists. For example, when we go shopping, the bill we receive includes a list of all the items we've purchased. In a similar manner, web developers use lists to neatly display data on websites.

**Types of HTML Lists:**
HTML provides different types of lists to display data in various forms. Each list contains one or more list items.

- Unordered List: Displays items using bullets.
- Ordered List: Displays items in a numerical sequence, and supports various numbering styles like Arabic numerals, Roman numerals, and so on.
- Definition List: Organizes items in a format similar to a dictionary, with terms and their corresponding definitions.

### HTML Unordered List

An unordered list is a collection of items that doesn't follow a specific order. The items are usually marked with bullets, dashes, or other symbols to indicate list membership. In HTML, unordered lists are created using the `<ul>` (unordered list) tag, and each item within the list is represented by the `<li>` (list item) tag.

**Syntax for Creating Unordered Lists:**

```html
<ul>
  <li>Item 1</li>
  <li>Item 2</li>
  <li>Item 3</li>
</ul>
```

**Customizing Bullet Points with 'type' Attribute:**
You can customize the style of bullet points using the `type` attribute with values like `disc` (default), `square`, or `circle`.

**Example Using Square Bullets:**

```html
<ul type="square">
  <li>Notebook</li>
  <li>Marker</li>
</ul>
```

### HTML Ordered List

An ordered list is a collection of items arranged in a specific, sequential order. Each item is typically numbered to indicate its position in the sequence. Ordered lists are useful when the order of items matters, such as in step-by-step instructions or rankings. In HTML, ordered lists are created using the `<ol>` (ordered list) tag, and each item within the list is represented by the `<li>` (list item) tag.

**Syntax:**

```html
<ol>
  <li>Item 1</li>
  <li>Item 2</li>
  <li>Item 3</li>
</ol>
```

**Setting the 'type' Attribute:**
The `type` attribute allows you to customize the style of numbering. Options include:

- Uppercase Roman Numerals (`type="I"`)
- Lowercase Roman Numerals (`type="i"`)
- Arabic Numerals (`type="1"` - default)
- Lowercase Alphabetical Letters (`type="a"`)
- Uppercase Alphabetical Letters (`type="A"`)

**Example with Uppercase Roman Numerals:**

```html
<ol type="I">
  <li>First</li>
  <li>Second</li>
</ol>
```

**Setting the 'start' Attribute:**
The `start` attribute specifies the starting number for the list.

**Example Starting from 3:**

```html
<ol start="3">
  <li>Pen</li>
  <li>Pencil</li>
</ol>
```

### HTML Definition Lists

A Definition List in HTML provides a structured way to present a list of terms along with their corresponding descriptions or definitions. It is created using the `<dl>` (Definition List) element, which encapsulates pairs of `<dt>` (Definition Term) and `<dd>` (Definition Description) elements.

**Example:**

```html
<h1>Web Terminology</h1>
<dl>
  <dt>HTML</dt>
  <dd>HyperText Markup Language: The standard language for creating web pages.</dd>

  <dt>CSS</dt>
  <dd>Cascading Style Sheets: A stylesheet language used for describing the look and formatting of a document written in HTML.</dd>

  <dt>JavaScript</dt>
  <dd>A programming language commonly used in web development to add interactive features.</dd>
</dl>
```

In this example,

- `<dl>` serves as the container
- `<dt>` defines the terms
- `<dd>` contains the corresponding definitions.

This structure creates a well-organized presentation, akin to a glossary or dictionary, making it easy to associate terms with their meanings.

---

## HTML Tables

HTML tables provide a structured way to organize and present data in rows and columns.

**Syntax of HTML Table:**

The `<table>` tag is used to initiate and conclude a table, and key elements such as

- `<tr>` (table rows)
- `<th>` (table headings)
- `<td>` (table cells)

**Basic Table Structure:**

```html
<table>
  <tr>
    <th>Name</th>
    <th>Age</th>
  </tr>
  <tr>
    <td>Aakash</td>
    <td>21</td>
  </tr>
</table>
```

### Rowspan and Colspan Attributes

- **Rowspan:** To make a table cell span multiple rows.

  ```html
  <td rowspan="value">
  ```
  
- **Colspan:** To make a table cell span multiple columns.

  ```html
  <td colspan="value">
  ```

**Visual Representation of Rowspan and Colspan:**

![colspan-rowspan](https://i.imgur.com/Mlm89wi.png)

**Examples:**

- **Colspan Example:**

  ```html
  <table border="1">
    <tr>
      <td colspan="2">Merged Columns</td>
    </tr>
    <tr>
      <td>Column 1</td>
      <td>Column 2</td>
    </tr>
  </table>
  ```

- **Rowspan Example:**

  ```html
  <table border="1">
    <tr>
      <td>Row 1, Column 1</td>
      <td rowspan="2">Merged Rows</td>
    </tr>
    <tr>
      <td>Row 2, Column 1</td>
    </tr>
  </table>
  ```

### Adding a Caption

To provide a title for your HTML table, the `<caption>` element is utilized. This not only enhances the SEO aspect of the table but also improves accessibility.

```html
<table>
  <caption>Student Details</caption>
  <!-- Rest of the table here -->
</table>
```

### Table Headers and Footers

Apart from using `<th>` for individual header cells, HTML tables offer the `<thead>` and `<tfoot>` elements to group header or footer content.

```html
<table>
  <thead>
    <!-- Header content -->
  </thead>
  <tfoot>
    <!-- Footer content -->
  </tfoot>
  <tbody>
    <!-- Body content -->
  </tbody>
</table>
```

### Column Groups

For applying styles to entire columns, `<colgroup>` and `<col>` elements can be employed.

```html
<table>
  <colgroup>
    <col style="background-color: yellow">
  </colgroup>
  <!-- Rest of the table -->
</table>
```

### Accessibility in Tables

Enhance the accessibility of your tables by using the `scope` attribute in `<th>` elements to specify if they are headers for columns, rows, or groups of columns or rows.

```html
<th scope="col">Name</th>
<th scope="col">Age</th>
```

#### Sample HTML Table

Here's an example HTML table incorporating these elements:

```html
<table border="1">
    <!-- Caption -->
    <caption>Employee Information</caption>

    <!-- Table Header -->
    <thead>
        <tr>
            <th>ID</th>
            <th>Name</th>
            <th>Position</th>
            <th>Salary</th>
        </tr>
    </thead>

    <!-- Table Body -->
    <tbody>
        <tr>
            <td>1</td>
            <td>Akash</td>
            <td>Developer</td>
            <td>₹50,00,000</td>
        </tr>
        <!-- Additional rows... -->
    </tbody>

    <!-- Table Footer -->
    <tfoot>
        <tr>
            <td colspan="3">Total Employees</td>
            <td>3</td>
        </tr>
    </tfoot>
</table>
```

---

## HTML Forms

HTML forms are pivotal for gathering user input on web pages, facilitating dynamic and interactive web experiences. They serve as the bridge between users and servers, enabling tasks such as authentication, data submission, and feedback collection. Here's a breakdown of the basic structure of an HTML form:

```html
<form action="/submit" method="post">
    <!-- Text input for username -->
    <label for="username">Username:</label>
    <input type="text" id="username" name="username" required>
    <br><br>

    <!-- Password input -->
    <label for="password">Password:</label>
    <input type="password" id="password" name="password" required>
    <br><br>

    <!-- Radio buttons for gender -->
    <label>Gender:</label>
    <input type="radio" id="male" name="gender" value="male">
    <label for="male">Male</label>
    <input type="radio" id="female" name="gender" value="female">
    <label for="female">Female</label>
    <br><br>

    <!-- Submit button -->
    <input type="submit" value="Submit">
</form>
```

**How to Use Form Controls?**

The `<input>` tag is commonly employed to create form controls, with attributes defining their behavior:

```html
<input type="" name="" value="">
```

- **type**: Specifies the type of input control (e.g., text, password, checkbox).
- **name**: Identifies the control, crucial when sending data to the server.
- **value**: Sets a default value for the control, subject to user modification.

### HTML Input Types

HTML input types are crucial for creating interactive web forms. Let's explore some common types: text, password, radio, and checkbox.

**Text Input:**

```html
<input type="text" name="username" placeholder="Enter your username">
```

The text input is fundamental for collecting simple text data, and the `placeholder` attribute provides a user hint.

**Password Input:**

```html
<input type="password" name="password" placeholder="Enter your password">
```

The password input type hides entered characters for security; it's suitable for sensitive information.

**Radio Buttons:**

```html
<input type="radio" id="male" name="gender" value="male">
<label for="male">Male</label>
<input type="radio" id="female" name="gender" value="female">
<label for="female">Female</label>
```

Radio buttons allow users to choose only one option from a set, enhancing choices in forms.

**Checkbox:**

```html
<input type="checkbox" id="subscribe" name="subscribe" value="yes">
<label for="subscribe">Subscribe to newsletter</label>
```

Checkboxes permit users to select multiple options.

| Input Type                 | HTML Code                                                                                                       | Description                                       |
| -------------------------- | --------------------------------------------------------------------------------------------------------------- | ------------------------------------------------- |
| Text Input                 | `<input type="text" name="username" id="username" placeholder="Enter your username">`                           | Accepts single-line text input.                   |
| Password Input             | `<input type="password" name="password" id="password" placeholder="Enter your password">`                         | Accepts masked text for password input.           |
| Textarea                   | `<textarea name="message" id="message" rows="4" cols="50" placeholder="Enter your message"></textarea>`           | Allows multi-line text input.                     |
| Radio Buttons              | `<input type="radio" name="gender" value="male"> Male`                                                           | Allows selection of one option from a list.      |
| Checkboxes                 | `<input type="checkbox" name="subscribe" id="subscribe" checked> Subscribe to newsletter`                         | Enables multiple options selection.               |
| Dropdown List (Select)     | `<select name="country" id="country">...</select>`                                                               | Provides a list of options in a drop-down menu.   |
| File Input                 | `<input type="file" name="fileUpload" id="fileUpload">`                                                         | Enables file uploads from the user's device.      |
| Submit Button              | `<input type="submit" value="Submit">`                                                                         | Submits the form data to the server.               |
| Reset Button               | `<input type="reset" value="Reset">`                                                                           | Resets form fields to their default values.       |
| Hidden Input               | `<input type="hidden" name="userid" value="123">`                                                              | Stores data on the client-side without displaying it. |
| Date Input                 | `<input type="date" name="birthdate" id="birthdate">`                                                           | Allows the selection of a date.                   |
| Email Input                | `<input type="email" name="email" id="email" placeholder="Enter your email">`                                   | Accepts email addresses.                          |
| URL Input                  | `<input type="url" name="website" id="website" placeholder="Enter your website URL">`                           | Accepts website URLs.                             |
| Number Input               | `<input type="number" name="quantity" id="quantity" min="1" max="100" value="1">`                               | Accepts numeric input within a specified range.   |
| Range Input                | `<input type="range" name="volume" id="volume" min="0" max="100" value="50">`                                   | Provides a slider for selecting a numeric value within a range. |
| Color Input                | `<input type="color" name="color" id="color">`                                                                 | Allows users to pick a color.                     |
| Search Input               | `<input type="search" name="search" id="search" placeholder="Search...">`                                       | Used for search boxes.                            |
| Tel Input                  | `<input type="tel" name="phone" id="phone" placeholder="Enter your phone number">`                             | Designed for telephone numbers.                  |
| Datetime Input             | `<input type="datetime-local" name="meeting" id="meeting">`                                                     | Allows users to select a date and time.          |
| Month Input                | `<input type="month" name="birthmonth" id="birthmonth">`                                                        | Enables the selection of a month.                 |
| Week Input                 | `<input type="week" name="planning" id="planning">`                                                            | Lets users pick a specific week.                  |
| Submit Button              | `<input type="submit" value="Submit">`                                                                         | Submits the form data to the server.               |
| Reset Button               | `<input type="reset" value="Reset">`                                                                           | Resets form fields to their default values.       |
| Button                     | `<button type="button">Click me</button>`                                                                     | Generic button used for triggering JavaScript functions. |
| Image Button               | `<input type="image" src="submit.png" alt="Submit">`                                                           | Acts as a submit button with an image.            |
| Fieldset and Legend        | `<fieldset><legend>Personal Information</legend>...</fieldset>`                                                 | Groups related form elements with a legend for better structure. |
| Label                      | `<label for="username">Username:</label>`                                                                     | Associates a label with a form control for better accessibility. |
| Optgroup                   | `<select><optgroup label="Group 1">...</optgroup></select>`                                                     | Groups options within a dropdown list.            |
| Datalist                   | `<input list="browsers" name="browser" id="browser"><datalist id="browsers">...</datalist>`                     | Provides a predefined list for input suggestions. |
| Meter                      | `<meter value="70" min="0" max="100">70%</meter>`                                                              | Represents a scalar measurement within a known range. |

### Textarea & Select in HTML Forms

HTML forms offer additional controls like `textarea` and `select` for diverse user interaction.

**Textarea Element:**

```html
<textarea name="comment" rows="4" cols="50">
  Enter your comment here...
</textarea>
```

The `textarea` is ideal for multiline text input, beneficial for comments, reviews, or any dynamic-length input.

**Select Element:**

```html
<select name="fruits">
  <option value="apple">Apple</option>
  <option value="banana">Banana</option>
  <option value="cherry">Cherry</option>
</select>
```

`select` creates a dropdown menu, suitable when users must choose from a predefined list of options.

**Combining Textarea and Select:**

```html
<form action="/submit">
  <textarea name="comment" rows="4" cols="50">Enter your comment here...</textarea>
  <select name="fruits">
    <option value="apple">Apple</option>
    <option value="banana">Banana</option>
    <option value="cherry">Cherry</option>
  </select>
  <input type="submit" value="Submit">
</form>
```

Combine both for a versatile form capturing varied types of user input.

### Attributes and Validation

HTML forms, crucial for interactive websites, can be enhanced with various attributes and HTML5 validation features.

**Common Attributes:**

- **action:** Specifies the URL where form data is sent after submission.

  ```html
  <form action="/submit.php" method="POST"></form>
  ```

- **method:** Defines how data is sent, commonly as GET or POST.

  ```html
  <form action="/submit.php" method="POST"></form>
  ```

- **name:** Specifies a name for the form element, aiding referencing in scripts or server-side code.

  ```html
  <input type="text" name="username">
  ```

**New HTML5 Attributes:**

- **placeholder:** Provides a user hint about the expected input.

  ```html
  <input type="text" placeholder="Enter your username">
  ```

- **required:** Makes a field mandatory.

  ```html
  <input type="text" required>
  ```

- **autofocus:** Automatically focuses the cursor on the input when the page loads.

  ```html
  <input type="text" autofocus>
  ```

**HTML5 Validation Attributes:**

- **required:** Makes a field mandatory.

  ```html
  <input type="text" required>
  ```

- **pattern:** Specifies a regular expression the input must match.

  ```html
  <input type="text" pattern="[a-zA-Z0-9]+">
  ```

---

## HTML Meta Tags and Favicon

HTML `<meta>` tags provide essential metadata about the HTML document, influencing aspects like character encoding, viewport settings, and search engine descriptions. Below is an example showcasing various `<meta>` tags:

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <!-- Character encoding -->
    <meta charset="UTF-8">

    <!-- Responsive design --> 
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <!-- Internet Explorer compatibility --> 
    <meta http-equiv="X-UA-Compatible" content="ie=edge">

    <!-- Description for search engines -->
    <meta name="description" content="This is a description of the web page"> 

    <!-- Keywords for search engines -->
    <meta name="keywords" content="HTML, CSS, JavaScript"> 

    <!-- Author name -->
    <meta name="author" content="Your Name"> 
    <title>Document</title>
</head>
<body>
    <!-- Your content here -->
</body>
</html>
```

**Explanation:**

- **Character Encoding:** `<meta charset="UTF-8">` sets the character encoding to UTF-8.
- **Viewport:** `<meta name="viewport" content="width=device-width, initial-scale=1.0">` scales the page for responsive design.
- **IE Compatibility:** `<meta http-equiv="X-UA-Compatible" content="ie=edge">` ensures compatibility with Internet Explorer.
- **Description:** `<meta name="description" content="This is a description of the web page">` provides a brief page description for search engines.
- **Keywords:** `<meta name="keywords" content="HTML, CSS, JavaScript">` specifies keywords for search engines.
- **Author:** `<meta name="author" content="Your Name">` indicates the author of the webpage.

### Adding Favicon in HTML

A favicon is a small icon associated with a website. To add a favicon:

1. **Create/Choose Favicon:** Make a square image in .ico format (16x16 or 32x32 pixels).
2. **Upload Favicon:** Place the .ico file in the website's root directory.
3. **Update HTML:** Add the following code in the `<head>` section:

    ```html
    <link rel="icon" href="favicon.ico" type="image/x-icon">
    ```

Replace "favicon.ico" with the actual file path.
4. **Test:** Open your site in different browsers to ensure the favicon appears.

---

### Link & Script Tags

The `<link>` and `<script>` tags are essential elements within an HTML document's `<head>` section. They serve various purposes, like linking external stylesheets or including JavaScript files.

#### The `<link>` Tag

The `<link>` tag is crucial for linking external stylesheets to an HTML document. It is a self-closing tag and is commonly used to enhance the styling of the webpage.

Example:

```html
<!-- Linking External Stylesheet -->
<link rel="stylesheet" type="text/css" href="styles.css"> 

```

In this example, the `<link>` tag is used to link an external stylesheet named "styles.css."

#### The `<script>` Tag

The `<script>` tag is employed to include JavaScript code or files in an HTML document. It must be closed with a `</script>` tag, and it can either contain inline JavaScript code or reference an external JavaScript file.

Example:

```html
<!-- Including External JavaScript File -->
<script src="script.js" type="text/javascript"></script>

```

In this example, the `<script>` tag is used to include an external JavaScript file named "script.js."

---

## HTML Media

The `<video>` and `<audio>` tags in HTML, along with their respective attributes. The examples make it easy to understand how to embed video and audio files in a web document. Here's a slight refinement and organization of the content:

### The `<video>` Tag

The `<video>` tag is utilized to embed video files in an HTML document, offering various attributes to control video playback.

**Example usage:**

```html
<video src="video.mp4" controls></video>
```

**Attributes for `<video>` Tag:**

- **src:** Specifies the path to the video file.
- **controls:** Adds video controls, such as play, pause, and volume.
- **autoplay:** Automatically starts playing the video when the page loads.
- **loop:** Repeats the video once it ends.
- **muted:** Mutes the video by default.
- **poster:** Specifies an image to be displayed before the video starts playing.
- **width and height:** Specifies the dimensions of the video.

### The `<audio>` Tag

The `<audio>` tag is employed to embed audio files in an HTML document, providing various attributes for control.

**Example usage:**

```html
<audio src="audio.mp3" controls></audio>
```

**Attributes for `<audio>` Tag:**

- **src:** Specifies the path to the audio file.
- **controls:** Adds audio controls, such as play, pause, and volume.
- **autoplay:** Automatically starts playing the audio when the page loads.
- **loop:** Repeats the audio once it ends.
- **muted:** Mutes the audio by default.
- **preload:** Specifies if and how the audio should be loaded when the page loads ('auto', 'metadata', 'none').
  Example:

   ```html
   <audio src="audio.mp3" controls preload="auto"></audio>
   ```

The **"preload"** attribute can have the following values:

1. **none:** This is the default value. It indicates that the browser should not preload the audio file at all. The audio file will only start downloading when the user initiates playback.

1. **metadata:** This value tells the browser to preload only the metadata of the audio file, such as its duration and basic information about the audio. This can be useful if you want to display the audio duration to the user without fully loading the audio data.

1. **auto:** This value instructs the browser to preload the entire audio file as much as possible without delaying the loading of other important page content. The browser will try to load the audio file in the background so that it's ready to play when the user decides to start it.

**Fallback Content for Cross-Browser Compatibility:**
To ensure compatibility with various browsers that may not support the `<video>` or `<audio>` tags or specific file formats.

   Example:

   ```html
   <video controls>
     <source src="video.mp4" type="video/mp4">
     <source src="video.webm" type="video/webm">
     Your browser does not support the video tag.
   </video>

   <audio controls>
     <source src="audio.mp3" type="audio/mpeg">
     <source src="audio.ogg" type="audio/ogg">
     Your browser does not support the audio tag.
   </audio>
   ```

**Accessibility Considerations:**
Developers should include alternative text or captions for videos, and mention the use of the `<track>` element for subtitles to enhance accessibility.

   Example:

   ```html
   <video controls>
     <source src="video.mp4" type="video/mp4">
     <source src="video.webm" type="video/webm">
     <track kind="captions" label="English" src="captions.vtt" srclang="en" default>
     Your browser does not support the video tag.
   </video>
   ```

---

### SVG in HTML

Scalable Vector Graphics (SVG) has become an indispensable part of modern web development. SVG enables developers to create high-quality, scalable graphics that look crisp at any size or resolution.

#### What is SVG?

SVG stands for Scalable Vector Graphics. Unlike raster images like PNGs or JPGs, SVGs are not pixel-based. They're composed of vectors—mathematical formulas that describe shapes, paths, and fills. This means SVGs can be resized without losing quality.

#### Benefits of Using SVG in HTML

1. **Scalability:** SVGs can be scaled to any size without losing quality, making them suitable for responsive web design where images need to adapt to various screen sizes and resolutions.

2. **File Size:** SVG files are often smaller compared to raster image formats like PNG or JPG, especially for simple graphics and icons. This can contribute to faster page load times and better overall performance.

3. **Flexibility:** SVGs can be easily styled, animated, and manipulated using CSS and JavaScript. This allows for dynamic and interactive graphics on web pages.

**Ways to Embed SVG in HTML:**

1. **Inline SVG:**

   ```html
   <svg height="100" width="100">
       <circle cx="50" cy="50" r="40" stroke="black" stroke-width="3" fill="red" />
   </svg>
   ```

   You can directly write the SVG XML code within the HTML document.

2. **Using the `<img>` Tag:**

   ```html
   <img src="image.svg" alt="Sample SVG">
   ```

   Point the `src` attribute of the `<img>` tag to the SVG file. This method is suitable for simple static images.

3. **Using CSS Background:**

   ```css
   .background {
       background-image: url('image.svg');
   }
   ```

   Set the SVG as a background image in a CSS file. This approach is useful for background graphics or patterns.

#### SVG Attributes

1. **width and height:**
   Set the dimensions of the SVG element.

2. **viewBox:**
   Defines the coordinate system and aspect ratio used by the SVG. It allows you to scale and position the SVG content within the viewport.

3. **fill and stroke:**
   - **fill:** Sets the fill color of the SVG shape.
   - **stroke:** Sets the color of the shape's outline or border.

---

### iFrames in HTML

**What is an iFrame?**
An iFrame, short for Inline Frame, is an HTML element used for embedding external content within a webpage. It allows you to display another HTML document or a web page within a designated area of the current page.

**Why Use iFrames?**
iFrames offer several benefits and use-cases:

1. **Content Isolation:** iFrames enable the isolation of third-party content, enhancing security by preventing external scripts or styles from affecting the main document.

2. **Modularity:** Easily embed external plugins, widgets, or content from other websites without affecting the structure of the main page.

3. **Resource Separation:** Content within an iFrame can load independently of the rest of the page. This can lead to improved performance as the content in the iFrame does not block the loading of the main page.

**Basic Syntax:**
The basic syntax of an iFrame is straightforward:

```html
<iframe src="URL" width="width" height="height"></iframe>
```

**Attributes of iFrame:**

1. **src:**
   - Specifies the URL of the page to embed within the iFrame.

2. **width and height:**
   - Define the dimensions of the iFrame.

3. **frameborder:**
   - Indicates whether to display a border around the iFrame. Setting it to "0" removes the border, while "1" adds a border.

   ```html
   <iframe src="URL" width="width" height="height" frameborder="0"></iframe>
   ```

4. **scrolling:**
   - Controls the appearance of scrollbars within the iFrame. Use "yes" to display scrollbars and "no" to hide them.

   ```html
   <iframe src="URL" width="width" height="height" scrolling="no"></iframe>
   ```

5. **name:**
   - Provides a name for the iFrame, which can be used as a target for links or form submissions. This is especially useful when working with JavaScript.

   ```html
   <iframe src="URL" width="width" height="height" name="frameName"></iframe>
   ```

## Semantic Tags

The use of semantic tags in HTML is crucial for providing meaning and structure to the content of a web page. Semantic tags not only make your code more readable for developers but also assist browsers and search engines in understanding the purpose and relationship of different sections on a page.

1. `<header>`: Represents the top section of a web page, typically containing headings, logos, and navigation elements. It serves as an introduction to the content.

2. `<nav>`: Indicates a navigation menu on a web page. This tag is used to define a section containing navigation links to other pages or parts of the same page.

3. `<article>`: Represents a self-contained piece of content, such as a blog post or news article. It encapsulates content that can be distributed and reused independently.

4. `<section>`: Represents a thematic grouping of content on a web page. It helps organize content into distinct sections based on theme or topic.

5. `<aside>`: Typically used for sidebars or content that is tangentially related to the main content. It can contain information like related links, advertisements, or supplementary content.

6. `<footer>`: Represents the footer of a web page, usually containing copyright information, contact details, or other relevant information. It is placed at the bottom of the page.

7. `<figure>` and `<figcaption>`: Used for embedding images, diagrams, or charts along with a caption. `<figure>` is used to group the content, while `<figcaption>` provides a caption for the content inside `<figure>`.

8. `<main>`: Signifies the main content area of a web page. It helps identify the primary content of the document.

9. `<time>`: Used to represent time-related information, such as dates and times. It helps in providing machine-readable data for better indexing and interpretation by browsers.

![semantic-tags](https://i.imgur.com/Cim91kM.png)

**Why Use Semantic Tags?**
They enhance SEO, improve accessibility, and make your code easier to read and maintain.

**Commonly Used Semantic Tags:**

- header: Contains introductory content.
- footer: Holds footer information.
- article: Encapsulates a self-contained composition.
- section: Represents a standalone section.
- aside: Contains content aside from the content it is placed in.
- nav: Holds navigation links.

1. **Using the `<header>` and `<footer>` tags:**

    ```html
    <header>
        <h1>My Website</h1>
        <nav>
            <ul>
                <li><a href="#">Home</a></li>
                <li><a href="#">About</a></li>
                <li><a href="#">Services</a></li>
                <li><a href="#">Contact</a></li>
            </ul>
        </nav>
    </header>

    <footer>
        <p>Copyright 2023</p>
    </footer>
    ```

    This usage is correct. The `<header>` contains the main heading and navigation, while the `<footer>` appropriately includes copyright information.

2. **Using the `<article>` and `<section>` tags:**

    ```html
    <article>
        <h2>Article Title</h2>
        <section>
          <p>Content here</p>
        </section>
    </article>
    ```

    This is a good usage. The `<article>` tag wraps a self-contained piece of content, and the `<section>` tag within it helps to further structure content if needed.

3. **Using the `<aside>` and `<nav>` tags:**

    ```html
    <aside>
        <p>This is aside content</p>
    </aside>

    <nav>
        <ul>
          <li>Home</li>
          <li>About</li>
        </ul>
    </nav>
    ```

    The usage of `<aside>` is appropriate for content that is tangentially related. However, the `<nav>` tag is generally used for navigation menus, and in this context, it might be more appropriate to use it within the `<header>` tag.

4. **Using the `<figure>` and `<figcaption>` tags:**

    ```html
    <figure>
        <img src="image.jpg" alt="An example image">
        <figcaption>This is an example image.</figcaption>
    </figure>
    ```

    This is correct. The `<figure>` tag is used to group together content (in this case, an image), and `<figcaption>` provides a caption for the content inside the `<figure>`.

## HTML Canvas

The `<canvas>` element is an HTML container designed for rendering graphics and shapes directly on web pages. Although often used with JavaScript for dynamic rendering, the canvas itself is an HTML element that serves as a drawing area for visual content.

**Why Use Canvas?**

- **Graphics:** The canvas is utilized for drawing shapes, graphs, and other visual representations.
- **Dynamic Content:** It provides a means to dynamically update visual elements on a web page.
- **Interactivity:** While interactive features typically involve JavaScript, the canvas element serves as the foundation for creating interactive graphical content.

**Basic Syntax:**
You can define a simple `<canvas>` element using the following syntax:

```html
<canvas id="myCanvas" width="200" height="100"></canvas>
```

### Attributes of Canvas

The `<canvas>` element has two important attributes:

- **width:** Specifies the width of the canvas.
- **height:** Specifies the height of the canvas.

**Styling with CSS:**
You can apply styles to the `<canvas>` element using CSS. For instance, to add a border, you can use the following CSS rule:

```css
canvas {
    border: 1px solid black;
}
```

This allows for additional customization and visual enhancements through CSS.

---

## HTML Global Attributes

HTML Global Attributes are a set of attributes that can be applied to any HTML element, providing versatility and flexibility in HTML development. These attributes are crucial for creating dynamic and responsive web pages.

**List of Common Global Attributes:**

1. **accesskey:** Specifies a shortcut key to activate/focus an element.
2. **class:** Specifies one or more classes for an element.
3. **contenteditable:** Specifies whether the content is editable or not.

### Using Global Attributes

**Example: Using the `class` Attribute**

```html
<div class="container">This is a container.</div>
```

The `class` attribute is used to apply one or more classes to an HTML element, allowing for styling and organization.

**Example: Using the `id` Attribute**

```html
<span id="unique">Unique Element</span>
```

The `id` attribute is used to provide a unique identifier for an HTML element, enabling easy targeting and styling through CSS and JavaScript.

**Example: Using the `data-*` Attribute for Custom Data**

```html
<div data-user="123">Custom Data</div>
```

The `data-*` attribute is used for storing custom data private to the page or application, providing a way to associate additional information with an element.

---

## HTML Entities

HTML entities are essential elements of HTML markup used to represent special characters that are reserved in HTML or not readily available on the keyboard. They are formatted with an ampersand (`&`) and end with a semicolon (`;`).

**Why Use HTML Entities?**

1. **Reserved Characters:** HTML entities are necessary for displaying reserved characters like `<`, `>`, and `&` in HTML without confusing the browser.
2. **Special Symbols:** They are used for displaying special symbols such as ©, ®, or mathematical symbols that might not be directly available on a keyboard.
3. **Non-Breaking Spaces:** HTML entities like `&nbsp;` are employed to create white spaces that won't break into a new line.

**Common HTML Entities:**

1. `&lt;` for `<`
2. `&gt;` for `>`
3. `&amp;` for `&`
4. `&nbsp;` for a non-breaking space
5. `&copy;` for ©

### Using HTML Entities

Entities can be easily implemented within HTML code. Here are examples:

**Using Reserved Characters:**

```html
<p>The price is 10 &lt; 20.</p>
```

**Displaying Special Symbols:**

```html
<p>Copyright &copy; 2023.</p>
```

**Creating Non-Breaking Spaces:**

```html
<p>This is an example&nbsp;text.</p>
```

---

## HTML Quotation Tag

The use of quotations is common in textual content. HTML provides specific tags to handle this: `<blockquote>` for block quotations and `<q>` for inline quotations.

### `<blockquote>` and `<q>` Tags

- `<blockquote>`: Used for longer, block-level quotes.
- `<q>`: Used for shorter, inline quotes.

They provide semantic meaning to quotations, aiding search engines in understanding the context and relevance of the content.

#### `<blockquote>` Tag

```html
<blockquote cite="source-url">
  Quotation text here.
</blockquote>
```

#### `<q>` Tag

```html
<q cite="source-url">Quotation text here.</q>
```

### Attributes

Both `<blockquote>` and `<q>` tags support the `cite` attribute:

- **cite:** Specifies the URL of the quote's source.

**Using `<blockquote>` for Long Quotes:**

```html
<blockquote cite="https://example.com">
  This is a long quote from an external source. This quote can span multiple lines and paragraphs.
</blockquote>
```

**Using `<q>` for Short, Inline Quotes:**

```html
The philosopher said, <q cite="https://example.com">
                        The unexamined life is not worth living.
                      </q>
```

**Styling with CSS:**
You can apply CSS styles to these tags to match the aesthetics of your website.

---

## Obsolete HTML Tags

As HTML has evolved, some tags have been deprecated or become obsolete. While modern browsers might still support them, their use is discouraged in favor of CSS or more semantic HTML5 elements.

**What Are Obsolete Tags?**
Obsolete tags are HTML elements that are no longer recommended for use due to evolving web standards. They may lack support in modern browsers and might be phased out in future HTML versions.

**Why Avoid Obsolete Tags?**

1. **Compatibility Issues:** Obsolete tags may not be supported by all modern browsers.
2. **Accessibility:** They may not meet current web accessibility standards.
3. **Maintenance:** The use of obsolete tags can make future updates and maintenance challenging.

### The `<font>` Tag

```html
<font color="red" size="3" face="verdana">This is some text</font>
```

#### The `<center>` Tag

```html
<center>This text will be centered</center>
```

#### The `<u>` Tag

```html
<u>This text will be underlined</u>
```

### Modern Alternatives

It's recommended to use CSS for styling and layout, separating content from presentation.

#### Replacing `<font>`

```html
<span style="color:red; font-size:16px; font-family:verdana;">This is some text</span>
```

#### Replacing `<center>`

```html
<div style="text-align:center;">This text will be centered</div>
```

#### Replacing `<u>`

```html
<span style="text-decoration:underline;">This text will be underlined</span>
```

---

## Character Set

A character set is a collection of symbols and characters that computers use to represent text. In HTML, specifying the correct character set ensures accurate and consistent text rendering across various browsers and platforms.

**Why is it Important?**

1. **Accurate Rendering:** Ensures that browsers correctly display text according to the chosen character set.
2. **Multi-language Support:** Facilitates the display of text in different languages and alphabets.
3. **Data Integrity:** Maintains consistency in data sent and received.

**Specifying Character Set in HTML:**
The character set is typically specified using the `<meta>` tag within the `<head>` section of an HTML document.

```html
<meta charset="UTF-8">
```

**Common Character Sets:**

1. **UTF-8:** Universal Character Set, 8-bit. Can represent any character in the Unicode standard.
2. **ISO-8859-1:** Western Alphabet.
3. **ASCII:** American Standard Code for Information Interchange.

**Using UTF-8:**

```html
<meta charset="UTF-8">
```

**Using ISO-8859-1:**

```html
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
```

---
---

# CSS

## Introduction

CSS stands for **Cascading Style Sheets.** It is a stylesheet language that is used to describe the visual presentation of a web page written in HTML (Hypertext Markup Language).
HTML creates the structure of the page, while CSS adds styling to that structure.

### History of CSS

While *Håkon Wium Lie* did play a significant role in the development of CSS, it's important to note that CSS was a collaborative effort involving multiple individuals. The creation of CSS was initiated by *Håkon Wium Lie* and *Bert Bos*, who presented the first CSS proposal in 1994. The history of CSS is closely tied to the evolution of the World Wide Web, and its development can be outlined as follows:

1. **Early Web:**
   - In the early days of the World Wide Web (early 1990s), web pages were primarily text-based and lacked sophisticated layout and design. HTML (Hypertext Markup Language) was the main language used for structuring content, but it had limited capabilities when it came to styling.

2. **Creation of CSS:**
   - In 1994, Håkon Wium Lie and Bert Bos, working at CERN (European Organization for Nuclear Research), introduced the first proposal for Cascading Style Sheets (CSS). Lie is often credited as the "father of CSS."

3. **W3C Standardization:**
   - The World Wide Web Consortium (W3C) took up the development of CSS as a standard. CSS Level 1 was published as a W3C Recommendation in December 1996, providing a set of basic styling capabilities.

4. **CSS Level 2:**
   - CSS Level 2, introduced in 1998, added more features and capabilities, including positioning and improved layout control. It significantly expanded the styling options available to web developers.

5. **Widespread Adoption:**
   - As CSS became more widely supported by web browsers, developers started adopting it to enhance the visual aspects of their websites. This led to improved design, layout, and presentation of web content.

6. **CSS Level 3:**
   - CSS Level 3, introduced in modular form, began to be implemented in browsers in the 2000s. It brought even more features, including media queries for responsive design, advanced selectors, and new properties for improved control over styling.

7. **Ongoing Evolution:**
   - CSS continues to evolve with ongoing updates and new modules being added. The modular approach allows for the gradual introduction of new features without the need for a complete version update.

### Why use CSS?

CSS (Cascading Style Sheets) is a crucial technology in web development for several reasons:

1. **Presentation and Styling:**
   - **Separation of Concerns:** CSS allows the separation of the structure (HTML) from the presentation (CSS) and behavior (JavaScript) of a web page. This makes the code more modular, maintainable, and easier to understand.
   - **Consistency:** CSS enables the application of consistent styles across multiple pages of a website. This ensures a uniform and professional look, improving the overall user experience.

2. **Responsive Design:**
   - **Media Queries:** CSS supports media queries, which allow developers to apply different styles based on the characteristics of the device or screen size. This is essential for creating responsive web designs that adapt to various devices, such as desktops, tablets, and smartphones.

3. **Accessibility:**
   - **Enhanced Readability:** CSS provides tools to enhance the readability of content, such as adjusting font sizes, line spacing, and color contrast. This is vital for making web pages accessible to users with different abilities.

4. **Maintenance and Efficiency:**
   - **Centralized Styling:** By using CSS, you can define styles in a centralized manner, making it easier to update the look and feel of a website. Changes to the styling can be applied universally by modifying a few CSS rules, reducing redundancy in code.

5. **Browser Compatibility:**
   - **Cross-Browser Compatibility:** CSS helps achieve a consistent appearance across different web browsers. It provides a standardized way to style elements, reducing the likelihood of rendering issues on various browsers.

6. **Animations and Transitions:**
   - **Enhanced User Experience:** CSS allows the creation of animations and transitions, enhancing the user experience by adding dynamic and engaging elements to a website. This can include smooth transitions between different states of a webpage or interactive animations.

7. **Print Styling:**
   - **Print Stylesheets:** CSS can be used to create print stylesheets, allowing developers to customize the appearance of a web page when it is printed. This is valuable for optimizing content for a printed format, such as generating printer-friendly versions of web pages.

8. **Modularity and Reusability:**
   - **Reusable Components:** CSS supports the creation of reusable styles and components, facilitating a modular approach to web development. This is particularly important in larger projects where maintaining consistency and scalability are key considerations.

### Working Process of CSS

![css_working](https://i.imgur.com/aBQZm6h.png)

1. **User Interaction:**
   - The user enters a URL in the browser and initiates a request.

2. **Server Request:**
   - The browser makes a fetch request to the server specified in the URL.

3. **HTML Fetching:**
   - The server responds with the HTML file associated with the requested URL.

4. **DOM Creation:**
   - The browser converts the HTML into a Document Object Model (DOM), where each HTML tag becomes a node in the tree-like structure of the document.

5. **Fetching Additional Resources:**
   - The browser fetches other related resources linked in the HTML, such as external CSS files, fonts, images, etc.

6. **CSS Parsing:**
   - The browser parses the CSS files, grouping styles based on selectors (e.g., tags, classes, and IDs).

7. **CSS Attachment to Nodes:**
   - The browser associates the parsed CSS with the respective nodes in the DOM, creating a render tree. Each node in the render tree now has the styles that should be applied to it.

8. **Render Tree:**
   - The render tree is a well-structured representation of the DOM, including the styles from both HTML and CSS. It is optimized for rendering on the screen.

9. **Painting:**
   - The well-structured render tree is then painted on the screen, presenting the final, styled web page to the user.

It's important to note that this process occurs each time a user navigates to a new page or interacts with a website. Additionally, modern browsers employ various optimizations, such as caching, to enhance performance and reduce the need to repeatedly fetch resources. The process you've outlined provides a foundational understanding of how HTML and CSS work together to create the visual experience on the web.

**What is a DOM?**
A DOM is like a tree structure representation of all the tags and elements on the page. Each part of a web page, like headings, paragraphs, images, buttons, etc., will be part of the tree.
You can think of it as a blueprint for a web page that web browsers use to understand and display web content.
![hc_to_dom](https://i.imgur.com/2fwuM76.png)


### Features Of CSS

1. **Styles and Layouts:**
   - CSS is primarily used for styling and defining the layout of HTML and XML documents on the web. It allows developers to control the visual presentation of elements, including aspects such as colors, fonts, spacing, and positioning.

2. **Integration with HTML and XML:**
   - CSS seamlessly integrates with HTML and XML documents. By applying CSS rules to HTML elements, developers can control the appearance and layout of the content on web pages.

3. **Responsive Design:**
   - One of CSS's significant features is its ability to facilitate responsive web design. Through techniques like media queries, developers can create styles that adapt to different screen sizes and devices, ensuring a consistent and user-friendly experience across a variety of platforms.

4. **Interactive Effects:**
   - CSS supports the creation of interactive effects, such as hover states and animations. This adds a dynamic and engaging dimension to web pages, enhancing the overall user experience.

5. **Modularization and Ongoing Updates:**
   - CSS is designed in a modular fashion, allowing developers to organize styles into separate files and reuse them across multiple pages. Additionally, the ongoing updates and evolution of CSS as a language provide new features and capabilities without relying on traditional version numbers.

6. **Reusability:**
   - CSS promotes the reusability of styles across multiple HTML documents. By defining a set of styles in a separate stylesheet, developers can link that stylesheet to various HTML pages, ensuring a consistent look and feel throughout a website.

### CSS Syntax

CSS (Cascading Style Sheets) works by defining rules that specify how HTML elements should be styled on a webpage. These rules consist of selectors and declarations. Here's a breakdown of how CSS works:

1. **Selectors:**
   - **Targeting Elements:** Selectors are patterns that match one or more HTML elements. You can target elements based on their type, class, ID, attributes, or even their relationship to other elements on the page.
   - **Example Selectors:**
     - Type Selector: **`p`** (targets all `<p>` elements)
     - Class Selector: **`.header`** (targets elements with the class "header")
     - ID Selector: **`#main-content`** (targets the element with the ID "main-content")

2. **Declarations:**
   - **Defining Styles:** Declarations consist of property-value pairs and are enclosed in curly braces `{}`. Each declaration within the braces corresponds to a specific style property and its assigned value.
   - **Example Declaration:**

     ```css
     selector {
         property: value;
     }
     ```

     - Example Rule:

       ```css
       p {
           color: blue;
           font-size: 16px;
       }
       ```

       This rule selects all `<p>` elements and sets their text color to blue and font size to 16 pixels.
    ![css syntx](https://i.imgur.com/FoNpkTf.png)

3. **Cascade:**
   - **Determining Priority:** The term "cascading" in CSS refers to the way styles are applied and resolved when there are conflicting rules. The cascade follows a specific order of importance, where styles defined closer to the targeted element take precedence.
   - **Specificity and Importance:** Specificity and the `!important` declaration can override the normal cascade order. Specificity is a measure of how specific a selector is, and a higher specificity level takes precedence.

4. **Inheritance:**
   - **Passing Styles to Children:** CSS properties can be inherited from parent elements to their children. This means that if you apply a style to a parent element, its children might inherit that style unless specifically overridden.
   - **Example of Inheritance:**

     ```css
     .parent {
         color: green;
     }

     .child {
         /* Inherits color: green from the parent */
     }
     ```

### Ways to add CSS

1. **Inline CSS:**
Inline CSS is used to add custom properties to specific elements. The added style will only reflect on that particular element only.

   - **Usage:** Applied directly to a specific HTML element using the "style" attribute.
   - **Example:**

     ```html
     <h1 style="color: purple;">I'm Aakash</h1>
     ```

   - **Note:** While convenient for individual elements, it may become challenging to manage styles as the project complexity increases.

2. **Internal CSS:**
Internal CSS is used to apply custom style to the multiple elements on the same page. The style can be used throughout the HTML page.

   - **Usage:** Defined within a `<style>` block in the HTML document's `<head>` section.
   - **Example:**

     ```html
     <head>
         <style>
             p {
                 color: red;
             }
         </style>
     </head>
     ```

   - **Note:** Suitable for applying styles across multiple elements on the same page.

3. **External CSS:**
External CSS works similarly to internal CSS but with a twist. Instead of adding the styles within the HTML file, we create a separate file with .css extension. This file will hold all the styling details. Then, we link this file to the HTML page, giving it the instructions on how to look. 

There is a new `<link>` tag in the head section, and this link tag has `rel` and `href` properties.

- **`<link>`:** This tag is used to create links between different resources, like stylesheets, fonts, and more. In our case, we are using a link tag to link the CSS file with the HTML file.
- **`rel="stylesheet"`:** rel stands for relationship,  this defines the type of relationship between the HTML document and the linked resource. When set to "stylesheet", it specifies that the linked resource is a stylesheet that will be used to style the HTML content.
- **`href="style.css"`:** The href attribute stands for "hypertext reference." It specifies the path or URL to the external resource we want to link. In this case, it's the path to the external CSS file called "style.css".

   - **Usage:** Styles are stored in a separate external CSS file (e.g., "style.css") and linked to the HTML document using the `<link>` tag in the `<head>` section.
   - **Example:**

     ```html
     <head>
         <link rel="stylesheet" href="style.css">
     </head>
     ```

     ```css
     /* style.css */
     p {
         color: red;
     }
     ```

   - **Note:** Ideal for maintaining consistency across multiple HTML pages by using the same stylesheet.

**Precedence:**
- **Inline CSS > Internal CSS > External CSS:** If the same property is defined with different values in all three ways, the inline CSS takes precedence.

### CSS Selectors

CSS selectors allow us to choose specific elements and apply styles to them. Suppose we want to add a custom style to only a specific tag(s). There, We can make use of CSS selector. 

There are different types of CSS selectors, which are as follows:

1. Universal Selector
1. Element Selector
1. Id Selector
1. Class Selector
1. Group Selector

Here's a summary of the main points in detail:

1. **Universal Selector:**
   - **Purpose:** Targets all HTML elements on the page.
   - **Syntax:**
     ```css
     * {
         property: value;
     }
     ```

2. **Element Selector (Type Selector):**
   - **Purpose:** Selects elements based on their specific type (e.g., `<p>`).
   - **Syntax:**
     ```css
     p {
         property: value;
     }
     ```
   - **Note**: Element selector is not recommended as the same tag can be used multiple times in the document. So, overlapping rules can occur in the stylesheet.

3. **ID Selector:**
   - **Purpose:** Targets elements with a specific ID using the hash symbol (`#`).
   - **Syntax:**
     ```css
     #ID {
         property: value;
     }
     ```

4. **Class Selector:**
The class selector does the same job as the id selector, a class selector helps group various types of elements.
   - **Purpose:** Targets elements with a specific class using a period (`.`) symbol.
   - **Syntax:**
     ```css
     .class {
         property: value;
     }
     ```

5. **Group Selector:**
   - **Purpose:** Groups multiple selectors together using commas, applying the same styles to each.
   - **Syntax:**
     ```css
     div, p, a {
         property: value;
     }
     ```

### CSS Comments

Comments help with documentation and are helpful for the future users who read that code, so that they can understand it easily.
Comments are ignored by the browser and Comments don't affect the styling or layout.
CSS Comments are enclosed between `/*` and `*/`.

There are two types of comments in CSS:

1. **Single-line Comments:**
Single-line comments are contained within one line and are useful for short annotations or explanations.

   ```css
   /* This is a single-line comment */
   p {
       /* color: red */
   }
   ```

2. **Multi-line Comments:**
Multi-line comments span across multiple lines, making them suitable for detailed explanations or temporarily disabling blocks of code.

   ```css
   /* 
      This is a
      multi-line
      comment 
   */
   p {
       /* 
          color: red;
          background-color: purple;
       */
       color: purple;
       background-color: red;
   }
   ```

### CSS Specificity
CSS Specificity helps determine what style will be applied to the HTML element(s) when there are overlapping or multiple CSS rules.

It is a value or weight assigned to a CSS selector. The higher the specificity, the more precedence the selector has.

#### The Cascade Algorithm

CSS stands for Cascading Stylesheets. The cascade is the algorithm for solving conflicts where multiple CSS rules apply to an HTML element.

Understanding the cascade algorithm helps you understand how the browser resolves conflicts like this. The cascade algorithm has 4 distinct stages.

1. **Position and order of appearance:** The order in which your CSS rules appear
1. **Specificity:** An algorithm that determines which CSS selector has the strongest match
1. **Origin:** The order in which CSS appears and where it comes from, whether that is a browser style, CSS from a browser extension, or your authored CSS
1. **Importance:** Some CSS rules are weighted more heavily than others, especially with the `!important` rule type

#### Effect of Position

- If there are two rules that have selectors of identical specificity, the last one to be declared won.
- In an HTML page, you can add styles in different ways: through a `<link>` tag, a `<style>` tag, or directly in the element's style attribute.
- If you have one `<link>` tag at the top of your page and another at the bottom, the styles from the bottom one will be used.
- The same goes for `<style>` tags; the ones lower down on the page take priority.

An inline style attribute with CSS declared in it will override all other CSS, regardless of its position, unless a declaration has `!important` defined.

If the browser doesn't support a property, it is ignored!

#### Specificity

CSS specificity determines which style rules get applied to an element when there are conflicts. Higher specificity means the style will be used. It's calculated based on a point system involving inline styles, IDs, classes, and tag names.

1. **Inline Styles:**
   - Highest specificity.
   - Overrides all other styles.

    ```html
    <html>
    <head>
        <style>
            *{                  /*Ignored*/
                color: gray;
            }
            #title{             /*Ignored*/
                color: red;
            }
            .h1{                /*Ignored*/
                color: blue;
            }
            h1{                /*Ignored*/
                color: pink;
            }
        </style>

    </head>
    <body>
                    <!--Inline's Style Will be applied-->
        <h1 id="title" class="h1" style="color:purple">Aakash</h1>
    </body>
    </html>
    ```

2. **ID Selector:**
   - High specificity.
   - Overrides class, element and universal selectors.

    ```html
    <html>
    <head>
        <style>
            *{                  /*Ignored*/
                color: gray;
            }
            #title{             /*ID's Style Will be applied*/
                color: red;
            }
            .h1{                /*Ignored*/
                color: blue;
            }
            h1{                /*Ignored*/
                color: pink;
            }
        </style>

    </head>
    <body>    
        <h1 id="title" class="h1">Aakash</h1>
    </body>
    </html>
    ```

3. **Class and Attribute Selectors:**
   - Moderate specificity.
   - Overrides element and universal selectors.

    ```html
    <html>
    <head>
        <style>
            *{                  /*Ignored*/
                color: gray;
            }
            .h1{                /*Class's Style Will be applied*/
                color: blue;
            }
            h1{                /*Ignored*/
                color: pink;
            }
        </style>

    </head>
    <body>
        <h1 class="h1">Aakash</h1>
    </body>
    </html>
    ```

4. **Element Selector:**
   - Low specificity.
   - Overrides universal selectors.

    ```html
    <html>
    <head>
        <style>
            *{                  /*Ignored*/
                color: gray;
            }
            h1{                /*Element's Style Will be applied*/
                color: pink;
            }
        </style>

    </head>
    <body>
        <h1>Aakash</h1>
    </body>
    </html>
    ```

5. **Universal Selector:**
   - Lowest specificity.
   - Applies to all elements but can be overridden by more specific selectors.

    ```html
    <html>
    <head>
        <style>
            *{                  /*Universal Style Will be applied*/
                color: gray;
            }
        </style>

    </head>
    <body>
        <h1>Aakash</h1>
    </body>
    </html>
    ```

**Order of specificity is:**
**Inline Style > ID Selector > Class or Attribute Selector > Element Selector > Universal Selector**

#### Importance Flag

The `!important` flag in CSS is a powerful tool that can be both helpful and potentially problematic.

1. **Override Other Styles:**
   - When applied to a style rule, `!important` ensures that the specified style takes precedence over any other conflicting styles, regardless of their specificity.

2. **Highest Specificity:**
   - The `!important` flag provides the highest specificity score (10,000 points) to the rule, making it extremely potent in the cascade.

3. **Use with Caution:**
   - It's generally recommended to use `!important` sparingly. Overusing it can lead to a lack of predictability in your stylesheets and make debugging more challenging.

4. **Complicates Debugging:**
   - While `!important` can solve immediate styling conflicts, it can make it difficult to trace and understand the source of style issues. Debugging becomes more complicated when styles are overridden unexpectedly.

5. **Maintainability Concerns:**
   - Overreliance on `!important` can make your stylesheets less maintainable. It may become challenging for developers to understand the intended styles and modify them without unintended consequences.

6. **Best Practices:**
   - It's often considered best practice to use specificity and proper organization in your stylesheets to avoid the need for `!important`. When styles are logically structured, the cascade can work efficiently without the need for heavy-handed overrides.

```css
/* Example: Using !important */
p {
  color: red !important;
}

p {
  color: blue;
}
```

In the example you provided, the text in the `<p>` element will be red, emphasizing the power of `!important`. While it can be a useful tool in certain situations, its judicious use is essential for maintaining clean, understandable, and easily maintainable stylesheets.

#### Specificity Calculation
To calculate specificity, assign a value to each part of the selector:

Universal Selector: 0
Element selectors and pseudo-elements: 1
Class selectors, attribute selectors, and pseudo-classes: 10
ID selectors: 100
Inline styles: 1000
Important Flag: 10000
Then, add up the values of all the parts in the selector.

Here is an example:

```css
a.akashclass.bharambe-class[href]:hover {
  color: red;
}
```


To calculate the specificity value of the selector `a.akashclass.bharambe-class[href]:hover`, you can break down its components:

- Element selectors: `a` contributes 1 point.
- Class selectors: `.akashclass` and `.bharambe-class` each contributes 10 points, totaling 20 points.
- Attribute selector: `[href]` contributes 10 points.
- Pseudo-class: `:hover` adds another 10 points.

Add up all these values:
1 (element) + 20 (classes) + 10 (attribute) + 10 (pseudo-class) = 41.

So, the specificity value of the selector `a.akashclass.bharambe-class[href]:hover` will be 41.

## CSS Properties

### CSS Colors

CSS Color property is used to set the color of HTML elements. This property is used to set font color, background color, etc. The color of an element can be defined in the following ways:

1. Built-In Color
1. RGB Format
1. RGBA Format
1. Hexadecimal Notation
1. HSL
1. HSLA

Note: In CSS we use color, not colour.

#### Built-In Color

These are a set of predefined colors which are used by its name. For example: red, blue, green etc.

**Syntax:**

  ```css
  selector {
      color: value
  } 
  ```

**Example:**

  ```html
  <html>
  <head>
      <style>
          p{
              color: purple;
          }
      </style>
  </head>

  <body>
      <p>Hello World</p>
  </body>
  </html>
  ```

#### Hexadecimal notation

**Hex Code Structure (RRGGBB):**
- The hex code is composed of six characters: `#RRGGBB`.
- `RR` represents the intensity of red, `GG` for green, and `BB` for blue.
- Each pair of characters ranges from `00` (no intensity) to `FF` (maximum intensity).

**Syntax:**
   - The hex code is used in the color property within a CSS rule.

  ```css
  seletor {
        color: #RRGGBB;
  }
  ```

**Example:**
- Demonstrated examples with pure red `(#FF0000)`, pure green `(#00FF00)`, pure blue `(#0000FF)`, and a custom color `(#b700ff)`.

  ```html
  <html>
  <head>
      <style>
          h1 {
              color: #FF0000; /* Pure Red */
          }
          h2 {
              color: #00FF00; /* Pure Green */
          }
          h3 {
              color: #0000FF; /* Pure Blue */
          }
          h4 {
              color: #b700ff; /* Custom Color */
          }
      </style>
  </head>
  <body>
      <h1>Aakash</h1>
      <h2>Bharambe</h2>
      <h3>Learning CSS</h3>
      <h4>Hello World</h4>
  </body>
  </html>
  ```

#### RGB Format

**RGB Color Model:**
- Stands for Red, Green, Blue.
- Defines a color value using three arguments: `red`, `green`, and `blue`.

**Argument Values:**
- Each argument value ranges from 0 to 255, representing the intensity of the respective color.
- 0 indicates no intensity, and 255 represents the maximum intensity.

**Syntax:**
   - The `color` property in CSS is used with the `rgb()` function.

   ```css
    selector{
        color: rgb(red, green, blue);
    }
   ```

**Example:**
   - Demonstrated examples using `rgb(0, 0, 0)` for black, `rgb(255, 255, 255)` for white, and a custom color `rgb(30, 150, 220)`.

  ```html
  <html>
  <head>
      <style>
          h1 {
              color: rgb(0, 0, 0); /* Black */
          }
          h2 {
              color: rgb(255, 255, 255); /* White */
          }
          h3 {
              color: rgb(30, 150, 220); /* Custom Color */
          }
      </style>
  </head>
  <body>
      <h1>Aakash</h1>
      <h2>Bharambe</h2>
      <h3>Learning CSS</h3>
  </body>
  </html>
  ```

#### RGBA Format

Similar to RGB, in RGBA, `a` stands for alpha value, which defines the opacity of the color. The alpha value lies between 0 and 1.

**Syntax:**
  ```css
  selector{
        color: rgb(red, green, blue, opacity);
  }
  ```

**Example:**
  ```html
  <html>
  <head>
      <style>
          h1 {
              color: rgba(0, 0, 0, 0.8);
              /* red:0, green:0, blue:0, Alpha: 0.8 = 80% */
          }
          h2 {
              color: rgb(255, 255, 255, 0.6);
              /* red:255, green:255, blue:255 */
          }
          h3 {
              color: rgba(30, 150, 220, 0.6);
              /* red:30, green:150, blue:200, alpha:60% */
          }
      </style>
  </head>

  <body>
      <h1>Aakash</h1>
      <h2>Bharambe</h2>
      <h3>Learning CSS</h3>
  </body>
  </html>
  ```

#### HSL Format

HSL provides a more intuitive way to set color properties by specifying the hue, saturation, and lightness of a color.

1. **Hue (H):**
   - Represents the type of color.
   - Measured in degrees, ranging from 0 to 360.
   - 0 degrees represents black, 120 degrees for green, and 360 degrees for blue.

2. **Saturation (S):**
   - Controls the intensity or purity of the color.
   - Measured in percentage, ranging from 0% to 100%.
   - 0% saturation results in grayscale (no color), and 100% saturation is the most intense color.

3. **Lightness (L):**
   - Determines how light or dark the color is.
   - Measured in percentage, ranging from 0% to 100%.
   - 0% lightness represents pure black, 50% lightness represents normal color, and 100% lightness is pure white.

**Syntax:**
  - The `color` property in CSS is used with the `hsl()` function.
  ```css
  selector{
       color: hsl(hue, saturation, lightness);
  }
  ```

**Example:**
  - Demonstrated examples using `hsl(235, 100%, 50%)` for a specific blue color and `hsl(0, 0%, 0%)` for pure black.

  ```html
  <html>
  <head>
      <style>
          h1 {
              color: hsl(235, 100%, 50%);
              /* Blue color */
          }
          p {
              color: hsl(0, 0%, 0%);
              /* Pure black */
          }
      </style>
  </head>

  <body>
      <h1>Aakash</h1>
      <p>Bharambe</p>
  </body>

  </html>
  ```

#### HSLA Format

HSLA is similar to HSL; here, `A` stands for alpha value, which is used to set the opacity. Alpha values lie between 0 and 1.

**Syntax:**
  ```css
  selector{
        color: hsla(hue, saturation, lightness, alpha);
  }
  ```

**Example:**
  ```html
  <html>
  <head>
      <style>
          h1 {
              color: hsla(235, 100%, 50%, 0.7);
          }
          p {
              color: hsl(0, 0%, 0%, 0.4);
          }
      </style>
  </head>

  <body>
      <h1>Aakash</h1>
      <p>Bharambe</p>
  </body>
  </html>
  ```

### CSS Backgrounds

- The `background` property in CSS is used to set various background styles, properties, and effects for an element.

#### Background Color

- The `background-color` property specifically sets the background color of HTML elements such as `div`, `h1`, `p`, etc.

**Syntax:**
  - The syntax is as follows:

    ```css
    selector {
        background-color: color;
    }
    ```

  - The `color` can be specified in various formats, such as hex, rgb, hsl, etc.

**Example:**
  - Demonstrated examples using `background-color` for different HTML elements.

  ```html
  <html>
  <head>
      <style>
          div {
              background-color: yellow;
          }
          h1 {
              background-color: #FF0000;
          }
          p {
              background-color: orange;
          }
          span {
              background-color: purple;
          }
      </style>
  </head>
  <body>
      <div>
          <h1>Aakash</h1>
          <p> Eknath <span>Bharambe</span></p>
      </div>
  </body>
  </html>
  ```

#### Background Image

The `background-image` property is used to set an image as a background.
- **Syntax:**

  ```css
  selector {
      background-image: url('image-url');
  }
  ```

##### Background Repeat

- The `background-repeat` property controls how the background image is repeated.

![bg_repeat](https://i.imgur.com/lSqRAhb.png)

- Options:
  - `repeat-x`: Repeats the image horizontally.
  - `repeat-y`: Repeats the image vertically.
  - `repeat`: Repeats the image in both x and y directions (default behavior).
  - `no-repeat`: Does not repeat the background image.
- **Syntax:**

  ```css
  selector {
      background-repeat: repeat-x || repeat-y || repeat || no-repeat;
  }
  ```

##### Background Size

The Background Size property sets custom sizes for the background image.

**Syntax:**

```css
selector{
    background-size: propery-value;
}
```

Property-value can be any of the following:

1. **Cover:**
   - The `cover` value for `background-size` ensures that the background image covers the entire background area while maintaining its aspect ratio.
   - **Syntax:**

     ```css
     selector {
         background-image: url("image-url");
         background-size: cover;
     }
     ```

2. **Contain:**
   - The `contain` value scales the background image to fit within the background area entirely while maintaining its aspect ratio.
   - **Syntax:**

     ```css
     selector {
         background-image: url("image-url");
         background-size: contain;
     }
     ```

3. **Auto:**
   - The `auto` value for `background-size` displays the background image in its original size. This is the default behavior.
   - **Syntax:**

     ```css
     selector {
         background-image: url("image-url");
         background-size: auto;
     }
     ```

4. **Distinct Width and Height:**
   - You can manually set the width and height of the background image using percentages.
   - **Syntax:**

     ```css
     selector {
         background-image: url("image-url");
         background-size: 100% 100%;
     }
     ```
   - **Note:** The width and height are specified in percentage (%).

##### Background Position

The `background-position` property sets the starting position of the background image within the container (parent div).

- **Syntax:**

  ```css
  selector {
      background-position: property-value;
  }
  ```

- Property values: `top, bottom, left, right, center`, or combinations (e.g., `top left, top right, bottom left, bottom right, center`).

##### Background Attachment

The `background-attachment` property determines whether the background image scrolls with the content.

- **Syntax:**

  ```css
  selector {
      background-attachment: fixed || scroll;
  }
  ```

- Use `fixed` for a fixed background (background stays in place while scrolling) or `scroll` for a scrolling background.


##### Shorthands

You can use a shorthand for combining multiple background properties into a single line.

   - **Syntax:**

     ```css
     selector {
         background: [background-color] [background-attachment] [background-image] [background-repeat] [background-position];
     }
     ```

### CSS Borders

CSS borders help define the visual boundaries of HTML elements. It can be text, div, p, h1, etc.

The following are the different properties of a CSS border:

1. **Border Style:**
   - The `border-style` property defines the style of the border.
   - Examples of border styles: `none`, `hidden`, `dotted`, `dashed`, `solid`, `double`, `groove`, `ridge`, `inset`, `outset`.
   - **Syntax:**

     ```css
     selector {
         border-style: style;
     }
     ```

    ![border-style](https://i.imgur.com/MNWfgZm.png)

2. **Border Color:**
   - The `border-color` property sets the color of the border.
   - Color can be specified using color names, hex codes, RGB, or HSL values.
   - **Syntax:**

     ```css
     selector {
         border-style: style;
         color: purple;
     }
     ```

3. **Border Width:**
   - The `border-width` property specifies the width of the border.
   - Width can be set in pixels (`px`) or using predefined values like `thin`, `medium`, and `thick`.

   - **Syntax:**

     ```css
     selector {
         border-width: 5px;
     }
     ```

4. **Border Radius:**
   - The `border-radius` property creates rounded borders.
   - It can be specified in pixels (`px`) or as a percentage.

   - **Syntax:**

     ```css
     selector {
         border-radius: 20px;
     }
     ```

5. **Individual Border Radius:**
   - You can set border radius for individual corners using the `border-radius` property or specific properties for each corner.

   - **Syntax using `border-radius`:**

     ```css
     selector {
     border-radius: 10px 5px 15px 35px ;
     /* border-radius: top-left top-right bottom-right bottom-left ; */
     }
     ```

   - **Syntax using individual properties:**

     ```css

     selector {
         border-top-left-radius: 10px;
         border-top-right-radius: 5px;
         border-bottom-right-radius: 15px;
         border-bottom-left-radius: 35px;
     }
     ```

6. **Border Collapse**

    - The `border-collapse` property is used in tables to control how table borders interact with each other.
    - Values:
      - `collapse`: Borders are collapsed into a single border where they meet.
      - `separate`: Borders are not collapsed, and each cell has its own distinct border.
    - **Syntax:**

      ```css
      selector {
          border-collapse: collapse;
      }
      ```

      ```css
      selector {
          border-collapse: separate;
      }
      ```

7. **Border Spacing**

    - The `border-spacing` property, used in tables, defines the space between the borders of adjacent table cells.
    - **Syntax:**

      ```css
      selector {
          border-spacing: 5px;
      }
      ```

#### Shorthand for Borders

- The shorthand for specifying borders combines three properties: width, style, and color.
- **Syntax:**

  ```css
  selector {
      border: width style color;
  }
  ```

- **Example:**

  ```css
  p {
      border: 2px solid red;
  }
  ```

