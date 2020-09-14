/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the BPF target                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// If GET_DAGISEL_DECL is #defined with any value, only function
// declarations will be included when this file is included.
// If GET_DAGISEL_BODY is #defined, its value should be the name of
// the instruction selector class. Function bodies will be emitted
// and each function's name will be qualified with the name of the
// class.
//
// When neither of the GET_DAGISEL* macros is defined, the functions
// are emitted inline.

#if defined(GET_DAGISEL_DECL) && defined(GET_DAGISEL_BODY)
#error GET_DAGISEL_DECL and GET_DAGISEL_BODY cannot be both defined, undef both for inline definitions
#endif

#ifdef GET_DAGISEL_BODY
#define LOCAL_DAGISEL_STRINGIZE(X) LOCAL_DAGISEL_STRINGIZE_(X)
#define LOCAL_DAGISEL_STRINGIZE_(X) #X
static_assert(sizeof(LOCAL_DAGISEL_STRINGIZE(GET_DAGISEL_BODY)) > 1,
   "GET_DAGISEL_BODY is empty: it should be defined with the class name");
#undef LOCAL_DAGISEL_STRINGIZE_
#undef LOCAL_DAGISEL_STRINGIZE
#endif

#if !defined(GET_DAGISEL_DECL) && !defined(GET_DAGISEL_BODY)
#define DAGISEL_INLINE 1
#else
#define DAGISEL_INLINE 0
#endif

#if !DAGISEL_INLINE
#define DAGISEL_CLASS_COLONCOLON GET_DAGISEL_BODY ::
#else
#define DAGISEL_CLASS_COLONCOLON
#endif

#ifdef GET_DAGISEL_DECL
void SelectCode(SDNode *N);
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
void DAGISEL_CLASS_COLONCOLON SelectCode(SDNode *N)
{
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*     0*/  OPC_Scope, 24|128,1/*152*/, /*->155*/ // 31 children in Scope
/*     3*/    OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),
/*     6*/    OPC_RecordNode, // #0 = 'intrinsic_w_chain' chained node
/*     7*/    OPC_Scope, 28, /*->37*/ // 4 children in Scope
/*     9*/      OPC_CheckChild1Integer, 47|128,6/*815*/, 
/*    12*/      OPC_RecordChild2, // #1 = $pseudo
/*    13*/      OPC_MoveChild2,
/*    14*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    17*/      OPC_MoveParent,
/*    18*/      OPC_RecordChild3, // #2 = $imm
/*    19*/      OPC_MoveChild3,
/*    20*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    23*/      OPC_MoveParent,
/*    24*/      OPC_EmitMergeInputChains1_0,
/*    25*/      OPC_EmitConvertToTarget, 1,
/*    27*/      OPC_EmitConvertToTarget, 2,
/*    29*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_pseudo), 0|OPFL_Chain,
                    MVT::i64, 2/*#Ops*/, 3, 4, 
                // Src: (intrinsic_w_chain:{ *:[i64] } 815:{ *:[iPTR] }, (imm:{ *:[i64] }):$pseudo, (imm:{ *:[i64] }):$imm) - Complexity = 14
                // Dst: (LD_pseudo:{ *:[i64] } (imm:{ *:[i64] }):$pseudo, (imm:{ *:[i64] }):$imm)
/*    37*/    /*Scope*/ 38, /*->76*/
/*    38*/      OPC_CheckChild1Integer, 44|128,6/*812*/, 
/*    41*/      OPC_RecordChild2, // #1 = $skb
/*    42*/      OPC_CheckChild2Type, MVT::i64,
/*    44*/      OPC_RecordChild3, // #2 = $imm
/*    45*/      OPC_Scope, 18, /*->65*/ // 2 children in Scope
/*    47*/        OPC_MoveChild3,
/*    48*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    51*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*    53*/        OPC_MoveParent,
/*    54*/        OPC_EmitMergeInputChains1_0,
/*    55*/        OPC_EmitConvertToTarget, 2,
/*    57*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_B), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 812:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_B:{ *:[i64] } GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] }):$imm)
/*    65*/      /*Scope*/ 9, /*->75*/
/*    66*/        OPC_EmitMergeInputChains1_0,
/*    67*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_B), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 812:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val) - Complexity = 8
                  // Dst: (LD_IND_B:{ *:[i64] } GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val)
/*    75*/      0, /*End of Scope*/
/*    76*/    /*Scope*/ 38, /*->115*/
/*    77*/      OPC_CheckChild1Integer, 45|128,6/*813*/, 
/*    80*/      OPC_RecordChild2, // #1 = $skb
/*    81*/      OPC_CheckChild2Type, MVT::i64,
/*    83*/      OPC_RecordChild3, // #2 = $imm
/*    84*/      OPC_Scope, 18, /*->104*/ // 2 children in Scope
/*    86*/        OPC_MoveChild3,
/*    87*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    90*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*    92*/        OPC_MoveParent,
/*    93*/        OPC_EmitMergeInputChains1_0,
/*    94*/        OPC_EmitConvertToTarget, 2,
/*    96*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_H), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 813:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_H:{ *:[i64] } GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] }):$imm)
/*   104*/      /*Scope*/ 9, /*->114*/
/*   105*/        OPC_EmitMergeInputChains1_0,
/*   106*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_H), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 813:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val) - Complexity = 8
                  // Dst: (LD_IND_H:{ *:[i64] } GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val)
/*   114*/      0, /*End of Scope*/
/*   115*/    /*Scope*/ 38, /*->154*/
/*   116*/      OPC_CheckChild1Integer, 46|128,6/*814*/, 
/*   119*/      OPC_RecordChild2, // #1 = $skb
/*   120*/      OPC_CheckChild2Type, MVT::i64,
/*   122*/      OPC_RecordChild3, // #2 = $imm
/*   123*/      OPC_Scope, 18, /*->143*/ // 2 children in Scope
/*   125*/        OPC_MoveChild3,
/*   126*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   129*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*   131*/        OPC_MoveParent,
/*   132*/        OPC_EmitMergeInputChains1_0,
/*   133*/        OPC_EmitConvertToTarget, 2,
/*   135*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_W), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 814:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_W:{ *:[i64] } GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] }):$imm)
/*   143*/      /*Scope*/ 9, /*->153*/
/*   144*/        OPC_EmitMergeInputChains1_0,
/*   145*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_W), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 814:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val) - Complexity = 8
                  // Dst: (LD_IND_W:{ *:[i64] } GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val)
/*   153*/      0, /*End of Scope*/
/*   154*/    0, /*End of Scope*/
/*   155*/  /*Scope*/ 80, /*->236*/
/*   156*/    OPC_CheckOpcode, TARGET_VAL(ISD::STORE),
/*   159*/    OPC_RecordMemRef,
/*   160*/    OPC_RecordNode, // #0 = 'st' chained node
/*   161*/    OPC_RecordChild1, // #1 = $src
/*   162*/    OPC_CheckChild1Type, MVT::i64,
/*   164*/    OPC_RecordChild2, // #2 = $addr
/*   165*/    OPC_CheckChild2Type, MVT::i64,
/*   167*/    OPC_CheckPredicate, 1, // Predicate_unindexedstore
/*   169*/    OPC_Scope, 49, /*->220*/ // 2 children in Scope
/*   171*/      OPC_CheckPredicate, 2, // Predicate_truncstore
/*   173*/      OPC_Scope, 14, /*->189*/ // 3 children in Scope
/*   175*/        OPC_CheckPredicate, 3, // Predicate_truncstorei32
/*   177*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   180*/        OPC_EmitMergeInputChains1_0,
/*   181*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                  // Dst: (STW i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   189*/      /*Scope*/ 14, /*->204*/
/*   190*/        OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*   192*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   195*/        OPC_EmitMergeInputChains1_0,
/*   196*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::STH), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                  // Dst: (STH i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   204*/      /*Scope*/ 14, /*->219*/
/*   205*/        OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*   207*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   210*/        OPC_EmitMergeInputChains1_0,
/*   211*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::STB), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                  // Dst: (STB i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   219*/      0, /*End of Scope*/
/*   220*/    /*Scope*/ 14, /*->235*/
/*   221*/      OPC_CheckPredicate, 6, // Predicate_store
/*   223*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   226*/      OPC_EmitMergeInputChains1_0,
/*   227*/      OPC_MorphNodeTo0, TARGET_VAL(BPF::STD), 0|OPFL_Chain|OPFL_MemRefs,
                    3/*#Ops*/, 1, 3, 4, 
                // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STD i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   235*/    0, /*End of Scope*/
