	.file	"2.2.cpp"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
#NO_APP
	.section	.text._ZNKSt5ctypeIcE8do_widenEc,"axG",@progbits,_ZNKSt5ctypeIcE8do_widenEc,comdat
	.align 2
	.p2align 4
	.weak	_ZNKSt5ctypeIcE8do_widenEc
	.type	_ZNKSt5ctypeIcE8do_widenEc, @function
_ZNKSt5ctypeIcE8do_widenEc:
.LFB1810:
	.cfi_startproc
	endbr64
	movl	%esi, %eax
	ret
	.cfi_endproc
.LFE1810:
	.size	_ZNKSt5ctypeIcE8do_widenEc, .-_ZNKSt5ctypeIcE8do_widenEc
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	" Enter N: "
.LC1:
	.string	"cnt: "
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB2057:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	leaq	_ZSt4cout(%rip), %rbp
	leaq	.LC0(%rip), %rsi
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	movq	%rbp, %rdi
	subq	$24, %rsp
	.cfi_def_cfa_offset 48
	movq	%fs:40, %rax
	movq	%rax, 8(%rsp)
	xorl	%eax, %eax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	4(%rsp), %rsi
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSirsERi@PLT
	movl	4(%rsp), %edx
	testl	%edx, %edx
	jle	.L11
	movl	%edx, %ecx
	xorl	%ebx, %ebx
	xorl	%eax, %eax
	imull	%edx, %ecx
	testb	$1, %dl
	je	.L5
	movl	%ecx, %ebx
	movl	$1, %eax
	cmpl	$1, %edx
	je	.L4
.L5:
	addl	$2, %eax
	leal	(%rbx,%rcx,2), %ebx
	cmpl	%eax, %edx
	jne	.L5
.L4:
	movq	%rbp, %rdi
	leaq	.LC1(%rip), %rsi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi@PLT
	movq	%rax, %rbp
	movq	(%rax), %rax
	movq	-24(%rax), %rax
	movq	240(%rbp,%rax), %rbx
	testq	%rbx, %rbx
	je	.L21
	cmpb	$0, 56(%rbx)
	je	.L8
	movzbl	67(%rbx), %eax
.L9:
	movq	%rbp, %rdi
	movsbl	%al, %esi
	call	_ZNSo3putEc@PLT
	movq	%rax, %rdi
	call	_ZNSo5flushEv@PLT
	movq	8(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L20
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
.L8:
	.cfi_restore_state
	movq	%rbx, %rdi
	call	_ZNKSt5ctypeIcE13_M_widen_initEv@PLT
	movq	(%rbx), %rax
	leaq	_ZNKSt5ctypeIcE8do_widenEc(%rip), %rcx
	movq	48(%rax), %rdx
	movl	$10, %eax
	cmpq	%rcx, %rdx
	je	.L9
	movl	$10, %esi
	movq	%rbx, %rdi
	call	*%rdx
	jmp	.L9
.L11:
	xorl	%ebx, %ebx
	jmp	.L4
.L20:
	call	__stack_chk_fail@PLT
.L21:
	movq	8(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L20
	call	_ZSt16__throw_bad_castv@PLT
	.cfi_endproc
.LFE2057:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
