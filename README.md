# Legacy Calculator

A terminal-based multi-mode calculator written in C. Supports everyday arithmetic, scientific functions, statistical analysis, geometry, and unit conversions — all through an interactive menu-driven interface.

---

## Modes

### Regular Calculator
Basic arithmetic with an ASCII bar chart visualisation of each operation.

| Function | Description |
|---|---|
| Add / Subtract / Multiply / Divide | Two-operand arithmetic |
| Quadratic Formula | Finds real roots for `ax² + bx + c = 0` |
| Fibonacci Histogram | Prints a bar chart of the sequence up to N terms |
| Nth Root | Calculates the Nth root of a given number |

### Scientific Calculator

| Function | Description |
|---|---|
| Power | `base ^ exponent` |
| Factorial | `x!` for positive integers (accurate up to 20) |
| Fibonacci Series | Generates the sequence up to N terms |
| Trig functions | sin, cos, tan, cosec, sec, cot |
| Matrix Sum | Adds two user-defined matrices |
| Matrix Product | Multiplies two user-defined matrices |
| Matrix Transpose | Flips a matrix over its diagonal |

### Accountant Calculator
Operates on a user-supplied dataset of numbers.

| Function | Description |
|---|---|
| Max / Min | Largest and smallest values |
| Mean (x̄) | Average of the dataset |
| Range | Max − Min |
| Median | Middle value |
| Mode | Most frequently occurring value |
| Sort | Dataset in ascending order |
| Add Value | Append a new entry to the dataset |

### Geometry Calculator
Area, perimeter, surface area, and volume for common shapes.

| Operation | Shapes Supported |
|---|---|
| Area | Rectangle, circle, triangle |
| Perimeter | Rectangle, circle, triangle |
| Surface Area | Rectangular prism, sphere, triangular prism |
| Volume | Rectangular prism, sphere |

### Conversions

| Type | Units |
|---|---|
| Time | Seconds, minutes, hours, days, weeks, months, years, decades, centuries, millennia, light years, generations |
| Temperature | Celsius, Fahrenheit, Kelvin |

---

## Requirements

- GCC
- Make
- C99-compatible standard library (`-lm` for math functions)

---

## Build & Run

All commands are run from inside the `Legacy Code/` directory:

```bash
cd "Legacy Code"

# Compile
make

# Run
./legacyCalculator

# Remove object files and binary
make clean
```

---

## Project Structure

```
Legacy Code/
├── main.c              # Entry point, all menus and calculator UI
├── conversions.c/h     # Time and temperature unit conversions
├── drawGraph.c/h       # ASCII bar chart visualisation
├── sExtension.c/h      # Quadratic formula, Fibonacci, Nth root
├── factorial.h         # Factorial (header-only)
├── matrices.h          # Matrix operations (header-only)
├── powerFunction.h     # Power function (header-only)
└── Makefile
```

---

## Contributors

| Name | Contributions |
|---|---|
| Shayan Safaei | Core calculator menus and input handling |
| Zubaidi | Conversions module, bug fixes |
| Brooke Stephanos | Factorial refactor |
| Luisa Zorzetto| Palak Palak|