/*   236*/  /*Scope*/ 1|128,1/*129*/, /*->367*/
/*   238*/    OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*   241*/    OPC_RecordMemRef,
/*   242*/    OPC_RecordNode, // #0 = 'ld' chained node
/*   243*/    OPC_RecordChild1, // #1 = $addr
/*   244*/    OPC_CheckChild1Type, MVT::i64,
/*   246*/    OPC_CheckPredicate, 7, // Predicate_unindexedload
/*   248*/    OPC_CheckType, MVT::i64,
/*   250*/    OPC_Scope, 49, /*->301*/ // 3 children in Scope
/*   252*/      OPC_CheckPredicate, 8, // Predicate_zextload
/*   254*/      OPC_Scope, 14, /*->270*/ // 3 children in Scope
/*   256*/        OPC_CheckPredicate, 9, // Predicate_zextloadi32
/*   258*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   261*/        OPC_EmitMergeInputChains1_0,
/*   262*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LDW), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LDW:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   270*/      /*Scope*/ 14, /*->285*/
/*   271*/        OPC_CheckPredicate, 10, // Predicate_zextloadi16
/*   273*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   276*/        OPC_EmitMergeInputChains1_0,
/*   277*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDH:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   285*/      /*Scope*/ 14, /*->300*/
/*   286*/        OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*   288*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   291*/        OPC_EmitMergeInputChains1_0,
/*   292*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDB:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   300*/      0, /*End of Scope*/
/*   301*/    /*Scope*/ 14, /*->316*/
/*   302*/      OPC_CheckPredicate, 12, // Predicate_load
/*   304*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   307*/      OPC_EmitMergeInputChains1_0,
/*   308*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::LDD), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDD:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   316*/    /*Scope*/ 49, /*->366*/
/*   317*/      OPC_CheckPredicate, 13, // Predicate_extload
/*   319*/      OPC_Scope, 14, /*->335*/ // 3 children in Scope
/*   321*/        OPC_CheckPredicate, 11, // Predicate_extloadi8
/*   323*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   326*/        OPC_EmitMergeInputChains1_0,
/*   327*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDB:{ *:[i64] } ADDRri:{ *:[i64] }:$src)
/*   335*/      /*Scope*/ 14, /*->350*/
/*   336*/        OPC_CheckPredicate, 10, // Predicate_extloadi16
/*   338*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   341*/        OPC_EmitMergeInputChains1_0,
/*   342*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDH:{ *:[i64] } ADDRri:{ *:[i64] }:$src)
/*   350*/      /*Scope*/ 14, /*->365*/
/*   351*/        OPC_CheckPredicate, 9, // Predicate_extloadi32
/*   353*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   356*/        OPC_EmitMergeInputChains1_0,
/*   357*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LDW), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LDW:{ *:[i64] } ADDRri:{ *:[i64] }:$src)
/*   365*/      0, /*End of Scope*/
/*   366*/    0, /*End of Scope*/
/*   367*/  /*Scope*/ 45, /*->413*/
/*   368*/    OPC_CheckOpcode, TARGET_VAL(ISD::ATOMIC_LOAD_ADD),
/*   371*/    OPC_RecordMemRef,
/*   372*/    OPC_RecordNode, // #0 = 'atomic_load_add' chained node
/*   373*/    OPC_RecordChild1, // #1 = $addr
/*   374*/    OPC_CheckChild1Type, MVT::i64,
/*   376*/    OPC_RecordChild2, // #2 = $val
/*   377*/    OPC_CheckType, MVT::i64,
/*   379*/    OPC_Scope, 15, /*->396*/ // 2 children in Scope
/*   381*/      OPC_CheckPredicate, 14, // Predicate_atomic_load_add_32
/*   383*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*   386*/      OPC_EmitMergeInputChains1_0,
/*   387*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::XADD32), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (XADD32:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)
/*   396*/    /*Scope*/ 15, /*->412*/
/*   397*/      OPC_CheckPredicate, 15, // Predicate_atomic_load_add_64
/*   399*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*   402*/      OPC_EmitMergeInputChains1_0,
/*   403*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::XADD64), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
                // Dst: (XADD64:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)
/*   412*/    0, /*End of Scope*/
/*   413*/  /*Scope*/ 54|128,3/*438*/, /*->853*/
/*   415*/    OPC_CheckOpcode, TARGET_VAL(BPFISD::BR_CC),
/*   418*/    OPC_RecordNode, // #0 = 'BPFbrcc' chained node
/*   419*/    OPC_CaptureGlueInput,
/*   420*/    OPC_RecordChild1, // #1 = $dst
/*   421*/    OPC_CheckChild1Type, MVT::i64,
/*   423*/    OPC_RecordChild2, // #2 = $imm
/*   424*/    OPC_Scope, 97|128,1/*225*/, /*->652*/ // 2 children in Scope
/*   427*/      OPC_MoveChild2,
/*   428*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   431*/      OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*   433*/      OPC_MoveParent,
/*   434*/      OPC_MoveChild3,
/*   435*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   438*/      OPC_CheckType, MVT::i64,
/*   440*/      OPC_Scope, 20, /*->462*/ // 10 children in Scope
/*   442*/        OPC_CheckPredicate, 16, // Predicate_BPF_CC_EQ
/*   444*/        OPC_MoveParent,
/*   445*/        OPC_RecordChild4, // #3 = $BrDst
/*   446*/        OPC_MoveChild4,
/*   447*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   450*/        OPC_MoveParent,
/*   451*/        OPC_EmitMergeInputChains1_0,
/*   452*/        OPC_EmitConvertToTarget, 2,
/*   454*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JEQ_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_EQ>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JEQ_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   462*/      /*Scope*/ 20, /*->483*/
/*   463*/        OPC_CheckPredicate, 17, // Predicate_BPF_CC_GTU
/*   465*/        OPC_MoveParent,
/*   466*/        OPC_RecordChild4, // #3 = $BrDst
/*   467*/        OPC_MoveChild4,
/*   468*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   471*/        OPC_MoveParent,
/*   472*/        OPC_EmitMergeInputChains1_0,
/*   473*/        OPC_EmitConvertToTarget, 2,
/*   475*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JUGT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   483*/      /*Scope*/ 20, /*->504*/
/*   484*/        OPC_CheckPredicate, 18, // Predicate_BPF_CC_GEU
/*   486*/        OPC_MoveParent,
/*   487*/        OPC_RecordChild4, // #3 = $BrDst
/*   488*/        OPC_MoveChild4,
/*   489*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   492*/        OPC_MoveParent,
/*   493*/        OPC_EmitMergeInputChains1_0,
/*   494*/        OPC_EmitConvertToTarget, 2,
/*   496*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JUGE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   504*/      /*Scope*/ 20, /*->525*/
/*   505*/        OPC_CheckPredicate, 19, // Predicate_BPF_CC_NE
/*   507*/        OPC_MoveParent,
/*   508*/        OPC_RecordChild4, // #3 = $BrDst
/*   509*/        OPC_MoveChild4,
/*   510*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   513*/        OPC_MoveParent,
/*   514*/        OPC_EmitMergeInputChains1_0,
/*   515*/        OPC_EmitConvertToTarget, 2,
/*   517*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JNE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_NE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JNE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   525*/      /*Scope*/ 20, /*->546*/
/*   526*/        OPC_CheckPredicate, 20, // Predicate_BPF_CC_GT
/*   528*/        OPC_MoveParent,
/*   529*/        OPC_RecordChild4, // #3 = $BrDst
/*   530*/        OPC_MoveChild4,
/*   531*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   534*/        OPC_MoveParent,
/*   535*/        OPC_EmitMergeInputChains1_0,
/*   536*/        OPC_EmitConvertToTarget, 2,
/*   538*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JSGT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   546*/      /*Scope*/ 20, /*->567*/
/*   547*/        OPC_CheckPredicate, 21, // Predicate_BPF_CC_GE
/*   549*/        OPC_MoveParent,
/*   550*/        OPC_RecordChild4, // #3 = $BrDst
/*   551*/        OPC_MoveChild4,
/*   552*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   555*/        OPC_MoveParent,
/*   556*/        OPC_EmitMergeInputChains1_0,
/*   557*/        OPC_EmitConvertToTarget, 2,
/*   559*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JSGE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   567*/      /*Scope*/ 20, /*->588*/
/*   568*/        OPC_CheckPredicate, 22, // Predicate_BPF_CC_LTU
/*   570*/        OPC_MoveParent,
/*   571*/        OPC_RecordChild4, // #3 = $BrDst
/*   572*/        OPC_MoveChild4,
/*   573*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   576*/        OPC_MoveParent,
/*   577*/        OPC_EmitMergeInputChains1_0,
/*   578*/        OPC_EmitConvertToTarget, 2,
/*   580*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JULT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JULT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   588*/      /*Scope*/ 20, /*->609*/
/*   589*/        OPC_CheckPredicate, 23, // Predicate_BPF_CC_LEU
/*   591*/        OPC_MoveParent,
/*   592*/        OPC_RecordChild4, // #3 = $BrDst
/*   593*/        OPC_MoveChild4,
/*   594*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   597*/        OPC_MoveParent,
/*   598*/        OPC_EmitMergeInputChains1_0,
/*   599*/        OPC_EmitConvertToTarget, 2,
/*   601*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JULE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JULE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   609*/      /*Scope*/ 20, /*->630*/
/*   610*/        OPC_CheckPredicate, 24, // Predicate_BPF_CC_LT
/*   612*/        OPC_MoveParent,
/*   613*/        OPC_RecordChild4, // #3 = $BrDst
/*   614*/        OPC_MoveChild4,
/*   615*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   618*/        OPC_MoveParent,
/*   619*/        OPC_EmitMergeInputChains1_0,
/*   620*/        OPC_EmitConvertToTarget, 2,
/*   622*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JSLT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   630*/      /*Scope*/ 20, /*->651*/
/*   631*/        OPC_CheckPredicate, 25, // Predicate_BPF_CC_LE
/*   633*/        OPC_MoveParent,
/*   634*/        OPC_RecordChild4, // #3 = $BrDst
/*   635*/        OPC_MoveChild4,
/*   636*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   639*/        OPC_MoveParent,
/*   640*/        OPC_EmitMergeInputChains1_0,
/*   641*/        OPC_EmitConvertToTarget, 2,
/*   643*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JSLE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   651*/      0, /*End of Scope*/
/*   652*/    /*Scope*/ 70|128,1/*198*/, /*->852*/
/*   654*/      OPC_MoveChild3,
/*   655*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   658*/      OPC_CheckType, MVT::i64,
/*   660*/      OPC_Scope, 18, /*->680*/ // 10 children in Scope
/*   662*/        OPC_CheckPredicate, 16, // Predicate_BPF_CC_EQ
/*   664*/        OPC_MoveParent,
/*   665*/        OPC_RecordChild4, // #3 = $BrDst
/*   666*/        OPC_MoveChild4,
/*   667*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   670*/        OPC_MoveParent,
/*   671*/        OPC_EmitMergeInputChains1_0,
/*   672*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JEQ_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_EQ>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JEQ_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*   680*/      /*Scope*/ 18, /*->699*/
/*   681*/        OPC_CheckPredicate, 17, // Predicate_BPF_CC_GTU
/*   683*/        OPC_MoveParent,
/*   684*/        OPC_RecordChild4, // #3 = $BrDst
/*   685*/        OPC_MoveChild4,
/*   686*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   689*/        OPC_MoveParent,
/*   690*/        OPC_EmitMergeInputChains1_0,
/*   691*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JUGT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*   699*/      /*Scope*/ 18, /*->718*/
/*   700*/        OPC_CheckPredicate, 18, // Predicate_BPF_CC_GEU
/*   702*/        OPC_MoveParent,
/*   703*/        OPC_RecordChild4, // #3 = $BrDst
/*   704*/        OPC_MoveChild4,
/*   705*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   708*/        OPC_MoveParent,
/*   709*/        OPC_EmitMergeInputChains1_0,
/*   710*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JUGE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*   718*/      /*Scope*/ 18, /*->737*/
/*   719*/        OPC_CheckPredicate, 19, // Predicate_BPF_CC_NE
/*   721*/        OPC_MoveParent,
/*   722*/        OPC_RecordChild4, // #3 = $BrDst
/*   723*/        OPC_MoveChild4,
/*   724*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   727*/        OPC_MoveParent,
/*   728*/        OPC_EmitMergeInputChains1_0,
/*   729*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JNE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_NE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JNE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*   737*/      /*Scope*/ 18, /*->756*/
/*   738*/        OPC_CheckPredicate, 20, // Predicate_BPF_CC_GT
/*   740*/        OPC_MoveParent,
/*   741*/        OPC_RecordChild4, // #3 = $BrDst
/*   742*/        OPC_MoveChild4,
/*   743*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   746*/        OPC_MoveParent,
/*   747*/        OPC_EmitMergeInputChains1_0,
/*   748*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JSGT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*   756*/      /*Scope*/ 18, /*->775*/
/*   757*/        OPC_CheckPredicate, 21, // Predicate_BPF_CC_GE
/*   759*/        OPC_MoveParent,
/*   760*/        OPC_RecordChild4, // #3 = $BrDst
/*   761*/        OPC_MoveChild4,
/*   762*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   765*/        OPC_MoveParent,
/*   766*/        OPC_EmitMergeInputChains1_0,
/*   767*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JSGE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*   775*/      /*Scope*/ 18, /*->794*/
/*   776*/        OPC_CheckPredicate, 22, // Predicate_BPF_CC_LTU
/*   778*/        OPC_MoveParent,
/*   779*/        OPC_RecordChild4, // #3 = $BrDst
/*   780*/        OPC_MoveChild4,
/*   781*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   784*/        OPC_MoveParent,
/*   785*/        OPC_EmitMergeInputChains1_0,
/*   786*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JULT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JULT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*   794*/      /*Scope*/ 18, /*->813*/
/*   795*/        OPC_CheckPredicate, 23, // Predicate_BPF_CC_LEU
/*   797*/        OPC_MoveParent,
/*   798*/        OPC_RecordChild4, // #3 = $BrDst
/*   799*/        OPC_MoveChild4,
/*   800*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   803*/        OPC_MoveParent,
/*   804*/        OPC_EmitMergeInputChains1_0,
/*   805*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JULE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JULE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*   813*/      /*Scope*/ 18, /*->832*/
/*   814*/        OPC_CheckPredicate, 24, // Predicate_BPF_CC_LT
/*   816*/        OPC_MoveParent,
/*   817*/        OPC_RecordChild4, // #3 = $BrDst
/*   818*/        OPC_MoveChild4,
/*   819*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   822*/        OPC_MoveParent,
/*   823*/        OPC_EmitMergeInputChains1_0,
/*   824*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JSLT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*   832*/      /*Scope*/ 18, /*->851*/
/*   833*/        OPC_CheckPredicate, 25, // Predicate_BPF_CC_LE
/*   835*/        OPC_MoveParent,
/*   836*/        OPC_RecordChild4, // #3 = $BrDst
/*   837*/        OPC_MoveChild4,
/*   838*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   841*/        OPC_MoveParent,
/*   842*/        OPC_EmitMergeInputChains1_0,
/*   843*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JSLE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*   851*/      0, /*End of Scope*/
/*   852*/    0, /*End of Scope*/
/*   853*/  /*Scope*/ 7|128,1/*135*/, /*->990*/
/*   855*/    OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*   858*/    OPC_Scope, 64, /*->924*/ // 2 children in Scope
/*   860*/      OPC_MoveChild0,
/*   861*/      OPC_CheckOpcode, TARGET_VAL(ISD::BSWAP),
/*   864*/      OPC_RecordChild0, // #0 = $src
/*   865*/      OPC_MoveParent,
/*   866*/      OPC_CheckType, MVT::i64,
/*   868*/      OPC_Scope, 26, /*->896*/ // 2 children in Scope
/*   870*/        OPC_CheckChild1Integer, 48, 
/*   872*/        OPC_CheckChild1Type, MVT::i64,
/*   874*/        OPC_Scope, 9, /*->885*/ // 2 children in Scope
/*   876*/          OPC_CheckPatternPredicate, 0, // (CurDAG->getDataLayout().isLittleEndian())
/*   878*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::BE16), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 48:{ *:[i64] }) - Complexity = 11
                    // Dst: (BE16:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*   885*/        /*Scope*/ 9, /*->895*/
