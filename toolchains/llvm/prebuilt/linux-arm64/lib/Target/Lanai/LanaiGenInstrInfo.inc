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

namespace Lanai {
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
    ADDC_F_I_HI	= 118,
    ADDC_F_I_LO	= 119,
    ADDC_F_R	= 120,
    ADDC_I_HI	= 121,
    ADDC_I_LO	= 122,
    ADDC_R	= 123,
    ADD_F_I_HI	= 124,
    ADD_F_I_LO	= 125,
    ADD_F_R	= 126,
    ADD_I_HI	= 127,
    ADD_I_LO	= 128,
    ADD_R	= 129,
    ADJCALLSTACKDOWN	= 130,
    ADJCALLSTACKUP	= 131,
    ADJDYNALLOC	= 132,
    AND_F_I_HI	= 133,
    AND_F_I_LO	= 134,
    AND_F_R	= 135,
    AND_I_HI	= 136,
    AND_I_LO	= 137,
    AND_R	= 138,
    BRCC	= 139,
    BRIND_CC	= 140,
    BRIND_CCA	= 141,
    BRR	= 142,
    BT	= 143,
    CALL	= 144,
    CALLR	= 145,
    JR	= 146,
    LDADDR	= 147,
    LDBs_RI	= 148,
    LDBs_RR	= 149,
    LDBz_RI	= 150,
    LDBz_RR	= 151,
    LDHs_RI	= 152,
    LDHs_RR	= 153,
    LDHz_RI	= 154,
    LDHz_RR	= 155,
    LDW_RI	= 156,
    LDW_RR	= 157,
    LDWz_RR	= 158,
    LEADZ	= 159,
    LOG0	= 160,
    LOG1	= 161,
    LOG2	= 162,
    LOG3	= 163,
    LOG4	= 164,
    MOVHI	= 165,
    NOP	= 166,
    OR_F_I_HI	= 167,
    OR_F_I_LO	= 168,
    OR_F_R	= 169,
    OR_I_HI	= 170,
    OR_I_LO	= 171,
    OR_R	= 172,
    POPC	= 173,
    RET	= 174,
    SA_F_I	= 175,
    SA_I	= 176,
    SCC	= 177,
    SELECT	= 178,
    SFSUB_F_RI_HI	= 179,
    SFSUB_F_RI_LO	= 180,
    SFSUB_F_RR	= 181,
    SHL_F_R	= 182,
    SHL_R	= 183,
    SLI	= 184,
    SL_F_I	= 185,
    SL_I	= 186,
    SRA_F_R	= 187,
    SRA_R	= 188,
    SRL_F_R	= 189,
    SRL_R	= 190,
    STADDR	= 191,
    STB_RI	= 192,
    STB_RR	= 193,
    STH_RI	= 194,
    STH_RR	= 195,
    SUBB_F_I_HI	= 196,
    SUBB_F_I_LO	= 197,
    SUBB_F_R	= 198,
    SUBB_I_HI	= 199,
    SUBB_I_LO	= 200,
    SUBB_R	= 201,
    SUB_F_I_HI	= 202,
    SUB_F_I_LO	= 203,
    SUB_F_R	= 204,
    SUB_I_HI	= 205,
    SUB_I_LO	= 206,
    SUB_R	= 207,
    SW_RI	= 208,
    SW_RR	= 209,
    TRAILZ	= 210,
    XOR_F_I_HI	= 211,
    XOR_F_I_LO	= 212,
    XOR_F_R	= 213,
    XOR_I_HI	= 214,
    XOR_I_LO	= 215,
    XOR_R	= 216,
    INSTRUCTION_LIST_END = 217
  };

} // end Lanai namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace Lanai {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_ALU_WriteALU	= 1,
    IIC_ALU	= 2,
    IIC_LD_WriteLD	= 3,
    IIC_LDSW_WriteLDSW	= 4,
    WriteLD	= 5,
    IIC_ST_WriteST	= 6,
    IIC_STSW_WriteSTSW	= 7,
    SCHED_LIST_END = 8
  };
} // end Sched namespace
} // end Lanai namespace
} // end llvm namespace
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { Lanai::SR, 0 };
static const MCPhysReg ImplicitList2[] = { Lanai::SP, 0 };
static const MCPhysReg ImplicitList3[] = { Lanai::RCA, 0 };

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
static const MCOperandInfo OperandInfo30[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc LanaiInsts[] = {
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
  { 118,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #118 = ADDC_F_I_HI
  { 119,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #119 = ADDC_F_I_LO
  { 120,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #120 = ADDC_F_R
  { 121,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #121 = ADDC_I_HI
  { 122,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #122 = ADDC_I_LO
  { 123,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, ImplicitList1, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #123 = ADDC_R
  { 124,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #124 = ADD_F_I_HI
  { 125,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #125 = ADD_F_I_LO
  { 126,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #126 = ADD_F_R
  { 127,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #127 = ADD_I_HI
  { 128,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #128 = ADD_I_LO
  { 129,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #129 = ADD_R
  { 130,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #130 = ADJCALLSTACKDOWN
  { 131,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #131 = ADJCALLSTACKUP
  { 132,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo32, -1 ,nullptr },  // Inst #132 = ADJDYNALLOC
  { 133,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #133 = AND_F_I_HI
  { 134,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #134 = AND_F_I_LO
  { 135,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #135 = AND_F_R
  { 136,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #136 = AND_I_HI
  { 137,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #137 = AND_I_LO
  { 138,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #138 = AND_R
  { 139,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #139 = BRCC
  { 140,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #140 = BRIND_CC
  { 141,	3,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #141 = BRIND_CCA
  { 142,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #142 = BRR
  { 143,	1,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #143 = BT
  { 144,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #144 = CALL
  { 145,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo35, -1 ,nullptr },  // Inst #145 = CALLR
  { 146,	1,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #146 = JR
  { 147,	2,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #147 = LDADDR
  { 148,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #148 = LDBs_RI
  { 149,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #149 = LDBs_RR
  { 150,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #150 = LDBz_RI
  { 151,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #151 = LDBz_RR
  { 152,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #152 = LDHs_RI
  { 153,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #153 = LDHs_RR
  { 154,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #154 = LDHz_RI
  { 155,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #155 = LDHz_RR
  { 156,	4,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #156 = LDW_RI
  { 157,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #157 = LDW_RR
  { 158,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #158 = LDWz_RR
  { 159,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #159 = LEADZ
  { 160,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #160 = LOG0
  { 161,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #161 = LOG1
  { 162,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #162 = LOG2
  { 163,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #163 = LOG3
  { 164,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #164 = LOG4
  { 165,	2,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #165 = MOVHI
  { 166,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #166 = NOP
  { 167,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #167 = OR_F_I_HI
  { 168,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #168 = OR_F_I_LO
  { 169,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #169 = OR_F_R
  { 170,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #170 = OR_I_HI
  { 171,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #171 = OR_I_LO
  { 172,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #172 = OR_R
  { 173,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #173 = POPC
  { 174,	0,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, nullptr, -1 ,nullptr },  // Inst #174 = RET
  { 175,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #175 = SA_F_I
  { 176,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #176 = SA_I
  { 177,	2,	1,	4,	2,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #177 = SCC
  { 178,	4,	1,	4,	1,	0|(1ULL<<MCID::Select), 0x0ULL, ImplicitList1, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #178 = SELECT
  { 179,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #179 = SFSUB_F_RI_HI
  { 180,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #180 = SFSUB_F_RI_LO
  { 181,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #181 = SFSUB_F_RR
  { 182,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #182 = SHL_F_R
  { 183,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #183 = SHL_R
  { 184,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #184 = SLI
  { 185,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #185 = SL_F_I
  { 186,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #186 = SL_I
  { 187,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #187 = SRA_F_R
  { 188,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #188 = SRA_R
  { 189,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #189 = SRL_F_R
  { 190,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #190 = SRL_R
  { 191,	2,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #191 = STADDR
  { 192,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #192 = STB_RI
  { 193,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #193 = STB_RR
  { 194,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #194 = STH_RI
  { 195,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #195 = STH_RR
  { 196,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #196 = SUBB_F_I_HI
  { 197,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #197 = SUBB_F_I_LO
  { 198,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #198 = SUBB_F_R
  { 199,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #199 = SUBB_I_HI
  { 200,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #200 = SUBB_I_LO
  { 201,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, ImplicitList1, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #201 = SUBB_R
  { 202,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #202 = SUB_F_I_HI
  { 203,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #203 = SUB_F_I_LO
  { 204,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #204 = SUB_F_R
  { 205,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #205 = SUB_I_HI
  { 206,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #206 = SUB_I_LO
  { 207,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #207 = SUB_R
  { 208,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #208 = SW_RI
  { 209,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #209 = SW_RR
  { 210,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #210 = TRAILZ
  { 211,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #211 = XOR_F_I_HI
  { 212,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #212 = XOR_F_I_LO
  { 213,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #213 = XOR_F_R
  { 214,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #214 = XOR_I_HI
  { 215,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #215 = XOR_I_LO
  { 216,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #216 = XOR_R
};

extern const char LanaiInstrNameData[] = {
  /* 0 */ 'L', 'O', 'G', '0', 0,
  /* 5 */ 'L', 'O', 'G', '1', 0,
  /* 10 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 18 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 26 */ 'L', 'O', 'G', '3', 0,
  /* 31 */ 'L', 'O', 'G', '4', 0,
  /* 36 */ 'B', 'R', 'I', 'N', 'D', '_', 'C', 'C', 'A', 0,
  /* 46 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 52 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 59 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 65 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 81 */ 'B', 'R', 'C', 'C', 0,
  /* 86 */ 'S', 'C', 'C', 0,
  /* 90 */ 'B', 'R', 'I', 'N', 'D', '_', 'C', 'C', 0,
  /* 99 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 111 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 121 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 129 */ 'A', 'D', 'J', 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 141 */ 'P', 'O', 'P', 'C', 0,
  /* 146 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 153 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 160 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 166 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 182 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 199 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 205 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 221 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 234 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 243 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 260 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 268 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 281 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 289 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 296 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 309 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 317 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 327 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 342 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 357 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 364 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 379 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 393 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 407 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 424 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 441 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 448 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 456 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 464 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 472 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 478 */ 'M', 'O', 'V', 'H', 'I', 0,
  /* 484 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'I', '_', 'H', 'I', 0,
  /* 498 */ 'S', 'U', 'B', 'B', '_', 'I', '_', 'H', 'I', 0,
  /* 508 */ 'S', 'U', 'B', '_', 'I', '_', 'H', 'I', 0,
  /* 517 */ 'A', 'D', 'D', 'C', '_', 'I', '_', 'H', 'I', 0,
  /* 527 */ 'A', 'D', 'D', '_', 'I', '_', 'H', 'I', 0,
  /* 536 */ 'A', 'N', 'D', '_', 'I', '_', 'H', 'I', 0,
  /* 545 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 557 */ 'S', 'U', 'B', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 568 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 580 */ 'A', 'D', 'D', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 591 */ 'A', 'N', 'D', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 602 */ 'X', 'O', 'R', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 613 */ 'X', 'O', 'R', '_', 'I', '_', 'H', 'I', 0,
  /* 622 */ 'S', 'L', 'I', 0,
  /* 626 */ 'S', 'T', 'B', '_', 'R', 'I', 0,
  /* 633 */ 'S', 'T', 'H', '_', 'R', 'I', 0,
  /* 640 */ 'L', 'D', 'W', '_', 'R', 'I', 0,
  /* 647 */ 'S', 'W', '_', 'R', 'I', 0,
  /* 653 */ 'L', 'D', 'B', 's', '_', 'R', 'I', 0,
  /* 661 */ 'L', 'D', 'H', 's', '_', 'R', 'I', 0,
  /* 669 */ 'L', 'D', 'B', 'z', '_', 'R', 'I', 0,
  /* 677 */ 'L', 'D', 'H', 'z', '_', 'R', 'I', 0,
  /* 685 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 694 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 703 */ 'S', 'A', '_', 'I', 0,
  /* 708 */ 'S', 'A', '_', 'F', '_', 'I', 0,
  /* 715 */ 'S', 'L', '_', 'F', '_', 'I', 0,
  /* 722 */ 'S', 'L', '_', 'I', 0,
  /* 727 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 738 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 747 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 756 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 773 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 779 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 799 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 820 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 832 */ 'K', 'I', 'L', 'L', 0,
  /* 837 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 844 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 850 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 857 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 864 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 871 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 881 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 898 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 914 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 930 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 947 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 955 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 963 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 971 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 979 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'I', '_', 'L', 'O', 0,
  /* 993 */ 'S', 'U', 'B', 'B', '_', 'I', '_', 'L', 'O', 0,
  /* 1003 */ 'S', 'U', 'B', '_', 'I', '_', 'L', 'O', 0,
  /* 1012 */ 'A', 'D', 'D', 'C', '_', 'I', '_', 'L', 'O', 0,
  /* 1022 */ 'A', 'D', 'D', '_', 'I', '_', 'L', 'O', 0,
  /* 1031 */ 'A', 'N', 'D', '_', 'I', '_', 'L', 'O', 0,
  /* 1040 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 1052 */ 'S', 'U', 'B', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 1063 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 1075 */ 'A', 'D', 'D', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 1086 */ 'A', 'N', 'D', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 1097 */ 'X', 'O', 'R', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 1108 */ 'X', 'O', 'R', '_', 'I', '_', 'L', 'O', 0,
  /* 1117 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 1126 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 1134 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 1140 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1149 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1158 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 1165 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 1172 */ 'N', 'O', 'P', 0,
  /* 1176 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 1189 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 1201 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 1216 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 1223 */ 'G', '_', 'B', 'R', 0,
  /* 1228 */ 'L', 'D', 'A', 'D', 'D', 'R', 0,
  /* 1235 */ 'S', 'T', 'A', 'D', 'D', 'R', 0,
  /* 1242 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 1267 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 1274 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 1281 */ 'J', 'R', 0,
  /* 1284 */ 'C', 'A', 'L', 'L', 'R', 0,
  /* 1290 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 1307 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 1313 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 1329 */ 'G', '_', 'O', 'R', 0,
  /* 1334 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 1349 */ 'B', 'R', 'R', 0,
  /* 1353 */ 'S', 'T', 'B', '_', 'R', 'R', 0,
  /* 1360 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'R', 0,
  /* 1371 */ 'S', 'T', 'H', '_', 'R', 'R', 0,
  /* 1378 */ 'L', 'D', 'W', '_', 'R', 'R', 0,
  /* 1385 */ 'S', 'W', '_', 'R', 'R', 0,
  /* 1391 */ 'L', 'D', 'B', 's', '_', 'R', 'R', 0,
  /* 1399 */ 'L', 'D', 'H', 's', '_', 'R', 'R', 0,
  /* 1407 */ 'L', 'D', 'B', 'z', '_', 'R', 'R', 0,
  /* 1415 */ 'L', 'D', 'H', 'z', '_', 'R', 'R', 0,
  /* 1423 */ 'L', 'D', 'W', 'z', '_', 'R', 'R', 0,
  /* 1431 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 1442 */ 'S', 'R', 'A', '_', 'R', 0,
  /* 1448 */ 'S', 'U', 'B', 'B', '_', 'R', 0,
  /* 1455 */ 'S', 'U', 'B', '_', 'R', 0,
  /* 1461 */ 'A', 'D', 'D', 'C', '_', 'R', 0,
  /* 1468 */ 'A', 'D', 'D', '_', 'R', 0,
  /* 1474 */ 'A', 'N', 'D', '_', 'R', 0,
  /* 1480 */ 'S', 'R', 'A', '_', 'F', '_', 'R', 0,
  /* 1488 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'R', 0,
  /* 1497 */ 'S', 'U', 'B', '_', 'F', '_', 'R', 0,
  /* 1505 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'R', 0,
  /* 1514 */ 'A', 'D', 'D', '_', 'F', '_', 'R', 0,
  /* 1522 */ 'A', 'N', 'D', '_', 'F', '_', 'R', 0,
  /* 1530 */ 'S', 'H', 'L', '_', 'F', '_', 'R', 0,
  /* 1538 */ 'S', 'R', 'L', '_', 'F', '_', 'R', 0,
  /* 1546 */ 'X', 'O', 'R', '_', 'F', '_', 'R', 0,
  /* 1554 */ 'S', 'H', 'L', '_', 'R', 0,
  /* 1560 */ 'S', 'R', 'L', '_', 'R', 0,
  /* 1566 */ 'X', 'O', 'R', '_', 'R', 0,
  /* 1572 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1589 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1604 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1621 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 1651 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 1678 */ 'B', 'T', 0,
  /* 1681 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 1691 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 1700 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 1713 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 1727 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 1751 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1772 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1792 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1804 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1815 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1826 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1837 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 1848 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1858 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1873 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 1882 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 1892 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 1900 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 1907 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 1916 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 1923 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 1930 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 1937 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 1944 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 1951 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 1968 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 1984 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 1998 */ 'C', 'O', 'P', 'Y', 0,
  /* 2003 */ 'L', 'E', 'A', 'D', 'Z', 0,
  /* 2009 */ 'T', 'R', 'A', 'I', 'L', 'Z', 0,
};

extern const unsigned LanaiInstrNameIndices[] = {
    474U, 871U, 914U, 747U, 738U, 756U, 832U, 364U, 
    379U, 344U, 393U, 1604U, 317U, 268U, 1998U, 289U, 
    1858U, 221U, 1117U, 820U, 1826U, 243U, 1815U, 296U, 
    1189U, 1176U, 1242U, 1713U, 1727U, 779U, 799U, 160U, 
    59U, 844U, 1930U, 1937U, 857U, 864U, 199U, 1329U, 
    1307U, 342U, 472U, 1984U, 327U, 1681U, 1572U, 1873U, 
    1589U, 1837U, 1431U, 1882U, 146U, 309U, 1621U, 407U, 
    424U, 166U, 65U, 205U, 182U, 1334U, 1313U, 1968U, 
    898U, 1951U, 881U, 234U, 1700U, 99U, 1651U, 1907U, 
    121U, 1804U, 1792U, 1848U, 448U, 1900U, 1916U, 773U, 
    1274U, 1267U, 1165U, 1158U, 1691U, 281U, 260U, 955U, 
    947U, 971U, 963U, 464U, 456U, 153U, 52U, 837U, 
    46U, 1923U, 850U, 1944U, 1216U, 18U, 441U, 10U, 
    357U, 1892U, 111U, 685U, 694U, 1140U, 1149U, 1134U, 
    727U, 1223U, 1772U, 1751U, 1290U, 1126U, 568U, 1063U, 
    1505U, 517U, 1012U, 1461U, 580U, 1075U, 1514U, 527U, 
    1022U, 1468U, 930U, 1201U, 129U, 591U, 1086U, 1522U, 
    536U, 1031U, 1474U, 81U, 90U, 36U, 1349U, 1678U, 
    794U, 1284U, 1281U, 1228U, 653U, 1391U, 669U, 1407U, 
    661U, 1399U, 677U, 1415U, 640U, 1378U, 1423U, 2003U, 
    0U, 5U, 13U, 26U, 31U, 478U, 1172U, 603U, 
    1098U, 1547U, 614U, 1109U, 1567U, 141U, 1723U, 708U, 
    703U, 86U, 1693U, 484U, 979U, 1360U, 1530U, 1554U, 
    622U, 715U, 722U, 1480U, 1442U, 1538U, 1560U, 1235U, 
    626U, 1353U, 633U, 1371U, 545U, 1040U, 1488U, 498U, 
    993U, 1448U, 557U, 1052U, 1497U, 508U, 1003U, 1455U, 
    647U, 1385U, 2009U, 602U, 1097U, 1546U, 613U, 1108U, 
    1566U, 
};

static inline void InitLanaiMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, 217);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct LanaiGenInstrInfo : public TargetInstrInfo {
  explicit LanaiGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~LanaiGenInstrInfo() override = default;
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc LanaiInsts[];
extern const unsigned LanaiInstrNameIndices[];
extern const char LanaiInstrNameData[];
LanaiGenInstrInfo::LanaiGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, 217);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Lanai {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Lanai {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Lanai {
namespace OpTypes {
enum OperandType {
  AluOp = 0,
  BrTarget = 1,
  CCOp = 2,
  CallTarget = 3,
  MEMi = 4,
  MEMri = 5,
  MEMrr = 6,
  MEMspls = 7,
  f32imm = 8,
  f64imm = 9,
  i16imm = 10,
  i1imm = 11,
  i32hi16 = 12,
  i32hi16and = 13,
  i32imm = 14,
  i32lo16and = 15,
  i32lo16s = 16,
  i32lo16z = 17,
  i32lo21 = 18,
  i32neg16 = 19,
  i64imm = 20,
  i8imm = 21,
  imm10 = 22,
  immShift = 23,
  pred = 24,
  ptype0 = 25,
  ptype1 = 26,
  ptype2 = 27,
  ptype3 = 28,
  ptype4 = 29,
  ptype5 = 30,
  type0 = 31,
  type1 = 32,
  type2 = 33,
  type3 = 34,
  type4 = 35,
  type5 = 36,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Lanai {

enum PostEncoderMethod {
	PostEncoderMethod_adjustPqBitsSpls
};

// splsIdempotent
LLVM_READONLY
int splsIdempotent(uint16_t Opcode) {
static const uint16_t splsIdempotentTable[][2] = {
  { Lanai::LDBs_RI, Lanai::LDBs_RI },
  { Lanai::LDBz_RI, Lanai::LDBz_RI },
  { Lanai::LDHs_RI, Lanai::LDHs_RI },
  { Lanai::LDHz_RI, Lanai::LDHz_RI },
  { Lanai::STB_RI, Lanai::STB_RI },
  { Lanai::STH_RI, Lanai::STH_RI },
}; // End of splsIdempotentTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 6;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == splsIdempotentTable[mid][0]) {
      break;
    }
    if (Opcode < splsIdempotentTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return splsIdempotentTable[mid][1];
}

} // End Lanai namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

