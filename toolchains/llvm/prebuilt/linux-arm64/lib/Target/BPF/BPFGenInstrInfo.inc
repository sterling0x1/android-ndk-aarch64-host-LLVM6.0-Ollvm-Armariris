/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace BPF {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    ANNOTATION_LABEL	= 5,
    KILL	= 6,
    EXTRACT_SUBREG	= 7,
    INSERT_SUBREG	= 8,
    IMPLICIT_DEF	= 9,
    SUBREG_TO_REG	= 10,
    COPY_TO_REGCLASS	= 11,
    DBG_VALUE	= 12,
    REG_SEQUENCE	= 13,
    COPY	= 14,
    BUNDLE	= 15,
    LIFETIME_START	= 16,
    LIFETIME_END	= 17,
    STACKMAP	= 18,
    FENTRY_CALL	= 19,
    PATCHPOINT	= 20,
    LOAD_STACK_GUARD	= 21,
    STATEPOINT	= 22,
    LOCAL_ESCAPE	= 23,
    FAULTING_OP	= 24,
    PATCHABLE_OP	= 25,
    PATCHABLE_FUNCTION_ENTER	= 26,
    PATCHABLE_RET	= 27,
    PATCHABLE_FUNCTION_EXIT	= 28,
    PATCHABLE_TAIL_CALL	= 29,
    PATCHABLE_EVENT_CALL	= 30,
    G_ADD	= 31,
    G_SUB	= 32,
    G_MUL	= 33,
    G_SDIV	= 34,
    G_UDIV	= 35,
    G_SREM	= 36,
    G_UREM	= 37,
    G_AND	= 38,
    G_OR	= 39,
    G_XOR	= 40,
    G_IMPLICIT_DEF	= 41,
    G_PHI	= 42,
    G_FRAME_INDEX	= 43,
    G_GLOBAL_VALUE	= 44,
    G_EXTRACT	= 45,
    G_UNMERGE_VALUES	= 46,
    G_INSERT	= 47,
    G_MERGE_VALUES	= 48,
    G_PTRTOINT	= 49,
    G_INTTOPTR	= 50,
    G_BITCAST	= 51,
    G_LOAD	= 52,
    G_STORE	= 53,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 54,
    G_ATOMIC_CMPXCHG	= 55,
    G_ATOMICRMW_XCHG	= 56,
    G_ATOMICRMW_ADD	= 57,
    G_ATOMICRMW_SUB	= 58,
    G_ATOMICRMW_AND	= 59,
    G_ATOMICRMW_NAND	= 60,
    G_ATOMICRMW_OR	= 61,
    G_ATOMICRMW_XOR	= 62,
    G_ATOMICRMW_MAX	= 63,
    G_ATOMICRMW_MIN	= 64,
    G_ATOMICRMW_UMAX	= 65,
    G_ATOMICRMW_UMIN	= 66,
    G_BRCOND	= 67,
    G_BRINDIRECT	= 68,
    G_INTRINSIC	= 69,
    G_INTRINSIC_W_SIDE_EFFECTS	= 70,
    G_ANYEXT	= 71,
    G_TRUNC	= 72,
    G_CONSTANT	= 73,
    G_FCONSTANT	= 74,
    G_VASTART	= 75,
    G_VAARG	= 76,
    G_SEXT	= 77,
    G_ZEXT	= 78,
    G_SHL	= 79,
    G_LSHR	= 80,
    G_ASHR	= 81,
    G_ICMP	= 82,
    G_FCMP	= 83,
    G_SELECT	= 84,
    G_UADDE	= 85,
    G_USUBE	= 86,
    G_SADDO	= 87,
    G_SSUBO	= 88,
    G_UMULO	= 89,
    G_SMULO	= 90,
    G_UMULH	= 91,
    G_SMULH	= 92,
    G_FADD	= 93,
    G_FSUB	= 94,
    G_FMUL	= 95,
    G_FMA	= 96,
    G_FDIV	= 97,
    G_FREM	= 98,
    G_FPOW	= 99,
    G_FEXP	= 100,
    G_FEXP2	= 101,
    G_FLOG	= 102,
    G_FLOG2	= 103,
    G_FNEG	= 104,
    G_FPEXT	= 105,
    G_FPTRUNC	= 106,
    G_FPTOSI	= 107,
    G_FPTOUI	= 108,
    G_SITOFP	= 109,
    G_UITOFP	= 110,
    G_GEP	= 111,
    G_PTR_MASK	= 112,
    G_BR	= 113,
    G_INSERT_VECTOR_ELT	= 114,
    G_EXTRACT_VECTOR_ELT	= 115,
    G_SHUFFLE_VECTOR	= 116,
    G_BSWAP	= 117,
    ADD_ri	= 118,
    ADD_ri_32	= 119,
    ADD_rr	= 120,
    ADD_rr_32	= 121,
    ADJCALLSTACKDOWN	= 122,
    ADJCALLSTACKUP	= 123,
    AND_ri	= 124,
    AND_ri_32	= 125,
    AND_rr	= 126,
    AND_rr_32	= 127,
    BE16	= 128,
    BE32	= 129,
    BE64	= 130,
    DIV_ri	= 131,
    DIV_ri_32	= 132,
    DIV_rr	= 133,
    DIV_rr_32	= 134,
    FI_ri	= 135,
    JAL	= 136,
    JALX	= 137,
    JEQ_ri	= 138,
    JEQ_rr	= 139,
    JMP	= 140,
    JNE_ri	= 141,
    JNE_rr	= 142,
    JSGE_ri	= 143,
    JSGE_rr	= 144,
    JSGT_ri	= 145,
    JSGT_rr	= 146,
    JSLE_ri	= 147,
    JSLE_rr	= 148,
    JSLT_ri	= 149,
    JSLT_rr	= 150,
    JUGE_ri	= 151,
    JUGE_rr	= 152,
    JUGT_ri	= 153,
    JUGT_rr	= 154,
    JULE_ri	= 155,
    JULE_rr	= 156,
    JULT_ri	= 157,
    JULT_rr	= 158,
    LDB	= 159,
    LDD	= 160,
    LDH	= 161,
    LDW	= 162,
    LD_ABS_B	= 163,
    LD_ABS_H	= 164,
    LD_ABS_W	= 165,
    LD_IND_B	= 166,
    LD_IND_H	= 167,
    LD_IND_W	= 168,
    LD_imm64	= 169,
    LD_pseudo	= 170,
    LE16	= 171,
    LE32	= 172,
    LE64	= 173,
    MOV_ri	= 174,
    MOV_ri_32	= 175,
    MOV_rr	= 176,
    MOV_rr_32	= 177,
    MUL_ri	= 178,
    MUL_ri_32	= 179,
    MUL_rr	= 180,
    MUL_rr_32	= 181,
    NEG_32	= 182,
    NEG_64	= 183,
    NOP	= 184,
    OR_ri	= 185,
    OR_ri_32	= 186,
    OR_rr	= 187,
    OR_rr_32	= 188,
    RET	= 189,
    SLL_ri	= 190,
    SLL_ri_32	= 191,
    SLL_rr	= 192,
    SLL_rr_32	= 193,
    SRA_ri	= 194,
    SRA_ri_32	= 195,
    SRA_rr	= 196,
    SRA_rr_32	= 197,
    SRL_ri	= 198,
    SRL_ri_32	= 199,
    SRL_rr	= 200,
    SRL_rr_32	= 201,
    STB	= 202,
    STD	= 203,
    STH	= 204,
    STW	= 205,
    SUB_ri	= 206,
    SUB_ri_32	= 207,
    SUB_rr	= 208,
    SUB_rr_32	= 209,
    Select	= 210,
    Select_Ri	= 211,
    XADD32	= 212,
    XADD64	= 213,
    XOR_ri	= 214,
    XOR_ri_32	= 215,
    XOR_rr	= 216,
    XOR_rr_32	= 217,
    INSTRUCTION_LIST_END = 218
  };

} // end BPF namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace BPF {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end Sched namespace
} // end BPF namespace
} // end llvm namespace
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { BPF::R11, 0 };
static const MCPhysReg ImplicitList2[] = { BPF::R0, BPF::R1, BPF::R2, BPF::R3, BPF::R4, BPF::R5, 0 };
static const MCPhysReg ImplicitList3[] = { BPF::R6, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo35[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo44[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };

extern const MCInstrDesc BPFInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #5 = ANNOTATION_LABEL
  { 6,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #6 = KILL
  { 7,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #7 = EXTRACT_SUBREG
  { 8,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #8 = INSERT_SUBREG
  { 9,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #9 = IMPLICIT_DEF
  { 10,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #10 = SUBREG_TO_REG
  { 11,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #11 = COPY_TO_REGCLASS
  { 12,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #12 = DBG_VALUE
  { 13,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #13 = REG_SEQUENCE
  { 14,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #14 = COPY
  { 15,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #15 = BUNDLE
  { 16,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #16 = LIFETIME_START
  { 17,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #17 = LIFETIME_END
  { 18,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #18 = STACKMAP
  { 19,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #19 = FENTRY_CALL
  { 20,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #20 = PATCHPOINT
  { 21,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #21 = LOAD_STACK_GUARD
  { 22,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #22 = STATEPOINT
  { 23,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #23 = LOCAL_ESCAPE
  { 24,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #24 = FAULTING_OP
  { 25,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #25 = PATCHABLE_OP
  { 26,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #26 = PATCHABLE_FUNCTION_ENTER
  { 27,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #27 = PATCHABLE_RET
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #28 = PATCHABLE_FUNCTION_EXIT
  { 29,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #29 = PATCHABLE_TAIL_CALL
  { 30,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #30 = PATCHABLE_EVENT_CALL
  { 31,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #31 = G_ADD
  { 32,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = G_SUB
  { 33,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = G_MUL
  { 34,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #34 = G_SDIV
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #35 = G_UDIV
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #36 = G_SREM
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #37 = G_UREM
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #38 = G_AND
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #39 = G_OR
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #40 = G_XOR
  { 41,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #41 = G_IMPLICIT_DEF
  { 42,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #42 = G_PHI
  { 43,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #43 = G_FRAME_INDEX
  { 44,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #44 = G_GLOBAL_VALUE
  { 45,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #45 = G_EXTRACT
  { 46,	2,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #46 = G_UNMERGE_VALUES
  { 47,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #47 = G_INSERT
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #48 = G_MERGE_VALUES
  { 49,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #49 = G_PTRTOINT
  { 50,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #50 = G_INTTOPTR
  { 51,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #51 = G_BITCAST
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #52 = G_LOAD
  { 53,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #53 = G_STORE
  { 54,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #54 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 55,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #55 = G_ATOMIC_CMPXCHG
  { 56,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #56 = G_ATOMICRMW_XCHG
  { 57,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #57 = G_ATOMICRMW_ADD
  { 58,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #58 = G_ATOMICRMW_SUB
  { 59,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #59 = G_ATOMICRMW_AND
  { 60,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #60 = G_ATOMICRMW_NAND
  { 61,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #61 = G_ATOMICRMW_OR
  { 62,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #62 = G_ATOMICRMW_XOR
  { 63,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #63 = G_ATOMICRMW_MAX
  { 64,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #64 = G_ATOMICRMW_MIN
  { 65,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #65 = G_ATOMICRMW_UMAX
  { 66,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #66 = G_ATOMICRMW_UMIN
  { 67,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #67 = G_BRCOND
  { 68,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #68 = G_BRINDIRECT
  { 69,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #69 = G_INTRINSIC
  { 70,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #70 = G_INTRINSIC_W_SIDE_EFFECTS
  { 71,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #71 = G_ANYEXT
  { 72,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #72 = G_TRUNC
  { 73,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #73 = G_CONSTANT
  { 74,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #74 = G_FCONSTANT
  { 75,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #75 = G_VASTART
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #76 = G_VAARG
  { 77,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #77 = G_SEXT
  { 78,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #78 = G_ZEXT
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #79 = G_SHL
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #80 = G_LSHR
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #81 = G_ASHR
  { 82,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #82 = G_ICMP
  { 83,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #83 = G_FCMP
  { 84,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #84 = G_SELECT
  { 85,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #85 = G_UADDE
  { 86,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #86 = G_USUBE
  { 87,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #87 = G_SADDO
  { 88,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #88 = G_SSUBO
  { 89,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #89 = G_UMULO
  { 90,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #90 = G_SMULO
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #91 = G_UMULH
  { 92,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #92 = G_SMULH
  { 93,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #93 = G_FADD
  { 94,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #94 = G_FSUB
  { 95,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #95 = G_FMUL
  { 96,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #96 = G_FMA
  { 97,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #97 = G_FDIV
  { 98,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #98 = G_FREM
  { 99,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #99 = G_FPOW
  { 100,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #100 = G_FEXP
  { 101,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #101 = G_FEXP2
  { 102,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #102 = G_FLOG
  { 103,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #103 = G_FLOG2
  { 104,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #104 = G_FNEG
  { 105,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #105 = G_FPEXT
  { 106,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #106 = G_FPTRUNC
  { 107,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #107 = G_FPTOSI
  { 108,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #108 = G_FPTOUI
  { 109,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #109 = G_SITOFP
  { 110,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #110 = G_UITOFP
  { 111,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #111 = G_GEP
  { 112,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #112 = G_PTR_MASK
  { 113,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #113 = G_BR
  { 114,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #114 = G_INSERT_VECTOR_ELT
  { 115,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #115 = G_EXTRACT_VECTOR_ELT
  { 116,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #116 = G_SHUFFLE_VECTOR
  { 117,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #117 = G_BSWAP
  { 118,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #118 = ADD_ri
  { 119,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #119 = ADD_ri_32
  { 120,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #120 = ADD_rr
  { 121,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #121 = ADD_rr_32
  { 122,	2,	0,	8,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #122 = ADJCALLSTACKDOWN
  { 123,	2,	0,	8,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #123 = ADJCALLSTACKUP
  { 124,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #124 = AND_ri
  { 125,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #125 = AND_ri_32
  { 126,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #126 = AND_rr
  { 127,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #127 = AND_rr_32
  { 128,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #128 = BE16
  { 129,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #129 = BE32
  { 130,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #130 = BE64
  { 131,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #131 = DIV_ri
  { 132,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #132 = DIV_ri_32
  { 133,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #133 = DIV_rr
  { 134,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #134 = DIV_rr_32
  { 135,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #135 = FI_ri
  { 136,	1,	0,	8,	0,	0|(1ULL<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #136 = JAL
  { 137,	1,	0,	8,	0,	0|(1ULL<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #137 = JALX
  { 138,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #138 = JEQ_ri
  { 139,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #139 = JEQ_rr
  { 140,	1,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #140 = JMP
  { 141,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #141 = JNE_ri
  { 142,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #142 = JNE_rr
  { 143,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #143 = JSGE_ri
  { 144,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #144 = JSGE_rr
  { 145,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #145 = JSGT_ri
  { 146,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #146 = JSGT_rr
  { 147,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #147 = JSLE_ri
  { 148,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #148 = JSLE_rr
  { 149,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #149 = JSLT_ri
  { 150,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #150 = JSLT_rr
  { 151,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #151 = JUGE_ri
  { 152,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #152 = JUGE_rr
  { 153,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #153 = JUGT_ri
  { 154,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #154 = JUGT_rr
  { 155,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #155 = JULE_ri
  { 156,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #156 = JULE_rr
  { 157,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #157 = JULT_ri
  { 158,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #158 = JULT_rr
  { 159,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #159 = LDB
  { 160,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #160 = LDD
  { 161,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #161 = LDH
  { 162,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #162 = LDW
  { 163,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo38, -1 ,nullptr },  // Inst #163 = LD_ABS_B
  { 164,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo38, -1 ,nullptr },  // Inst #164 = LD_ABS_H
  { 165,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo38, -1 ,nullptr },  // Inst #165 = LD_ABS_W
  { 166,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo39, -1 ,nullptr },  // Inst #166 = LD_IND_B
  { 167,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo39, -1 ,nullptr },  // Inst #167 = LD_IND_H
  { 168,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo39, -1 ,nullptr },  // Inst #168 = LD_IND_W
  { 169,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #169 = LD_imm64
  { 170,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #170 = LD_pseudo
  { 171,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #171 = LE16
  { 172,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #172 = LE32
  { 173,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #173 = LE64
  { 174,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #174 = MOV_ri
  { 175,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #175 = MOV_ri_32
  { 176,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #176 = MOV_rr
  { 177,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #177 = MOV_rr_32
  { 178,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #178 = MUL_ri
  { 179,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #179 = MUL_ri_32
  { 180,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #180 = MUL_rr
  { 181,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #181 = MUL_rr_32
  { 182,	2,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #182 = NEG_32
  { 183,	2,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #183 = NEG_64
  { 184,	1,	0,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #184 = NOP
  { 185,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #185 = OR_ri
  { 186,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #186 = OR_ri_32
  { 187,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #187 = OR_rr
  { 188,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #188 = OR_rr_32
  { 189,	0,	0,	8,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #189 = RET
  { 190,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #190 = SLL_ri
  { 191,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #191 = SLL_ri_32
  { 192,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #192 = SLL_rr
  { 193,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #193 = SLL_rr_32
  { 194,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #194 = SRA_ri
  { 195,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #195 = SRA_ri_32
  { 196,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #196 = SRA_rr
  { 197,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #197 = SRA_rr_32
  { 198,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #198 = SRL_ri
  { 199,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #199 = SRL_ri_32
  { 200,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #200 = SRL_rr
  { 201,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #201 = SRL_rr_32
  { 202,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #202 = STB
  { 203,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #203 = STD
  { 204,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #204 = STH
  { 205,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #205 = STW
  { 206,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #206 = SUB_ri
  { 207,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #207 = SUB_ri_32
  { 208,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #208 = SUB_rr
  { 209,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #209 = SUB_rr_32
  { 210,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #210 = Select
  { 211,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #211 = Select_Ri
  { 212,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #212 = XADD32
  { 213,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #213 = XADD64
  { 214,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #214 = XOR_ri
  { 215,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #215 = XOR_ri_32
  { 216,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #216 = XOR_rr
  { 217,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #217 = XOR_rr_32
};

extern const char BPFInstrNameData[] = {
  /* 0 */ 'X', 'A', 'D', 'D', '3', '2', 0,
  /* 7 */ 'B', 'E', '3', '2', 0,
  /* 12 */ 'L', 'E', '3', '2', 0,
  /* 17 */ 'N', 'E', 'G', '_', '3', '2', 0,
  /* 24 */ 'S', 'R', 'A', '_', 'r', 'i', '_', '3', '2', 0,
  /* 34 */ 'S', 'U', 'B', '_', 'r', 'i', '_', '3', '2', 0,
  /* 44 */ 'A', 'D', 'D', '_', 'r', 'i', '_', '3', '2', 0,
  /* 54 */ 'A', 'N', 'D', '_', 'r', 'i', '_', '3', '2', 0,
  /* 64 */ 'S', 'L', 'L', '_', 'r', 'i', '_', '3', '2', 0,
  /* 74 */ 'S', 'R', 'L', '_', 'r', 'i', '_', '3', '2', 0,
  /* 84 */ 'M', 'U', 'L', '_', 'r', 'i', '_', '3', '2', 0,
  /* 94 */ 'X', 'O', 'R', '_', 'r', 'i', '_', '3', '2', 0,
  /* 104 */ 'D', 'I', 'V', '_', 'r', 'i', '_', '3', '2', 0,
  /* 114 */ 'M', 'O', 'V', '_', 'r', 'i', '_', '3', '2', 0,
  /* 124 */ 'S', 'R', 'A', '_', 'r', 'r', '_', '3', '2', 0,
  /* 134 */ 'S', 'U', 'B', '_', 'r', 'r', '_', '3', '2', 0,
  /* 144 */ 'A', 'D', 'D', '_', 'r', 'r', '_', '3', '2', 0,
  /* 154 */ 'A', 'N', 'D', '_', 'r', 'r', '_', '3', '2', 0,
  /* 164 */ 'S', 'L', 'L', '_', 'r', 'r', '_', '3', '2', 0,
  /* 174 */ 'S', 'R', 'L', '_', 'r', 'r', '_', '3', '2', 0,
  /* 184 */ 'M', 'U', 'L', '_', 'r', 'r', '_', '3', '2', 0,
  /* 194 */ 'X', 'O', 'R', '_', 'r', 'r', '_', '3', '2', 0,
  /* 204 */ 'D', 'I', 'V', '_', 'r', 'r', '_', '3', '2', 0,
  /* 214 */ 'M', 'O', 'V', '_', 'r', 'r', '_', '3', '2', 0,
  /* 224 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 232 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 240 */ 'X', 'A', 'D', 'D', '6', '4', 0,
  /* 247 */ 'B', 'E', '6', '4', 0,
  /* 252 */ 'L', 'E', '6', '4', 0,
  /* 257 */ 'N', 'E', 'G', '_', '6', '4', 0,
  /* 264 */ 'L', 'D', '_', 'i', 'm', 'm', '6', '4', 0,
  /* 273 */ 'B', 'E', '1', '6', 0,
  /* 278 */ 'L', 'E', '1', '6', 0,
  /* 283 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 289 */ 'L', 'D', 'B', 0,
  /* 293 */ 'S', 'T', 'B', 0,
  /* 297 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 304 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 310 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 326 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'B', 0,
  /* 335 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'B', 0,
  /* 344 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 356 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 366 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 374 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 381 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 388 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 394 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 410 */ 'L', 'D', 'D', 0,
  /* 414 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 431 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 437 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 453 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 466 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 475 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 492 */ 'S', 'T', 'D', 0,
  /* 496 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 504 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 517 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 525 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 532 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 545 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 553 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 563 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 578 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 593 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 600 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 615 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 629 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 643 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 660 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 677 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 684 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 692 */ 'L', 'D', 'H', 0,
  /* 696 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 704 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 712 */ 'S', 'T', 'H', 0,
  /* 716 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'H', 0,
  /* 725 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'H', 0,
  /* 734 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 740 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 749 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 758 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 769 */ 'J', 'A', 'L', 0,
  /* 773 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 782 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 791 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 808 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 814 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 834 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 855 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 867 */ 'K', 'I', 'L', 'L', 0,
  /* 872 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 879 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 885 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 892 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 899 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 906 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 916 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 933 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 949 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 965 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 982 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 990 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 998 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 1006 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 1014 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 1023 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 1031 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 1037 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1046 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1055 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 1062 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 1069 */ 'J', 'M', 'P', 0,
  /* 1073 */ 'N', 'O', 'P', 0,
  /* 1077 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 1090 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 1102 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 1117 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 1124 */ 'G', '_', 'B', 'R', 0,
  /* 1129 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 1154 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 1161 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 1168 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 1185 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 1191 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 1207 */ 'G', '_', 'O', 'R', 0,
  /* 1212 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 1227 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 1238 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1255 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1270 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1287 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 1317 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 1344 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 1354 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 1363 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 1376 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 1390 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 1414 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1435 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1455 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1467 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1478 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1489 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1500 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 1511 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1521 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1536 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 1545 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 1555 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 1563 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 1570 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 1579 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 1586 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 1593 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 1600 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 1607 */ 'L', 'D', 'W', 0,
  /* 1611 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 1618 */ 'S', 'T', 'W', 0,
  /* 1622 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'W', 0,
  /* 1631 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'W', 0,
  /* 1640 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 1657 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 1673 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 1687 */ 'J', 'A', 'L', 'X', 0,
  /* 1692 */ 'C', 'O', 'P', 'Y', 0,
  /* 1697 */ 'S', 'e', 'l', 'e', 'c', 't', '_', 'R', 'i', 0,
  /* 1707 */ 'S', 'R', 'A', '_', 'r', 'i', 0,
  /* 1714 */ 'S', 'U', 'B', '_', 'r', 'i', 0,
  /* 1721 */ 'A', 'D', 'D', '_', 'r', 'i', 0,
  /* 1728 */ 'A', 'N', 'D', '_', 'r', 'i', 0,
  /* 1735 */ 'J', 'S', 'G', 'E', '_', 'r', 'i', 0,
  /* 1743 */ 'J', 'U', 'G', 'E', '_', 'r', 'i', 0,
  /* 1751 */ 'J', 'S', 'L', 'E', '_', 'r', 'i', 0,
  /* 1759 */ 'J', 'U', 'L', 'E', '_', 'r', 'i', 0,
  /* 1767 */ 'J', 'N', 'E', '_', 'r', 'i', 0,
  /* 1774 */ 'F', 'I', '_', 'r', 'i', 0,
  /* 1780 */ 'S', 'L', 'L', '_', 'r', 'i', 0,
  /* 1787 */ 'S', 'R', 'L', '_', 'r', 'i', 0,
  /* 1794 */ 'M', 'U', 'L', '_', 'r', 'i', 0,
  /* 1801 */ 'J', 'E', 'Q', '_', 'r', 'i', 0,
  /* 1808 */ 'X', 'O', 'R', '_', 'r', 'i', 0,
  /* 1815 */ 'J', 'S', 'G', 'T', '_', 'r', 'i', 0,
  /* 1823 */ 'J', 'U', 'G', 'T', '_', 'r', 'i', 0,
  /* 1831 */ 'J', 'S', 'L', 'T', '_', 'r', 'i', 0,
  /* 1839 */ 'J', 'U', 'L', 'T', '_', 'r', 'i', 0,
  /* 1847 */ 'D', 'I', 'V', '_', 'r', 'i', 0,
  /* 1854 */ 'M', 'O', 'V', '_', 'r', 'i', 0,
  /* 1861 */ 'L', 'D', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 1871 */ 'S', 'R', 'A', '_', 'r', 'r', 0,
  /* 1878 */ 'S', 'U', 'B', '_', 'r', 'r', 0,
  /* 1885 */ 'A', 'D', 'D', '_', 'r', 'r', 0,
  /* 1892 */ 'A', 'N', 'D', '_', 'r', 'r', 0,
  /* 1899 */ 'J', 'S', 'G', 'E', '_', 'r', 'r', 0,
  /* 1907 */ 'J', 'U', 'G', 'E', '_', 'r', 'r', 0,
  /* 1915 */ 'J', 'S', 'L', 'E', '_', 'r', 'r', 0,
  /* 1923 */ 'J', 'U', 'L', 'E', '_', 'r', 'r', 0,
  /* 1931 */ 'J', 'N', 'E', '_', 'r', 'r', 0,
  /* 1938 */ 'S', 'L', 'L', '_', 'r', 'r', 0,
  /* 1945 */ 'S', 'R', 'L', '_', 'r', 'r', 0,
  /* 1952 */ 'M', 'U', 'L', '_', 'r', 'r', 0,
  /* 1959 */ 'J', 'E', 'Q', '_', 'r', 'r', 0,
  /* 1966 */ 'X', 'O', 'R', '_', 'r', 'r', 0,
  /* 1973 */ 'J', 'S', 'G', 'T', '_', 'r', 'r', 0,
  /* 1981 */ 'J', 'U', 'G', 'T', '_', 'r', 'r', 0,
  /* 1989 */ 'J', 'S', 'L', 'T', '_', 'r', 'r', 0,
  /* 1997 */ 'J', 'U', 'L', 'T', '_', 'r', 'r', 0,
  /* 2005 */ 'D', 'I', 'V', '_', 'r', 'r', 0,
  /* 2012 */ 'M', 'O', 'V', '_', 'r', 'r', 0,
  /* 2019 */ 'S', 'e', 'l', 'e', 'c', 't', 0,
};

extern const unsigned BPFInstrNameIndices[] = {
    736U, 906U, 949U, 782U, 773U, 791U, 867U, 600U, 
    615U, 580U, 629U, 1270U, 553U, 504U, 1692U, 525U, 
    1521U, 453U, 1014U, 855U, 1489U, 475U, 1478U, 532U, 
    1090U, 1077U, 1129U, 1376U, 1390U, 814U, 834U, 388U, 
    304U, 879U, 1593U, 1600U, 892U, 899U, 431U, 1207U, 
    1185U, 578U, 734U, 1673U, 563U, 1344U, 1238U, 1536U, 
    1255U, 1500U, 1227U, 1545U, 374U, 545U, 1287U, 643U, 
    660U, 394U, 310U, 437U, 414U, 1212U, 1191U, 1657U, 
    933U, 1640U, 916U, 466U, 1363U, 344U, 1317U, 1570U, 
    366U, 1467U, 1455U, 1511U, 684U, 1563U, 1579U, 808U, 
    1161U, 1154U, 1062U, 1055U, 1354U, 517U, 496U, 990U, 
    982U, 1006U, 998U, 704U, 696U, 381U, 297U, 872U, 
    283U, 1586U, 885U, 1611U, 1117U, 232U, 677U, 224U, 
    593U, 1555U, 356U, 740U, 749U, 1037U, 1046U, 1031U, 
    758U, 1124U, 1435U, 1414U, 1168U, 1023U, 1721U, 44U, 
    1885U, 144U, 965U, 1102U, 1728U, 54U, 1892U, 154U, 
    273U, 7U, 247U, 1847U, 104U, 2005U, 204U, 1774U, 
    769U, 1687U, 1801U, 1959U, 1069U, 1767U, 1931U, 1735U, 
    1899U, 1815U, 1973U, 1751U, 1915U, 1831U, 1989U, 1743U, 
    1907U, 1823U, 1981U, 1759U, 1923U, 1839U, 1997U, 289U, 
    410U, 692U, 1607U, 335U, 725U, 1631U, 326U, 716U, 
    1622U, 264U, 1861U, 278U, 12U, 252U, 1854U, 114U, 
    2012U, 214U, 1794U, 84U, 1952U, 184U, 17U, 257U, 
    1073U, 1809U, 95U, 1967U, 195U, 1386U, 1780U, 64U, 
    1938U, 164U, 1707U, 24U, 1871U, 124U, 1787U, 74U, 
    1945U, 174U, 293U, 492U, 712U, 1618U, 1714U, 34U, 
    1878U, 134U, 2019U, 1697U, 0U, 240U, 1808U, 94U, 
    1966U, 194U, 
};

static inline void InitBPFMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, 218);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct BPFGenInstrInfo : public TargetInstrInfo {
  explicit BPFGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~BPFGenInstrInfo() override = default;
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc BPFInsts[];
extern const unsigned BPFInstrNameIndices[];
extern const char BPFInstrNameData[];
BPFGenInstrInfo::BPFGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, 218);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace BPF {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace BPF
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace BPF {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace BPF
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace BPF {
namespace OpTypes {
enum OperandType {
  MEMri = 0,
  brtarget = 1,
  calltarget = 2,
  f32imm = 3,
  f64imm = 4,
  i16imm = 5,
  i1imm = 6,
  i32imm = 7,
  i64imm = 8,
  i8imm = 9,
  ptype0 = 10,
  ptype1 = 11,
  ptype2 = 12,
  ptype3 = 13,
  ptype4 = 14,
  ptype5 = 15,
  type0 = 16,
  type1 = 17,
  type2 = 18,
  type3 = 19,
  type4 = 20,
  type5 = 21,
  u64imm = 22,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