/*   886*/          OPC_CheckPatternPredicate, 1, // (!CurDAG->getDataLayout().isLittleEndian())
/*   888*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LE16), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 48:{ *:[i64] }) - Complexity = 11
                    // Dst: (LE16:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*   895*/        0, /*End of Scope*/
/*   896*/      /*Scope*/ 26, /*->923*/
/*   897*/        OPC_CheckChild1Integer, 32, 
/*   899*/        OPC_CheckChild1Type, MVT::i64,
/*   901*/        OPC_Scope, 9, /*->912*/ // 2 children in Scope
/*   903*/          OPC_CheckPatternPredicate, 0, // (CurDAG->getDataLayout().isLittleEndian())
/*   905*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::BE32), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 32:{ *:[i64] }) - Complexity = 11
                    // Dst: (BE32:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*   912*/        /*Scope*/ 9, /*->922*/
/*   913*/          OPC_CheckPatternPredicate, 1, // (!CurDAG->getDataLayout().isLittleEndian())
/*   915*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LE32), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 32:{ *:[i64] }) - Complexity = 11
                    // Dst: (LE32:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*   922*/        0, /*End of Scope*/
/*   923*/      0, /*End of Scope*/
/*   924*/    /*Scope*/ 64, /*->989*/
/*   925*/      OPC_RecordChild0, // #0 = $src2
/*   926*/      OPC_RecordChild1, // #1 = $imm
/*   927*/      OPC_Scope, 21, /*->950*/ // 3 children in Scope
/*   929*/        OPC_MoveChild1,
/*   930*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   933*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*   935*/        OPC_CheckType, MVT::i64,
/*   937*/        OPC_MoveParent,
/*   938*/        OPC_CheckType, MVT::i64,
/*   940*/        OPC_EmitConvertToTarget, 1,
/*   942*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (SRL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*   950*/      /*Scope*/ 12, /*->963*/
/*   951*/        OPC_CheckChild1Type, MVT::i64,
/*   953*/        OPC_CheckType, MVT::i64,
/*   955*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (SRL_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*   963*/      /*Scope*/ 24, /*->988*/
/*   964*/        OPC_CheckChild1Type, MVT::i32,
/*   966*/        OPC_CheckType, MVT::i32,
/*   968*/        OPC_Scope, 8, /*->978*/ // 2 children in Scope
/*   970*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_rr_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (srl:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                    // Dst: (SRL_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*   978*/        /*Scope*/ 8, /*->987*/
/*   979*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (srl:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm) - Complexity = 3
                    // Dst: (SRL_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*   987*/        0, /*End of Scope*/
