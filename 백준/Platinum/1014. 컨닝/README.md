# [Platinum IV] 컨닝 - 1014 

[문제 링크](https://www.acmicpc.net/problem/1014) 

### 성능 요약

메모리: 18548 KB, 시간: 240 ms

### 분류

비트마스킹, 다이나믹 프로그래밍, 최대 유량, 비트필드를 이용한 다이나믹 프로그래밍

### 제출 일자

2023년 12월 5일 23:51:50

### 문제 설명

<p>A local high school is going to hold a final exam in a big classroom. However, some students in this school are always trying to see each other's answer sheet during exams!</p>

<p>The classroom can be regarded as a rectangle of <strong>M</strong> rows by <strong>N</strong> columns of unit squares, where each unit square represents a seat.</p>

<p>The school principal decided to set the following rule to prevent cheating:<br>
Assume a student is able to see his left, right, upper-left, and upper-right neighbors' answer sheets. The assignment of seats must guarantee that nobody's answer sheet can be seen by any other student. </p>

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3.amazonaws.com/problem/12699/cunning.jpg"></p>

<p>As in this picture, it will not be a good idea to seat anyone in A, C, D, or E because the boy in the back row would be able to see their answer sheets. However, if there is a girl sitting in B, he will not be able to see her answer sheet.</p>

<p>Some seats in the classroom are broken, and we cannot put a student in a broken seat.</p>

<p>The principal asked you to answer the following question: What is the maximum number of students that can be placed in the classroom so that no one can cheat?</p>

### 입력 

 <p>The first line of input gives the number of cases, <strong>C</strong>. <strong>C</strong> test cases follow. Each case consists of two parts.</p>

<p>The first part is a single line with two integers <strong>M</strong> and <strong>N</strong>: The height and width of the rectangular classroom.</p>

<p>The second part will be exactly <strong>M</strong> lines, with exactly <strong>N</strong> characters in each of these lines. Each character is either a '.' (the seat is not broken) or 'x' (the seat is broken, lowercase x).</p>

<p>Limits</p>

<ul>
	<li><strong>C</strong> = 20</li>
	<li>1 ≤ <strong>M</strong> ≤ 10</li>
	<li>1 ≤ <strong>N</strong> ≤ 10</li>
</ul>

### 출력 

 <p>For each test case, output one line containing "<strong>Y</strong>", where <strong>Y</strong> is the maximum possible number of students that can take the exam in the classroom.</p>

