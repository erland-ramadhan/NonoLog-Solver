<div align="center">

# NonoLog-Solver (Nonogram Logic-Solver)

<div align="left">

<!-- <h2 id="first-section">What is this repo about?</h2> -->
## What is this repo about?

This repository contains a nonogram logic solver written in C++ that uses a backtracking algorithm enhanced with constant propagation to solve nonogram puzzles efficiently. Nonograms, also known as "picross" or "griddlers," are logic puzzles where cells in a grid must be filled or left blank according to given row and column constraints to reveal a hidden image.

This project reads puzzle configurations from a text file, solves the puzzle, and outputs the solution as a grid, where filled cells represent parts of the hidden image. The code is designed to handle complex puzzles and aims to provide competitive performance on large grids.

## How to use this repo?

Coming soon!

## How is the performance (so far)?

| Test File | Description | Grid Size | Time (ms) |
| :--- | :--- | ---: | ---: |
| e.in | letter 'e' | 8 × 8 | 0.35 |
| soccer.in | a person about to kick a ball | 20 × 20 | 58.57 |