/*   988*/      0, /*End of Scope*/
/*   989*/    0, /*End of Scope*/
/*   990*/  /*Scope*/ 71, /*->1062*/
/*   991*/    OPC_CheckOpcode, TARGET_VAL(BPFISD::SELECT_CC),
/*   994*/    OPC_CaptureGlueInput,
/*   995*/    OPC_RecordChild0, // #0 = $lhs
/*   996*/    OPC_CheckChild0Type, MVT::i64,
/*   998*/    OPC_RecordChild1, // #1 = $rhs
/*   999*/    OPC_Scope, 34, /*->1035*/ // 2 children in Scope
/*  1001*/      OPC_MoveChild1,
/*  1002*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1005*/      OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1007*/      OPC_MoveParent,
/*  1008*/      OPC_RecordChild2, // #2 = $imm
/*  1009*/      OPC_MoveChild2,
/*  1010*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1013*/      OPC_CheckType, MVT::i64,
/*  1015*/      OPC_MoveParent,
/*  1016*/      OPC_RecordChild3, // #3 = $src
/*  1017*/      OPC_RecordChild4, // #4 = $src2
/*  1018*/      OPC_CheckType, MVT::i64,
/*  1020*/      OPC_EmitConvertToTarget, 1,
/*  1022*/      OPC_EmitConvertToTarget, 2,
/*  1024*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_Ri), 0|OPFL_GlueInput,
                    MVT::i64, 5/*#Ops*/, 0, 5, 6, 3, 4, 
                // Src: (BPFselectcc:{ *:[i64] } i64:{ *:[i64] }:$lhs, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2) - Complexity = 10
                // Dst: (Select_Ri:{ *:[i64] } i64:{ *:[i64] }:$lhs, (imm:{ *:[i64] }):$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2)
/*  1035*/    /*Scope*/ 25, /*->1061*/
/*  1036*/      OPC_RecordChild2, // #2 = $imm
/*  1037*/      OPC_MoveChild2,
/*  1038*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1041*/      OPC_CheckType, MVT::i64,
/*  1043*/      OPC_MoveParent,
/*  1044*/      OPC_RecordChild3, // #3 = $src
/*  1045*/      OPC_RecordChild4, // #4 = $src2
/*  1046*/      OPC_CheckType, MVT::i64,
/*  1048*/      OPC_EmitConvertToTarget, 2,
/*  1050*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::Select), 0|OPFL_GlueInput,
                    MVT::i64, 5/*#Ops*/, 0, 1, 5, 3, 4, 
                // Src: (BPFselectcc:{ *:[i64] } i64:{ *:[i64] }:$lhs, i64:{ *:[i64] }:$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2) - Complexity = 6
                // Dst: (Select:{ *:[i64] } i64:{ *:[i64] }:$lhs, i64:{ *:[i64] }:$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2)
