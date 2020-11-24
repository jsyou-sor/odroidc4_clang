	.text
	.file	"bounds.c"
	.globl	main                    // -- Begin function main
	.p2align	2
	.type	main,@function
main:                                   // @main
// %bb.0:                               // %entry
	stp	x29, x30, [sp, #-16]!   // 16-byte Folded Spill
	mov	x29, sp
	bl	_mcount
	//APP
	
.ascii "->NR_PAGEFLAGS 22 __NR_PAGEFLAGS"
	//NO_APP
	//APP
	
.ascii "->MAX_NR_ZONES 3 __MAX_NR_ZONES"
	//NO_APP
	//APP
	
.ascii "->NR_CPUS_BITS 3 ilog2(CONFIG_NR_CPUS)"
	//NO_APP
	//APP
	
.ascii "->SPINLOCK_SIZE 4 sizeof(spinlock_t)"
	//NO_APP
	mov	w0, wzr
	ldp	x29, x30, [sp], #16     // 16-byte Folded Reload
	ret
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
                                        // -- End function

	.ident	"clang version 10.0.0 (https://github.com/jiwon6833/clang.git aa231e4be75ac4759c236b755c57876f76e3cf05) (https://github.com/jiwon6833/llvm.git fca6abf6d22f2b0c27450ad8ab157485cb7bb5f9)"
	.section	".note.GNU-stack","",@progbits
