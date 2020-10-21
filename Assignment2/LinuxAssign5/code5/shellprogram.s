	.file	"shellprogram.c"
	.text
	.section	.rodata
.LC0:
	.string	"s.out"
.LC1:
	.string	"fork"
.LC2:
	.string	"sample.cpp"
.LC3:
	.string	"-c"
.LC4:
	.string	"g++"
.LC5:
	.string	"/bin/g++"
.LC6:
	.string	"-o"
.LC7:
	.string	"sample.o"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	call	fork@PLT
	movl	%eax, -28(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, -24(%rbp)
	cmpl	$0, -28(%rbp)
	jns	.L2
	leaq	.LC1(%rip), %rdi
	call	perror@PLT
	movl	$1, %edi
	call	exit@PLT
.L2:
	cmpl	$0, -28(%rbp)
	jne	.L3
	movl	$0, %r8d
	leaq	.LC2(%rip), %rcx
	leaq	.LC3(%rip), %rdx
	leaq	.LC4(%rip), %rsi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	execl@PLT
	jmp	.L4
.L3:
	leaq	-32(%rbp), %rcx
	movl	-28(%rbp), %eax
	movl	$0, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	waitpid@PLT
	movq	-16(%rbp), %rax
	movl	$0, %r9d
	movq	%rax, %r8
	leaq	.LC6(%rip), %rcx
	leaq	.LC7(%rip), %rdx
	leaq	.LC4(%rip), %rsi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	execl@PLT
.L4:
	movl	$0, %edi
	call	exit@PLT
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
