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