/*  1061*/    0, /*End of Scope*/
/*  1062*/  /*Scope*/ 79, /*->1142*/
/*  1063*/    OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1066*/    OPC_Scope, 14, /*->1082*/ // 2 children in Scope
/*  1068*/      OPC_RecordNode, // #0 = $addr
/*  1069*/      OPC_CheckType, MVT::i64,
/*  1071*/      OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectFIAddr:$addr #1 #2
/*  1074*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::FI_ri), 0,
                    MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: FIri:{ *:[i64] }:$addr - Complexity = 9
                // Dst: (FI_ri:{ *:[i64] } FIri:{ *:[i64] }:$addr)
/*  1082*/    /*Scope*/ 58, /*->1141*/
/*  1083*/      OPC_RecordChild0, // #0 = $src2
/*  1084*/      OPC_RecordChild1, // #1 = $imm
/*  1085*/      OPC_Scope, 19, /*->1106*/ // 3 children in Scope
/*  1087*/        OPC_MoveChild1,
/*  1088*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1091*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1093*/        OPC_MoveParent,
/*  1094*/        OPC_CheckType, MVT::i64,
/*  1096*/        OPC_EmitConvertToTarget, 1,
/*  1098*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (ADD_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1106*/      /*Scope*/ 10, /*->1117*/
/*  1107*/        OPC_CheckType, MVT::i64,
/*  1109*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (ADD_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1117*/      /*Scope*/ 22, /*->1140*/
/*  1118*/        OPC_CheckType, MVT::i32,
/*  1120*/        OPC_Scope, 8, /*->1130*/ // 2 children in Scope
/*  1122*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_rr_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                    // Dst: (ADD_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1130*/        /*Scope*/ 8, /*->1139*/
/*  1131*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm) - Complexity = 3
                    // Dst: (ADD_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  1139*/        0, /*End of Scope*/
/*  1140*/      0, /*End of Scope*/
/*  1141*/    0, /*End of Scope*/
/*  1142*/  /*Scope*/ 79, /*->1222*/
/*  1143*/    OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  1146*/    OPC_Scope, 14, /*->1162*/ // 2 children in Scope
/*  1148*/      OPC_RecordNode, // #0 = $addr
/*  1149*/      OPC_CheckType, MVT::i64,
/*  1151*/      OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectFIAddr:$addr #1 #2
/*  1154*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::FI_ri), 0,
                    MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: FIri:{ *:[i64] }:$addr - Complexity = 9
                // Dst: (FI_ri:{ *:[i64] } FIri:{ *:[i64] }:$addr)
/*  1162*/    /*Scope*/ 58, /*->1221*/
/*  1163*/      OPC_RecordChild0, // #0 = $src2
/*  1164*/      OPC_RecordChild1, // #1 = $imm
/*  1165*/      OPC_Scope, 19, /*->1186*/ // 3 children in Scope
/*  1167*/        OPC_MoveChild1,
/*  1168*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1171*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1173*/        OPC_MoveParent,
/*  1174*/        OPC_CheckType, MVT::i64,
/*  1176*/        OPC_EmitConvertToTarget, 1,
/*  1178*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (or:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (OR_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1186*/      /*Scope*/ 10, /*->1197*/
/*  1187*/        OPC_CheckType, MVT::i64,
/*  1189*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (OR_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1197*/      /*Scope*/ 22, /*->1220*/
/*  1198*/        OPC_CheckType, MVT::i32,
/*  1200*/        OPC_Scope, 8, /*->1210*/ // 2 children in Scope
/*  1202*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_rr_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                    // Dst: (OR_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1210*/        /*Scope*/ 8, /*->1219*/
/*  1211*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm) - Complexity = 3
                    // Dst: (OR_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  1219*/        0, /*End of Scope*/
/*  1220*/      0, /*End of Scope*/
/*  1221*/    0, /*End of Scope*/
/*  1222*/  /*Scope*/ 25, /*->1248*/
/*  1223*/    OPC_CheckOpcode, TARGET_VAL(ISD::CALLSEQ_START),
/*  1226*/    OPC_RecordNode, // #0 = 'BPFcallseq_start' chained node
/*  1227*/    OPC_RecordChild1, // #1 = $amt1
/*  1228*/    OPC_MoveChild1,
/*  1229*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  1232*/    OPC_MoveParent,
/*  1233*/    OPC_RecordChild2, // #2 = $amt2
/*  1234*/    OPC_MoveChild2,
/*  1235*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  1238*/    OPC_MoveParent,
/*  1239*/    OPC_EmitMergeInputChains1_0,
/*  1240*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (BPFcallseq_start (timm:{ *:[iPTR] }):$amt1, (timm:{ *:[iPTR] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKDOWN:{ *:[i64] } (timm:{ *:[i64] }):$amt1, (timm:{ *:[i64] }):$amt2)
/*  1248*/  /*Scope*/ 26, /*->1275*/
/*  1249*/    OPC_CheckOpcode, TARGET_VAL(ISD::CALLSEQ_END),
/*  1252*/    OPC_RecordNode, // #0 = 'BPFcallseq_end' chained node
/*  1253*/    OPC_CaptureGlueInput,
/*  1254*/    OPC_RecordChild1, // #1 = $amt1
/*  1255*/    OPC_MoveChild1,
/*  1256*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  1259*/    OPC_MoveParent,
/*  1260*/    OPC_RecordChild2, // #2 = $amt2
/*  1261*/    OPC_MoveChild2,
/*  1262*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  1265*/    OPC_MoveParent,
/*  1266*/    OPC_EmitMergeInputChains1_0,
/*  1267*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (BPFcallseq_end (timm:{ *:[iPTR] }):$amt1, (timm:{ *:[iPTR] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:{ *:[i64] } (timm:{ *:[i64] }):$amt1, (timm:{ *:[i64] }):$amt2)
/*  1275*/  /*Scope*/ 88, /*->1364*/
/*  1276*/    OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*  1279*/    OPC_Scope, 23, /*->1304*/ // 2 children in Scope
/*  1281*/      OPC_CheckChild0Integer, 0, 
/*  1283*/      OPC_RecordChild1, // #0 = $src
/*  1284*/      OPC_SwitchType /*2 cases */, 7, MVT::i64,// ->1294
/*  1287*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::NEG_64), 0,
                      MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (sub:{ *:[i64] } 0:{ *:[i64] }, i64:{ *:[i64] }:$src) - Complexity = 8
                  // Dst: (NEG_64:{ *:[i64] } i64:{ *:[i64] }:$src)
/*  1294*/      /*SwitchType*/ 7, MVT::i32,// ->1303
/*  1296*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::NEG_32), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sub:{ *:[i32] } 0:{ *:[i32] }, i32:{ *:[i32] }:$src) - Complexity = 8
                  // Dst: (NEG_32:{ *:[i32] } i32:{ *:[i32] }:$src)
/*  1303*/      0, // EndSwitchType
/*  1304*/    /*Scope*/ 58, /*->1363*/
/*  1305*/      OPC_RecordChild0, // #0 = $src2
/*  1306*/      OPC_RecordChild1, // #1 = $imm
/*  1307*/      OPC_Scope, 19, /*->1328*/ // 3 children in Scope
/*  1309*/        OPC_MoveChild1,
/*  1310*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1313*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1315*/        OPC_MoveParent,
/*  1316*/        OPC_CheckType, MVT::i64,
/*  1318*/        OPC_EmitConvertToTarget, 1,
/*  1320*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (SUB_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1328*/      /*Scope*/ 10, /*->1339*/
/*  1329*/        OPC_CheckType, MVT::i64,
/*  1331*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (SUB_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1339*/      /*Scope*/ 22, /*->1362*/
/*  1340*/        OPC_CheckType, MVT::i32,
/*  1342*/        OPC_Scope, 8, /*->1352*/ // 2 children in Scope
/*  1344*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_rr_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (sub:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                    // Dst: (SUB_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1352*/        /*Scope*/ 8, /*->1361*/
/*  1353*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (sub:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm) - Complexity = 3
                    // Dst: (SUB_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  1361*/        0, /*End of Scope*/
