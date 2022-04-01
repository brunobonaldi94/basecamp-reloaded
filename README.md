<style>
	.align_center {
		text-align:center;
	}
	.flex-center {
		width:100%;
		display:flex;
		flex-direction:column;
		align-items:center;
		justify-content:center;
	}
	.padding-header{
		padding:16px 4px;
		border-top:0.5px solid rgba(255,255,255,0.20);

	}
	.paragraph{
		padding:0 8px;
	}
	#exercises-table {
		width:100%;

	}
	#exercises-table td, #exercises-table th {
		text-align:center;
	}
	#exercises-table .result {
		display:flex;
		align-items:center;
	}
	#exercises-table .result span {
		margin-right:8px;
	}
	#final_result{
		border-bottom:0.5px solid rgba(255,255,255,0.20);
		padding:32px 0;
		margin:0 0 16px 0;
	}
	#final_result h1 {
		width:100%;
		border-top:0.5px solid rgba(255,255,255,0.20);
		padding:16px 0;
	}
	#final_result div :not(:last-child) {
		margin-bottom:16px;
	}
</style>
<div id="top"></div>
<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Don't forget to give the project a star!
*** Thanks again! Now go create something AMAZING! :D
-->

<!-- PROJECT LOGO -->
<br />
<div class="align_center">
  <h1 style="padding:16px;">Basecamp Reload - 42 São Paulo</h1>
  <a href="https://github.com/brunobonaldi94">
    <img src="readme/images/reload.svg" alt="Logo" width="80" height="80">
  </a>
  <p>Just a reminder - main concepts learned during in Basecamp</p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#exercises">Exercises</a>
    </li>
    <li><a href="#final_result">Final Result</a></li>
    <li><a href="#about_42">About 42</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
<h1 id="about-the-project" class="padding-header">About The Project</h1>

<p class="paragraph">
	As the course starts approximately after 1 month of 42 São Paulo Basecamp,
	these exercises are just a reminder of the main concepts learned (C language and Shell) during the Basecamp.
</p>
<p align="right">(<a href="#top">back to top</a>)</p>



<h1 id="exercises" class="padding-header">Exercises</h1>

<p class="paragraph">
Short description about each exercise and main concepts behind each one.
Some functions use ft_putchar function (printf function is forbidden for all exercises), which is implemented as below:</p>

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

