const char vf_scale_cuda_ptx[] = \
	"//\n"
	"// Generated by NVIDIA NVVM Compiler\n"
	"//\n"
	"// Compiler Build ID: CL-26907403\n"
	"// Cuda compilation tools, release 10.1, V10.1.243\n"
	"// Based on LLVM 3.4svn\n"
	"//\n"
	"\n"
	".version 6.4\n"
	".target sm_30\n"
	".address_size 64\n"
	"\n"
	"	// .globl	Subsample_Nearest_uchar\n"
	"\n"
	".visible .entry Subsample_Nearest_uchar(\n"
	"	.param .u64 Subsample_Nearest_uchar_param_0,\n"
	"	.param .u64 Subsample_Nearest_uchar_param_1,\n"
	"	.param .u32 Subsample_Nearest_uchar_param_2,\n"
	"	.param .u32 Subsample_Nearest_uchar_param_3,\n"
	"	.param .u32 Subsample_Nearest_uchar_param_4,\n"
	"	.param .u32 Subsample_Nearest_uchar_param_5,\n"
	"	.param .u32 Subsample_Nearest_uchar_param_6,\n"
	"	.param .u32 Subsample_Nearest_uchar_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .f32 	%f<13>;\n"
	"	.reg .b32 	%r<19>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Nearest_uchar_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Nearest_uchar_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Nearest_uchar_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Nearest_uchar_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Nearest_uchar_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Nearest_uchar_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Nearest_uchar_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB0_2;\n"
	"\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	cvt.rn.f32.s32	%f1, %r3;\n"
	"	cvt.rn.f32.s32	%f2, %r6;\n"
	"	div.rn.f32 	%f3, %f2, %f1;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	tex.2d.v4.u32.f32	{%r14, %r15, %r16, %r17}, [%rd1, {%f9, %f12}];\n"
	"	mad.lo.s32 	%r18, %r2, %r5, %r1;\n"
	"	cvt.s64.s32	%rd4, %r18;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	st.global.u8 	[%rd5], %r14;\n"
	"\n"
	"BB0_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"	// .globl	Subsample_Nearest_uchar2\n"
	".visible .entry Subsample_Nearest_uchar2(\n"
	"	.param .u64 Subsample_Nearest_uchar2_param_0,\n"
	"	.param .u64 Subsample_Nearest_uchar2_param_1,\n"
	"	.param .u32 Subsample_Nearest_uchar2_param_2,\n"
	"	.param .u32 Subsample_Nearest_uchar2_param_3,\n"
	"	.param .u32 Subsample_Nearest_uchar2_param_4,\n"
	"	.param .u32 Subsample_Nearest_uchar2_param_5,\n"
	"	.param .u32 Subsample_Nearest_uchar2_param_6,\n"
	"	.param .u32 Subsample_Nearest_uchar2_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .b16 	%rs<3>;\n"
	"	.reg .f32 	%f<13>;\n"
	"	.reg .b32 	%r<19>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Nearest_uchar2_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Nearest_uchar2_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Nearest_uchar2_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Nearest_uchar2_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Nearest_uchar2_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Nearest_uchar2_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Nearest_uchar2_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB1_2;\n"
	"\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	cvt.rn.f32.s32	%f1, %r3;\n"
	"	cvt.rn.f32.s32	%f2, %r6;\n"
	"	div.rn.f32 	%f3, %f2, %f1;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	mad.lo.s32 	%r14, %r2, %r5, %r1;\n"
	"	tex.2d.v4.u32.f32	{%r15, %r16, %r17, %r18}, [%rd1, {%f9, %f12}];\n"
	"	mul.wide.s32 	%rd4, %r14, 2;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	cvt.u16.u32	%rs1, %r16;\n"
	"	cvt.u16.u32	%rs2, %r15;\n"
	"	st.global.v2.u8 	[%rd5], {%rs2, %rs1};\n"
	"\n"
	"BB1_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"	// .globl	Subsample_Nearest_uchar4\n"
	".visible .entry Subsample_Nearest_uchar4(\n"
	"	.param .u64 Subsample_Nearest_uchar4_param_0,\n"
	"	.param .u64 Subsample_Nearest_uchar4_param_1,\n"
	"	.param .u32 Subsample_Nearest_uchar4_param_2,\n"
	"	.param .u32 Subsample_Nearest_uchar4_param_3,\n"
	"	.param .u32 Subsample_Nearest_uchar4_param_4,\n"
	"	.param .u32 Subsample_Nearest_uchar4_param_5,\n"
	"	.param .u32 Subsample_Nearest_uchar4_param_6,\n"
	"	.param .u32 Subsample_Nearest_uchar4_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .b16 	%rs<5>;\n"
	"	.reg .f32 	%f<13>;\n"
	"	.reg .b32 	%r<19>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Nearest_uchar4_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Nearest_uchar4_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Nearest_uchar4_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Nearest_uchar4_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Nearest_uchar4_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Nearest_uchar4_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Nearest_uchar4_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB2_2;\n"
	"\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	cvt.rn.f32.s32	%f1, %r3;\n"
	"	cvt.rn.f32.s32	%f2, %r6;\n"
	"	div.rn.f32 	%f3, %f2, %f1;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	mad.lo.s32 	%r14, %r2, %r5, %r1;\n"
	"	tex.2d.v4.u32.f32	{%r15, %r16, %r17, %r18}, [%rd1, {%f9, %f12}];\n"
	"	mul.wide.s32 	%rd4, %r14, 4;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	cvt.u16.u32	%rs1, %r18;\n"
	"	cvt.u16.u32	%rs2, %r17;\n"
	"	cvt.u16.u32	%rs3, %r16;\n"
	"	cvt.u16.u32	%rs4, %r15;\n"
	"	st.global.v4.u8 	[%rd5], {%rs4, %rs3, %rs2, %rs1};\n"
	"\n"
	"BB2_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"	// .globl	Subsample_Nearest_ushort\n"
	".visible .entry Subsample_Nearest_ushort(\n"
	"	.param .u64 Subsample_Nearest_ushort_param_0,\n"
	"	.param .u64 Subsample_Nearest_ushort_param_1,\n"
	"	.param .u32 Subsample_Nearest_ushort_param_2,\n"
	"	.param .u32 Subsample_Nearest_ushort_param_3,\n"
	"	.param .u32 Subsample_Nearest_ushort_param_4,\n"
	"	.param .u32 Subsample_Nearest_ushort_param_5,\n"
	"	.param .u32 Subsample_Nearest_ushort_param_6,\n"
	"	.param .u32 Subsample_Nearest_ushort_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .f32 	%f<13>;\n"
	"	.reg .b32 	%r<19>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Nearest_ushort_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Nearest_ushort_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Nearest_ushort_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Nearest_ushort_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Nearest_ushort_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Nearest_ushort_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Nearest_ushort_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB3_2;\n"
	"\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	cvt.rn.f32.s32	%f1, %r3;\n"
	"	cvt.rn.f32.s32	%f2, %r6;\n"
	"	div.rn.f32 	%f3, %f2, %f1;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	tex.2d.v4.u32.f32	{%r14, %r15, %r16, %r17}, [%rd1, {%f9, %f12}];\n"
	"	mad.lo.s32 	%r18, %r2, %r5, %r1;\n"
	"	mul.wide.s32 	%rd4, %r18, 2;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	st.global.u16 	[%rd5], %r14;\n"
	"\n"
	"BB3_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"	// .globl	Subsample_Nearest_ushort2\n"
	".visible .entry Subsample_Nearest_ushort2(\n"
	"	.param .u64 Subsample_Nearest_ushort2_param_0,\n"
	"	.param .u64 Subsample_Nearest_ushort2_param_1,\n"
	"	.param .u32 Subsample_Nearest_ushort2_param_2,\n"
	"	.param .u32 Subsample_Nearest_ushort2_param_3,\n"
	"	.param .u32 Subsample_Nearest_ushort2_param_4,\n"
	"	.param .u32 Subsample_Nearest_ushort2_param_5,\n"
	"	.param .u32 Subsample_Nearest_ushort2_param_6,\n"
	"	.param .u32 Subsample_Nearest_ushort2_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .b16 	%rs<3>;\n"
	"	.reg .f32 	%f<13>;\n"
	"	.reg .b32 	%r<19>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Nearest_ushort2_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Nearest_ushort2_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Nearest_ushort2_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Nearest_ushort2_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Nearest_ushort2_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Nearest_ushort2_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Nearest_ushort2_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB4_2;\n"
	"\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	cvt.rn.f32.s32	%f1, %r3;\n"
	"	cvt.rn.f32.s32	%f2, %r6;\n"
	"	div.rn.f32 	%f3, %f2, %f1;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	mad.lo.s32 	%r14, %r2, %r5, %r1;\n"
	"	tex.2d.v4.u32.f32	{%r15, %r16, %r17, %r18}, [%rd1, {%f9, %f12}];\n"
	"	mul.wide.s32 	%rd4, %r14, 4;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	cvt.u16.u32	%rs1, %r16;\n"
	"	cvt.u16.u32	%rs2, %r15;\n"
	"	st.global.v2.u16 	[%rd5], {%rs2, %rs1};\n"
	"\n"
	"BB4_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"	// .globl	Subsample_Nearest_ushort4\n"
	".visible .entry Subsample_Nearest_ushort4(\n"
	"	.param .u64 Subsample_Nearest_ushort4_param_0,\n"
	"	.param .u64 Subsample_Nearest_ushort4_param_1,\n"
	"	.param .u32 Subsample_Nearest_ushort4_param_2,\n"
	"	.param .u32 Subsample_Nearest_ushort4_param_3,\n"
	"	.param .u32 Subsample_Nearest_ushort4_param_4,\n"
	"	.param .u32 Subsample_Nearest_ushort4_param_5,\n"
	"	.param .u32 Subsample_Nearest_ushort4_param_6,\n"
	"	.param .u32 Subsample_Nearest_ushort4_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .b16 	%rs<5>;\n"
	"	.reg .f32 	%f<13>;\n"
	"	.reg .b32 	%r<19>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Nearest_ushort4_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Nearest_ushort4_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Nearest_ushort4_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Nearest_ushort4_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Nearest_ushort4_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Nearest_ushort4_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Nearest_ushort4_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB5_2;\n"
	"\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	cvt.rn.f32.s32	%f1, %r3;\n"
	"	cvt.rn.f32.s32	%f2, %r6;\n"
	"	div.rn.f32 	%f3, %f2, %f1;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	mad.lo.s32 	%r14, %r2, %r5, %r1;\n"
	"	tex.2d.v4.u32.f32	{%r15, %r16, %r17, %r18}, [%rd1, {%f9, %f12}];\n"
	"	mul.wide.s32 	%rd4, %r14, 8;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	cvt.u16.u32	%rs1, %r18;\n"
	"	cvt.u16.u32	%rs2, %r17;\n"
	"	cvt.u16.u32	%rs3, %r16;\n"
	"	cvt.u16.u32	%rs4, %r15;\n"
	"	st.global.v4.u16 	[%rd5], {%rs4, %rs3, %rs2, %rs1};\n"
	"\n"
	"BB5_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"	// .globl	Subsample_Bilinear_uchar\n"
	".visible .entry Subsample_Bilinear_uchar(\n"
	"	.param .u64 Subsample_Bilinear_uchar_param_0,\n"
	"	.param .u64 Subsample_Bilinear_uchar_param_1,\n"
	"	.param .u32 Subsample_Bilinear_uchar_param_2,\n"
	"	.param .u32 Subsample_Bilinear_uchar_param_3,\n"
	"	.param .u32 Subsample_Bilinear_uchar_param_4,\n"
	"	.param .u32 Subsample_Bilinear_uchar_param_5,\n"
	"	.param .u32 Subsample_Bilinear_uchar_param_6,\n"
	"	.param .u32 Subsample_Bilinear_uchar_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .f32 	%f<27>;\n"
	"	.reg .b32 	%r<40>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Bilinear_uchar_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Bilinear_uchar_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Bilinear_uchar_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Bilinear_uchar_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Bilinear_uchar_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Bilinear_uchar_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Bilinear_uchar_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB6_2;\n"
	"\n"
	"	cvt.rn.f32.s32	%f1, %r6;\n"
	"	cvt.rn.f32.s32	%f2, %r3;\n"
	"	div.rn.f32 	%f3, %f1, %f2;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	add.f32 	%f13, %f3, 0fBF800000;\n"
	"	mul.f32 	%f14, %f13, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f15, %f14;\n"
	"	add.f32 	%f16, %f6, 0fBF800000;\n"
	"	mul.f32 	%f17, %f16, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f18, %f17;\n"
	"	add.f32 	%f19, %f15, 0f3F000000;\n"
	"	div.rn.f32 	%f20, %f15, %f19;\n"
	"	add.f32 	%f21, %f18, 0f3F000000;\n"
	"	div.rn.f32 	%f22, %f18, %f21;\n"
	"	sub.f32 	%f23, %f9, %f20;\n"
	"	sub.f32 	%f24, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r14, %r15, %r16, %r17}, [%rd1, {%f23, %f24}];\n"
	"	and.b32  	%r18, %r14, 255;\n"
	"	add.f32 	%f25, %f9, %f20;\n"
	"	tex.2d.v4.u32.f32	{%r19, %r20, %r21, %r22}, [%rd1, {%f25, %f24}];\n"
	"	and.b32  	%r23, %r19, 255;\n"
	"	add.s32 	%r24, %r18, %r23;\n"
	"	add.f32 	%f26, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r25, %r26, %r27, %r28}, [%rd1, {%f23, %f26}];\n"
	"	and.b32  	%r29, %r25, 255;\n"
	"	add.s32 	%r30, %r24, %r29;\n"
	"	tex.2d.v4.u32.f32	{%r31, %r32, %r33, %r34}, [%rd1, {%f25, %f26}];\n"
	"	and.b32  	%r35, %r31, 255;\n"
	"	add.s32 	%r36, %r30, %r35;\n"
	"	add.s32 	%r37, %r36, 2;\n"
	"	mad.lo.s32 	%r38, %r2, %r5, %r1;\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	cvt.s64.s32	%rd4, %r38;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	shr.u32 	%r39, %r37, 2;\n"
	"	st.global.u8 	[%rd5], %r39;\n"
	"\n"
	"BB6_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"	// .globl	Subsample_Bilinear_uchar2\n"
	".visible .entry Subsample_Bilinear_uchar2(\n"
	"	.param .u64 Subsample_Bilinear_uchar2_param_0,\n"
	"	.param .u64 Subsample_Bilinear_uchar2_param_1,\n"
	"	.param .u32 Subsample_Bilinear_uchar2_param_2,\n"
	"	.param .u32 Subsample_Bilinear_uchar2_param_3,\n"
	"	.param .u32 Subsample_Bilinear_uchar2_param_4,\n"
	"	.param .u32 Subsample_Bilinear_uchar2_param_5,\n"
	"	.param .u32 Subsample_Bilinear_uchar2_param_6,\n"
	"	.param .u32 Subsample_Bilinear_uchar2_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .b16 	%rs<3>;\n"
	"	.reg .f32 	%f<27>;\n"
	"	.reg .b32 	%r<49>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Bilinear_uchar2_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Bilinear_uchar2_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Bilinear_uchar2_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Bilinear_uchar2_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Bilinear_uchar2_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Bilinear_uchar2_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Bilinear_uchar2_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB7_2;\n"
	"\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	cvt.rn.f32.s32	%f1, %r3;\n"
	"	cvt.rn.f32.s32	%f2, %r6;\n"
	"	div.rn.f32 	%f3, %f2, %f1;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	add.f32 	%f13, %f3, 0fBF800000;\n"
	"	mul.f32 	%f14, %f13, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f15, %f14;\n"
	"	add.f32 	%f16, %f6, 0fBF800000;\n"
	"	mul.f32 	%f17, %f16, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f18, %f17;\n"
	"	add.f32 	%f19, %f15, 0f3F000000;\n"
	"	div.rn.f32 	%f20, %f15, %f19;\n"
	"	add.f32 	%f21, %f18, 0f3F000000;\n"
	"	div.rn.f32 	%f22, %f18, %f21;\n"
	"	sub.f32 	%f23, %f9, %f20;\n"
	"	sub.f32 	%f24, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r14, %r15, %r16, %r17}, [%rd1, {%f23, %f24}];\n"
	"	and.b32  	%r18, %r14, 255;\n"
	"	add.f32 	%f25, %f9, %f20;\n"
	"	tex.2d.v4.u32.f32	{%r19, %r20, %r21, %r22}, [%rd1, {%f25, %f24}];\n"
	"	and.b32  	%r23, %r19, 255;\n"
	"	add.s32 	%r24, %r18, %r23;\n"
	"	and.b32  	%r25, %r15, 255;\n"
	"	and.b32  	%r26, %r20, 255;\n"
	"	add.s32 	%r27, %r25, %r26;\n"
	"	add.f32 	%f26, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r28, %r29, %r30, %r31}, [%rd1, {%f23, %f26}];\n"
	"	and.b32  	%r32, %r28, 255;\n"
	"	add.s32 	%r33, %r24, %r32;\n"
	"	and.b32  	%r34, %r29, 255;\n"
	"	add.s32 	%r35, %r27, %r34;\n"
	"	tex.2d.v4.u32.f32	{%r36, %r37, %r38, %r39}, [%rd1, {%f25, %f26}];\n"
	"	and.b32  	%r40, %r36, 255;\n"
	"	add.s32 	%r41, %r33, %r40;\n"
	"	and.b32  	%r42, %r37, 255;\n"
	"	add.s32 	%r43, %r35, %r42;\n"
	"	add.s32 	%r44, %r41, 2;\n"
	"	add.s32 	%r45, %r43, 2;\n"
	"	mad.lo.s32 	%r46, %r2, %r5, %r1;\n"
	"	shr.u32 	%r47, %r44, 2;\n"
	"	shr.u32 	%r48, %r45, 2;\n"
	"	mul.wide.s32 	%rd4, %r46, 2;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	cvt.u16.u32	%rs1, %r48;\n"
	"	cvt.u16.u32	%rs2, %r47;\n"
	"	st.global.v2.u8 	[%rd5], {%rs2, %rs1};\n"
	"\n"
	"BB7_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"	// .globl	Subsample_Bilinear_uchar4\n"
	".visible .entry Subsample_Bilinear_uchar4(\n"
	"	.param .u64 Subsample_Bilinear_uchar4_param_0,\n"
	"	.param .u64 Subsample_Bilinear_uchar4_param_1,\n"
	"	.param .u32 Subsample_Bilinear_uchar4_param_2,\n"
	"	.param .u32 Subsample_Bilinear_uchar4_param_3,\n"
	"	.param .u32 Subsample_Bilinear_uchar4_param_4,\n"
	"	.param .u32 Subsample_Bilinear_uchar4_param_5,\n"
	"	.param .u32 Subsample_Bilinear_uchar4_param_6,\n"
	"	.param .u32 Subsample_Bilinear_uchar4_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .b16 	%rs<5>;\n"
	"	.reg .f32 	%f<27>;\n"
	"	.reg .b32 	%r<67>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Bilinear_uchar4_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Bilinear_uchar4_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Bilinear_uchar4_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Bilinear_uchar4_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Bilinear_uchar4_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Bilinear_uchar4_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Bilinear_uchar4_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB8_2;\n"
	"\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	cvt.rn.f32.s32	%f1, %r3;\n"
	"	cvt.rn.f32.s32	%f2, %r6;\n"
	"	div.rn.f32 	%f3, %f2, %f1;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	add.f32 	%f13, %f3, 0fBF800000;\n"
	"	mul.f32 	%f14, %f13, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f15, %f14;\n"
	"	add.f32 	%f16, %f6, 0fBF800000;\n"
	"	mul.f32 	%f17, %f16, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f18, %f17;\n"
	"	add.f32 	%f19, %f15, 0f3F000000;\n"
	"	div.rn.f32 	%f20, %f15, %f19;\n"
	"	add.f32 	%f21, %f18, 0f3F000000;\n"
	"	div.rn.f32 	%f22, %f18, %f21;\n"
	"	sub.f32 	%f23, %f9, %f20;\n"
	"	sub.f32 	%f24, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r14, %r15, %r16, %r17}, [%rd1, {%f23, %f24}];\n"
	"	and.b32  	%r18, %r14, 255;\n"
	"	add.f32 	%f25, %f9, %f20;\n"
	"	tex.2d.v4.u32.f32	{%r19, %r20, %r21, %r22}, [%rd1, {%f25, %f24}];\n"
	"	and.b32  	%r23, %r19, 255;\n"
	"	add.s32 	%r24, %r18, %r23;\n"
	"	and.b32  	%r25, %r15, 255;\n"
	"	and.b32  	%r26, %r20, 255;\n"
	"	add.s32 	%r27, %r25, %r26;\n"
	"	and.b32  	%r28, %r16, 255;\n"
	"	and.b32  	%r29, %r21, 255;\n"
	"	add.s32 	%r30, %r28, %r29;\n"
	"	and.b32  	%r31, %r17, 255;\n"
	"	and.b32  	%r32, %r22, 255;\n"
	"	add.s32 	%r33, %r31, %r32;\n"
	"	add.f32 	%f26, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r34, %r35, %r36, %r37}, [%rd1, {%f23, %f26}];\n"
	"	and.b32  	%r38, %r34, 255;\n"
	"	add.s32 	%r39, %r24, %r38;\n"
	"	and.b32  	%r40, %r35, 255;\n"
	"	add.s32 	%r41, %r27, %r40;\n"
	"	and.b32  	%r42, %r36, 255;\n"
	"	add.s32 	%r43, %r30, %r42;\n"
	"	and.b32  	%r44, %r37, 255;\n"
	"	add.s32 	%r45, %r33, %r44;\n"
	"	tex.2d.v4.u32.f32	{%r46, %r47, %r48, %r49}, [%rd1, {%f25, %f26}];\n"
	"	and.b32  	%r50, %r46, 255;\n"
	"	add.s32 	%r51, %r39, %r50;\n"
	"	and.b32  	%r52, %r47, 255;\n"
	"	add.s32 	%r53, %r41, %r52;\n"
	"	and.b32  	%r54, %r48, 255;\n"
	"	add.s32 	%r55, %r43, %r54;\n"
	"	and.b32  	%r56, %r49, 255;\n"
	"	add.s32 	%r57, %r45, %r56;\n"
	"	add.s32 	%r58, %r51, 2;\n"
	"	add.s32 	%r59, %r53, 2;\n"
	"	add.s32 	%r60, %r55, 2;\n"
	"	add.s32 	%r61, %r57, 2;\n"
	"	mad.lo.s32 	%r62, %r2, %r5, %r1;\n"
	"	shr.u32 	%r63, %r58, 2;\n"
	"	shr.u32 	%r64, %r59, 2;\n"
	"	shr.u32 	%r65, %r60, 2;\n"
	"	shr.u32 	%r66, %r61, 2;\n"
	"	mul.wide.s32 	%rd4, %r62, 4;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	cvt.u16.u32	%rs1, %r66;\n"
	"	cvt.u16.u32	%rs2, %r65;\n"
	"	cvt.u16.u32	%rs3, %r64;\n"
	"	cvt.u16.u32	%rs4, %r63;\n"
	"	st.global.v4.u8 	[%rd5], {%rs4, %rs3, %rs2, %rs1};\n"
	"\n"
	"BB8_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"	// .globl	Subsample_Bilinear_ushort\n"
	".visible .entry Subsample_Bilinear_ushort(\n"
	"	.param .u64 Subsample_Bilinear_ushort_param_0,\n"
	"	.param .u64 Subsample_Bilinear_ushort_param_1,\n"
	"	.param .u32 Subsample_Bilinear_ushort_param_2,\n"
	"	.param .u32 Subsample_Bilinear_ushort_param_3,\n"
	"	.param .u32 Subsample_Bilinear_ushort_param_4,\n"
	"	.param .u32 Subsample_Bilinear_ushort_param_5,\n"
	"	.param .u32 Subsample_Bilinear_ushort_param_6,\n"
	"	.param .u32 Subsample_Bilinear_ushort_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .f32 	%f<27>;\n"
	"	.reg .b32 	%r<40>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Bilinear_ushort_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Bilinear_ushort_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Bilinear_ushort_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Bilinear_ushort_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Bilinear_ushort_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Bilinear_ushort_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Bilinear_ushort_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB9_2;\n"
	"\n"
	"	cvt.rn.f32.s32	%f1, %r6;\n"
	"	cvt.rn.f32.s32	%f2, %r3;\n"
	"	div.rn.f32 	%f3, %f1, %f2;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	add.f32 	%f13, %f3, 0fBF800000;\n"
	"	mul.f32 	%f14, %f13, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f15, %f14;\n"
	"	add.f32 	%f16, %f6, 0fBF800000;\n"
	"	mul.f32 	%f17, %f16, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f18, %f17;\n"
	"	add.f32 	%f19, %f15, 0f3F000000;\n"
	"	div.rn.f32 	%f20, %f15, %f19;\n"
	"	add.f32 	%f21, %f18, 0f3F000000;\n"
	"	div.rn.f32 	%f22, %f18, %f21;\n"
	"	sub.f32 	%f23, %f9, %f20;\n"
	"	sub.f32 	%f24, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r14, %r15, %r16, %r17}, [%rd1, {%f23, %f24}];\n"
	"	and.b32  	%r18, %r14, 65535;\n"
	"	add.f32 	%f25, %f9, %f20;\n"
	"	tex.2d.v4.u32.f32	{%r19, %r20, %r21, %r22}, [%rd1, {%f25, %f24}];\n"
	"	and.b32  	%r23, %r19, 65535;\n"
	"	add.s32 	%r24, %r18, %r23;\n"
	"	add.f32 	%f26, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r25, %r26, %r27, %r28}, [%rd1, {%f23, %f26}];\n"
	"	and.b32  	%r29, %r25, 65535;\n"
	"	add.s32 	%r30, %r24, %r29;\n"
	"	tex.2d.v4.u32.f32	{%r31, %r32, %r33, %r34}, [%rd1, {%f25, %f26}];\n"
	"	and.b32  	%r35, %r31, 65535;\n"
	"	add.s32 	%r36, %r30, %r35;\n"
	"	add.s32 	%r37, %r36, 2;\n"
	"	mad.lo.s32 	%r38, %r2, %r5, %r1;\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	mul.wide.s32 	%rd4, %r38, 2;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	shr.u32 	%r39, %r37, 2;\n"
	"	st.global.u16 	[%rd5], %r39;\n"
	"\n"
	"BB9_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"	// .globl	Subsample_Bilinear_ushort2\n"
	".visible .entry Subsample_Bilinear_ushort2(\n"
	"	.param .u64 Subsample_Bilinear_ushort2_param_0,\n"
	"	.param .u64 Subsample_Bilinear_ushort2_param_1,\n"
	"	.param .u32 Subsample_Bilinear_ushort2_param_2,\n"
	"	.param .u32 Subsample_Bilinear_ushort2_param_3,\n"
	"	.param .u32 Subsample_Bilinear_ushort2_param_4,\n"
	"	.param .u32 Subsample_Bilinear_ushort2_param_5,\n"
	"	.param .u32 Subsample_Bilinear_ushort2_param_6,\n"
	"	.param .u32 Subsample_Bilinear_ushort2_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .b16 	%rs<3>;\n"
	"	.reg .f32 	%f<27>;\n"
	"	.reg .b32 	%r<49>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Bilinear_ushort2_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Bilinear_ushort2_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Bilinear_ushort2_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Bilinear_ushort2_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Bilinear_ushort2_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Bilinear_ushort2_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Bilinear_ushort2_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB10_2;\n"
	"\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	cvt.rn.f32.s32	%f1, %r3;\n"
	"	cvt.rn.f32.s32	%f2, %r6;\n"
	"	div.rn.f32 	%f3, %f2, %f1;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	add.f32 	%f13, %f3, 0fBF800000;\n"
	"	mul.f32 	%f14, %f13, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f15, %f14;\n"
	"	add.f32 	%f16, %f6, 0fBF800000;\n"
	"	mul.f32 	%f17, %f16, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f18, %f17;\n"
	"	add.f32 	%f19, %f15, 0f3F000000;\n"
	"	div.rn.f32 	%f20, %f15, %f19;\n"
	"	add.f32 	%f21, %f18, 0f3F000000;\n"
	"	div.rn.f32 	%f22, %f18, %f21;\n"
	"	sub.f32 	%f23, %f9, %f20;\n"
	"	sub.f32 	%f24, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r14, %r15, %r16, %r17}, [%rd1, {%f23, %f24}];\n"
	"	and.b32  	%r18, %r14, 65535;\n"
	"	add.f32 	%f25, %f9, %f20;\n"
	"	tex.2d.v4.u32.f32	{%r19, %r20, %r21, %r22}, [%rd1, {%f25, %f24}];\n"
	"	and.b32  	%r23, %r19, 65535;\n"
	"	add.s32 	%r24, %r18, %r23;\n"
	"	and.b32  	%r25, %r15, 65535;\n"
	"	and.b32  	%r26, %r20, 65535;\n"
	"	add.s32 	%r27, %r25, %r26;\n"
	"	add.f32 	%f26, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r28, %r29, %r30, %r31}, [%rd1, {%f23, %f26}];\n"
	"	and.b32  	%r32, %r28, 65535;\n"
	"	add.s32 	%r33, %r24, %r32;\n"
	"	and.b32  	%r34, %r29, 65535;\n"
	"	add.s32 	%r35, %r27, %r34;\n"
	"	tex.2d.v4.u32.f32	{%r36, %r37, %r38, %r39}, [%rd1, {%f25, %f26}];\n"
	"	and.b32  	%r40, %r36, 65535;\n"
	"	add.s32 	%r41, %r33, %r40;\n"
	"	and.b32  	%r42, %r37, 65535;\n"
	"	add.s32 	%r43, %r35, %r42;\n"
	"	add.s32 	%r44, %r41, 2;\n"
	"	add.s32 	%r45, %r43, 2;\n"
	"	mad.lo.s32 	%r46, %r2, %r5, %r1;\n"
	"	shr.u32 	%r47, %r44, 2;\n"
	"	shr.u32 	%r48, %r45, 2;\n"
	"	mul.wide.s32 	%rd4, %r46, 4;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	cvt.u16.u32	%rs1, %r48;\n"
	"	cvt.u16.u32	%rs2, %r47;\n"
	"	st.global.v2.u16 	[%rd5], {%rs2, %rs1};\n"
	"\n"
	"BB10_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"	// .globl	Subsample_Bilinear_ushort4\n"
	".visible .entry Subsample_Bilinear_ushort4(\n"
	"	.param .u64 Subsample_Bilinear_ushort4_param_0,\n"
	"	.param .u64 Subsample_Bilinear_ushort4_param_1,\n"
	"	.param .u32 Subsample_Bilinear_ushort4_param_2,\n"
	"	.param .u32 Subsample_Bilinear_ushort4_param_3,\n"
	"	.param .u32 Subsample_Bilinear_ushort4_param_4,\n"
	"	.param .u32 Subsample_Bilinear_ushort4_param_5,\n"
	"	.param .u32 Subsample_Bilinear_ushort4_param_6,\n"
	"	.param .u32 Subsample_Bilinear_ushort4_param_7\n"
	")\n"
	"{\n"
	"	.reg .pred 	%p<4>;\n"
	"	.reg .b16 	%rs<5>;\n"
	"	.reg .f32 	%f<27>;\n"
	"	.reg .b32 	%r<67>;\n"
	"	.reg .b64 	%rd<6>;\n"
	"\n"
	"\n"
	"	ld.param.u64 	%rd1, [Subsample_Bilinear_ushort4_param_0];\n"
	"	ld.param.u64 	%rd2, [Subsample_Bilinear_ushort4_param_1];\n"
	"	ld.param.u32 	%r3, [Subsample_Bilinear_ushort4_param_2];\n"
	"	ld.param.u32 	%r4, [Subsample_Bilinear_ushort4_param_3];\n"
	"	ld.param.u32 	%r5, [Subsample_Bilinear_ushort4_param_4];\n"
	"	ld.param.u32 	%r6, [Subsample_Bilinear_ushort4_param_5];\n"
	"	ld.param.u32 	%r7, [Subsample_Bilinear_ushort4_param_6];\n"
	"	mov.u32 	%r8, %ctaid.x;\n"
	"	mov.u32 	%r9, %ntid.x;\n"
	"	mov.u32 	%r10, %tid.x;\n"
	"	mad.lo.s32 	%r1, %r9, %r8, %r10;\n"
	"	mov.u32 	%r11, %ntid.y;\n"
	"	mov.u32 	%r12, %ctaid.y;\n"
	"	mov.u32 	%r13, %tid.y;\n"
	"	mad.lo.s32 	%r2, %r11, %r12, %r13;\n"
	"	setp.ge.s32	%p1, %r2, %r4;\n"
	"	setp.ge.s32	%p2, %r1, %r3;\n"
	"	or.pred  	%p3, %p1, %p2;\n"
	"	@%p3 bra 	BB11_2;\n"
	"\n"
	"	cvta.to.global.u64 	%rd3, %rd2;\n"
	"	cvt.rn.f32.s32	%f1, %r3;\n"
	"	cvt.rn.f32.s32	%f2, %r6;\n"
	"	div.rn.f32 	%f3, %f2, %f1;\n"
	"	cvt.rn.f32.s32	%f4, %r4;\n"
	"	cvt.rn.f32.s32	%f5, %r7;\n"
	"	div.rn.f32 	%f6, %f5, %f4;\n"
	"	cvt.rn.f32.s32	%f7, %r1;\n"
	"	add.f32 	%f8, %f7, 0f3F000000;\n"
	"	mul.f32 	%f9, %f8, %f3;\n"
	"	cvt.rn.f32.s32	%f10, %r2;\n"
	"	add.f32 	%f11, %f10, 0f3F000000;\n"
	"	mul.f32 	%f12, %f11, %f6;\n"
	"	add.f32 	%f13, %f3, 0fBF800000;\n"
	"	mul.f32 	%f14, %f13, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f15, %f14;\n"
	"	add.f32 	%f16, %f6, 0fBF800000;\n"
	"	mul.f32 	%f17, %f16, 0f3F000000;\n"
	"	cvt.sat.f32.f32	%f18, %f17;\n"
	"	add.f32 	%f19, %f15, 0f3F000000;\n"
	"	div.rn.f32 	%f20, %f15, %f19;\n"
	"	add.f32 	%f21, %f18, 0f3F000000;\n"
	"	div.rn.f32 	%f22, %f18, %f21;\n"
	"	sub.f32 	%f23, %f9, %f20;\n"
	"	sub.f32 	%f24, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r14, %r15, %r16, %r17}, [%rd1, {%f23, %f24}];\n"
	"	and.b32  	%r18, %r14, 65535;\n"
	"	add.f32 	%f25, %f9, %f20;\n"
	"	tex.2d.v4.u32.f32	{%r19, %r20, %r21, %r22}, [%rd1, {%f25, %f24}];\n"
	"	and.b32  	%r23, %r19, 65535;\n"
	"	add.s32 	%r24, %r18, %r23;\n"
	"	and.b32  	%r25, %r15, 65535;\n"
	"	and.b32  	%r26, %r20, 65535;\n"
	"	add.s32 	%r27, %r25, %r26;\n"
	"	and.b32  	%r28, %r16, 65535;\n"
	"	and.b32  	%r29, %r21, 65535;\n"
	"	add.s32 	%r30, %r28, %r29;\n"
	"	and.b32  	%r31, %r17, 65535;\n"
	"	and.b32  	%r32, %r22, 65535;\n"
	"	add.s32 	%r33, %r31, %r32;\n"
	"	add.f32 	%f26, %f12, %f22;\n"
	"	tex.2d.v4.u32.f32	{%r34, %r35, %r36, %r37}, [%rd1, {%f23, %f26}];\n"
	"	and.b32  	%r38, %r34, 65535;\n"
	"	add.s32 	%r39, %r24, %r38;\n"
	"	and.b32  	%r40, %r35, 65535;\n"
	"	add.s32 	%r41, %r27, %r40;\n"
	"	and.b32  	%r42, %r36, 65535;\n"
	"	add.s32 	%r43, %r30, %r42;\n"
	"	and.b32  	%r44, %r37, 65535;\n"
	"	add.s32 	%r45, %r33, %r44;\n"
	"	tex.2d.v4.u32.f32	{%r46, %r47, %r48, %r49}, [%rd1, {%f25, %f26}];\n"
	"	and.b32  	%r50, %r46, 65535;\n"
	"	add.s32 	%r51, %r39, %r50;\n"
	"	and.b32  	%r52, %r47, 65535;\n"
	"	add.s32 	%r53, %r41, %r52;\n"
	"	and.b32  	%r54, %r48, 65535;\n"
	"	add.s32 	%r55, %r43, %r54;\n"
	"	and.b32  	%r56, %r49, 65535;\n"
	"	add.s32 	%r57, %r45, %r56;\n"
	"	add.s32 	%r58, %r51, 2;\n"
	"	add.s32 	%r59, %r53, 2;\n"
	"	add.s32 	%r60, %r55, 2;\n"
	"	add.s32 	%r61, %r57, 2;\n"
	"	mad.lo.s32 	%r62, %r2, %r5, %r1;\n"
	"	shr.u32 	%r63, %r58, 2;\n"
	"	shr.u32 	%r64, %r59, 2;\n"
	"	shr.u32 	%r65, %r60, 2;\n"
	"	shr.u32 	%r66, %r61, 2;\n"
	"	mul.wide.s32 	%rd4, %r62, 8;\n"
	"	add.s64 	%rd5, %rd3, %rd4;\n"
	"	cvt.u16.u32	%rs1, %r66;\n"
	"	cvt.u16.u32	%rs2, %r65;\n"
	"	cvt.u16.u32	%rs3, %r64;\n"
	"	cvt.u16.u32	%rs4, %r63;\n"
	"	st.global.v4.u16 	[%rd5], {%rs4, %rs3, %rs2, %rs1};\n"
	"\n"
	"BB11_2:\n"
	"	ret;\n"
	"}\n"
	"\n"
	"\n"
;