/*  1362*/      0, /*End of Scope*/
/*  1363*/    0, /*End of Scope*/
/*  1364*/  /*Scope*/ 96, /*->1461*/
/*  1365*/    OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  1368*/    OPC_Scope, 31, /*->1401*/ // 2 children in Scope
/*  1370*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*  1376*/      OPC_RecordChild0, // #0 = $src
/*  1377*/      OPC_CheckType, MVT::i64,
/*  1379*/      OPC_EmitInteger, MVT::i64, 32, 
/*  1382*/      OPC_EmitNode1, TARGET_VAL(BPF::SLL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2
/*  1390*/      OPC_EmitInteger, MVT::i64, 32, 
/*  1393*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (and:{ *:[i64] } GPR:{ *:[i64] }:$src, 4294967295:{ *:[i64] }) - Complexity = 8
                // Dst: (SRL_ri:{ *:[i64] } (SLL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src, 32:{ *:[i64] }), 32:{ *:[i64] })
/*  1401*/    /*Scope*/ 58, /*->1460*/
/*  1402*/      OPC_RecordChild0, // #0 = $src2
/*  1403*/      OPC_RecordChild1, // #1 = $imm
/*  1404*/      OPC_Scope, 19, /*->1425*/ // 3 children in Scope
/*  1406*/        OPC_MoveChild1,
/*  1407*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1410*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1412*/        OPC_MoveParent,
/*  1413*/        OPC_CheckType, MVT::i64,
/*  1415*/        OPC_EmitConvertToTarget, 1,
/*  1417*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (and:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (AND_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1425*/      /*Scope*/ 10, /*->1436*/
/*  1426*/        OPC_CheckType, MVT::i64,
/*  1428*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (AND_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1436*/      /*Scope*/ 22, /*->1459*/
/*  1437*/        OPC_CheckType, MVT::i32,
/*  1439*/        OPC_Scope, 8, /*->1449*/ // 2 children in Scope
/*  1441*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_rr_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                    // Dst: (AND_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1449*/        /*Scope*/ 8, /*->1458*/
/*  1450*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (and:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm) - Complexity = 3
                    // Dst: (AND_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  1458*/        0, /*End of Scope*/
/*  1459*/      0, /*End of Scope*/
/*  1460*/    0, /*End of Scope*/
/*  1461*/  /*Scope*/ 67, /*->1529*/
/*  1462*/    OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1465*/    OPC_RecordChild0, // #0 = $src2
/*  1466*/    OPC_RecordChild1, // #1 = $imm
/*  1467*/    OPC_Scope, 21, /*->1490*/ // 3 children in Scope
/*  1469*/      OPC_MoveChild1,
/*  1470*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1473*/      OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1475*/      OPC_CheckType, MVT::i64,
/*  1477*/      OPC_MoveParent,
/*  1478*/      OPC_CheckType, MVT::i64,
/*  1480*/      OPC_EmitConvertToTarget, 1,
/*  1482*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                // Dst: (SLL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1490*/    /*Scope*/ 12, /*->1503*/
/*  1491*/      OPC_CheckChild1Type, MVT::i64,
/*  1493*/      OPC_CheckType, MVT::i64,
/*  1495*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (SLL_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1503*/    /*Scope*/ 24, /*->1528*/
/*  1504*/      OPC_CheckChild1Type, MVT::i32,
/*  1506*/      OPC_CheckType, MVT::i32,
/*  1508*/      OPC_Scope, 8, /*->1518*/ // 2 children in Scope
/*  1510*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (SLL_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1518*/      /*Scope*/ 8, /*->1527*/
/*  1519*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm) - Complexity = 3
                  // Dst: (SLL_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  1527*/      0, /*End of Scope*/
/*  1528*/    0, /*End of Scope*/
/*  1529*/  /*Scope*/ 61, /*->1591*/
/*  1530*/    OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  1533*/    OPC_RecordChild0, // #0 = $src2
/*  1534*/    OPC_RecordChild1, // #1 = $imm
/*  1535*/    OPC_Scope, 19, /*->1556*/ // 3 children in Scope
/*  1537*/      OPC_MoveChild1,
/*  1538*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1541*/      OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1543*/      OPC_MoveParent,
/*  1544*/      OPC_CheckType, MVT::i64,
/*  1546*/      OPC_EmitConvertToTarget, 1,
/*  1548*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (xor:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                // Dst: (XOR_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1556*/    /*Scope*/ 10, /*->1567*/
/*  1557*/      OPC_CheckType, MVT::i64,
/*  1559*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (XOR_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1567*/    /*Scope*/ 22, /*->1590*/
/*  1568*/      OPC_CheckType, MVT::i32,
/*  1570*/      OPC_Scope, 8, /*->1580*/ // 2 children in Scope
/*  1572*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (XOR_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1580*/      /*Scope*/ 8, /*->1589*/
/*  1581*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm) - Complexity = 3
                  // Dst: (XOR_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  1589*/      0, /*End of Scope*/
/*  1590*/    0, /*End of Scope*/
/*  1591*/  /*Scope*/ 67, /*->1659*/
/*  1592*/    OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*  1595*/    OPC_RecordChild0, // #0 = $src2
/*  1596*/    OPC_RecordChild1, // #1 = $imm
/*  1597*/    OPC_Scope, 21, /*->1620*/ // 3 children in Scope
/*  1599*/      OPC_MoveChild1,
/*  1600*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1603*/      OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1605*/      OPC_CheckType, MVT::i64,
/*  1607*/      OPC_MoveParent,
/*  1608*/      OPC_CheckType, MVT::i64,
/*  1610*/      OPC_EmitConvertToTarget, 1,
/*  1612*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                // Dst: (SRA_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1620*/    /*Scope*/ 12, /*->1633*/
/*  1621*/      OPC_CheckChild1Type, MVT::i64,
/*  1623*/      OPC_CheckType, MVT::i64,
/*  1625*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sra:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (SRA_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1633*/    /*Scope*/ 24, /*->1658*/
/*  1634*/      OPC_CheckChild1Type, MVT::i32,
/*  1636*/      OPC_CheckType, MVT::i32,
/*  1638*/      OPC_Scope, 8, /*->1648*/ // 2 children in Scope
/*  1640*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (SRA_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1648*/      /*Scope*/ 8, /*->1657*/
/*  1649*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm) - Complexity = 3
                  // Dst: (SRA_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  1657*/      0, /*End of Scope*/
/*  1658*/    0, /*End of Scope*/
/*  1659*/  /*Scope*/ 61, /*->1721*/
/*  1660*/    OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*  1663*/    OPC_RecordChild0, // #0 = $src2
/*  1664*/    OPC_RecordChild1, // #1 = $imm
/*  1665*/    OPC_Scope, 19, /*->1686*/ // 3 children in Scope
/*  1667*/      OPC_MoveChild1,
/*  1668*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1671*/      OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1673*/      OPC_MoveParent,
/*  1674*/      OPC_CheckType, MVT::i64,
/*  1676*/      OPC_EmitConvertToTarget, 1,
/*  1678*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (mul:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                // Dst: (MUL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1686*/    /*Scope*/ 10, /*->1697*/
/*  1687*/      OPC_CheckType, MVT::i64,
/*  1689*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (MUL_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1697*/    /*Scope*/ 22, /*->1720*/
/*  1698*/      OPC_CheckType, MVT::i32,
/*  1700*/      OPC_Scope, 8, /*->1710*/ // 2 children in Scope
/*  1702*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (mul:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (MUL_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1710*/      /*Scope*/ 8, /*->1719*/
/*  1711*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (mul:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm) - Complexity = 3
                  // Dst: (MUL_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  1719*/      0, /*End of Scope*/
/*  1720*/    0, /*End of Scope*/
/*  1721*/  /*Scope*/ 61, /*->1783*/
/*  1722*/    OPC_CheckOpcode, TARGET_VAL(ISD::UDIV),
/*  1725*/    OPC_RecordChild0, // #0 = $src2
/*  1726*/    OPC_RecordChild1, // #1 = $imm
/*  1727*/    OPC_Scope, 19, /*->1748*/ // 3 children in Scope
/*  1729*/      OPC_MoveChild1,
/*  1730*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1733*/      OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1735*/      OPC_MoveParent,
/*  1736*/      OPC_CheckType, MVT::i64,
/*  1738*/      OPC_EmitConvertToTarget, 1,
/*  1740*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (udiv:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                // Dst: (DIV_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1748*/    /*Scope*/ 10, /*->1759*/
/*  1749*/      OPC_CheckType, MVT::i64,
/*  1751*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (udiv:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (DIV_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1759*/    /*Scope*/ 22, /*->1782*/
/*  1760*/      OPC_CheckType, MVT::i32,
/*  1762*/      OPC_Scope, 8, /*->1772*/ // 2 children in Scope
/*  1764*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (udiv:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (DIV_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1772*/      /*Scope*/ 8, /*->1781*/
/*  1773*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (udiv:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm) - Complexity = 3
                  // Dst: (DIV_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  1781*/      0, /*End of Scope*/
/*  1782*/    0, /*End of Scope*/
/*  1783*/  /*Scope*/ 18, /*->1802*/
/*  1784*/    OPC_CheckOpcode, TARGET_VAL(BPFISD::Wrapper),
/*  1787*/    OPC_RecordChild0, // #0 = $in
/*  1788*/    OPC_MoveChild0,
/*  1789*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*  1792*/    OPC_MoveParent,
/*  1793*/    OPC_CheckType, MVT::i64,
/*  1795*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_imm64), 0,
                  MVT::i64, 1/*#Ops*/, 0, 
              // Src: (BPFWrapper:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$in) - Complexity = 6
              // Dst: (LD_imm64:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$in)
/*  1802*/  /*Scope*/ 47, /*->1850*/
/*  1803*/    OPC_CheckOpcode, TARGET_VAL(BPFISD::CALL),
/*  1806*/    OPC_RecordNode, // #0 = 'BPFcall' chained node
/*  1807*/    OPC_CaptureGlueInput,
/*  1808*/    OPC_RecordChild1, // #1 = $dst
/*  1809*/    OPC_MoveChild1,
/*  1810*/    OPC_SwitchOpcode /*3 cases */, 9, TARGET_VAL(ISD::TargetGlobalAddress),// ->1823
/*  1814*/      OPC_MoveParent,
/*  1815*/      OPC_EmitMergeInputChains1_0,
/*  1816*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i64, 1/*#Ops*/, 1, 
                // Src: (BPFcall (tglobaladdr:{ *:[iPTR] }):$dst) - Complexity = 6
                // Dst: (JAL:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$dst)
/*  1823*/    /*SwitchOpcode*/ 9, TARGET_VAL(ISD::TargetExternalSymbol),// ->1835
/*  1826*/      OPC_MoveParent,
/*  1827*/      OPC_EmitMergeInputChains1_0,
/*  1828*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i64, 1/*#Ops*/, 1, 
                // Src: (BPFcall (texternalsym:{ *:[iPTR] }):$dst) - Complexity = 6
                // Dst: (JAL:{ *:[i64] } (texternalsym:{ *:[i64] }):$dst)
/*  1835*/    /*SwitchOpcode*/ 11, TARGET_VAL(ISD::Constant),// ->1849
/*  1838*/      OPC_MoveParent,
/*  1839*/      OPC_EmitMergeInputChains1_0,
/*  1840*/      OPC_EmitConvertToTarget, 1,
/*  1842*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i64, 1/*#Ops*/, 2, 
                // Src: (BPFcall (imm:{ *:[iPTR] }):$dst) - Complexity = 6
                // Dst: (JAL:{ *:[i64] } (imm:{ *:[i64] }):$dst)
/*  1849*/    0, // EndSwitchOpcode
/*  1850*/  /*Scope*/ 30, /*->1881*/
/*  1851*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1854*/    OPC_RecordNode, // #0 = $imm
/*  1855*/    OPC_CheckType, MVT::i64,
/*  1857*/    OPC_Scope, 11, /*->1870*/ // 2 children in Scope
/*  1859*/      OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1861*/      OPC_EmitConvertToTarget, 0,
/*  1863*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::MOV_ri), 0,
                    MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm - Complexity = 4
                // Dst: (MOV_ri:{ *:[i64] } (imm:{ *:[i64] }):$imm)
/*  1870*/    /*Scope*/ 9, /*->1880*/
/*  1871*/      OPC_EmitConvertToTarget, 0,
/*  1873*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_imm64), 0,
                    MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:{ *:[i64] }):$imm - Complexity = 3
                // Dst: (LD_imm64:{ *:[i64] } (imm:{ *:[i64] }):$imm)
/*  1880*/    0, /*End of Scope*/
/*  1881*/  /*Scope*/ 10, /*->1892*/
/*  1882*/    OPC_RecordNode, // #0 = $imm
/*  1883*/    OPC_CheckType, MVT::i32,
/*  1885*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::MOV_ri_32), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: i32:{ *:[i32] }:$imm - Complexity = 3
              // Dst: (MOV_ri_32:{ *:[i32] } i32:{ *:[i32] }:$imm)
/*  1892*/  /*Scope*/ 17, /*->1910*/
/*  1893*/    OPC_CheckOpcode, TARGET_VAL(ISD::BR),
/*  1896*/    OPC_RecordNode, // #0 = 'br' chained node
/*  1897*/    OPC_RecordChild1, // #1 = $BrDst
/*  1898*/    OPC_MoveChild1,
/*  1899*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1902*/    OPC_MoveParent,
/*  1903*/    OPC_EmitMergeInputChains1_0,
/*  1904*/    OPC_MorphNodeTo0, TARGET_VAL(BPF::JMP), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$BrDst) - Complexity = 3
              // Dst: (JMP (bb:{ *:[Other] }):$BrDst)