```
## Also these exercises must be aligned with [The Norm](https://github.com/42School/norminette). So some functions are forbidden and coding styles are forced.

<p align="right">(<a href="#top">back to top</a>)</p>

<table id="exercises-table">
	<thead>
		<tr>
			<th>#</th>
			<th>Ex</th>
			<th>Language</th>
			<th>Short Desc</th>
			<th>Main Concepts / Commands</th>
			<th>Result</th>
		</tr>
	</thead>
	<tbody>
		<tr sty>
			<td>00</td>
			<td>
				<a href="ex00">Oh yeah, mooore...</a>
			</td>
			<td>Shell</td>
			<td>Create files and directories, change permisson, modify date and time, hard and soft link, etc.</td>
			<td><i>ls, cd, mkdir, chmod, ln, touch (-h, -t) ...</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>01</td>
			<td>
				<a href="ex01">Z</a>
			</td>
			<td>Shell</td>
			<td>Create a file called z with "Z" inside it.</td>
			<td><i>cat, echo </i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>02</td>
			<td>
				<a href="ex02">clean</a>
			</td>
			<td>Shell</td>
			<td>Create a command to find and remove files following a specific pattern</td>
			<td><i>find</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>03</td>
			<td>
				<a href="ex03">find_sh</a>
			</td>
			<td>Shell</td>
			<td>Find all the files with .sh extension of a directory and display only the basename</td>
			<td><i>find -exec</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>04</td>
			<td>
				<a href="ex04">MAC</a>
			</td>
			<td>Shell</td>
			<td>Display only the MAC address</td>
			<td><i>ifconfig, grep, sed, cut</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>05</td>
			<td>
				<a href="ex05">Can you create it?</a>
			</td>
			<td>Shell</td>
			<td>Create a file with a name with several special characters</td>
			<td><i>find</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>06</td>
			<td>
				<a href="ex06">ft_print_alphabet</a>
			</td>
			<td>C</td>
			<td>Print all alphabet in lowercase</td>
			<td><i>ft_putchar, while</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>07</td>
			<td>
				<a href="ex07">ft_print_numbers</a>
			</td>
			<td>C</td>
			<td>Print all numbers</td>
			<td><i>ft_putchar, while</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
				<tr>
			<td>08</td>
			<td>
				<a href="ex08">ft_is_negative</a>
			</td>
			<td>C</td>
			<td>Print with number is positive or negative</td>
			<td><i>ft_putchar, while, if</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>09</td>
			<td>
				<a href="ex09">ft_ft</a>
			</td>
			<td>C</td>
			<td>Change int variable value using pointer</td>
			<td><i>Indirection Operator (*)</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>10</td>
			<td>
				<a href="ex10">ft_swap</a>
			</td>
			<td>C</td>
			<td>Swap the value of two int variables using pointer</td>
			<td><i>Indirection Operator (*)</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>11</td>
			<td>
				<a href="ex11">ft_div_mod</a>
			</td>
			<td>C</td>
			<td>Calculate div and mod of two variables and change their values using pointer</td>
			<td><i>Indirection Operator (*), "%" and "/" operators </i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>12</td>
			<td>
				<a href="ex12">ft_iterative_factorial</a>
			</td>
			<td>C</td>
			<td>Create an interative (loop) factorial function</td>
			<td><i>while, "*" operator, if</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>13</td>
			<td>
				<a href="ex13">ft_recursive_factorial</a>
			</td>
			<td>C</td>
			<td>Create an recursive factorial function</td>
			<td><i>recursion, "*" operator, if</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>14</td>
			<td>
				<a href="ex14">ft_sqrt</a>
			</td>
			<td>C</td>
			<td>Create sqrt algorithm (natural numbers)</td>
			<td><i>while, binary search concept</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>15</td>
			<td>
				<a href="ex15">ft_putstr</a>
			</td>
			<td>C</td>
			<td>Print a string</td>
			<td><i>ft_putchar, while</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>16</td>
			<td>
				<a href="ex16">ft_strlen</a>
			</td>
			<td>C</td>
			<td>Calculate string length</td>
			<td><i>while</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>17</td>
			<td>
				<a href="ex17">ft_strcmp</a>
			</td>
			<td>Shell</td>
			<td>Reproduce strcmp function behavior</td>
			<td><i>while</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
				<tr>
			<td>18</td>
			<td>
				<a href="ex18">ft_print_params</a>
			</td>
			<td>C</td>
			<td>Create a program that print all arguments received from terminal</td>
			<td><i>argc, argv, ft_putchar, while</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
				<tr>
			<td>19</td>
			<td>
				<a href="ex19">ft_sort_params</a>
			</td>
			<td>C</td>
			<td>Create a program that sort and print all arguments by ascii order received from terminal</td>
			<td><i>argc, argv, ft_putchar, while, ft_strcmp</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>20</td>
			<td>
				<a href="ex20">ft_strdup</a>
			</td>
			<td>C</td>
			<td>Create a function that duplicates a string</td>
			<td><i>malloc, while , ft_strcpy, ft_strlen, sizeof</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>21</td>
			<td>
				<a href="ex21">ft_range</a>
			</td>
			<td>C</td>
			<td>Create a function ft_range which returns an array ofints with all values between min (included) and max (excluded)</td>
			<td><i>malloc, while</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>22</td>
			<td>
				<a href="ex22">ft_abs.h</a>
			</td>
			<td>C</td>
			<td>Create a macro ABS which replaces an argument by its absolute value</td>
			<td><i>macro, ternary, header</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>23</td>
			<td>
				<a href="ex23">ft_point.h</a>
			</td>
			<td>C</td>
			<td>Create a command to find and remove files following a specific pattern</td>
			<td><i>struct, typedef, header</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>24</td>
			<td>
				<a href="ex24">Makefile</a>
			</td>
			<td>Makefile</td>
			<td>Create the Makefile that’ll compile your libft.a</td>
			<td><i>make</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
			<tr>
			<td>25</td>
			<td>
				<a href="ex25">ft_foreach</a>
			</td>
			<td>C</td>
			<td>Create the function ft_foreach which, for a given ints array, applies a function on all elements of the array</td>
			<td><i>while, passing function as parameter</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
			<tr>
			<td>26</td>
			<td>
				<a href="ex26">ft_count_if</a>
			</td>
			<td>C</td>
			<td>Create a function ft_count_if which will return the number of elements of thearray that return 1</td>
			<td><i>while, passing function as parameter</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		</tr>
		<tr>
			<td>27</td>
			<td>
				<a href="ex27">display_file</a>
			</td>
			<td>C, Makefile</td>
			<td>Create a program called ft_display_file that displays, on the standard output, only the content of the file given as argument</td>
			<td><i>close, open, read, write, Makefile</i></td>
			<td class="result" align="center"><span>Success (100%)</span><img class="emoji" alt="heavy_check_mark" height="20" width="20" src="https://github.githubassets.com/images/icons/emoji/unicode/2714.png"></td>
		 </tr>
	</tbody>
</table>
<div id="final_result" class="flex-center">
	<h1 >Final Result</h1>
	<div class="flex-center">
		<img src="readme/images/success_exs.png"/>
		<img src="readme/images/success.png"/>
	</div>
</div>

<h1 id="about_42">About 42</h1>
<div class="flex-center">
	<img style="max-width:200px;" 
	src="readme/images/42_Logo.png"/>
</div>
<p class="paragraph">
42 is a future-proof computer science training to educate the next generation of software engineers. The 42 program takes a project-based approach to progress and is designed to develop technical and people skills that match the expectations of the labor market.
</p>
<p class="paragraph">
To join 42, you must pass in a selection process called "Piscine"or "Basecamp".
</p>
<p class="paragraph">42 São Paulo is part of 42 School network, for more information please access this linkk below:
<h3  style="font-size:24px;padding:0 8px;"><a href="https://www.42sp.org.br/">
42-São Paulo
</a></h3></p>

<p align="right">(<a href="#top">back to top</a>)</p>