	.file	"2.2.cpp"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	" Enter N: "
.LC1:
	.string	"cnt: "
#NO_APP
	.text
	.globl	main
	.type	main, @function
main:
.LFB2057:
	.cfi_startproc
	endbr64
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	subq	$16, %rsp
	.cfi_def_cfa_offset 32
	movq	%fs:40, %rax
	movq	%rax, 8(%rsp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	4(%rsp), %rsi
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSirsERi@PLT
	movl	4(%rsp), %edx
	testl	%edx, %edx
	jle	.L8
	movl	$0, %ebx
	movl	$0, %esi
	movl	%edx, %edi
	imull	%edx, %edi
.L3:
	movl	$0, %ecx
.L6:
	movl	$0, %eax
.L4:
	addl	$1, %eax
	cmpl	%edx, %eax
	jne	.L4
	addl	$1, %ecx
	cmpl	%edx, %ecx
	jne	.L6
	addl	%edi, %ebx
	addl	$1, %esi
	cmpl	%edx, %esi
	jne	.L3
.L2:
	leaq	.LC1(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	movl	%ebx, %esi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	movq	8(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L11
	movl	$0, %eax
	addq	$16, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 16
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
.L8:
	.cfi_restore_state
	movl	$0, %ebx
	jmp	.L2
.L11:
	call	__stack_chk_fail@PLT
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
