cmake_minimum_required(VERSION 3.24)
project(uiucse221)

set(CMAKE_CXX_STANDARD 14)

add_executable(uiucse221
        ICS/Assignment/assignment-1.c
        ICS/Assignment/assignment-2.c
        ICS/Assignment/assignment-3.c
        ICS/Assignment/assignment-4.c
        ICS/Assignment/assignment-5.c
        ICS/Assignment/assignment-6.c
        "ICS/Class Practice/bool.cpp"
        "ICS/Class Practice/power_of_2(with math.h).c"
        "ICS/Class Practice/power_of_2.c"
        "ICS/Class Practice/practice_1.c"
        "ICS/Class Practice/switch(without char).c"
        "ICS/Class Practice/switch.c"
        "ICS/H.W/find the character is vowel or consonant(without validation).c"
        "ICS/H.W/find the character is vowel or consonant.c"
        "ICS/Personal Practice/Display multiple variables.c"
        "ICS/Personal Practice/function in c.c"
        "ICS/Personal Practice/problem-1.c"
        "ICS/Personal Practice/problem-2.c"
        "ICS/Personal Practice/problem-3.c"
        "ICS/Personal Practice/problem-4.c"
        "ICS/Personal Practice/problem-5.c"
        "ICS/Personal Practice/result for a subject.c"
        "ICS/Personal Practice/separate-intiger.c"
        "ICS/Personal Practice/Sum and Difference of Two Numbers.c"
        "ICS/Personal Practice/test.c"
        "ICS/Personal Practice/tuition fee.c"
        "ICS/Practice Problem/01. Intro/01. Intro-1.c"
        "ICS/Practice Problem/01. Intro/01. Intro-2.c"
        "ICS/Practice Problem/01. Intro/01. Intro-3.c"
        "ICS/Practice Problem/01. Intro/01. Intro-4.c"
        "ICS/Practice Problem/01. Intro/01. Intro-5.c"
        "ICS/Practice Problem/01. Intro/01. Intro-6.c"
        "ICS/Practice Problem/01. Intro/01. Intro-7.c"
        "ICS/Practice Problem/01. Intro/01. Intro-8.c"
        "ICS/Practice Problem/02. Operators/01. Operators-1.c"
        "ICS/Practice Problem/02. Operators/01. Operators-2.c"
        "ICS/Practice Problem/02. Operators/01. Operators-3.c"
        "ICS/Practice Problem/02. Operators/01. Operators-4.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_1.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_10.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_11.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_13.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_14.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_15.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_2.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_3.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_4.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_5.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_7.c"
        "ICS/Practice Problem/03. Conditions/03.Condition_8.c"
        "ICS/Practice Problem/04. Loop/04. Loop-01.c"
        "ICS/Practice Problem/04. Loop/04. Loop-02.c"
        "ICS/Practice Problem/04. Loop/04. Loop-03.c"
        "ICS/Practice Problem/04. Loop/04. Loop-04.c"
        "ICS/Practice Problem/04. Loop/04. Loop-05.c"
        "ICS/Practice Problem/04. Loop/04. Loop-06.c"
        "ICS/Practice Problem/04. Loop/04. Loop-07.c"
        "ICS/Practice Problem/04. Loop/04. Loop-08.c"
        "ICS/Practice Problem/04. Loop/04. Loop-09.c"
        "ICS/Practice Problem/04. Loop/04. Loop-10.c"
        "ICS/Practice Problem/04. Loop/04. Loop-11.c"
        "ICS/Practice Problem/04. Loop/04. Loop-12.c"
        "ICS/Practice Problem/04. Loop/04. Loop-13.c"
        "ICS/Practice Problem/04. Loop/04. Loop-14.c"
        "ICS/Practice Problem/04. Loop/04. Loop-15.c"
        "SPL/Class Practice/1.c"
        "SPL/Class Practice/2.c"
        "SPL/Class Practice/3.c"
        "SPL/Class Practice/practice spl 2.c"
        "SPL/Class Practice/practice spl 3.c"
        "SPL/Class Practice/practice spl 4.c"
        "SPL/Class Practice/practice spl 5.c"
        "SPL/Class Practice/practice spl 6.c"
        "SPL/Class Practice/practice spl 8.c"
        "SPL/Class Practice/practice spl 9.c"
        "SPL/Class Practice/practice spl.c"
        "SPL/Class Practice/Untitled1.c"
        "SPL/Class Practice/Untitled2.c"
        "SPL/Class Practice/Untitled3.c"
        SPL/HW/1.c
        SPL/HW/2.c
        SPL/HW/offline-02.c
        SPL/HW/ofline-2.c
        "SPL/Pattern Practice/Alphabetic-RIght-Angle-Tringle-1.c"
        "SPL/Pattern Practice/Alphabetic-RIght-Angle-Tringle-2.c"
        "SPL/Pattern Practice/Alphabetic-Upside-Down-RIght-Angle-Tringle-1.c"
        "SPL/Pattern Practice/Alphabetic-Upside-Down-RIght-Angle-Tringle-2.c"
        "SPL/Pattern Practice/Binary-RIght-Angle-Tringle-1.c"
        "SPL/Pattern Practice/Binary-RIght-Angle-Tringle-2.c"
        "SPL/Pattern Practice/Binary-Upside-Down-RIght-Angle-Tringle-1.c"
        "SPL/Pattern Practice/Binary-Upside-Down-RIght-Angle-Tringle-2.c"
        "SPL/Pattern Practice/Number-Left-Angle-Tringle.c"
        "SPL/Pattern Practice/Number-RIght-Angle-Tringle-1.c"
        "SPL/Pattern Practice/Number-RIght-Angle-Tringle-2.c"
        "SPL/Pattern Practice/Number-Upside-Down-Left-Angle-Tringle.c"
        "SPL/Pattern Practice/Number-Upside-Down-RIght-Angle-Tringle-1.c"
        "SPL/Pattern Practice/Number-Upside-Down-RIght-Angle-Tringle-2.c"
        "SPL/Pattern Practice/Right-Rotated-Pyramid-1.c"
        "SPL/Pattern Practice/Right-Rotated-Pyramid-2.c"
        "SPL/Pattern Practice/Right-Rotated-Pyramid.c"
        "SPL/Pattern Practice/Untitled.c"
        "SPL/Pattern Practice/Untitled1.c"
        "SPL/Pattern Practice/Untitled10.c"
        "SPL/Pattern Practice/Untitled11.c"
        "SPL/Pattern Practice/Untitled12.c"
        "SPL/Pattern Practice/Untitled13.c"
        "SPL/Pattern Practice/Untitled3.c"
        "SPL/Pattern Practice/Untitled4.c"
        "SPL/Pattern Practice/Untitled5.c"
        "SPL/Pattern Practice/Untitled6.c"
        "SPL/Pattern Practice/Untitled7.c"
        "SPL/Pattern Practice/Untitled8.c"
        "SPL/Pattern Practice/Untitled9.c"
        SPL/Practice/1.c
        SPL/Practice/2.c
        SPL/Practice/3.c
        SPL/Practice/4.c
        SPL/Practice/5.c
        SPL/Practice/54.c
        SPL/Practice/6.c
        SPL/Practice/7.c
        SPL/Practice/matrix_multiplication.c
        "SPL/Practice/normal martix.c"
        "SPL/Practice/problem 15.c"
        SPL/Practice/q1.c
        SPL/Practice/q2.c
        SPL/Practice/q3.c
        SPL/Practice/Untitled.c
        SPL/Practice/Untitled1.c
        SPL/Practice/Untitled2.c
        SPL/Practice/Untitled3.c
        SPL/Practice/Untitled4.c
        SPL/Practice/Untitled5.c
        SPL/Practice/Untitled6.c
        "SPL/Practice Problem/2D Array/1.c"
        "SPL/Practice Problem/2D Array/10.c"
        "SPL/Practice Problem/2D Array/12.c"
        "SPL/Practice Problem/2D Array/13.c"
        "SPL/Practice Problem/2D Array/14.c"
        "SPL/Practice Problem/2D Array/15.c"
        "SPL/Practice Problem/2D Array/2.c"
        "SPL/Practice Problem/2D Array/3.c"
        "SPL/Practice Problem/2D Array/4.c"
        "SPL/Practice Problem/2D Array/5.c"
        "SPL/Practice Problem/2D Array/6.c"
        "SPL/Practice Problem/2D Array/7.c"
        "SPL/Practice Problem/2D Array/8.c"
        "SPL/Practice Problem/2D Array/9.c"
        "SPL/Practice Problem/Array/01.c"
        "SPL/Practice Problem/Array/02.c"
        "SPL/Practice Problem/Array/03.c"
        "SPL/Practice Problem/Array/04.c"
        "SPL/Practice Problem/Array/05.c"
        "SPL/Practice Problem/Array/06.c"
        "SPL/Practice Problem/Array/07.c"
        "SPL/Practice Problem/Array/08.c"
        "SPL/Practice Problem/Array/09.c"
        "SPL/Practice Problem/Array/10.c"
        "SPL/Practice Problem/Array/11.c"
        "SPL/Practice Problem/Array/12.c"
        "SPL/Practice Problem/Array/13.c"
        "SPL/Practice Problem/Array/14.c"
        "SPL/Practice Problem/Array/15.c"
        "SPL/Practice Problem/Array/16.c"
        "SPL/Practice Problem/Array/17.c"
        "SPL/Practice Problem/Array/18.c"
        "SPL/Practice Problem/Array/19.c"
        "SPL/Practice Problem/Array/20.c"
        "SPL/Practice Problem/Function/1.c"
        "SPL/Practice Problem/Function/10.c"
        "SPL/Practice Problem/Function/11.c"
        "SPL/Practice Problem/Function/12.c"
        "SPL/Practice Problem/Function/13.c"
        "SPL/Practice Problem/Function/14.c"
        "SPL/Practice Problem/Function/15.c"
        "SPL/Practice Problem/Function/16.c"
        "SPL/Practice Problem/Function/17.c"
        "SPL/Practice Problem/Function/18.c"
        "SPL/Practice Problem/Function/19.c"
        "SPL/Practice Problem/Function/2.c"
        "SPL/Practice Problem/Function/20.c"
        "SPL/Practice Problem/Function/3.c"
        "SPL/Practice Problem/Function/4.c"
        "SPL/Practice Problem/Function/5.c"
        "SPL/Practice Problem/Function/6.c"
        "SPL/Practice Problem/Function/7.c"
        "SPL/Practice Problem/Function/8.c"
        "SPL/Practice Problem/Function/9.c"
        "SPL/Practice Problem/Mixed Problem/01.c"
        "SPL/Practice Problem/Mixed Problem/02.c"
        "SPL/Practice Problem/Mixed Problem/03.c"
        "SPL/Practice Problem/Mixed Problem/04.c"
        "SPL/Practice Problem/Mixed Problem/05.c"
        "SPL/Practice Problem/Mixed Problem/06.c"
        "SPL/Practice Problem/Mixed Problem/08.c"
        "SPL/Practice Problem/Mixed Problem/09.c"
        "SPL/Practice Problem/Mixed Problem/10.c"
        "SPL/Practice Problem/Mixed Problem/11.c"
        "SPL/Practice Problem/Mixed Problem/7.c"
        "SPL/Practice Problem/Nested Loop/01.c"
        "SPL/Practice Problem/Nested Loop/02.c"
        "SPL/Practice Problem/Nested Loop/03.c"
        "SPL/Practice Problem/Nested Loop/04.c"
        "SPL/Practice Problem/Nested Loop/05.c"
        "SPL/Practice Problem/Nested Loop/06.c"
        "SPL/Practice Problem/Nested Loop/07.c"
        "SPL/Practice Problem/Nested Loop/08.c"
        "SPL/Practice Problem/Nested Loop/09.c"
        "SPL/Practice Problem/Nested Loop/10.c"
        "SPL/Practice Problem/Nested Loop/11.c"
        "SPL/Practice Problem/Nested Loop/12.c"
        "SPL/Practice Problem/Nested Loop/13.c"
        "SPL/Practice Problem/Nested Loop/14.c"
        "SPL/Practice Problem/Nested Loop/15.c"
        "SPL/Practice Problem/String/1.c"
        "SPL/Practice Problem/String/10.c"
        "SPL/Practice Problem/String/11.c"
        "SPL/Practice Problem/String/12.c"
        "SPL/Practice Problem/String/13.c"
        "SPL/Practice Problem/String/2.c"
        "SPL/Practice Problem/String/3.c"
        "SPL/Practice Problem/String/4.c"
        "SPL/Practice Problem/String/5.c"
        "SPL/Practice Problem/String/6.c"
        "SPL/Practice Problem/String/7.c"
        "SPL/Practice Problem/String/8.c"
        "SPL/Practice Problem/String/9.c"
        "SPL/Practice Problem/Structure/1.c"
        "SPL/Practice Problem/Structure/2.c"
        SPL/Question/Final/202/1.c
        SPL/Question/Final/202/2.c
        SPL/Question/Final/202/3.c
        SPL/Question/Final/203/4.c
        SPL/Question/Final/203/5.c
        SPL/Question/Final/211/5.c
        SPL/Question/Final/211/6.c
        SPL/Question/Final/211/7.c
        SPL/Question/Final/221/1a.c
        SPL/Question/Final/221/1b.c
        SPL/Question/Final/221/2a.c
        SPL/Question/Final/221/2b.c
        SPL/Question/Final/221/3a.c
        SPL/Question/Final/221/3b.c
        SPL/Question/Final/221/4a.c
        SPL/Question/Final/221/4b.c
        SPL/Question/Final/221/5.c
        SPL/Question/Mid/183-2a.c
        SPL/Question/Mid/191.c
        "SPL/Question/Online/Section D/Evaluation 2/1.c"
        "SPL/Question/Online/Section E/Evaluation 1/1.c"
        "SPL/Question/Online/Section E/Evaluation 1/2.c"
        SPL/Question/1.c
        "SPL/SPL Assignment SEC-C/01.c"
        "SPL/SPL Assignment SEC-C/02.c"
        "SPL/SPL Assignment SEC-C/03.c"
        "SPL/SPL Assignment SEC-C/04.c"
        "SPL/SPL Assignment SEC-C/05.c"
        "SPL/SPL Assignment SEC-C/06.c"
        "SPL/SPL Assignment SEC-C/07.c"
        "SPL/SPL Assignment SEC-C/08.c"
        "SPL/SPL Assignment SEC-C/09.cpp"
        "SPL/SPL Assignment SEC-C/10.c"
        "SPL/SPL Assignment SEC-C/11.c"
        "SPL/SPL Assignment SEC-C/12.c"
        "SPL/SPL Assignment SEC-C/13.c"
        "SPL/SPL Assignment SEC-C/14.c"
        "SPL/SPL Assignment SEC-C/15.c"
        "SPL/SPL Assignment SEC-C/16.c"
        "SPL/SPL Assignment SEC-C/17.c"
        "SPL/SPL Assignment SEC-C/18.c"
        "SPL/SPL Assignment SEC-C/19.c"
        "SPL/SPL Assignment SEC-C/20.c"
        "SPL/SPL Assignment SEC-C/21.c"
        "SPL/SPL Assignment SEC-C/22.c"
        "SPL/SPL Assignment SEC-C/23.c"
        "SPL/SPL Assignment SEC-C/24.c"
        "SPL/SPL Assignment SEC-C/25.c"
        "SPL/SPL Assignment SEC-C/26.c"
        "SPL/SPL Assignment SEC-C/27.c"
        "SPL/SPL Assignment SEC-C/28.c"
        "SPL/SPL Assignment SEC-C/29.c"
        "SPL/SPL Assignment SEC-C/30.c"
        "SPL/SPL Assignment SEC-C/31.c"
        "SPL/SPL Assignment SEC-C/32.c"
        "SPL/SPL Assignment SEC-C/33.c"
        "SPL/SPL Assignment SEC-C/34.c"
        "SPL/SPL Assignment SEC-C/35.c"
        "SPL/SPL Assignment SEC-C/36.c"
        "SPL/SPL Assignment SEC-C/37.c"
        "SPL/SPL Assignment SEC-C/38.c"
        "SPL/SPL Assignment SEC-C/39.c"
        "SPL/SPL Assignment SEC-C/40.c"
        "SPL/SPL Assignment SEC-C/41.c"
        "SPL/SPL Assignment SEC-C/42.c"
        "SPL/SPL Assignment SEC-C/43.c"
        "SPL/SPL Assignment SEC-C/44.c"
        "SPL/SPL Assignment SEC-C/45.c"
        SPL/2.c
        SPL/5.c
        SPL/countLine.c
        SPL/dir.c
        SPL/struct1.c
        SPL/tempCodeRunnerFile.c
        SPL/test.c
        SPL/Untitled1.c
        SPL/Untitled2.c
        files.c)
