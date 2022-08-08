<h1 align ="center"> Hsh - Simple Shell</h1>
<hr/>
<h1 align ="center">
<img src="https://i.postimg.cc/8chZ4K8N/shell.jpg" height="80%" width="80%">
</h1>
<hr/>
<h1> Overview </h1>
<p>This is a simple, command-line implementation of the UNIX command line shell as part of our path and adventure in low-level programming and algorithms at Holberton School.</p>

<h2> Getting Started </h2>

<p> Clone this repository:</p>

```
git clone git@github.com:aaronJau21/holbertonschool-simple_shell.git
```

<p> Compile with</p>

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o *hsh
```
```
./hsh
```
<h2> Use </h2>
<p>
To exit the program, run:
</p>

```
shell $ exit
```

<p>
Our shell performs most conventional shell commands, such as echo, cat, pwd, ls -la, etc.
</p>

<p></p>
<p>After compiling the program, you can use it in both interactive and non-interactive mode.</p>

<h3> Interactive Mode </h3>
<ul>
<li>From the command line, enter "./" , followed by the executable name (ex: "./hsh").</li>
<li>After the "$ " prompt appears, type in a command to be executed. Repeat as desired.</li>
<li>To exit the program, you can type in either crtl + d or "exit".</li>
</ul>
<h3> Non - Interactive Mode </h3>
<ul>
<li>From the command line, use echo to pipe a command into the shell. Here's an example:</li>
</ul>

```
echo "pwd" | ./hsh
```
<table>
  <tr>
    <th>Command</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>env</td>
    <td>prints the environment</td>
  </tr>
  <tr>
    <td>setenv VARIABLE VALUE</td>
    <td>Initialize a new environment VARIABLE with VALUE, or modify an existing VARIABLE with VALUE</td>
  </tr>
  <tr>
    <td>setenv VARIABLE VALUE</td>
    <td>Initialize a new environment VARIABLE with VALUE, or modify an existing VARIABLE with VALUE</td>
</tr>
  <tr>
    <td>exit</td>
    <td>exits out of our shell program</td>
  </tr>
</table>

<h2> Example Usage </h2>
<li>
<b>ls -l</b>   lists directory contents using a long listing format.
</li>

```
shell $ ls -l /tmp/
total 320
```

<li>
<b>pwd</b>   prints the working directory.
</li>

```
shell $ pwd
/root/holbertonschool-simple_shell
```

<li>
<b>fakefile</b>   prints error because "fakefile" does not exist
</li>

```
shell $ fakefile
ERROR!: No such file or directory
./hsh: 13: fakefile: not found
```

<h2> Files </h2>
<table>
  <tr>
    <th>File Name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>shell.c</td>
    <td>The main function of our shell, which we bind to our function that parses the command lines that are entered.</td>
  </tr>
  <tr>
    <td>functions.c</td>
    <td>This function parses the line for commands and arguments.</td>
  </tr>
  <tr>
    <td>helpers.c</td>
    <td>Helper functions for reading and manipulating strings, printing execution errors, and freeing memory.</td>
  </tr>
  <tr>
    <td>number.c</td>
    <td>What this function does is print the number of errors from our shell.</td>
  </tr>
  <tr>
    <td>hbtlib.c</td>
    <td>What this function does is compare two strings, create copies of strings, and print characters from strings.</td>
  </tr>
  <tr>
    <td>builtins.c</td>
    <td>This function performs the conventional actions of a shell, such as moving around in it, printing environment variables, creating built-in functions, until exiting the shell.</td>
  </tr>
</table>
<h2> About </h2>
<p> Created on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 </p>

# Authors
[<img src="https://avatars.githubusercontent.com/u/101225802?v=4" width=100><br><sub>Aaron Jauregui</sub>](https://github.com/aaronJau21) |  [<img src="https://avatars.githubusercontent.com/u/69946309?v=4" width=100><br><sub>Franco Cardenas </sub>](https://github.com/gustavofranco26) |
| :---: | :---: |
