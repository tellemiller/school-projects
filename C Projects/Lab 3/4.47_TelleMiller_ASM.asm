; ASM for bubble_sort method in C file
bubble_sort(int*, int): ; Method header
        push    rbp ; Setting up method header
        mov     rbp, rsp
        mov     QWORD PTR [rbp-24], rdi
        mov     DWORD PTR [rbp-28], esi
        mov     DWORD PTR [rbp-4], 0 ; Creating line 8 for loop
.L6:
        mov     eax, DWORD PTR [rbp-4] ; Initial for loop set up
        cmp     eax, DWORD PTR [rbp-28]
        jge     .L7
        mov     eax, DWORD PTR [rbp-4] ; Second for loop set up
        add     eax, 1
        mov     DWORD PTR [rbp-8], eax
.L5:
        mov     eax, DWORD PTR [rbp-8] ; Comparison if statement
        cmp     eax, DWORD PTR [rbp-28] 
        jge     .L3
        mov     eax, DWORD PTR [rbp-8] 
        cdqe
        lea     rdx, [0+rax*4]
        mov     rax, QWORD PTR [rbp-24]
        add     rax, rdx
        mov     edx, DWORD PTR [rax]
        mov     eax, DWORD PTR [rbp-4]
        cdqe
        lea     rcx, [0+rax*4]
        mov     rax, QWORD PTR [rbp-24]
        add     rax, rcx
        mov     eax, DWORD PTR [rax]
        cmp     edx, eax
        jge     .L4
        mov     eax, DWORD PTR [rbp-4] ; Assigning pointer to t variable
        cdqe
        lea     rdx, [0+rax*4]
        mov     rax, QWORD PTR [rbp-24]
        add     rax, rdx
        mov     eax, DWORD PTR [rax]
        mov     DWORD PTR [rbp-12], eax
        mov     eax, DWORD PTR [rbp-8] ; Statement to swap position 2 and position 1
        cdqe
        lea     rdx, [0+rax*4]
        mov     rax, QWORD PTR [rbp-24]
        add     rax, rdx
        mov     edx, DWORD PTR [rbp-4]
        movsx   rdx, edx
        lea     rcx, [0+rdx*4]
        mov     rdx, QWORD PTR [rbp-24]
        add     rdx, rcx
        mov     eax, DWORD PTR [rax]
        mov     DWORD PTR [rdx], eax
        mov     eax, DWORD PTR [rbp-8] ; Swapping temp into position 2
        cdqe
        lea     rdx, [0+rax*4]
        mov     rax, QWORD PTR [rbp-24]
        add     rdx, rax
        mov     eax, DWORD PTR [rbp-12]
        mov     DWORD PTR [rdx], eax
.L4:
        add     DWORD PTR [rbp-8], 1 ; Ending second for loop
        jmp     .L5
.L3:
        add     DWORD PTR [rbp-4], 1 ; Ending first for loop
        jmp     .L6
.L7:
        nop ; Ending method
        pop     rbp
        ret