/*  1910*/  /*Scope*/ 11, /*->1922*/
/*  1911*/    OPC_CheckOpcode, TARGET_VAL(BPFISD::RET_FLAG),
/*  1914*/    OPC_RecordNode, // #0 = 'BPFretflag' chained node
/*  1915*/    OPC_CaptureGlueInput,
/*  1916*/    OPC_EmitMergeInputChains1_0,
/*  1917*/    OPC_MorphNodeTo0, TARGET_VAL(BPF::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (BPFretflag) - Complexity = 3
              // Dst: (RET)
/*  1922*/  /*Scope*/ 16, /*->1939*/
/*  1923*/    OPC_CheckOpcode, TARGET_VAL(BPFISD::CALL),
/*  1926*/    OPC_RecordNode, // #0 = 'BPFcall' chained node
/*  1927*/    OPC_CaptureGlueInput,
/*  1928*/    OPC_RecordChild1, // #1 = $dst
/*  1929*/    OPC_CheckChild1Type, MVT::i64,
/*  1931*/    OPC_EmitMergeInputChains1_0,
/*  1932*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::JALX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  MVT::i64, 1/*#Ops*/, 1, 
              // Src: (BPFcall GPR:{ *:[i64] }:$dst) - Complexity = 3
              // Dst: (JALX:{ *:[i64] } GPR:{ *:[i64] }:$dst)
/*  1939*/  /*Scope*/ 28, /*->1968*/
/*  1940*/    OPC_CheckOpcode, TARGET_VAL(ISD::BSWAP),
/*  1943*/    OPC_RecordChild0, // #0 = $src
/*  1944*/    OPC_CheckType, MVT::i64,
/*  1946*/    OPC_Scope, 9, /*->1957*/ // 2 children in Scope
/*  1948*/      OPC_CheckPatternPredicate, 0, // (CurDAG->getDataLayout().isLittleEndian())
/*  1950*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::BE64), 0,
                    MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (BE64:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  1957*/    /*Scope*/ 9, /*->1967*/
/*  1958*/      OPC_CheckPatternPredicate, 1, // (!CurDAG->getDataLayout().isLittleEndian())
/*  1960*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::LE64), 0,
                    MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (LE64:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  1967*/    0, /*End of Scope*/
/*  1968*/  /*Scope*/ 15, /*->1984*/
/*  1969*/    OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1972*/    OPC_RecordChild0, // #0 = $imm
/*  1973*/    OPC_RecordChild1, // #1 = $src2
/*  1974*/    OPC_CheckType, MVT::i32,
/*  1976*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_ri_32), 0,
                  MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$imm, GPR32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (ADD_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  1984*/  /*Scope*/ 15, /*->2000*/
/*  1985*/    OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  1988*/    OPC_RecordChild0, // #0 = $imm
/*  1989*/    OPC_RecordChild1, // #1 = $src2
/*  1990*/    OPC_CheckType, MVT::i32,
/*  1992*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_ri_32), 0,
                  MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (or:{ *:[i32] } i32:{ *:[i32] }:$imm, GPR32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (OR_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  2000*/  /*Scope*/ 15, /*->2016*/
/*  2001*/    OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  2004*/    OPC_RecordChild0, // #0 = $imm
/*  2005*/    OPC_RecordChild1, // #1 = $src2
/*  2006*/    OPC_CheckType, MVT::i32,
/*  2008*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_ri_32), 0,
                  MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$imm, GPR32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (AND_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  2016*/  /*Scope*/ 15, /*->2032*/
/*  2017*/    OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2020*/    OPC_RecordChild0, // #0 = $imm
/*  2021*/    OPC_RecordChild1, // #1 = $src2
/*  2022*/    OPC_CheckType, MVT::i32,
/*  2024*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_ri_32), 0,
                  MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$imm, GPR32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (XOR_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  2032*/  /*Scope*/ 15, /*->2048*/
/*  2033*/    OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*  2036*/    OPC_RecordChild0, // #0 = $imm
/*  2037*/    OPC_RecordChild1, // #1 = $src2
/*  2038*/    OPC_CheckType, MVT::i32,
/*  2040*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_ri_32), 0,
                  MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (mul:{ *:[i32] } i32:{ *:[i32] }:$imm, GPR32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (MUL_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$imm)
/*  2048*/  0, /*End of Scope*/
    0
  }; // Total Array size is 2050 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 45
  // #OPC_RecordNode                           = 15
  // #OPC_RecordChild                          = 85
  // #OPC_RecordMemRef                         = 3
  // #OPC_CaptureGlueInput                     = 6
  // #OPC_MoveChild                            = 49
  // #OPC_MoveParent                           = 69
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 0
  // #OPC_CheckPatternPredicate                = 6
  // #OPC_CheckPredicate                       = 54
  // #OPC_CheckOpcode                          = 78
  // #OPC_SwitchOpcode                         = 1
  // #OPC_CheckType                            = 54
  // #OPC_SwitchType                           = 1
  // #OPC_CheckChildType                       = 18
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 7
  // #OPC_CheckCondCode                        = 0
  // #OPC_CheckValueType                       = 0
  // #OPC_CheckComplexPat                      = 15
  // #OPC_CheckAndImm                          = 1
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 2
  // #OPC_EmitStringInteger                    = 0
  // #OPC_EmitRegister                         = 0
  // #OPC_EmitConvertToTarget                  = 31
  // #OPC_EmitMergeInputChains                 = 48
  // #OPC_EmitCopyToReg                        = 0
  // #OPC_EmitNode                             = 1
  // #OPC_EmitNodeXForm                        = 0
  // #OPC_CompleteMatch                        = 0
  // #OPC_MorphNodeTo                          = 110

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckPatternPredicate(unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckPatternPredicate(unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (CurDAG->getDataLayout().isLittleEndian());
  case 1: return (!CurDAG->getDataLayout().isLittleEndian());
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckNodePredicate(SDNode *Node, unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_i64immSExt32
    auto *N = cast<ConstantSDNode>(Node);
return isInt<32>(N->getSExtValue()); 
  }
  case 1: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 2: { 
    // Predicate_truncstore
    SDNode *N = Node;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 3: { 
    // Predicate_truncstorei32
    SDNode *N = Node;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 4: { 
    // Predicate_truncstorei16
    SDNode *N = Node;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 5: { 
    // Predicate_truncstorei8
    SDNode *N = Node;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 6: { 
    // Predicate_store
    SDNode *N = Node;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 7: { 
    // Predicate_unindexedload
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 8: { 
    // Predicate_zextload
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::ZEXTLOAD) return false;
return true;

  }
  case 9: { 
    // Predicate_zextloadi32
    // Predicate_extloadi32
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 10: { 
    // Predicate_zextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 11: { 
    // Predicate_zextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 12: { 
    // Predicate_load
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 13: { 
    // Predicate_extload
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::EXTLOAD) return false;
return true;

  }
  case 14: { 
    // Predicate_atomic_load_add_32
    SDNode *N = Node;
if (cast<AtomicSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 15: { 
    // Predicate_atomic_load_add_64
    SDNode *N = Node;
if (cast<AtomicSDNode>(N)->getMemoryVT() != MVT::i64) return false;
return true;

  }
  case 16: { 
    // Predicate_BPF_CC_EQ
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETEQ);
  }
  case 17: { 
    // Predicate_BPF_CC_GTU
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETUGT);
  }
  case 18: { 
    // Predicate_BPF_CC_GEU
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETUGE);
  }
  case 19: { 
    // Predicate_BPF_CC_NE
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETNE);
  }
  case 20: { 
    // Predicate_BPF_CC_GT
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETGT);
  }
  case 21: { 
    // Predicate_BPF_CC_GE
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETGE);
  }
  case 22: { 
    // Predicate_BPF_CC_LTU
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETULT);
  }
  case 23: { 
    // Predicate_BPF_CC_LEU
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETULE);
  }
  case 24: { 
    // Predicate_BPF_CC_LT
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETLT);
  }
  case 25: { 
    // Predicate_BPF_CC_LE
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETLE);
  }
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode*>> &Result) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode*>> &Result)
#if DAGISEL_INLINE
  override
#endif
{
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
  return SelectAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
  return SelectFIAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}
#endif // GET_DAGISEL_BODY


#ifdef DAGISEL_INLINE
#undef DAGISEL_INLINE
#endif
#ifdef DAGISEL_CLASS_COLONCOLON
#undef DAGISEL_CLASS_COLONCOLON
#endif
#ifdef GET_DAGISEL_DECL
#undef GET_DAGISEL_DECL
#endif
#ifdef GET_DAGISEL_BODY
#undef GET_DAGISEL_BODY
#endif
