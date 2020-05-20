# Exercism C++ Problems

My hobby during quarantine has been solving
[_Exercisms_](https://exercism.io/). These problems are great for learning
language idioms and gaining fluency through practice. For every language, there
is a team of mentors available to ask for feedback. I learn a lot from every
code review that I get.

## The interesting ones:

### `leap`: The leap year algorithm

The exercise is uninteresting by itself, but I got a [good
leson](https://exercism.io/my/solutions/73441aa0651e496b83a42276a3d020e6?iteration_idx=1)
on not using unsigned types for arithmetic. It turns out that this can lead to
unexpected math errors that go silent for the programmer.

### `say`: Integer to English conversion

At first, I expected this to be harder than it ended up to be. To get to the
solution, I dissected the structure of English numbers (I like to think that
I'm fluent, but it's not my mother tongue) and then came up with a recursive
solution.

- My [first iteration solution](https://exercism.io/my/solutions/db051e2393054824b58a3ac2cad0b55c)
  - [ ] As of (2020/05/20) I'm waiting for a code review.

## Debugging the code:

C++ exercises are built using _cmake_. To generate debug information, one
should change the `CMakeLists.txt` file to include the `-g` flag:
```diff
 if("${CMAKE_CXX_COMPILER_ID}" MATCHES "(GNU|Clang)")
     set_target_properties(${exercise} PROPERTIES
-        COMPILE_FLAGS "-Wall -Wextra -Wpedantic -Werror"
+        COMPILE_FLAGS "-Wall -Wextra -Wpedantic -Werror -g"
     )
 endif()
```

By default, tests will be run after every build. To change that behavior,
remove these lines from the `CMakeLists.txt`:
```
-# Run the tests on every build
-add_custom_target(test_${exercise} ALL DEPENDS ${exercise} COMMAND ${exercise})
```
