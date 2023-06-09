<h1><div align="center">_printf</div></h1>

<div align="center">
<table>
<tr><th>
_printf("{string}", {...})
</th></tr>
</table>
</div>

<p>Table of Contents</font></p>
<ul>
<li><a href="#requirements">Requirements</a></a>
<li><a href="#-how-it-works">How it works</a></li>
<li><a href="#-syntax-">Syntax</a></li>
<li><a href="#-formatting">Formatting</a></li>
<ul>
	<li><a href="#s">%c</a></li>
	<li><a href="#c">%s</a></li>
 	<li><a href="#c">%%</a></li>
	<li><a href="#i">%i</a></li>
	<li><a href="#d">%d</a></li>
</ul>
<li><a href="#authors">Authors</a></li>
<li><a href="#flowcharts">Flowcharts</a></li>
</ul>
</div>
	
<hr/>

<h2>Requirements</h2>
<ul>
<li>Allowed editors: vi, vim, emacs</li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li></ul>
	
<h2> How it works</h2>
<p>	
	The _printf function located in _printf.c allows you to print strings to standard output with flexibility. It can receive <b>conversion specifiers</b> (% followed by specific characters) which will be replaced with strings. The specific character following the % <i>specifies</i> indicates the kind of argument it is recieving. 
	<br><br>
	When this function is used, the program scans and writes every character in the string until a % is found. Once % is found it does one of several things depending on the value of the next character.
	<br><br>
	If the next character doesn't exist, it doesn't print anything else and returns the function with an error value of -1. If the next character does exist, it calls an auxiliary function which compares the value of the next character with a list of valid characters for conversion specifiers. If it finds a match, it calls the respective auxiliary function to print the recieved argument. (For example, if %s is used in _printf, the structure will check the structure for an 's', and if a match is found, will run the corresponding function (in this case it will use the print_<b>s</b>tring function.) If no match is found, it prints both the % sign and the subsequent character and continues as normal.
	<h2><a id="#syntax"> Syntax </h2>
<div align="center">
<table>
 <tr>
         <th>Syntax</th>
         <th>Output</th>
 </tr>
 <tr>
 </tr>
 <tr>
    <th>_printf("String");</th>
    <th>String</th>
</tr>
<tr>
    <th>_printf("%s\n", "Also a string");</th>
    <th>Also a string</th>
</tr>
<tr>
    <th>_printf("%s%c%%", "Hello w", o);</th>
    <th>Hello wo%</th>
  </tr>
</table>
	
</div>

<h2><a id="#Content2"> Formatting</h2>
<h3>%s</h3>
	<p> 
                Indicates that the argument received is of type char * (string).
		<br><br>
		Example:
        </p>
	<div align="left"><table><tr><th>
					Syntax
				</th>
				<th>
					Output
				</th></tr>
			<tr><th>
				_printf("%s", "Hello");
			</th>
			<th>
				Hello
			</th></tr></table></div>
	<h3>%c</h3>
	<p> 
		Indicates that the argument received is of type char.
        </p>
	<div align="left">
		<table>
			<tr><th>
					Syntax
				</th>
				<th>
					Output
				</th>
			</tr>
			<tr><th>
				_print("%cello", 'H');
			</th>
			<th>
				Hello
			</th></tr></table></div>
	<h3>%%</h3>
	<p> 
		Nullifies previous % character, allowing to print %.
	</p>
	<div align="left"><table><tr><th>
					Syntax
				</th>
				<th>
					Output
				</th></tr>
			<tr><th>
				_printf("%%s%%");
			</th>
			<th>
				%s%
			</th></tr></table></div>
	<h3>%i</h3>
	<p> 
		Indicates that the argument is of type integer.
	</p>
	<div align="left">
		<table><tr><th>
					Syntax
				</th>
				<th>
					Output
				</th></tr>
			<tr><th>
				_printf("I am %i years old", 23)
			</th>
			<th>
				I am 23 years old
			</th></tr></table></div>
	<h3>%d</h3>
	<p> 
		Indicates that the argument is of type decimal. Functionally the same as %i in most cases.
	</p>
	<div align="left">
		<table><tr><th>
					Syntax
				</th>
				<th>
					Output
				</th></tr>
			<tr><th>
				_printf("It is currently %d O'clock", 12);
			</th>
			<th>
				It is currently 12 O'clock
			</th></tr></table></div>
<h2>Authors</h2><p>
	<img src="https://user-images.githubusercontent.com/124268011/229352297-c43177b9-50a4-4e3b-98b0-0235479c8572.png" height="35" width="35">
		Nicolás Fernandez
		<a href="https://github.com/Nicoou">
			@Nicoou
		</a>
		<br>
	<img src="https://user-images.githubusercontent.com/124268011/229352465-076ef3bb-3ddf-4668-9818-af13dca06e5c.png" height="35" width="35">
		Patricio Benglian
		<a href="https://github.com/Patricio-Benglian">
			@Patricio-Benglian
		</a></p>

<h2>Flowcharts</h2>
<details>
<summary>_printf.c flowchart</summary>
	
<img src="https://user-images.githubusercontent.com/124268011/229349499-71e07cd5-3c74-493c-ae8a-53fbf36be557.png" height="600" width="auto">
	
</details>
	
<details>
<summary>get_conv.c flowchart</summary>
	
<img src="https://user-images.githubusercontent.com/124268011/229349511-40dee117-357e-49af-89ee-aa7e013ae83f.png" height="400" width="auto">
	
</details>
	
<details>
<summary>aux_func.c flowcharts</summary>
<details>
<summary>print_char</summary>
	
<img src="https://user-images.githubusercontent.com/124268011/229350505-a968b2c6-8976-479f-8a5c-2b35d4c6c32b.png" height="300" width="auto">
	
</details>
<details>
<summary>print_string</summary>	
	
<img src="https://user-images.githubusercontent.com/124268011/229351079-83a6f1ac-9cfa-4845-ac43-34f02fba44a1.png" height="500" width="auto">
	
</details>
<details>
<summary>print_perc</summary>
	
<img src="https://user-images.githubusercontent.com/124268011/229351298-fffd7731-cdc3-4b4f-a4fb-9910e81a253b.png" height="300" width="auto">
	
</details>
<details>
<summary>print_num</summary>
	
<img src="https://user-images.githubusercontent.com/124268011/229351848-3f3c9f04-78e6-47c8-998d-4b85904bdab2.png" height="600" width="auto">
	
</details>
</details>
