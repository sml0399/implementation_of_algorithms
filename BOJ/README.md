# BOJ
- my own solutions to BOJ problems
## Rules
- link to the problem must be mentioned due to the [copyright issue](https://www.acmicpc.net/board/view/2185)
- Name of the file must start with problem number with 6 digits.
- The codes in the 'code' directory must be the most efficient(simple, fast) code for the problem among the codes that I implemented. The code with poor performance(about the same problem) will be stored at 'poor_version' directory.
- When git is cloned, you must manually create 'executable' directory
- compile.sh will compile c++ files(.cpp) to 'executable' directory
- fce.sh will find the question that matches question number, compile it, execute it.
  - usage example:(you have to type question number)
  ```console
  foo@bar:~/implementation_of_algorithms/BOJ/code$ ./fce.sh 001008
  compile finished. Now executing 001008_A_divided_by_B
  1 3
  0.33333333333333331
  ```
- clear.sh will remove compiled executable binary files(at 'executable' directory) and temporary files(file name ends with '~')
- gac.sh will add and commit to git repository(but not push). You will be asked to type the name for commit.
- solutions provided by others with better performance is placed at 'others_better_solution' directory

## grading criteria
- refer to [link1](https://www.acmicpc.net/help/faq), [link2](https://www.acmicpc.net/help/judge)

## Tips
- [fast stream I/O](https://www.acmicpc.net/board/view/22716)

## List of problems(with link) that I tried but not solved yet.
- [006571_number_of_fibonacci.cpp](https://www.acmicpc.net/problem/6571)
## Links to solved problems
- [001000_A_plus_B.cpp](https://www.acmicpc.net/status?user_id=sml0399&problem_id=1000&from_mine=1)
- [001001_A_minus_B.cpp](https://www.acmicpc.net/problem/1001)
- [001002_turret.cpp](https://www.acmicpc.net/problem/1002)
- [001003.cpp](https://www.acmicpc.net/problem/1003)
- [001008_A_divided_by_B.cpp](https://www.acmicpc.net/problem/1008)
- [001016_not_square_number.cpp](https://www.acmicpc.net/problem/1016)
- [001024_sum_of_sequence.cpp](https://www.acmicpc.net/problem/1024)
- [001065_one-number.cpp](https://www.acmicpc.net/problem/1065)
- [001085_min_rectangle_escape.cpp](https://www.acmicpc.net/problem/1085)
- [001110_addition_cycle.cpp](https://www.acmicpc.net/problem/1110)
- [001152_count_words.cpp](https://www.acmicpc.net/problem/1152)
- [001193_find_fraction.cpp](https://www.acmicpc.net/problem/1193)
- [001330_compare_two_numbers.cpp](https://www.acmicpc.net/problem/1330)
- [001427_sort_inside.cpp](https://www.acmicpc.net/problem/1427)
- [001463_make_one.cpp](https://www.acmicpc.net/problem/1463)
- [001546_mean.cpp](https://www.acmicpc.net/problem/1546)
- [001712.cpp](https://www.acmicpc.net/problem/1712)
- [001929_get_prime.cpp](https://www.acmicpc.net/problem/1929)
- [001978_prime_numbers.cpp](https://www.acmicpc.net/problem/1978)
- [002438_print_star.cpp](https://www.acmicpc.net/problem/2438)
- [002447_print_stars.cpp](https://www.acmicpc.net/problem/2447)
- [002439_print_star_2.cpp](https://www.acmicpc.net/problem/2439)
- [002475_verification_number.cpp](https://www.acmicpc.net/problem/2475)
- [002557_Hello_World.cpp](https://www.acmicpc.net/problem/2557)
- [002558_sum_2.cpp](https://www.acmicpc.net/problem/2558)
- [002562_max_with_index.cpp](https://www.acmicpc.net/problem/2562)
- [002577_number_count.cpp](https://www.acmicpc.net/problem/2577)
- [002581_prime_numbers.cpp](https://www.acmicpc.net/problem/2581)
- [002588_AXB_2.cpp](https://www.acmicpc.net/problem/2588)
- [002739_multiplication_table.cpp](https://www.acmicpc.net/problem/2739)
- [002741_print_N.cpp](https://www.acmicpc.net/problem/2741)
- [002742_reverse_print_N.cpp](https://www.acmicpc.net/problem/2742)
- [002750_sort_1.cpp](https://www.acmicpc.net/problem/2750)
- [002751_sort_2.cpp](https://www.acmicpc.net/problem/2751)
- [002753_leap_year.cpp](https://www.acmicpc.net/problem/2753)
- [002775.cpp](https://www.acmicpc.net/problem/2775)
- [002869_going_up.cpp](https://www.acmicpc.net/problem/2869)
- [002884_alarm_clock.cpp](https://www.acmicpc.net/problem/2884)
- [002908_constant.cpp](https://www.acmicpc.net/problem/2908)
- [003009_fourth_point.cpp](https://www.acmicpc.net/problem/3009)
- [003052_remainder.cpp](https://www.acmicpc.net/problem/3052)
- [003053_taxi_distance.cpp](https://www.acmicpc.net/problem/3053)
- [004153_right_triangle](https://www.acmicpc.net/problem/4153)
- [004344_over_average.cpp](https://www.acmicpc.net/problem/4344)
- [004673_self_number.cpp](https://www.acmicpc.net/problem/4673)
- [004948_Bertrands_postulate.cpp](https://www.acmicpc.net/problem/4948)
- [005613_calculator.cpp](https://www.acmicpc.net/problem/5613)
- [008393_sum_n_numbers.cpp](https://www.acmicpc.net/problem/8393)
- [008958_OX.cpp](https://www.acmicpc.net/problem/8958)
- [009012_paranthesis_matching.cpp](https://www.acmicpc.net/problem/9012)
- [009020_Goldbachs_conjecture](https://www.acmicpc.net/problem/9020)
- [009498_exam_score.cpp](https://www.acmicpc.net/problem/9498)
- [010171_cat.cpp](https://www.acmicpc.net/problem/10171)
- [010172_dog.cpp](https://www.acmicpc.net/problem/10172)
- [010430_remainder.cpp](https://www.acmicpc.net/problem/10430)
- [010718_we_love_kriii.cpp](https://www.acmicpc.net/problem/10718)
- [010757_large_number_sum.cpp](https://www.acmicpc.net/problem/10757)
- [010773_zero.cpp](https://www.acmicpc.net/problem/10773)
- [010809_find_alphabet.cpp](https://www.acmicpc.net/problem/10809)
- [010818_min_max.cpp](https://www.acmicpc.net/problem/10818)
- [010828_stack.cpp](https://www.acmicpc.net/problem/10828)
- [010869_calculation.cpp](https://www.acmicpc.net/problem/10869)
- [010870_fibonacci.cpp](https://www.acmicpc.net/problem/10870)
- [010871_samller_than_x.cpp](https://www.acmicpc.net/problem/10871)
- [010872_factorial.cpp](https://www.acmicpc.net/problem/10872)
- [010950_sum_3.cpp](https://www.acmicpc.net/problem/10950)
- [010951_sum_4.cpp](https://www.acmicpc.net/problem/10951)
- [010952_sum_5.cpp](https://www.acmicpc.net/problem/10952)
- [010953_sum_6.cpp](https://www.acmicpc.net/problem/10953)
- [010989_sort_3.cpp](https://www.acmicpc.net/problem/10989)
- [010998_AXB.cpp](https://www.acmicpc.net/problem/10998)
- [011021_sum_7.cpp](https://www.acmicpc.net/problem/11021)
- [011022_sum_8.cpp](https://www.acmicpc.net/problem/11022)
- [011650_sort_coordinates.cpp](https://www.acmicpc.net/problem/11650)
- [011653_factorization.cpp](https://www.acmicpc.net/problem/11653)
- [011654_ASCII.cpp](https://www.acmicpc.net/problem/11654)
- [011720_sum_of_numbers.cpp](https://www.acmicpc.net/problem/11720)
- [011729_tower_of_hanoi.cpp](https://www.acmicpc.net/problem/11729)
- [014681_select_quadrant.cpp](https://www.acmicpc.net/problem/14681)
- [015552_fast_sum.cpp](https://www.acmicpc.net/problem/15552)
- [015596_sum_N.cpp](https://www.acmicpc.net/problem/15596)
- [018258_queue2.cpp](https://www.acmicpc.net/problem/18258)



