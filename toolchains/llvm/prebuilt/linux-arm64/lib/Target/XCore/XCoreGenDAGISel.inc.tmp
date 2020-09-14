/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the XCore target                              *|
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
/*     0*/  OPC_SwitchOpcode /*44 cases */, 69|128,1/*197*/, TARGET_VAL(ISD::ADD),// ->202
/*     5*/    OPC_Scope, 26, /*->33*/ // 5 children in Scope
/*     7*/      OPC_MoveChild0,
/*     8*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*    11*/      OPC_CheckChild0Integer, 1, 
/*    13*/      OPC_RecordChild1, // #0 = $size
/*    14*/      OPC_MoveParent,
/*    15*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*    26*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::MKMSK_2r), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (add:{ *:[i32] } (shl:{ *:[i32] } 1:{ *:[i32] }, GRRegs:{ *:[i32] }:$size), -1:{ *:[i32] }) - Complexity = 16
                // Dst: (MKMSK_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$size)
/*    33*/    /*Scope*/ 32, /*->66*/
/*    34*/      OPC_RecordChild0, // #0 = $addr
/*    35*/      OPC_MoveChild1,
/*    36*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*    39*/      OPC_RecordChild0, // #1 = $offset
/*    40*/      OPC_Scope, 11, /*->53*/ // 2 children in Scope
/*    42*/        OPC_CheckChild1Integer, 2, 
/*    44*/        OPC_MoveParent,
/*    45*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWF_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 2:{ *:[i32] })) - Complexity = 11
                  // Dst: (LDAWF_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*    53*/      /*Scope*/ 11, /*->65*/
/*    54*/        OPC_CheckChild1Integer, 1, 
/*    56*/        OPC_MoveParent,
/*    57*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDA16F_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 1:{ *:[i32] })) - Complexity = 11
                  // Dst: (LDA16F_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*    65*/      0, /*End of Scope*/
/*    66*/    /*Scope*/ 33, /*->100*/
/*    67*/      OPC_MoveChild0,
/*    68*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*    71*/      OPC_RecordChild0, // #0 = $offset
/*    72*/      OPC_Scope, 12, /*->86*/ // 2 children in Scope
/*    74*/        OPC_CheckChild1Integer, 2, 
/*    76*/        OPC_MoveParent,
/*    77*/        OPC_RecordChild1, // #1 = $addr
/*    78*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWF_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:{ *:[i32] } (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 2:{ *:[i32] }), GRRegs:{ *:[i32] }:$addr) - Complexity = 11
                  // Dst: (LDAWF_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*    86*/      /*Scope*/ 12, /*->99*/
/*    87*/        OPC_CheckChild1Integer, 1, 
/*    89*/        OPC_MoveParent,
/*    90*/        OPC_RecordChild1, // #1 = $addr
/*    91*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDA16F_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:{ *:[i32] } (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 1:{ *:[i32] }), GRRegs:{ *:[i32] }:$addr) - Complexity = 11
                  // Dst: (LDA16F_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*    99*/      0, /*End of Scope*/
/*   100*/    /*Scope*/ 14, /*->115*/
/*   101*/      OPC_RecordNode, // #0 = $addr
/*   102*/      OPC_CheckType, MVT::i32,
/*   104*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*   107*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWFI), 0,
                    MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: ADDRspii:{ *:[i32] }:$addr - Complexity = 9
                // Dst: (LDAWFI:{ *:[i32] } ADDRspii:{ *:[i32] }:$addr)
/*   115*/    /*Scope*/ 85, /*->201*/
/*   116*/      OPC_RecordChild0, // #0 = $b
/*   117*/      OPC_RecordChild1, // #1 = $c
/*   118*/      OPC_Scope, 71, /*->191*/ // 2 children in Scope
/*   120*/        OPC_MoveChild1,
/*   121*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   124*/        OPC_Scope, 13, /*->139*/ // 4 children in Scope
/*   126*/          OPC_CheckPredicate, 0, // Predicate_immUs
/*   128*/          OPC_MoveParent,
/*   129*/          OPC_EmitConvertToTarget, 1,
/*   131*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::ADD_2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:{ *:[i32] } GRRegs:{ *:[i32] }:$b, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$c) - Complexity = 7
                    // Dst: (ADD_2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$b, (imm:{ *:[i32] }):$c)
/*   139*/        /*Scope*/ 16, /*->156*/
/*   140*/          OPC_CheckPredicate, 1, // Predicate_immUs4
/*   142*/          OPC_MoveParent,
/*   143*/          OPC_EmitConvertToTarget, 1,
/*   145*/          OPC_EmitNodeXForm, 0, 2, // div4_xform
/*   148*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWF_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (imm:{ *:[i32] })<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                    // Dst: (LDAWF_l2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (div4_xform:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_immUs4>>:$offset))
/*   156*/        /*Scope*/ 16, /*->173*/
/*   157*/          OPC_CheckPredicate, 2, // Predicate_immUsNeg
/*   159*/          OPC_MoveParent,
/*   160*/          OPC_EmitConvertToTarget, 1,
/*   162*/          OPC_EmitNodeXForm, 1, 2, // neg_xform
/*   165*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SUB_2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, (imm:{ *:[i32] })<<P:Predicate_immUsNeg>>:$src2) - Complexity = 7
                    // Dst: (SUB_2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, (neg_xform:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_immUsNeg>>:$src2))
/*   173*/        /*Scope*/ 16, /*->190*/
/*   174*/          OPC_CheckPredicate, 3, // Predicate_immUs4Neg
/*   176*/          OPC_MoveParent,
/*   177*/          OPC_EmitConvertToTarget, 1,
/*   179*/          OPC_EmitNodeXForm, 2, 2, // div4neg_xform
/*   182*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, (imm:{ *:[i32] })<<P:Predicate_immUs4Neg>>:$src2) - Complexity = 7
                    // Dst: (LDAWB_l2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, (div4neg_xform:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_immUs4Neg>>:$src2))
/*   190*/        0, /*End of Scope*/
/*   191*/      /*Scope*/ 8, /*->200*/
/*   192*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::ADD_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
                  // Dst: (ADD_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*   200*/      0, /*End of Scope*/
/*   201*/    0, /*End of Scope*/
/*   202*/  /*SwitchOpcode*/ 55|128,3/*439*/, TARGET_VAL(ISD::LOAD),// ->645
/*   206*/    OPC_RecordMemRef,
/*   207*/    OPC_RecordNode, // #0 = 'ld' chained node
/*   208*/    OPC_Scope, 15|128,1/*143*/, /*->354*/ // 4 children in Scope
/*   211*/      OPC_MoveChild1,
/*   212*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*   215*/      OPC_Scope, 67, /*->284*/ // 2 children in Scope
/*   217*/        OPC_RecordChild0, // #1 = $addr
/*   218*/        OPC_MoveChild1,
/*   219*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   222*/        OPC_RecordChild0, // #2 = $offset
/*   223*/        OPC_Scope, 38, /*->263*/ // 2 children in Scope
/*   225*/          OPC_CheckChild1Integer, 1, 
/*   227*/          OPC_MoveParent,
/*   228*/          OPC_MoveParent,
/*   229*/          OPC_CheckPredicate, 4, // Predicate_unindexedload
/*   231*/          OPC_CheckType, MVT::i32,
/*   233*/          OPC_Scope, 13, /*->248*/ // 2 children in Scope
/*   235*/            OPC_CheckPredicate, 5, // Predicate_sextload
/*   237*/            OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*   239*/            OPC_EmitMergeInputChains1_0,
/*   240*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 1:{ *:[i32] })))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                      // Dst: (LD16S_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   248*/          /*Scope*/ 13, /*->262*/
/*   249*/            OPC_CheckPredicate, 7, // Predicate_extload
/*   251*/            OPC_CheckPredicate, 6, // Predicate_extloadi16
/*   253*/            OPC_EmitMergeInputChains1_0,
/*   254*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 1:{ *:[i32] })))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                      // Dst: (LD16S_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   262*/          0, /*End of Scope*/
/*   263*/        /*Scope*/ 19, /*->283*/
/*   264*/          OPC_CheckChild1Integer, 2, 
/*   266*/          OPC_MoveParent,
/*   267*/          OPC_MoveParent,
/*   268*/          OPC_CheckPredicate, 4, // Predicate_unindexedload
/*   270*/          OPC_CheckPredicate, 8, // Predicate_load
/*   272*/          OPC_CheckType, MVT::i32,
/*   274*/          OPC_EmitMergeInputChains1_0,
/*   275*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:{ *:[i32] } (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 2:{ *:[i32] })))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                    // Dst: (LDW_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   283*/        0, /*End of Scope*/
/*   284*/      /*Scope*/ 68, /*->353*/
/*   285*/        OPC_MoveChild0,
/*   286*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   289*/        OPC_RecordChild0, // #1 = $offset
/*   290*/        OPC_Scope, 39, /*->331*/ // 2 children in Scope
/*   292*/          OPC_CheckChild1Integer, 1, 
/*   294*/          OPC_MoveParent,
/*   295*/          OPC_RecordChild1, // #2 = $addr
/*   296*/          OPC_MoveParent,
/*   297*/          OPC_CheckPredicate, 4, // Predicate_unindexedload
/*   299*/          OPC_CheckType, MVT::i32,
/*   301*/          OPC_Scope, 13, /*->316*/ // 2 children in Scope
/*   303*/            OPC_CheckPredicate, 5, // Predicate_sextload
/*   305*/            OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*   307*/            OPC_EmitMergeInputChains1_0,
/*   308*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 2, 1, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 1:{ *:[i32] }), GRRegs:{ *:[i32] }:$addr))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                      // Dst: (LD16S_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   316*/          /*Scope*/ 13, /*->330*/
/*   317*/            OPC_CheckPredicate, 7, // Predicate_extload
/*   319*/            OPC_CheckPredicate, 6, // Predicate_extloadi16
/*   321*/            OPC_EmitMergeInputChains1_0,
/*   322*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 2, 1, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 1:{ *:[i32] }), GRRegs:{ *:[i32] }:$addr))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                      // Dst: (LD16S_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   330*/          0, /*End of Scope*/
/*   331*/        /*Scope*/ 20, /*->352*/
/*   332*/          OPC_CheckChild1Integer, 2, 
/*   334*/          OPC_MoveParent,
/*   335*/          OPC_RecordChild1, // #2 = $addr
/*   336*/          OPC_MoveParent,
/*   337*/          OPC_CheckPredicate, 4, // Predicate_unindexedload
/*   339*/          OPC_CheckPredicate, 8, // Predicate_load
/*   341*/          OPC_CheckType, MVT::i32,
/*   343*/          OPC_EmitMergeInputChains1_0,
/*   344*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:{ *:[i32] } (add:{ *:[i32] } (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 2:{ *:[i32] }), GRRegs:{ *:[i32] }:$addr))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                    // Dst: (LDW_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   352*/        0, /*End of Scope*/
/*   353*/      0, /*End of Scope*/
/*   354*/    /*Scope*/ 21, /*->376*/
/*   355*/      OPC_RecordChild1, // #1 = $addr
/*   356*/      OPC_CheckChild1Type, MVT::i32,
/*   358*/      OPC_CheckPredicate, 4, // Predicate_unindexedload
/*   360*/      OPC_CheckPredicate, 8, // Predicate_load
/*   362*/      OPC_CheckType, MVT::i32,
/*   364*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRspii:$addr #2 #3
/*   367*/      OPC_EmitMergeInputChains1_0,
/*   368*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:{ *:[i32] } ADDRspii:{ *:[i32] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDWFI:{ *:[i32] } ADDRspii:{ *:[i32] }:$addr)
/*   376*/    /*Scope*/ 16|128,1/*144*/, /*->522*/
/*   378*/      OPC_MoveChild1,
/*   379*/      OPC_SwitchOpcode /*3 cases */, 69, TARGET_VAL(ISD::ADD),// ->452
/*   383*/        OPC_RecordChild0, // #1 = $addr
/*   384*/        OPC_RecordChild1, // #2 = $offset
/*   385*/        OPC_Scope, 28, /*->415*/ // 2 children in Scope
/*   387*/          OPC_MoveChild1,
/*   388*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   391*/          OPC_CheckPredicate, 1, // Predicate_immUs4
/*   393*/          OPC_MoveParent,
/*   394*/          OPC_MoveParent,
/*   395*/          OPC_CheckPredicate, 4, // Predicate_unindexedload
/*   397*/          OPC_CheckPredicate, 8, // Predicate_load
/*   399*/          OPC_CheckType, MVT::i32,
/*   401*/          OPC_EmitMergeInputChains1_0,
/*   402*/          OPC_EmitConvertToTarget, 2,
/*   404*/          OPC_EmitNodeXForm, 0, 3, // div4_xform
/*   407*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:{ *:[i32] } (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (imm:{ *:[i32] })<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 11
                    // Dst: (LDW_2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (div4_xform:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_immUs4>>:$offset))
/*   415*/        /*Scope*/ 35, /*->451*/
/*   416*/          OPC_MoveParent,
/*   417*/          OPC_CheckPredicate, 4, // Predicate_unindexedload
/*   419*/          OPC_CheckType, MVT::i32,
/*   421*/          OPC_Scope, 13, /*->436*/ // 2 children in Scope
/*   423*/            OPC_CheckPredicate, 9, // Predicate_zextload
/*   425*/            OPC_CheckPredicate, 10, // Predicate_zextloadi8
/*   427*/            OPC_EmitMergeInputChains1_0,
/*   428*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 7
                      // Dst: (LD8U_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   436*/          /*Scope*/ 13, /*->450*/
/*   437*/            OPC_CheckPredicate, 7, // Predicate_extload
/*   439*/            OPC_CheckPredicate, 10, // Predicate_extloadi8
/*   441*/            OPC_EmitMergeInputChains1_0,
/*   442*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 7
                      // Dst: (LD8U_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   450*/          0, /*End of Scope*/
/*   451*/        0, /*End of Scope*/
/*   452*/      /*SwitchOpcode*/ 21, TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->476
/*   455*/        OPC_RecordChild0, // #1 = $b
/*   456*/        OPC_MoveChild0,
/*   457*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*   460*/        OPC_MoveParent,
/*   461*/        OPC_MoveParent,
/*   462*/        OPC_CheckPredicate, 4, // Predicate_unindexedload
/*   464*/        OPC_CheckPredicate, 8, // Predicate_load
/*   466*/        OPC_CheckType, MVT::i32,
/*   468*/        OPC_EmitMergeInputChains1_0,
/*   469*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (ld:{ *:[i32] } (dprelwrapper:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$b))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                  // Dst: (LDWDP_lru6:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$b)
/*   476*/      /*SwitchOpcode*/ 42, TARGET_VAL(XCoreISD::CPRelativeWrapper),// ->521
/*   479*/        OPC_RecordChild0, // #1 = $b
/*   480*/        OPC_MoveChild0,
/*   481*/        OPC_SwitchOpcode /*2 cases */, 16, TARGET_VAL(ISD::TargetGlobalAddress),// ->501
/*   485*/          OPC_MoveParent,
/*   486*/          OPC_MoveParent,
/*   487*/          OPC_CheckPredicate, 4, // Predicate_unindexedload
/*   489*/          OPC_CheckPredicate, 8, // Predicate_load
/*   491*/          OPC_CheckType, MVT::i32,
/*   493*/          OPC_EmitMergeInputChains1_0,
/*   494*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWCP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } (cprelwrapper:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$b))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                    // Dst: (LDWCP_lru6:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$b)
/*   501*/        /*SwitchOpcode*/ 16, TARGET_VAL(ISD::TargetConstantPool),// ->520
/*   504*/          OPC_MoveParent,
/*   505*/          OPC_MoveParent,
/*   506*/          OPC_CheckPredicate, 4, // Predicate_unindexedload
/*   508*/          OPC_CheckPredicate, 8, // Predicate_load
/*   510*/          OPC_CheckType, MVT::i32,
/*   512*/          OPC_EmitMergeInputChains1_0,
/*   513*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWCP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } (cprelwrapper:{ *:[iPTR] } (tconstpool:{ *:[iPTR] }):$b))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                    // Dst: (LDWCP_lru6:{ *:[i32] } (tconstpool:{ *:[i32] }):$b)
/*   520*/        0, // EndSwitchOpcode
/*   521*/      0, // EndSwitchOpcode
/*   522*/    /*Scope*/ 121, /*->644*/
/*   523*/      OPC_RecordChild1, // #1 = $addr
/*   524*/      OPC_CheckChild1Type, MVT::i32,
/*   526*/      OPC_CheckPredicate, 4, // Predicate_unindexedload
/*   528*/      OPC_CheckType, MVT::i32,
/*   530*/      OPC_Scope, 14, /*->546*/ // 4 children in Scope
/*   532*/        OPC_CheckPredicate, 8, // Predicate_load
/*   534*/        OPC_EmitMergeInputChains1_0,
/*   535*/        OPC_EmitInteger, MVT::i32, 0, 
/*   538*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:{ *:[i32] } GRRegs:{ *:[i32] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 4
                  // Dst: (LDW_2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, 0:{ *:[i32] })
/*   546*/      /*Scope*/ 23, /*->570*/
/*   547*/        OPC_CheckPredicate, 9, // Predicate_zextload
/*   549*/        OPC_CheckPredicate, 10, // Predicate_zextloadi8
/*   551*/        OPC_EmitMergeInputChains1_0,
/*   552*/        OPC_EmitInteger, MVT::i32, 0, 
/*   555*/        OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                      MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*   562*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } GRRegs:{ *:[i32] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 4
                  // Dst: (LD8U_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (LDC_ru6:{ *:[i32] } 0:{ *:[i32] }))
/*   570*/      /*Scope*/ 23, /*->594*/
/*   571*/        OPC_CheckPredicate, 5, // Predicate_sextload
/*   573*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*   575*/        OPC_EmitMergeInputChains1_0,
/*   576*/        OPC_EmitInteger, MVT::i32, 0, 
/*   579*/        OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                      MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*   586*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } GRRegs:{ *:[i32] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 4
                  // Dst: (LD16S_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (LDC_ru6:{ *:[i32] } 0:{ *:[i32] }))
/*   594*/      /*Scope*/ 48, /*->643*/
/*   595*/        OPC_CheckPredicate, 7, // Predicate_extload
/*   597*/        OPC_Scope, 21, /*->620*/ // 2 children in Scope
/*   599*/          OPC_CheckPredicate, 10, // Predicate_extloadi8
/*   601*/          OPC_EmitMergeInputChains1_0,
/*   602*/          OPC_EmitInteger, MVT::i32, 0, 
/*   605*/          OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                        MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*   612*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 1, 3, 
                    // Src: (ld:{ *:[i32] } GRRegs:{ *:[i32] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 4
                    // Dst: (LD8U_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (LDC_ru6:{ *:[i32] } 0:{ *:[i32] }))
/*   620*/        /*Scope*/ 21, /*->642*/
/*   621*/          OPC_CheckPredicate, 6, // Predicate_extloadi16
/*   623*/          OPC_EmitMergeInputChains1_0,
/*   624*/          OPC_EmitInteger, MVT::i32, 0, 
/*   627*/          OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                        MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*   634*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 1, 3, 
                    // Src: (ld:{ *:[i32] } GRRegs:{ *:[i32] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 4
                    // Dst: (LD16S_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (LDC_ru6:{ *:[i32] } 0:{ *:[i32] }))
/*   642*/        0, /*End of Scope*/
/*   643*/      0, /*End of Scope*/
/*   644*/    0, /*End of Scope*/
/*   645*/  /*SwitchOpcode*/ 22|128,2/*278*/, TARGET_VAL(ISD::STORE),// ->927
/*   649*/    OPC_RecordMemRef,
/*   650*/    OPC_RecordNode, // #0 = 'st' chained node
/*   651*/    OPC_RecordChild1, // #1 = $val
/*   652*/    OPC_CheckChild1Type, MVT::i32,
/*   654*/    OPC_Scope, 101, /*->757*/ // 4 children in Scope
/*   656*/      OPC_MoveChild2,
/*   657*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*   660*/      OPC_Scope, 46, /*->708*/ // 2 children in Scope
/*   662*/        OPC_RecordChild0, // #2 = $addr
/*   663*/        OPC_MoveChild1,
/*   664*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   667*/        OPC_RecordChild0, // #3 = $offset
/*   668*/        OPC_Scope, 19, /*->689*/ // 2 children in Scope
/*   670*/          OPC_CheckChild1Integer, 1, 
/*   672*/          OPC_MoveParent,
/*   673*/          OPC_MoveParent,
/*   674*/          OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*   676*/          OPC_CheckPredicate, 12, // Predicate_truncstore
/*   678*/          OPC_CheckPredicate, 13, // Predicate_truncstorei16
/*   680*/          OPC_EmitMergeInputChains1_0,
/*   681*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (st GRRegs:{ *:[i32] }:$val, (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 1:{ *:[i32] })))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                    // Dst: (ST16_l3r GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   689*/        /*Scope*/ 17, /*->707*/
/*   690*/          OPC_CheckChild1Integer, 2, 
/*   692*/          OPC_MoveParent,
/*   693*/          OPC_MoveParent,
/*   694*/          OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*   696*/          OPC_CheckPredicate, 14, // Predicate_store
/*   698*/          OPC_EmitMergeInputChains1_0,
/*   699*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::STW_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (st GRRegs:{ *:[i32] }:$val, (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 2:{ *:[i32] })))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                    // Dst: (STW_l3r GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   707*/        0, /*End of Scope*/
/*   708*/      /*Scope*/ 47, /*->756*/
/*   709*/        OPC_MoveChild0,
/*   710*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   713*/        OPC_RecordChild0, // #2 = $offset
/*   714*/        OPC_Scope, 20, /*->736*/ // 2 children in Scope
/*   716*/          OPC_CheckChild1Integer, 1, 
/*   718*/          OPC_MoveParent,
/*   719*/          OPC_RecordChild1, // #3 = $addr
/*   720*/          OPC_MoveParent,
/*   721*/          OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*   723*/          OPC_CheckPredicate, 12, // Predicate_truncstore
/*   725*/          OPC_CheckPredicate, 13, // Predicate_truncstorei16
/*   727*/          OPC_EmitMergeInputChains1_0,
/*   728*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 2, 
                    // Src: (st GRRegs:{ *:[i32] }:$val, (add:{ *:[i32] } (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 1:{ *:[i32] }), GRRegs:{ *:[i32] }:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                    // Dst: (ST16_l3r GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   736*/        /*Scope*/ 18, /*->755*/
/*   737*/          OPC_CheckChild1Integer, 2, 
/*   739*/          OPC_MoveParent,
/*   740*/          OPC_RecordChild1, // #3 = $addr
/*   741*/          OPC_MoveParent,
/*   742*/          OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*   744*/          OPC_CheckPredicate, 14, // Predicate_store
/*   746*/          OPC_EmitMergeInputChains1_0,
/*   747*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::STW_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 2, 
                    // Src: (st GRRegs:{ *:[i32] }:$val, (add:{ *:[i32] } (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 2:{ *:[i32] }), GRRegs:{ *:[i32] }:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                    // Dst: (STW_l3r GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   755*/        0, /*End of Scope*/
/*   756*/      0, /*End of Scope*/
/*   757*/    /*Scope*/ 19, /*->777*/
/*   758*/      OPC_RecordChild2, // #2 = $addr
/*   759*/      OPC_CheckChild2Type, MVT::i32,
/*   761*/      OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*   763*/      OPC_CheckPredicate, 14, // Predicate_store
/*   765*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRspii:$addr #3 #4
/*   768*/      OPC_EmitMergeInputChains1_0,
/*   769*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::STWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    3/*#Ops*/, 1, 3, 4, 
                // Src: (st GRRegs:{ *:[i32] }:$src, ADDRspii:{ *:[i32] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STWFI GRRegs:{ *:[i32] }:$src, ADDRspii:{ *:[i32] }:$addr)
/*   777*/    /*Scope*/ 76, /*->854*/
/*   778*/      OPC_MoveChild2,
/*   779*/      OPC_SwitchOpcode /*2 cases */, 48, TARGET_VAL(ISD::ADD),// ->831
/*   783*/        OPC_RecordChild0, // #2 = $addr
/*   784*/        OPC_RecordChild1, // #3 = $offset
/*   785*/        OPC_Scope, 26, /*->813*/ // 2 children in Scope
/*   787*/          OPC_MoveChild1,
/*   788*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   791*/          OPC_CheckPredicate, 1, // Predicate_immUs4
/*   793*/          OPC_MoveParent,
/*   794*/          OPC_MoveParent,
/*   795*/          OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*   797*/          OPC_CheckPredicate, 14, // Predicate_store
/*   799*/          OPC_EmitMergeInputChains1_0,
/*   800*/          OPC_EmitConvertToTarget, 3,
/*   802*/          OPC_EmitNodeXForm, 0, 4, // div4_xform
/*   805*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 5, 
                    // Src: (st GRRegs:{ *:[i32] }:$val, (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (imm:{ *:[i32] })<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 11
                    // Dst: (STW_2rus GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr, (div4_xform:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_immUs4>>:$offset))
/*   813*/        /*Scope*/ 16, /*->830*/
/*   814*/          OPC_MoveParent,
/*   815*/          OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*   817*/          OPC_CheckPredicate, 12, // Predicate_truncstore
/*   819*/          OPC_CheckPredicate, 15, // Predicate_truncstorei8
/*   821*/          OPC_EmitMergeInputChains1_0,
/*   822*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (st GRRegs:{ *:[i32] }:$val, (add:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 7
                    // Dst: (ST8_l3r GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*   830*/        0, /*End of Scope*/
/*   831*/      /*SwitchOpcode*/ 19, TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->853
/*   834*/        OPC_RecordChild0, // #2 = $b
/*   835*/        OPC_MoveChild0,
/*   836*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*   839*/        OPC_MoveParent,
/*   840*/        OPC_MoveParent,
/*   841*/        OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*   843*/        OPC_CheckPredicate, 14, // Predicate_store
/*   845*/        OPC_EmitMergeInputChains1_0,
/*   846*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::STWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 2, 
                  // Src: (st RRegs:{ *:[i32] }:$a, (dprelwrapper:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$b))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 10
                  // Dst: (STWDP_lru6 RRegs:{ *:[i32] }:$a, (tglobaladdr:{ *:[i32] }):$b)
/*   853*/      0, // EndSwitchOpcode
/*   854*/    /*Scope*/ 71, /*->926*/
/*   855*/      OPC_RecordChild2, // #2 = $addr
/*   856*/      OPC_CheckChild2Type, MVT::i32,
/*   858*/      OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*   860*/      OPC_Scope, 14, /*->876*/ // 2 children in Scope
/*   862*/        OPC_CheckPredicate, 14, // Predicate_store
/*   864*/        OPC_EmitMergeInputChains1_0,
/*   865*/        OPC_EmitInteger, MVT::i32, 0, 
/*   868*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 4
                  // Dst: (STW_2rus GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr, 0:{ *:[i32] })
/*   876*/      /*Scope*/ 48, /*->925*/
/*   877*/        OPC_CheckPredicate, 12, // Predicate_truncstore
/*   879*/        OPC_Scope, 21, /*->902*/ // 2 children in Scope
/*   881*/          OPC_CheckPredicate, 15, // Predicate_truncstorei8
/*   883*/          OPC_EmitMergeInputChains1_0,
/*   884*/          OPC_EmitInteger, MVT::i32, 0, 
/*   887*/          OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                        MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*   894*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 4, 
                    // Src: (st GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 4
                    // Dst: (ST8_l3r GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr, (LDC_ru6:{ *:[i32] } 0:{ *:[i32] }))
/*   902*/        /*Scope*/ 21, /*->924*/
/*   903*/          OPC_CheckPredicate, 13, // Predicate_truncstorei16
/*   905*/          OPC_EmitMergeInputChains1_0,
/*   906*/          OPC_EmitInteger, MVT::i32, 0, 
/*   909*/          OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                        MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*   916*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 4, 
                    // Src: (st GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 4
                    // Dst: (ST16_l3r GRRegs:{ *:[i32] }:$val, GRRegs:{ *:[i32] }:$addr, (LDC_ru6:{ *:[i32] } 0:{ *:[i32] }))
/*   924*/        0, /*End of Scope*/
/*   925*/      0, /*End of Scope*/
/*   926*/    0, /*End of Scope*/
/*   927*/  /*SwitchOpcode*/ 81, TARGET_VAL(ISD::SRA),// ->1011
/*   930*/    OPC_Scope, 29, /*->961*/ // 2 children in Scope
/*   932*/      OPC_MoveChild0,
/*   933*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   936*/      OPC_RecordChild0, // #0 = $src
/*   937*/      OPC_RecordChild1, // #1 = $imm
/*   938*/      OPC_MoveChild1,
/*   939*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   942*/      OPC_CheckPredicate, 16, // Predicate_immBpwSubBitp
/*   944*/      OPC_MoveParent,
/*   945*/      OPC_MoveParent,
/*   946*/      OPC_CheckChild1Same, 1,
/*   948*/      OPC_EmitConvertToTarget, 1,
/*   950*/      OPC_EmitNodeXForm, 3, 2, // bpwsub_xform
/*   953*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (sra:{ *:[i32] } (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$src, (imm:{ *:[i32] })<<P:Predicate_immBpwSubBitp>>:$imm), (imm:{ *:[i32] })<<P:Predicate_immBpwSubBitp>>:$imm) - Complexity = 14
                // Dst: (SEXT_rus:{ *:[i32] } GRRegs:{ *:[i32] }:$src, (bpwsub_xform:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_immBpwSubBitp>>:$imm))
/*   961*/    /*Scope*/ 48, /*->1010*/
/*   962*/      OPC_RecordChild0, // #0 = $src
/*   963*/      OPC_Scope, 13, /*->978*/ // 2 children in Scope
/*   965*/        OPC_CheckChild1Integer, 31, 
/*   967*/        OPC_EmitInteger, MVT::i32, 32, 
/*   970*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:{ *:[i32] } GRRegs:{ *:[i32] }:$src, 31:{ *:[i32] }) - Complexity = 8
                  // Dst: (ASHR_l2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$src, 32:{ *:[i32] })
/*   978*/      /*Scope*/ 30, /*->1009*/
/*   979*/        OPC_RecordChild1, // #1 = $c
/*   980*/        OPC_Scope, 17, /*->999*/ // 2 children in Scope
/*   982*/          OPC_MoveChild1,
/*   983*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   986*/          OPC_CheckPredicate, 17, // Predicate_immBitp
/*   988*/          OPC_MoveParent,
/*   989*/          OPC_EmitConvertToTarget, 1,
/*   991*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (sra:{ *:[i32] } GRRegs:{ *:[i32] }:$b, (imm:{ *:[i32] })<<P:Predicate_immBitp>>:$c) - Complexity = 7
                    // Dst: (ASHR_l2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$b, (imm:{ *:[i32] }):$c)
/*   999*/        /*Scope*/ 8, /*->1008*/
/*  1000*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::ASHR_l3r), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (sra:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
                    // Dst: (ASHR_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  1008*/        0, /*End of Scope*/
/*  1009*/      0, /*End of Scope*/
/*  1010*/    0, /*End of Scope*/
/*  1011*/  /*SwitchOpcode*/ 87|128,4/*599*/, TARGET_VAL(ISD::INTRINSIC_VOID),// ->1614
/*  1015*/    OPC_RecordNode, // #0 = 'intrinsic_void' chained node
/*  1016*/    OPC_Scope, 53, /*->1071*/ // 30 children in Scope
/*  1018*/      OPC_CheckChild1Integer, 33|128,50/*6433*/, 
/*  1021*/      OPC_RecordChild2, // #1 = $a
/*  1022*/      OPC_CheckChild2Type, MVT::i32,
/*  1024*/      OPC_RecordChild3, // #2 = $b
/*  1025*/      OPC_Scope, 34, /*->1061*/ // 2 children in Scope
/*  1027*/        OPC_MoveChild3,
/*  1028*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1031*/        OPC_Scope, 13, /*->1046*/ // 2 children in Scope
/*  1033*/          OPC_CheckPredicate, 18, // Predicate_immU6
/*  1035*/          OPC_MoveParent,
/*  1036*/          OPC_EmitMergeInputChains1_0,
/*  1037*/          OPC_EmitConvertToTarget, 2,
/*  1039*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::SETC_ru6), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 3, 
                    // Src: (intrinsic_void 6433:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$a, (imm:{ *:[i32] })<<P:Predicate_immU6>>:$b) - Complexity = 12
                    // Dst: (SETC_ru6 GRRegs:{ *:[i32] }:$a, (imm:{ *:[i32] }):$b)
/*  1046*/        /*Scope*/ 13, /*->1060*/
/*  1047*/          OPC_CheckPredicate, 19, // Predicate_immU16
/*  1049*/          OPC_MoveParent,
/*  1050*/          OPC_EmitMergeInputChains1_0,
/*  1051*/          OPC_EmitConvertToTarget, 2,
/*  1053*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::SETC_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 3, 
                    // Src: (intrinsic_void 6433:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$a, (imm:{ *:[i32] })<<P:Predicate_immU16>>:$b) - Complexity = 12
                    // Dst: (SETC_lru6 GRRegs:{ *:[i32] }:$a, (imm:{ *:[i32] }):$b)
/*  1060*/        0, /*End of Scope*/
/*  1061*/      /*Scope*/ 8, /*->1070*/
/*  1062*/        OPC_EmitMergeInputChains1_0,
/*  1063*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETC_l2r), 0|OPFL_Chain,
                      2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_void 6433:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val) - Complexity = 8
                  // Dst: (SETC_l2r GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val)
/*  1070*/      0, /*End of Scope*/
/*  1071*/    /*Scope*/ 36, /*->1108*/
/*  1072*/      OPC_CheckChild1Integer, 41|128,50/*6441*/, 
/*  1075*/      OPC_RecordChild2, // #1 = $a
/*  1076*/      OPC_MoveChild2,
/*  1077*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1080*/      OPC_Scope, 12, /*->1094*/ // 2 children in Scope
/*  1082*/        OPC_CheckPredicate, 18, // Predicate_immU6
/*  1084*/        OPC_MoveParent,
/*  1085*/        OPC_EmitMergeInputChains1_0,
/*  1086*/        OPC_EmitConvertToTarget, 1,
/*  1088*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETSR_u6), 0|OPFL_Chain,
                      1/*#Ops*/, 2, 
                  // Src: (intrinsic_void 6441:{ *:[iPTR] }, (imm:{ *:[i32] })<<P:Predicate_immU6>>:$a) - Complexity = 12
                  // Dst: (SETSR_u6 (imm:{ *:[i32] }):$a)
/*  1094*/      /*Scope*/ 12, /*->1107*/
/*  1095*/        OPC_CheckPredicate, 19, // Predicate_immU16
/*  1097*/        OPC_MoveParent,
/*  1098*/        OPC_EmitMergeInputChains1_0,
/*  1099*/        OPC_EmitConvertToTarget, 1,
/*  1101*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETSR_lu6), 0|OPFL_Chain,
                      1/*#Ops*/, 2, 
                  // Src: (intrinsic_void 6441:{ *:[iPTR] }, (imm:{ *:[i32] })<<P:Predicate_immU16>>:$a) - Complexity = 12
                  // Dst: (SETSR_lu6 (imm:{ *:[i32] }):$a)
/*  1107*/      0, /*End of Scope*/
/*  1108*/    /*Scope*/ 36, /*->1145*/
/*  1109*/      OPC_CheckChild1Integer, 3|128,50/*6403*/, 
/*  1112*/      OPC_RecordChild2, // #1 = $a
/*  1113*/      OPC_MoveChild2,
/*  1114*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1117*/      OPC_Scope, 12, /*->1131*/ // 2 children in Scope
/*  1119*/        OPC_CheckPredicate, 18, // Predicate_immU6
/*  1121*/        OPC_MoveParent,
/*  1122*/        OPC_EmitMergeInputChains1_0,
/*  1123*/        OPC_EmitConvertToTarget, 1,
/*  1125*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::CLRSR_u6), 0|OPFL_Chain,
                      1/*#Ops*/, 2, 
                  // Src: (intrinsic_void 6403:{ *:[iPTR] }, (imm:{ *:[i32] })<<P:Predicate_immU6>>:$a) - Complexity = 12
                  // Dst: (CLRSR_u6 (imm:{ *:[i32] }):$a)
/*  1131*/      /*Scope*/ 12, /*->1144*/
/*  1132*/        OPC_CheckPredicate, 19, // Predicate_immU16
/*  1134*/        OPC_MoveParent,
/*  1135*/        OPC_EmitMergeInputChains1_0,
/*  1136*/        OPC_EmitConvertToTarget, 1,
/*  1138*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::CLRSR_lu6), 0|OPFL_Chain,
                      1/*#Ops*/, 2, 
                  // Src: (intrinsic_void 6403:{ *:[iPTR] }, (imm:{ *:[i32] })<<P:Predicate_immU16>>:$a) - Complexity = 12
                  // Dst: (CLRSR_lu6 (imm:{ *:[i32] }):$a)
/*  1144*/      0, /*End of Scope*/
/*  1145*/    /*Scope*/ 36, /*->1182*/
/*  1146*/      OPC_CheckChild1Integer, 29|128,50/*6429*/, 
/*  1149*/      OPC_RecordChild2, // #1 = $r
/*  1150*/      OPC_CheckChild2Type, MVT::i32,
/*  1152*/      OPC_RecordChild3, // #2 = $val
/*  1153*/      OPC_Scope, 17, /*->1172*/ // 2 children in Scope
/*  1155*/        OPC_MoveChild3,
/*  1156*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1159*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*  1161*/        OPC_MoveParent,
/*  1162*/        OPC_EmitMergeInputChains1_0,
/*  1163*/        OPC_EmitConvertToTarget, 2,
/*  1165*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::OUTCT_rus), 0|OPFL_Chain,
                      2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 6429:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$val) - Complexity = 12
                  // Dst: (OUTCT_rus GRRegs:{ *:[i32] }:$r, (imm:{ *:[i32] }):$val)
/*  1172*/      /*Scope*/ 8, /*->1181*/
/*  1173*/        OPC_EmitMergeInputChains1_0,
/*  1174*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::OUTCT_2r), 0|OPFL_Chain,
                      2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_void 6429:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val) - Complexity = 8
                  // Dst: (OUTCT_2r GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val)
/*  1181*/      0, /*End of Scope*/
/*  1182*/    /*Scope*/ 36, /*->1219*/
/*  1183*/      OPC_CheckChild1Integer, 0|128,50/*6400*/, 
/*  1186*/      OPC_RecordChild2, // #1 = $r
/*  1187*/      OPC_CheckChild2Type, MVT::i32,
/*  1189*/      OPC_RecordChild3, // #2 = $val
/*  1190*/      OPC_Scope, 17, /*->1209*/ // 2 children in Scope
/*  1192*/        OPC_MoveChild3,
/*  1193*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1196*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*  1198*/        OPC_MoveParent,
/*  1199*/        OPC_EmitMergeInputChains1_0,
/*  1200*/        OPC_EmitConvertToTarget, 2,
/*  1202*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::CHKCT_rus), 0|OPFL_Chain,
                      2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 6400:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$val) - Complexity = 12
                  // Dst: (CHKCT_rus GRRegs:{ *:[i32] }:$r, (imm:{ *:[i32] }):$val)
/*  1209*/      /*Scope*/ 8, /*->1218*/
/*  1210*/        OPC_EmitMergeInputChains1_0,
/*  1211*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::CHKCT_2r), 0|OPFL_Chain,
                      2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_void 6400:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val) - Complexity = 8
                  // Dst: (CHKCT_2r GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val)
/*  1218*/      0, /*End of Scope*/
/*  1219*/    /*Scope*/ 15, /*->1235*/
/*  1220*/      OPC_CheckChild1Integer, 39|128,50/*6439*/, 
/*  1223*/      OPC_RecordChild2, // #1 = $r
/*  1224*/      OPC_CheckChild2Type, MVT::i32,
/*  1226*/      OPC_RecordChild3, // #2 = $val
/*  1227*/      OPC_EmitMergeInputChains1_0,
/*  1228*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::SETPT_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6439:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val) - Complexity = 8
                // Dst: (SETPT_2r GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val)
/*  1235*/    /*Scope*/ 15, /*->1251*/
/*  1236*/      OPC_CheckChild1Integer, 31|128,50/*6431*/, 
/*  1239*/      OPC_RecordChild2, // #1 = $r
/*  1240*/      OPC_CheckChild2Type, MVT::i32,
/*  1242*/      OPC_RecordChild3, // #2 = $val
/*  1243*/      OPC_EmitMergeInputChains1_0,
/*  1244*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::OUTT_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6431:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val) - Complexity = 8
                // Dst: (OUTT_2r GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val)
/*  1251*/    /*Scope*/ 15, /*->1267*/
/*  1252*/      OPC_CheckChild1Integer, 28|128,50/*6428*/, 
/*  1255*/      OPC_RecordChild2, // #1 = $r
/*  1256*/      OPC_CheckChild2Type, MVT::i32,
/*  1258*/      OPC_RecordChild3, // #2 = $val
/*  1259*/      OPC_EmitMergeInputChains1_0,
/*  1260*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::OUT_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6428:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val) - Complexity = 8
                // Dst: (OUT_2r GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val)
/*  1267*/    /*Scope*/ 15, /*->1283*/
/*  1268*/      OPC_CheckChild1Integer, 35|128,50/*6435*/, 
/*  1271*/      OPC_RecordChild2, // #1 = $r
/*  1272*/      OPC_CheckChild2Type, MVT::i32,
/*  1274*/      OPC_RecordChild3, // #2 = $val
/*  1275*/      OPC_EmitMergeInputChains1_0,
/*  1276*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::SETD_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6435:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val) - Complexity = 8
                // Dst: (SETD_2r GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val)
/*  1283*/    /*Scope*/ 15, /*->1299*/
/*  1284*/      OPC_CheckChild1Integer, 38|128,50/*6438*/, 
/*  1287*/      OPC_RecordChild2, // #1 = $src1
/*  1288*/      OPC_CheckChild2Type, MVT::i32,
/*  1290*/      OPC_RecordChild3, // #2 = $src2
/*  1291*/      OPC_EmitMergeInputChains1_0,
/*  1292*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::SETPSC_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6438:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2) - Complexity = 8
                // Dst: (SETPSC_2r GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2)
/*  1299*/    /*Scope*/ 17, /*->1317*/
/*  1300*/      OPC_CheckChild1Integer, 23|128,50/*6423*/, 
/*  1303*/      OPC_RecordChild2, // #1 = $t
/*  1304*/      OPC_CheckChild2Type, MVT::i32,
/*  1306*/      OPC_RecordChild3, // #2 = $src
/*  1307*/      OPC_CheckChild3Type, MVT::i32,
/*  1309*/      OPC_EmitMergeInputChains1_0,
/*  1310*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::INITSP_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_void 6423:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$t, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (INITSP_2r GRRegs:{ *:[i32] }:$src, GRRegs:{ *:[i32] }:$t)
/*  1317*/    /*Scope*/ 17, /*->1335*/
/*  1318*/      OPC_CheckChild1Integer, 22|128,50/*6422*/, 
/*  1321*/      OPC_RecordChild2, // #1 = $t
/*  1322*/      OPC_CheckChild2Type, MVT::i32,
/*  1324*/      OPC_RecordChild3, // #2 = $src
/*  1325*/      OPC_CheckChild3Type, MVT::i32,
/*  1327*/      OPC_EmitMergeInputChains1_0,
/*  1328*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::INITPC_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_void 6422:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$t, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (INITPC_2r GRRegs:{ *:[i32] }:$src, GRRegs:{ *:[i32] }:$t)
/*  1335*/    /*Scope*/ 17, /*->1353*/
/*  1336*/      OPC_CheckChild1Integer, 19|128,50/*6419*/, 
/*  1339*/      OPC_RecordChild2, // #1 = $t
/*  1340*/      OPC_CheckChild2Type, MVT::i32,
/*  1342*/      OPC_RecordChild3, // #2 = $src
/*  1343*/      OPC_CheckChild3Type, MVT::i32,
/*  1345*/      OPC_EmitMergeInputChains1_0,
/*  1346*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::INITCP_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_void 6419:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$t, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (INITCP_2r GRRegs:{ *:[i32] }:$src, GRRegs:{ *:[i32] }:$t)
/*  1353*/    /*Scope*/ 17, /*->1371*/
/*  1354*/      OPC_CheckChild1Integer, 20|128,50/*6420*/, 
/*  1357*/      OPC_RecordChild2, // #1 = $t
/*  1358*/      OPC_CheckChild2Type, MVT::i32,
/*  1360*/      OPC_RecordChild3, // #2 = $src
/*  1361*/      OPC_CheckChild3Type, MVT::i32,
/*  1363*/      OPC_EmitMergeInputChains1_0,
/*  1364*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::INITDP_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_void 6420:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$t, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (INITDP_2r GRRegs:{ *:[i32] }:$src, GRRegs:{ *:[i32] }:$t)
/*  1371*/    /*Scope*/ 15, /*->1387*/
/*  1372*/      OPC_CheckChild1Integer, 42|128,50/*6442*/, 
/*  1375*/      OPC_RecordChild2, // #1 = $r
/*  1376*/      OPC_CheckChild2Type, MVT::i32,
/*  1378*/      OPC_RecordChild3, // #2 = $val
/*  1379*/      OPC_EmitMergeInputChains1_0,
/*  1380*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::SETTW_l2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6442:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val) - Complexity = 8
                // Dst: (SETTW_l2r GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$val)
/*  1387*/    /*Scope*/ 13, /*->1401*/
/*  1388*/      OPC_CheckChild1Integer, 37|128,50/*6437*/, 
/*  1391*/      OPC_RecordChild2, // #1 = $src1
/*  1392*/      OPC_RecordChild3, // #2 = $src2
/*  1393*/      OPC_EmitMergeInputChains1_0,
/*  1394*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::SETPS_l2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6437:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2) - Complexity = 8
                // Dst: (SETPS_l2r GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2)
/*  1401*/    /*Scope*/ 17, /*->1419*/
/*  1402*/      OPC_CheckChild1Integer, 21|128,50/*6421*/, 
/*  1405*/      OPC_RecordChild2, // #1 = $t
/*  1406*/      OPC_CheckChild2Type, MVT::i32,
/*  1408*/      OPC_RecordChild3, // #2 = $src
/*  1409*/      OPC_CheckChild3Type, MVT::i32,
/*  1411*/      OPC_EmitMergeInputChains1_0,
/*  1412*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::INITLR_l2r), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_void 6421:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$t, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (INITLR_l2r GRRegs:{ *:[i32] }:$src, GRRegs:{ *:[i32] }:$t)
/*  1419*/    /*Scope*/ 17, /*->1437*/
/*  1420*/      OPC_CheckChild1Integer, 34|128,50/*6434*/, 
/*  1423*/      OPC_RecordChild2, // #1 = $src1
/*  1424*/      OPC_CheckChild2Type, MVT::i32,
/*  1426*/      OPC_RecordChild3, // #2 = $src2
/*  1427*/      OPC_CheckChild3Type, MVT::i32,
/*  1429*/      OPC_EmitMergeInputChains1_0,
/*  1430*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::SETCLK_l2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6434:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2) - Complexity = 8
                // Dst: (SETCLK_l2r GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2)
/*  1437*/    /*Scope*/ 17, /*->1455*/
/*  1438*/      OPC_CheckChild1Integer, 40|128,50/*6440*/, 
/*  1441*/      OPC_RecordChild2, // #1 = $src1
/*  1442*/      OPC_CheckChild2Type, MVT::i32,
/*  1444*/      OPC_RecordChild3, // #2 = $src2
/*  1445*/      OPC_CheckChild3Type, MVT::i32,
/*  1447*/      OPC_EmitMergeInputChains1_0,
/*  1448*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::SETRDY_l2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6440:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2) - Complexity = 8
                // Dst: (SETRDY_l2r GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2)
/*  1455*/    /*Scope*/ 13, /*->1469*/
/*  1456*/      OPC_CheckChild1Integer, 27|128,50/*6427*/, 
/*  1459*/      OPC_RecordChild2, // #1 = $a
/*  1460*/      OPC_CheckChild2Type, MVT::i32,
/*  1462*/      OPC_EmitMergeInputChains1_0,
/*  1463*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::MSYNC_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6427:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$a) - Complexity = 8
                // Dst: (MSYNC_1r GRRegs:{ *:[i32] }:$a)
/*  1469*/    /*Scope*/ 13, /*->1483*/
/*  1470*/      OPC_CheckChild1Integer, 26|128,50/*6426*/, 
/*  1473*/      OPC_RecordChild2, // #1 = $a
/*  1474*/      OPC_CheckChild2Type, MVT::i32,
/*  1476*/      OPC_EmitMergeInputChains1_0,
/*  1477*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::MJOIN_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6426:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$a) - Complexity = 8
                // Dst: (MJOIN_1r GRRegs:{ *:[i32] }:$a)
/*  1483*/    /*Scope*/ 13, /*->1497*/
/*  1484*/      OPC_CheckChild1Integer, 46|128,50/*6446*/, 
/*  1487*/      OPC_RecordChild2, // #1 = $a
/*  1488*/      OPC_CheckChild2Type, MVT::i32,
/*  1490*/      OPC_EmitMergeInputChains1_0,
/*  1491*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::SYNCR_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6446:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$a) - Complexity = 8
                // Dst: (SYNCR_1r GRRegs:{ *:[i32] }:$a)
/*  1497*/    /*Scope*/ 13, /*->1511*/
/*  1498*/      OPC_CheckChild1Integer, 9|128,50/*6409*/, 
/*  1501*/      OPC_RecordChild2, // #1 = $a
/*  1502*/      OPC_CheckChild2Type, MVT::i32,
/*  1504*/      OPC_EmitMergeInputChains1_0,
/*  1505*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::FREER_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6409:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$a) - Complexity = 8
                // Dst: (FREER_1r GRRegs:{ *:[i32] }:$a)
/*  1511*/    /*Scope*/ 19, /*->1531*/
/*  1512*/      OPC_CheckChild1Integer, 43|128,50/*6443*/, 
/*  1515*/      OPC_RecordChild2, // #1 = $a
/*  1516*/      OPC_CheckChild2Type, MVT::i32,
/*  1518*/      OPC_RecordChild3, // #2 = physreg input R11
/*  1519*/      OPC_CheckChild3Type, MVT::i32,
/*  1521*/      OPC_EmitMergeInputChains1_0,
/*  1522*/      OPC_EmitCopyToReg, 2, XCore::R11,
/*  1525*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::SETV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6443:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$a, R11:{ *:[i32] }) - Complexity = 8
                // Dst: (SETV_1r GRRegs:{ *:[i32] }:$a)
/*  1531*/    /*Scope*/ 19, /*->1551*/
/*  1532*/      OPC_CheckChild1Integer, 36|128,50/*6436*/, 
/*  1535*/      OPC_RecordChild2, // #1 = $a
/*  1536*/      OPC_CheckChild2Type, MVT::i32,
/*  1538*/      OPC_RecordChild3, // #2 = physreg input R11
/*  1539*/      OPC_CheckChild3Type, MVT::i32,
/*  1541*/      OPC_EmitMergeInputChains1_0,
/*  1542*/      OPC_EmitCopyToReg, 2, XCore::R11,
/*  1545*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::SETEV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6436:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$a, R11:{ *:[i32] }) - Complexity = 8
                // Dst: (SETEV_1r GRRegs:{ *:[i32] }:$a)
/*  1551*/    /*Scope*/ 13, /*->1565*/
/*  1552*/      OPC_CheckChild1Integer, 6|128,50/*6406*/, 
/*  1555*/      OPC_RecordChild2, // #1 = $a
/*  1556*/      OPC_CheckChild2Type, MVT::i32,
/*  1558*/      OPC_EmitMergeInputChains1_0,
/*  1559*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::EDU_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6406:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$a) - Complexity = 8
                // Dst: (EDU_1r GRRegs:{ *:[i32] }:$a)
/*  1565*/    /*Scope*/ 13, /*->1579*/
/*  1566*/      OPC_CheckChild1Integer, 7|128,50/*6407*/, 
/*  1569*/      OPC_RecordChild2, // #1 = $a
/*  1570*/      OPC_CheckChild2Type, MVT::i32,
/*  1572*/      OPC_EmitMergeInputChains1_0,
/*  1573*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::EEU_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6407:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$a) - Complexity = 8
                // Dst: (EEU_1r GRRegs:{ *:[i32] }:$a)
/*  1579*/    /*Scope*/ 13, /*->1593*/
/*  1580*/      OPC_CheckChild1Integer, 2|128,50/*6402*/, 
/*  1583*/      OPC_RecordChild2, // #1 = $a
/*  1584*/      OPC_CheckChild2Type, MVT::i32,
/*  1586*/      OPC_EmitMergeInputChains1_0,
/*  1587*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::CLRPT_1R), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6402:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$a) - Complexity = 8
                // Dst: (CLRPT_1R GRRegs:{ *:[i32] }:$a)
/*  1593*/    /*Scope*/ 9, /*->1603*/
/*  1594*/      OPC_CheckChild1Integer, 1|128,50/*6401*/, 
/*  1597*/      OPC_EmitMergeInputChains1_0,
/*  1598*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::CLRE_0R), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (intrinsic_void 6401:{ *:[iPTR] }) - Complexity = 8
                // Dst: (CLRE_0R)
/*  1603*/    /*Scope*/ 9, /*->1613*/
/*  1604*/      OPC_CheckChild1Integer, 45|128,50/*6445*/, 
/*  1607*/      OPC_EmitMergeInputChains1_0,
/*  1608*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::SSYNC_0r), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (intrinsic_void 6445:{ *:[iPTR] }) - Complexity = 8
                // Dst: (SSYNC_0r)
/*  1613*/    0, /*End of Scope*/
/*  1614*/  /*SwitchOpcode*/ 110, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->1727
/*  1617*/    OPC_Scope, 34, /*->1653*/ // 5 children in Scope
/*  1619*/      OPC_CheckChild0Integer, 44|128,50/*6444*/, 
/*  1622*/      OPC_RecordChild1, // #0 = $src1
/*  1623*/      OPC_RecordChild2, // #1 = $src2
/*  1624*/      OPC_Scope, 17, /*->1643*/ // 2 children in Scope
/*  1626*/        OPC_MoveChild2,
/*  1627*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1630*/        OPC_CheckPredicate, 17, // Predicate_immBitp
/*  1632*/        OPC_MoveParent,
/*  1633*/        OPC_EmitConvertToTarget, 1,
/*  1635*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (intrinsic_wo_chain:{ *:[i32] } 6444:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src1, (imm:{ *:[i32] })<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                  // Dst: (SEXT_rus:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, (imm:{ *:[i32] }):$src2)
/*  1643*/      /*Scope*/ 8, /*->1652*/
/*  1644*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_2r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (intrinsic_wo_chain:{ *:[i32] } 6444:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2) - Complexity = 8
                  // Dst: (SEXT_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2)
/*  1652*/      0, /*End of Scope*/
/*  1653*/    /*Scope*/ 34, /*->1688*/
/*  1654*/      OPC_CheckChild0Integer, 50|128,50/*6450*/, 
/*  1657*/      OPC_RecordChild1, // #0 = $src1
/*  1658*/      OPC_RecordChild2, // #1 = $src2
/*  1659*/      OPC_Scope, 17, /*->1678*/ // 2 children in Scope
/*  1661*/        OPC_MoveChild2,
/*  1662*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1665*/        OPC_CheckPredicate, 17, // Predicate_immBitp
/*  1667*/        OPC_MoveParent,
/*  1668*/        OPC_EmitConvertToTarget, 1,
/*  1670*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::ZEXT_rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (intrinsic_wo_chain:{ *:[i32] } 6450:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src1, (imm:{ *:[i32] })<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                  // Dst: (ZEXT_rus:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, (imm:{ *:[i32] }):$src2)
/*  1678*/      /*Scope*/ 8, /*->1687*/
/*  1679*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::ZEXT_2r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (intrinsic_wo_chain:{ *:[i32] } 6450:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2) - Complexity = 8
                  // Dst: (ZEXT_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2)
/*  1687*/      0, /*End of Scope*/
/*  1688*/    /*Scope*/ 15, /*->1704*/
/*  1689*/      OPC_CheckChild0Integer, 4|128,50/*6404*/, 
/*  1692*/      OPC_RecordChild1, // #0 = $src1
/*  1693*/      OPC_RecordChild2, // #1 = $src2
/*  1694*/      OPC_RecordChild3, // #2 = $src3
/*  1695*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::CRC_l3r), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (intrinsic_wo_chain:{ *:[i32] } 6404:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2, GRRegs:{ *:[i32] }:$src3) - Complexity = 8
                // Dst: (CRC_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2, GRRegs:{ *:[i32] }:$src3)
/*  1704*/    /*Scope*/ 11, /*->1716*/
/*  1705*/      OPC_CheckChild0Integer, 126|128,49/*6398*/, 
/*  1708*/      OPC_RecordChild1, // #0 = $src
/*  1709*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::BITREV_l2r), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:{ *:[i32] } 6398:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (BITREV_l2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src)
/*  1716*/    /*Scope*/ 9, /*->1726*/
/*  1717*/      OPC_CheckChild0Integer, 12|128,50/*6412*/, 
/*  1720*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::GETID_0R), 0,
                    MVT::i32, 0/*#Ops*/, 
                // Src: (intrinsic_wo_chain:{ *:[i32] } 6412:{ *:[iPTR] }) - Complexity = 8
                // Dst: (GETID_0R:{ *:[i32] })
/*  1726*/    0, /*End of Scope*/
/*  1727*/  /*SwitchOpcode*/ 105|128,1/*233*/, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->1964
/*  1731*/    OPC_RecordNode, // #0 = 'intrinsic_w_chain' chained node
/*  1732*/    OPC_Scope, 23, /*->1757*/ // 15 children in Scope
/*  1734*/      OPC_CheckChild1Integer, 14|128,50/*6414*/, 
/*  1737*/      OPC_RecordChild2, // #1 = $type
/*  1738*/      OPC_MoveChild2,
/*  1739*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1742*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*  1744*/      OPC_MoveParent,
/*  1745*/      OPC_CheckType, MVT::i32,
/*  1747*/      OPC_EmitMergeInputChains1_0,
/*  1748*/      OPC_EmitConvertToTarget, 1,
/*  1750*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::GETR_rus), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6414:{ *:[iPTR] }, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$type) - Complexity = 12
                // Dst: (GETR_rus:{ *:[i32] } (imm:{ *:[i32] }):$type)
/*  1757*/    /*Scope*/ 14, /*->1772*/
/*  1758*/      OPC_CheckChild1Integer, 16|128,50/*6416*/, 
/*  1761*/      OPC_RecordChild2, // #1 = $r
/*  1762*/      OPC_CheckChild2Type, MVT::i32,
/*  1764*/      OPC_EmitMergeInputChains1_0,
/*  1765*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::GETTS_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6416:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r) - Complexity = 8
                // Dst: (GETTS_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$r)
/*  1772*/    /*Scope*/ 16, /*->1789*/
/*  1773*/      OPC_CheckChild1Integer, 30|128,50/*6430*/, 
/*  1776*/      OPC_RecordChild2, // #1 = $r
/*  1777*/      OPC_CheckChild2Type, MVT::i32,
/*  1779*/      OPC_RecordChild3, // #2 = $src
/*  1780*/      OPC_EmitMergeInputChains1_0,
/*  1781*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::OUTSHR_2r), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6430:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (OUTSHR_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src, GRRegs:{ *:[i32] }:$r)
/*  1789*/    /*Scope*/ 14, /*->1804*/
/*  1790*/      OPC_CheckChild1Integer, 18|128,50/*6418*/, 
/*  1793*/      OPC_RecordChild2, // #1 = $r
/*  1794*/      OPC_CheckChild2Type, MVT::i32,
/*  1796*/      OPC_EmitMergeInputChains1_0,
/*  1797*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::INCT_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6418:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r) - Complexity = 8
                // Dst: (INCT_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$r)
/*  1804*/    /*Scope*/ 14, /*->1819*/
/*  1805*/      OPC_CheckChild1Integer, 25|128,50/*6425*/, 
/*  1808*/      OPC_RecordChild2, // #1 = $r
/*  1809*/      OPC_CheckChild2Type, MVT::i32,
/*  1811*/      OPC_EmitMergeInputChains1_0,
/*  1812*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::INT_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6425:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r) - Complexity = 8
                // Dst: (INT_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$r)
/*  1819*/    /*Scope*/ 14, /*->1834*/
/*  1820*/      OPC_CheckChild1Integer, 17|128,50/*6417*/, 
/*  1823*/      OPC_RecordChild2, // #1 = $r
/*  1824*/      OPC_CheckChild2Type, MVT::i32,
/*  1826*/      OPC_EmitMergeInputChains1_0,
/*  1827*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::IN_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6417:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r) - Complexity = 8
                // Dst: (IN_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$r)
/*  1834*/    /*Scope*/ 16, /*->1851*/
/*  1835*/      OPC_CheckChild1Integer, 24|128,50/*6424*/, 
/*  1838*/      OPC_RecordChild2, // #1 = $r
/*  1839*/      OPC_CheckChild2Type, MVT::i32,
/*  1841*/      OPC_RecordChild3, // #2 = $src
/*  1842*/      OPC_EmitMergeInputChains1_0,
/*  1843*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::INSHR_2r), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6424:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (INSHR_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src, GRRegs:{ *:[i32] }:$r)
/*  1851*/    /*Scope*/ 14, /*->1866*/
/*  1852*/      OPC_CheckChild1Integer, 47|128,50/*6447*/, 
/*  1855*/      OPC_RecordChild2, // #1 = $src
/*  1856*/      OPC_CheckChild2Type, MVT::i32,
/*  1858*/      OPC_EmitMergeInputChains1_0,
/*  1859*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::TESTCT_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6447:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (TESTCT_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src)
/*  1866*/    /*Scope*/ 14, /*->1881*/
/*  1867*/      OPC_CheckChild1Integer, 48|128,50/*6448*/, 
/*  1870*/      OPC_RecordChild2, // #1 = $src
/*  1871*/      OPC_CheckChild2Type, MVT::i32,
/*  1873*/      OPC_EmitMergeInputChains1_0,
/*  1874*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::TESTWCT_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6448:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (TESTWCT_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src)
/*  1881*/    /*Scope*/ 16, /*->1898*/
/*  1882*/      OPC_CheckChild1Integer, 15|128,50/*6415*/, 
/*  1885*/      OPC_RecordChild2, // #1 = $r
/*  1886*/      OPC_CheckChild2Type, MVT::i32,
/*  1888*/      OPC_CheckType, MVT::i32,
/*  1890*/      OPC_EmitMergeInputChains1_0,
/*  1891*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::GETST_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6415:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$r) - Complexity = 8
                // Dst: (GETST_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$r)
/*  1898*/    /*Scope*/ 14, /*->1913*/
/*  1899*/      OPC_CheckChild1Integer, 32|128,50/*6432*/, 
/*  1902*/      OPC_RecordChild2, // #1 = $src
/*  1903*/      OPC_CheckChild2Type, MVT::i32,
/*  1905*/      OPC_EmitMergeInputChains1_0,
/*  1906*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::PEEK_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6432:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (PEEK_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src)
/*  1913*/    /*Scope*/ 14, /*->1928*/
/*  1914*/      OPC_CheckChild1Integer, 8|128,50/*6408*/, 
/*  1917*/      OPC_RecordChild2, // #1 = $src
/*  1918*/      OPC_CheckChild2Type, MVT::i32,
/*  1920*/      OPC_EmitMergeInputChains1_0,
/*  1921*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::ENDIN_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6408:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (ENDIN_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src)
/*  1928*/    /*Scope*/ 12, /*->1941*/
/*  1929*/      OPC_CheckChild1Integer, 13|128,50/*6413*/, 
/*  1932*/      OPC_RecordChild2, // #1 = $src
/*  1933*/      OPC_EmitMergeInputChains1_0,
/*  1934*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::GETPS_l2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6413:{ *:[iPTR] }, GRRegs:{ *:[i32] }:$src) - Complexity = 8
                // Dst: (GETPS_l2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src)
/*  1941*/    /*Scope*/ 10, /*->1952*/
/*  1942*/      OPC_CheckChild1Integer, 10|128,50/*6410*/, 
/*  1945*/      OPC_EmitMergeInputChains1_0,
/*  1946*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::GETED_0R), 0|OPFL_Chain,
                    MVT::i32, 0/*#Ops*/, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6410:{ *:[iPTR] }) - Complexity = 8
                // Dst: (GETED_0R:{ *:[i32] })
/*  1952*/    /*Scope*/ 10, /*->1963*/
/*  1953*/      OPC_CheckChild1Integer, 11|128,50/*6411*/, 
/*  1956*/      OPC_EmitMergeInputChains1_0,
/*  1957*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::GETET_0R), 0|OPFL_Chain,
                    MVT::i32, 0/*#Ops*/, 
                // Src: (intrinsic_w_chain:{ *:[i32] } 6411:{ *:[iPTR] }) - Complexity = 8
                // Dst: (GETET_0R:{ *:[i32] })
/*  1963*/    0, /*End of Scope*/
/*  1964*/  /*SwitchOpcode*/ 98, TARGET_VAL(ISD::SUB),// ->2065
/*  1967*/    OPC_Scope, 32, /*->2001*/ // 3 children in Scope
/*  1969*/      OPC_RecordChild0, // #0 = $addr
/*  1970*/      OPC_MoveChild1,
/*  1971*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1974*/      OPC_RecordChild0, // #1 = $offset
/*  1975*/      OPC_Scope, 11, /*->1988*/ // 2 children in Scope
/*  1977*/        OPC_CheckChild1Integer, 2, 
/*  1979*/        OPC_MoveParent,
/*  1980*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWB_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 2:{ *:[i32] })) - Complexity = 11
                  // Dst: (LDAWB_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*  1988*/      /*Scope*/ 11, /*->2000*/
/*  1989*/        OPC_CheckChild1Integer, 1, 
/*  1991*/        OPC_MoveParent,
/*  1992*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDA16B_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$offset, 1:{ *:[i32] })) - Complexity = 11
                  // Dst: (LDA16B_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, GRRegs:{ *:[i32] }:$offset)
/*  2000*/      0, /*End of Scope*/
/*  2001*/    /*Scope*/ 10, /*->2012*/
/*  2002*/      OPC_CheckChild0Integer, 0, 
/*  2004*/      OPC_RecordChild1, // #0 = $b
/*  2005*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::NEG), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:{ *:[i32] } 0:{ *:[i32] }, GRRegs:{ *:[i32] }:$b) - Complexity = 8
                // Dst: (NEG:{ *:[i32] } GRRegs:{ *:[i32] }:$b)
/*  2012*/    /*Scope*/ 51, /*->2064*/
/*  2013*/      OPC_RecordChild0, // #0 = $b
/*  2014*/      OPC_RecordChild1, // #1 = $c
/*  2015*/      OPC_Scope, 37, /*->2054*/ // 2 children in Scope
/*  2017*/        OPC_MoveChild1,
/*  2018*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2021*/        OPC_Scope, 13, /*->2036*/ // 2 children in Scope
/*  2023*/          OPC_CheckPredicate, 0, // Predicate_immUs
/*  2025*/          OPC_MoveParent,
/*  2026*/          OPC_EmitConvertToTarget, 1,
/*  2028*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SUB_2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (sub:{ *:[i32] } GRRegs:{ *:[i32] }:$b, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$c) - Complexity = 7
                    // Dst: (SUB_2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$b, (imm:{ *:[i32] }):$c)
/*  2036*/        /*Scope*/ 16, /*->2053*/
/*  2037*/          OPC_CheckPredicate, 1, // Predicate_immUs4
/*  2039*/          OPC_MoveParent,
/*  2040*/          OPC_EmitConvertToTarget, 1,
/*  2042*/          OPC_EmitNodeXForm, 0, 2, // div4_xform
/*  2045*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (sub:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (imm:{ *:[i32] })<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                    // Dst: (LDAWB_l2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$addr, (div4_xform:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_immUs4>>:$offset))
/*  2053*/        0, /*End of Scope*/
/*  2054*/      /*Scope*/ 8, /*->2063*/
/*  2055*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SUB_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
                  // Dst: (SUB_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  2063*/      0, /*End of Scope*/
/*  2064*/    0, /*End of Scope*/
/*  2065*/  /*SwitchOpcode*/ 91, TARGET_VAL(ISD::AND),// ->2159
/*  2068*/    OPC_Scope, 26, /*->2096*/ // 3 children in Scope
/*  2070*/      OPC_RecordChild0, // #0 = $src1
/*  2071*/      OPC_MoveChild1,
/*  2072*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2075*/      OPC_RecordChild0, // #1 = $src2
/*  2076*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2087*/      OPC_MoveParent,
/*  2088*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::ANDNOT_2r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, (xor:{ *:[i32] } GRRegs:{ *:[i32] }:$src2, -1:{ *:[i32] })) - Complexity = 11
                // Dst: (ANDNOT_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2)
/*  2096*/    /*Scope*/ 26, /*->2123*/
/*  2097*/      OPC_MoveChild0,
/*  2098*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2101*/      OPC_RecordChild0, // #0 = $src2
/*  2102*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2113*/      OPC_MoveParent,
/*  2114*/      OPC_RecordChild1, // #1 = $src1
/*  2115*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::ANDNOT_2r), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:{ *:[i32] } (xor:{ *:[i32] } GRRegs:{ *:[i32] }:$src2, -1:{ *:[i32] }), GRRegs:{ *:[i32] }:$src1) - Complexity = 11
                // Dst: (ANDNOT_2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src1, GRRegs:{ *:[i32] }:$src2)
/*  2123*/    /*Scope*/ 34, /*->2158*/
/*  2124*/      OPC_RecordChild0, // #0 = $val
/*  2125*/      OPC_RecordChild1, // #1 = $mask
/*  2126*/      OPC_Scope, 20, /*->2148*/ // 2 children in Scope
/*  2128*/        OPC_MoveChild1,
/*  2129*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2132*/        OPC_CheckPredicate, 20, // Predicate_immMskBitp
/*  2134*/        OPC_MoveParent,
/*  2135*/        OPC_EmitConvertToTarget, 1,
/*  2137*/        OPC_EmitNodeXForm, 4, 2, // msksize_xform
/*  2140*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::ZEXT_rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:{ *:[i32] } GRRegs:{ *:[i32] }:$val, (imm:{ *:[i32] })<<P:Predicate_immMskBitp>>:$mask) - Complexity = 7
                  // Dst: (ZEXT_rus:{ *:[i32] } GRRegs:{ *:[i32] }:$val, (msksize_xform:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_immMskBitp>>:$mask))
/*  2148*/      /*Scope*/ 8, /*->2157*/
/*  2149*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::AND_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
                  // Dst: (AND_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  2157*/      0, /*End of Scope*/
/*  2158*/    0, /*End of Scope*/
/*  2159*/  /*SwitchOpcode*/ 34, TARGET_VAL(ISD::BRIND),// ->2196
/*  2162*/    OPC_RecordNode, // #0 = 'brind' chained node
/*  2163*/    OPC_Scope, 19, /*->2184*/ // 2 children in Scope
/*  2165*/      OPC_MoveChild1,
/*  2166*/      OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),
/*  2169*/      OPC_RecordNode, // #1 = 'intrinsic_w_chain' chained node
/*  2170*/      OPC_CheckFoldableChainNode,
/*  2171*/      OPC_CheckChild1Integer, 49|128,50/*6449*/, 
/*  2174*/      OPC_MoveParent,
/*  2175*/      OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2179*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::WAITEU_0R), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (brind (intrinsic_w_chain:{ *:[iPTR] } 6449:{ *:[iPTR] })) - Complexity = 11
                // Dst: (WAITEU_0R)
/*  2184*/    /*Scope*/ 10, /*->2195*/
/*  2185*/      OPC_RecordChild1, // #1 = $a
/*  2186*/      OPC_CheckChild1Type, MVT::i32,
/*  2188*/      OPC_EmitMergeInputChains1_0,
/*  2189*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::BAU_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (brind GRRegs:{ *:[i32] }:$a) - Complexity = 3
                // Dst: (BAU_1r GRRegs:{ *:[i32] }:$a)
/*  2195*/    0, /*End of Scope*/
/*  2196*/  /*SwitchOpcode*/ 69|128,2/*325*/, TARGET_VAL(ISD::BRCOND),// ->2525
/*  2200*/    OPC_RecordNode, // #0 = 'brcond' chained node
/*  2201*/    OPC_Scope, 48|128,2/*304*/, /*->2508*/ // 2 children in Scope
/*  2204*/      OPC_MoveChild1,
/*  2205*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*  2208*/      OPC_RecordChild0, // #1 = $lhs
/*  2209*/      OPC_Scope, 73, /*->2284*/ // 4 children in Scope
/*  2211*/        OPC_CheckChild1Integer, 0, 
/*  2213*/        OPC_MoveChild2,
/*  2214*/        OPC_Scope, 18, /*->2234*/ // 3 children in Scope
/*  2216*/          OPC_CheckCondCode, ISD::SETNE,
/*  2218*/          OPC_MoveParent,
/*  2219*/          OPC_MoveParent,
/*  2220*/          OPC_RecordChild2, // #2 = $dst
/*  2221*/          OPC_MoveChild2,
/*  2222*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2225*/          OPC_MoveParent,
/*  2226*/          OPC_EmitMergeInputChains1_0,
/*  2227*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, 0:{ *:[i32] }, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 GRRegs:{ *:[i32] }:$lhs, (bb:{ *:[Other] }):$dst)
/*  2234*/        /*Scope*/ 18, /*->2253*/
/*  2235*/          OPC_CheckCondCode, ISD::SETEQ,
/*  2237*/          OPC_MoveParent,
/*  2238*/          OPC_MoveParent,
/*  2239*/          OPC_RecordChild2, // #2 = $dst
/*  2240*/          OPC_MoveChild2,
/*  2241*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2244*/          OPC_MoveParent,
/*  2245*/          OPC_EmitMergeInputChains1_0,
/*  2246*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, 0:{ *:[i32] }, SETEQ:{ *:[Other] }), (bb:{ *:[Other] }):$dst) - Complexity = 11
                    // Dst: (BRFF_lru6 GRRegs:{ *:[i32] }:$lhs, (bb:{ *:[Other] }):$dst)
/*  2253*/        /*Scope*/ 29, /*->2283*/
/*  2254*/          OPC_CheckCondCode, ISD::SETLT,
/*  2256*/          OPC_MoveParent,
/*  2257*/          OPC_MoveParent,
/*  2258*/          OPC_RecordChild2, // #2 = $dst
/*  2259*/          OPC_MoveChild2,
/*  2260*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2263*/          OPC_MoveParent,
/*  2264*/          OPC_EmitMergeInputChains1_0,
/*  2265*/          OPC_EmitInteger, MVT::i32, 32, 
/*  2268*/          OPC_EmitNode1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*  2276*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 2, 
                    // Src: (brcond (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, 0:{ *:[i32] }, SETLT:{ *:[Other] }), (bb:{ *:[Other] }):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 (ASHR_l2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, 32:{ *:[i32] }), (bb:{ *:[Other] }):$dst)
/*  2283*/        0, /*End of Scope*/
/*  2284*/      /*Scope*/ 41, /*->2326*/
/*  2285*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2296*/        OPC_MoveChild2,
/*  2297*/        OPC_CheckCondCode, ISD::SETGT,
/*  2299*/        OPC_MoveParent,
/*  2300*/        OPC_MoveParent,
/*  2301*/        OPC_RecordChild2, // #2 = $dst
/*  2302*/        OPC_MoveChild2,
/*  2303*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2306*/        OPC_MoveParent,
/*  2307*/        OPC_EmitMergeInputChains1_0,
/*  2308*/        OPC_EmitInteger, MVT::i32, 32, 
/*  2311*/        OPC_EmitNode1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*  2319*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, -1:{ *:[i32] }, SETGT:{ *:[Other] }), (bb:{ *:[Other] }):$dst) - Complexity = 11
                  // Dst: (BRFF_lru6 (ASHR_l2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, 32:{ *:[i32] }), (bb:{ *:[Other] }):$dst)
/*  2326*/      /*Scope*/ 37, /*->2364*/
/*  2327*/        OPC_RecordChild1, // #2 = $rhs
/*  2328*/        OPC_MoveChild1,
/*  2329*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2332*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*  2334*/        OPC_MoveParent,
/*  2335*/        OPC_MoveChild2,
/*  2336*/        OPC_CheckCondCode, ISD::SETNE,
/*  2338*/        OPC_MoveParent,
/*  2339*/        OPC_MoveParent,
/*  2340*/        OPC_RecordChild2, // #3 = $dst
/*  2341*/        OPC_MoveChild2,
/*  2342*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2345*/        OPC_MoveParent,
/*  2346*/        OPC_EmitMergeInputChains1_0,
/*  2347*/        OPC_EmitConvertToTarget, 2,
/*  2349*/        OPC_EmitNode1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2357*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      2/*#Ops*/, 5, 3, 
                  // Src: (brcond (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$rhs, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$dst) - Complexity = 10
                  // Dst: (BRFF_lru6 (EQ_2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$rhs), (bb:{ *:[Other] }):$dst)
/*  2364*/      /*Scope*/ 13|128,1/*141*/, /*->2507*/
/*  2366*/        OPC_CheckChild0Type, MVT::i32,
/*  2368*/        OPC_RecordChild1, // #2 = $rhs
/*  2369*/        OPC_MoveChild2,
/*  2370*/        OPC_Scope, 26, /*->2398*/ // 5 children in Scope
/*  2372*/          OPC_CheckCondCode, ISD::SETLE,
/*  2374*/          OPC_MoveParent,
/*  2375*/          OPC_MoveParent,
/*  2376*/          OPC_RecordChild2, // #3 = $dst
/*  2377*/          OPC_MoveChild2,
/*  2378*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2381*/          OPC_MoveParent,
/*  2382*/          OPC_EmitMergeInputChains1_0,
/*  2383*/          OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                        MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*  2391*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETLE:{ *:[Other] }), (bb:{ *:[Other] }):$dst) - Complexity = 6
                    // Dst: (BRFF_lru6 (LSS_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$rhs, GRRegs:{ *:[i32] }:$lhs), (bb:{ *:[Other] }):$dst)
/*  2398*/        /*Scope*/ 26, /*->2425*/
/*  2399*/          OPC_CheckCondCode, ISD::SETULE,
/*  2401*/          OPC_MoveParent,
/*  2402*/          OPC_MoveParent,
/*  2403*/          OPC_RecordChild2, // #3 = $dst
/*  2404*/          OPC_MoveChild2,
/*  2405*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2408*/          OPC_MoveParent,
/*  2409*/          OPC_EmitMergeInputChains1_0,
/*  2410*/          OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                        MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*  2418*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETULE:{ *:[Other] }), (bb:{ *:[Other] }):$dst) - Complexity = 6
                    // Dst: (BRFF_lru6 (LSU_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$rhs, GRRegs:{ *:[i32] }:$lhs), (bb:{ *:[Other] }):$dst)
/*  2425*/        /*Scope*/ 26, /*->2452*/
/*  2426*/          OPC_CheckCondCode, ISD::SETGE,
/*  2428*/          OPC_MoveParent,
/*  2429*/          OPC_MoveParent,
/*  2430*/          OPC_RecordChild2, // #3 = $dst
/*  2431*/          OPC_MoveChild2,
/*  2432*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2435*/          OPC_MoveParent,
/*  2436*/          OPC_EmitMergeInputChains1_0,
/*  2437*/          OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                        MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*  2445*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETGE:{ *:[Other] }), (bb:{ *:[Other] }):$dst) - Complexity = 6
                    // Dst: (BRFF_lru6 (LSS_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs), (bb:{ *:[Other] }):$dst)
/*  2452*/        /*Scope*/ 26, /*->2479*/
/*  2453*/          OPC_CheckCondCode, ISD::SETUGE,
/*  2455*/          OPC_MoveParent,
/*  2456*/          OPC_MoveParent,
/*  2457*/          OPC_RecordChild2, // #3 = $dst
/*  2458*/          OPC_MoveChild2,
/*  2459*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2462*/          OPC_MoveParent,
/*  2463*/          OPC_EmitMergeInputChains1_0,
/*  2464*/          OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                        MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*  2472*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETUGE:{ *:[Other] }), (bb:{ *:[Other] }):$dst) - Complexity = 6
                    // Dst: (BRFF_lru6 (LSU_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs), (bb:{ *:[Other] }):$dst)
/*  2479*/        /*Scope*/ 26, /*->2506*/
/*  2480*/          OPC_CheckCondCode, ISD::SETNE,
/*  2482*/          OPC_MoveParent,
/*  2483*/          OPC_MoveParent,
/*  2484*/          OPC_RecordChild2, // #3 = $dst
/*  2485*/          OPC_MoveChild2,
/*  2486*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2489*/          OPC_MoveParent,
/*  2490*/          OPC_EmitMergeInputChains1_0,
/*  2491*/          OPC_EmitNode1, TARGET_VAL(XCore::EQ_3r), 0,
                        MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*  2499*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$dst) - Complexity = 6
                    // Dst: (BRFF_lru6 (EQ_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs), (bb:{ *:[Other] }):$dst)
/*  2506*/        0, /*End of Scope*/
/*  2507*/      0, /*End of Scope*/
/*  2508*/    /*Scope*/ 15, /*->2524*/
/*  2509*/      OPC_RecordChild1, // #1 = $cond
/*  2510*/      OPC_RecordChild2, // #2 = $addr
/*  2511*/      OPC_MoveChild2,
/*  2512*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2515*/      OPC_MoveParent,
/*  2516*/      OPC_EmitMergeInputChains1_0,
/*  2517*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (brcond GRRegs:{ *:[i32] }:$cond, (bb:{ *:[Other] }):$addr) - Complexity = 3
                // Dst: (BRFT_lru6 GRRegs:{ *:[i32] }:$cond, (bb:{ *:[Other] }):$addr)
/*  2524*/    0, /*End of Scope*/
/*  2525*/  /*SwitchOpcode*/ 57|128,2/*313*/, TARGET_VAL(ISD::SELECT),// ->2842
/*  2529*/    OPC_Scope, 38|128,2/*294*/, /*->2826*/ // 2 children in Scope
/*  2532*/      OPC_MoveChild0,
/*  2533*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*  2536*/      OPC_RecordChild0, // #0 = $lhs
/*  2537*/      OPC_Scope, 70, /*->2609*/ // 4 children in Scope
/*  2539*/        OPC_CheckChild1Integer, 0, 
/*  2541*/        OPC_MoveChild2,
/*  2542*/        OPC_Scope, 17, /*->2561*/ // 3 children in Scope
/*  2544*/          OPC_CheckCondCode, ISD::SETNE,
/*  2546*/          OPC_MoveParent,
/*  2547*/          OPC_MoveParent,
/*  2548*/          OPC_RecordChild1, // #1 = $T
/*  2549*/          OPC_RecordChild2, // #2 = $F
/*  2550*/          OPC_CheckType, MVT::i32,
/*  2552*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, 0:{ *:[i32] }, SETNE:{ *:[Other] }), GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F) - Complexity = 11
                    // Dst: (SELECT_CC:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F)
/*  2561*/        /*Scope*/ 17, /*->2579*/
/*  2562*/          OPC_CheckCondCode, ISD::SETEQ,
/*  2564*/          OPC_MoveParent,
/*  2565*/          OPC_MoveParent,
/*  2566*/          OPC_RecordChild1, // #1 = $T
/*  2567*/          OPC_RecordChild2, // #2 = $F
/*  2568*/          OPC_CheckType, MVT::i32,
/*  2570*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 0, 2, 1, 
                    // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, 0:{ *:[i32] }, SETEQ:{ *:[Other] }), GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F) - Complexity = 11
                    // Dst: (SELECT_CC:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$F, GRRegs:{ *:[i32] }:$T)
/*  2579*/        /*Scope*/ 28, /*->2608*/
/*  2580*/          OPC_CheckCondCode, ISD::SETLT,
/*  2582*/          OPC_MoveParent,
/*  2583*/          OPC_MoveParent,
/*  2584*/          OPC_RecordChild1, // #1 = $T
/*  2585*/          OPC_RecordChild2, // #2 = $F
/*  2586*/          OPC_CheckType, MVT::i32,
/*  2588*/          OPC_EmitInteger, MVT::i32, 32, 
/*  2591*/          OPC_EmitNode1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*  2599*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 1, 2, 
                    // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, 0:{ *:[i32] }, SETLT:{ *:[Other] }), GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F) - Complexity = 11
                    // Dst: (SELECT_CC:{ *:[i32] } (ASHR_l2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, 32:{ *:[i32] }), GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F)
/*  2608*/        0, /*End of Scope*/
/*  2609*/      /*Scope*/ 40, /*->2650*/
/*  2610*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2621*/        OPC_MoveChild2,
/*  2622*/        OPC_CheckCondCode, ISD::SETGT,
/*  2624*/        OPC_MoveParent,
/*  2625*/        OPC_MoveParent,
/*  2626*/        OPC_RecordChild1, // #1 = $T
/*  2627*/        OPC_RecordChild2, // #2 = $F
/*  2628*/        OPC_CheckType, MVT::i32,
/*  2630*/        OPC_EmitInteger, MVT::i32, 32, 
/*  2633*/        OPC_EmitNode1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*  2641*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                      MVT::i32, 3/*#Ops*/, 4, 2, 1, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, -1:{ *:[i32] }, SETGT:{ *:[Other] }), GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F) - Complexity = 11
                  // Dst: (SELECT_CC:{ *:[i32] } (ASHR_l2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, 32:{ *:[i32] }), GRRegs:{ *:[i32] }:$F, GRRegs:{ *:[i32] }:$T)
/*  2650*/      /*Scope*/ 36, /*->2687*/
/*  2651*/        OPC_RecordChild1, // #1 = $rhs
/*  2652*/        OPC_MoveChild1,
/*  2653*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2656*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*  2658*/        OPC_MoveParent,
/*  2659*/        OPC_MoveChild2,
/*  2660*/        OPC_CheckCondCode, ISD::SETNE,
/*  2662*/        OPC_MoveParent,
/*  2663*/        OPC_MoveParent,
/*  2664*/        OPC_RecordChild1, // #2 = $T
/*  2665*/        OPC_RecordChild2, // #3 = $F
/*  2666*/        OPC_CheckType, MVT::i32,
/*  2668*/        OPC_EmitConvertToTarget, 1,
/*  2670*/        OPC_EmitNode1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*  2678*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                      MVT::i32, 3/*#Ops*/, 5, 3, 2, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$rhs, SETNE:{ *:[Other] }), GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F) - Complexity = 10
                  // Dst: (SELECT_CC:{ *:[i32] } (EQ_2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$rhs), GRRegs:{ *:[i32] }:$F, GRRegs:{ *:[i32] }:$T)
/*  2687*/      /*Scope*/ 8|128,1/*136*/, /*->2825*/
/*  2689*/        OPC_CheckChild0Type, MVT::i32,
/*  2691*/        OPC_RecordChild1, // #1 = $rhs
/*  2692*/        OPC_MoveChild2,
/*  2693*/        OPC_Scope, 25, /*->2720*/ // 5 children in Scope
/*  2695*/          OPC_CheckCondCode, ISD::SETLE,
/*  2697*/          OPC_MoveParent,
/*  2698*/          OPC_MoveParent,
/*  2699*/          OPC_RecordChild1, // #2 = $T
/*  2700*/          OPC_RecordChild2, // #3 = $F
/*  2701*/          OPC_CheckType, MVT::i32,
/*  2703*/          OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                        MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*  2711*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                    // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETLE:{ *:[Other] }), GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F) - Complexity = 6
                    // Dst: (SELECT_CC:{ *:[i32] } (LSS_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$rhs, GRRegs:{ *:[i32] }:$lhs), GRRegs:{ *:[i32] }:$F, GRRegs:{ *:[i32] }:$T)
/*  2720*/        /*Scope*/ 25, /*->2746*/
/*  2721*/          OPC_CheckCondCode, ISD::SETULE,
/*  2723*/          OPC_MoveParent,
/*  2724*/          OPC_MoveParent,
/*  2725*/          OPC_RecordChild1, // #2 = $T
/*  2726*/          OPC_RecordChild2, // #3 = $F
/*  2727*/          OPC_CheckType, MVT::i32,
/*  2729*/          OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                        MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*  2737*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                    // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETULE:{ *:[Other] }), GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F) - Complexity = 6
                    // Dst: (SELECT_CC:{ *:[i32] } (LSU_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$rhs, GRRegs:{ *:[i32] }:$lhs), GRRegs:{ *:[i32] }:$F, GRRegs:{ *:[i32] }:$T)
/*  2746*/        /*Scope*/ 25, /*->2772*/
/*  2747*/          OPC_CheckCondCode, ISD::SETGE,
/*  2749*/          OPC_MoveParent,
/*  2750*/          OPC_MoveParent,
/*  2751*/          OPC_RecordChild1, // #2 = $T
/*  2752*/          OPC_RecordChild2, // #3 = $F
/*  2753*/          OPC_CheckType, MVT::i32,
/*  2755*/          OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*  2763*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                    // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETGE:{ *:[Other] }), GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F) - Complexity = 6
                    // Dst: (SELECT_CC:{ *:[i32] } (LSS_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs), GRRegs:{ *:[i32] }:$F, GRRegs:{ *:[i32] }:$T)
/*  2772*/        /*Scope*/ 25, /*->2798*/
/*  2773*/          OPC_CheckCondCode, ISD::SETUGE,
/*  2775*/          OPC_MoveParent,
/*  2776*/          OPC_MoveParent,
/*  2777*/          OPC_RecordChild1, // #2 = $T
/*  2778*/          OPC_RecordChild2, // #3 = $F
/*  2779*/          OPC_CheckType, MVT::i32,
/*  2781*/          OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*  2789*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                    // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETUGE:{ *:[Other] }), GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F) - Complexity = 6
                    // Dst: (SELECT_CC:{ *:[i32] } (LSU_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs), GRRegs:{ *:[i32] }:$F, GRRegs:{ *:[i32] }:$T)
/*  2798*/        /*Scope*/ 25, /*->2824*/
/*  2799*/          OPC_CheckCondCode, ISD::SETNE,
/*  2801*/          OPC_MoveParent,
/*  2802*/          OPC_MoveParent,
/*  2803*/          OPC_RecordChild1, // #2 = $T
/*  2804*/          OPC_RecordChild2, // #3 = $F
/*  2805*/          OPC_CheckType, MVT::i32,
/*  2807*/          OPC_EmitNode1, TARGET_VAL(XCore::EQ_3r), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*  2815*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                    // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETNE:{ *:[Other] }), GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F) - Complexity = 6
                    // Dst: (SELECT_CC:{ *:[i32] } (EQ_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs), GRRegs:{ *:[i32] }:$F, GRRegs:{ *:[i32] }:$T)
/*  2824*/        0, /*End of Scope*/
/*  2825*/      0, /*End of Scope*/
/*  2826*/    /*Scope*/ 14, /*->2841*/
/*  2827*/      OPC_RecordChild0, // #0 = $cond
/*  2828*/      OPC_RecordChild1, // #1 = $T
/*  2829*/      OPC_RecordChild2, // #2 = $F
/*  2830*/      OPC_CheckType, MVT::i32,
/*  2832*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (select:{ *:[i32] } GRRegs:{ *:[i32] }:$cond, GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F) - Complexity = 3
                // Dst: (SELECT_CC:{ *:[i32] } GRRegs:{ *:[i32] }:$cond, GRRegs:{ *:[i32] }:$T, GRRegs:{ *:[i32] }:$F)
/*  2841*/    0, /*End of Scope*/
/*  2842*/  /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_START),// ->2867
/*  2845*/    OPC_RecordNode, // #0 = 'callseq_start' chained node
/*  2846*/    OPC_RecordChild1, // #1 = $amt
/*  2847*/    OPC_MoveChild1,
/*  2848*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  2851*/    OPC_MoveParent,
/*  2852*/    OPC_RecordChild2, // #2 = $amt2
/*  2853*/    OPC_MoveChild2,
/*  2854*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  2857*/    OPC_MoveParent,
/*  2858*/    OPC_EmitMergeInputChains1_0,
/*  2859*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (callseq_start (timm:{ *:[i32] }):$amt, (timm:{ *:[i32] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKDOWN:{ *:[i32] } (timm:{ *:[i32] }):$amt, (timm:{ *:[i32] }):$amt2)
/*  2867*/  /*SwitchOpcode*/ 23, TARGET_VAL(ISD::CALLSEQ_END),// ->2893
/*  2870*/    OPC_RecordNode, // #0 = 'callseq_end' chained node
/*  2871*/    OPC_CaptureGlueInput,
/*  2872*/    OPC_RecordChild1, // #1 = $amt1
/*  2873*/    OPC_MoveChild1,
/*  2874*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  2877*/    OPC_MoveParent,
/*  2878*/    OPC_RecordChild2, // #2 = $amt2
/*  2879*/    OPC_MoveChild2,
/*  2880*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  2883*/    OPC_MoveParent,
/*  2884*/    OPC_EmitMergeInputChains1_0,
/*  2885*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (callseq_end (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:{ *:[i32] } (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2)
/*  2893*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::FrameIndex),// ->2910
/*  2896*/    OPC_RecordNode, // #0 = $addr
/*  2897*/    OPC_CheckType, MVT::i32,
/*  2899*/    OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*  2902*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWFI), 0,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: ADDRspii:{ *:[i32] }:$addr - Complexity = 9
              // Dst: (LDAWFI:{ *:[i32] } ADDRspii:{ *:[i32] }:$addr)
/*  2910*/  /*SwitchOpcode*/ 32, TARGET_VAL(ISD::XOR),// ->2945
/*  2913*/    OPC_RecordChild0, // #0 = $b
/*  2914*/    OPC_Scope, 18, /*->2934*/ // 2 children in Scope
/*  2916*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2927*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::NOT), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (xor:{ *:[i32] } GRRegs:{ *:[i32] }:$b, -1:{ *:[i32] }) - Complexity = 8
                // Dst: (NOT:{ *:[i32] } GRRegs:{ *:[i32] }:$b)
/*  2934*/    /*Scope*/ 9, /*->2944*/
/*  2935*/      OPC_RecordChild1, // #1 = $c
/*  2936*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::XOR_l3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
                // Dst: (XOR_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  2944*/    0, /*End of Scope*/
/*  2945*/  /*SwitchOpcode*/ 55, TARGET_VAL(ISD::MUL),// ->3003
/*  2948*/    OPC_RecordChild0, // #0 = $src
/*  2949*/    OPC_Scope, 10, /*->2961*/ // 4 children in Scope
/*  2951*/      OPC_CheckChild1Integer, 3, 
/*  2953*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:{ *:[i32] } GRRegs:{ *:[i32] }:$src, 3:{ *:[i32] }) - Complexity = 8
                // Dst: (LDA16F_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$src, GRRegs:{ *:[i32] }:$src)
/*  2961*/    /*Scope*/ 10, /*->2972*/
/*  2962*/      OPC_CheckChild1Integer, 5, 
/*  2964*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:{ *:[i32] } GRRegs:{ *:[i32] }:$src, 5:{ *:[i32] }) - Complexity = 8
                // Dst: (LDAWF_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$src, GRRegs:{ *:[i32] }:$src)
/*  2972*/    /*Scope*/ 19, /*->2992*/
/*  2973*/      OPC_CheckChild1Integer, 125|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551613*/, 
/*  2984*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:{ *:[i32] } GRRegs:{ *:[i32] }:$src, -3:{ *:[i32] }) - Complexity = 8
                // Dst: (LDAWB_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$src, GRRegs:{ *:[i32] }:$src)
/*  2992*/    /*Scope*/ 9, /*->3002*/
/*  2993*/      OPC_RecordChild1, // #1 = $c
/*  2994*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::MUL_l3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
                // Dst: (MUL_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  3002*/    0, /*End of Scope*/
/*  3003*/  /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(ISD::SETCC),// ->3282
/*  3007*/    OPC_RecordChild0, // #0 = $lhs
/*  3008*/    OPC_Scope, 37, /*->3047*/ // 3 children in Scope
/*  3010*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3021*/      OPC_MoveChild2,
/*  3022*/      OPC_CheckCondCode, ISD::SETGT,
/*  3024*/      OPC_MoveParent,
/*  3025*/      OPC_EmitInteger, MVT::i32, 32, 
/*  3028*/      OPC_EmitNode1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  3036*/      OPC_EmitInteger, MVT::i32, 0, 
/*  3039*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                    MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, -1:{ *:[i32] }, SETGT:{ *:[Other] }) - Complexity = 8
                // Dst: (EQ_2rus:{ *:[i32] } (ASHR_l2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, 32:{ *:[i32] }), 0:{ *:[i32] })
/*  3047*/    /*Scope*/ 50, /*->3098*/
/*  3048*/      OPC_RecordChild1, // #1 = $rhs
/*  3049*/      OPC_MoveChild1,
/*  3050*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3053*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*  3055*/      OPC_MoveParent,
/*  3056*/      OPC_MoveChild2,
/*  3057*/      OPC_Scope, 13, /*->3072*/ // 2 children in Scope
/*  3059*/        OPC_CheckCondCode, ISD::SETEQ,
/*  3061*/        OPC_MoveParent,
/*  3062*/        OPC_EmitConvertToTarget, 1,
/*  3064*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$rhs, SETEQ:{ *:[Other] }) - Complexity = 7
                  // Dst: (EQ_2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$rhs)
/*  3072*/      /*Scope*/ 24, /*->3097*/
/*  3073*/        OPC_CheckCondCode, ISD::SETNE,
/*  3075*/        OPC_MoveParent,
/*  3076*/        OPC_EmitConvertToTarget, 1,
/*  3078*/        OPC_EmitNode1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*  3086*/        OPC_EmitInteger, MVT::i32, 0, 
/*  3089*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$rhs, SETNE:{ *:[Other] }) - Complexity = 7
                  // Dst: (EQ_2rus:{ *:[i32] } (EQ_2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_immUs>>:$rhs), 0:{ *:[i32] })
/*  3097*/      0, /*End of Scope*/
/*  3098*/    /*Scope*/ 53|128,1/*181*/, /*->3281*/
/*  3100*/      OPC_CheckChild0Type, MVT::i32,
/*  3102*/      OPC_RecordChild1, // #1 = $rhs
/*  3103*/      OPC_MoveChild2,
/*  3104*/      OPC_Scope, 11, /*->3117*/ // 10 children in Scope
/*  3106*/        OPC_CheckCondCode, ISD::SETGT,
/*  3108*/        OPC_MoveParent,
/*  3109*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LSS_3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETGT:{ *:[Other] }) - Complexity = 3
                  // Dst: (LSS_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$rhs, GRRegs:{ *:[i32] }:$lhs)
/*  3117*/      /*Scope*/ 11, /*->3129*/
/*  3118*/        OPC_CheckCondCode, ISD::SETUGT,
/*  3120*/        OPC_MoveParent,
/*  3121*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LSU_3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETUGT:{ *:[Other] }) - Complexity = 3
                  // Dst: (LSU_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$rhs, GRRegs:{ *:[i32] }:$lhs)
/*  3129*/      /*Scope*/ 11, /*->3141*/
/*  3130*/        OPC_CheckCondCode, ISD::SETLT,
/*  3132*/        OPC_MoveParent,
/*  3133*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LSS_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETLT:{ *:[Other] }) - Complexity = 3
                  // Dst: (LSS_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs)
/*  3141*/      /*Scope*/ 11, /*->3153*/
/*  3142*/        OPC_CheckCondCode, ISD::SETULT,
/*  3144*/        OPC_MoveParent,
/*  3145*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LSU_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETULT:{ *:[Other] }) - Complexity = 3
                  // Dst: (LSU_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs)
/*  3153*/      /*Scope*/ 11, /*->3165*/
/*  3154*/        OPC_CheckCondCode, ISD::SETEQ,
/*  3156*/        OPC_MoveParent,
/*  3157*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETEQ:{ *:[Other] }) - Complexity = 3
                  // Dst: (EQ_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs)
/*  3165*/      /*Scope*/ 22, /*->3188*/
/*  3166*/        OPC_CheckCondCode, ISD::SETLE,
/*  3168*/        OPC_MoveParent,
/*  3169*/        OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*  3177*/        OPC_EmitInteger, MVT::i32, 0, 
/*  3180*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETLE:{ *:[Other] }) - Complexity = 3
                  // Dst: (EQ_2rus:{ *:[i32] } (LSS_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$rhs, GRRegs:{ *:[i32] }:$lhs), 0:{ *:[i32] })
/*  3188*/      /*Scope*/ 22, /*->3211*/
/*  3189*/        OPC_CheckCondCode, ISD::SETULE,
/*  3191*/        OPC_MoveParent,
/*  3192*/        OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*  3200*/        OPC_EmitInteger, MVT::i32, 0, 
/*  3203*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETULE:{ *:[Other] }) - Complexity = 3
                  // Dst: (EQ_2rus:{ *:[i32] } (LSU_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$rhs, GRRegs:{ *:[i32] }:$lhs), 0:{ *:[i32] })
/*  3211*/      /*Scope*/ 22, /*->3234*/
/*  3212*/        OPC_CheckCondCode, ISD::SETGE,
/*  3214*/        OPC_MoveParent,
/*  3215*/        OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  3223*/        OPC_EmitInteger, MVT::i32, 0, 
/*  3226*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETGE:{ *:[Other] }) - Complexity = 3
                  // Dst: (EQ_2rus:{ *:[i32] } (LSS_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs), 0:{ *:[i32] })
/*  3234*/      /*Scope*/ 22, /*->3257*/
/*  3235*/        OPC_CheckCondCode, ISD::SETUGE,
/*  3237*/        OPC_MoveParent,
/*  3238*/        OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  3246*/        OPC_EmitInteger, MVT::i32, 0, 
/*  3249*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETUGE:{ *:[Other] }) - Complexity = 3
                  // Dst: (EQ_2rus:{ *:[i32] } (LSU_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs), 0:{ *:[i32] })
/*  3257*/      /*Scope*/ 22, /*->3280*/
/*  3258*/        OPC_CheckCondCode, ISD::SETNE,
/*  3260*/        OPC_MoveParent,
/*  3261*/        OPC_EmitNode1, TARGET_VAL(XCore::EQ_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  3269*/        OPC_EmitInteger, MVT::i32, 0, 
/*  3272*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs, SETNE:{ *:[Other] }) - Complexity = 3
                  // Dst: (EQ_2rus:{ *:[i32] } (EQ_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$lhs, GRRegs:{ *:[i32] }:$rhs), 0:{ *:[i32] })
/*  3280*/      0, /*End of Scope*/
/*  3281*/    0, /*End of Scope*/
/*  3282*/  /*SwitchOpcode*/ 31, TARGET_VAL(ISD::SHL),// ->3316
/*  3285*/    OPC_RecordChild0, // #0 = $b
/*  3286*/    OPC_RecordChild1, // #1 = $c
/*  3287*/    OPC_Scope, 17, /*->3306*/ // 2 children in Scope
/*  3289*/      OPC_MoveChild1,
/*  3290*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3293*/      OPC_CheckPredicate, 17, // Predicate_immBitp
/*  3295*/      OPC_MoveParent,
/*  3296*/      OPC_EmitConvertToTarget, 1,
/*  3298*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::SHL_2rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$b, (imm:{ *:[i32] })<<P:Predicate_immBitp>>:$c) - Complexity = 7
                // Dst: (SHL_2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$b, (imm:{ *:[i32] }):$c)
/*  3306*/    /*Scope*/ 8, /*->3315*/
/*  3307*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::SHL_3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
                // Dst: (SHL_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  3315*/    0, /*End of Scope*/
/*  3316*/  /*SwitchOpcode*/ 31, TARGET_VAL(ISD::SRL),// ->3350
/*  3319*/    OPC_RecordChild0, // #0 = $b
/*  3320*/    OPC_RecordChild1, // #1 = $c
/*  3321*/    OPC_Scope, 17, /*->3340*/ // 2 children in Scope
/*  3323*/      OPC_MoveChild1,
/*  3324*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3327*/      OPC_CheckPredicate, 17, // Predicate_immBitp
/*  3329*/      OPC_MoveParent,
/*  3330*/      OPC_EmitConvertToTarget, 1,
/*  3332*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::SHR_2rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:{ *:[i32] } GRRegs:{ *:[i32] }:$b, (imm:{ *:[i32] })<<P:Predicate_immBitp>>:$c) - Complexity = 7
                // Dst: (SHR_2rus:{ *:[i32] } GRRegs:{ *:[i32] }:$b, (imm:{ *:[i32] }):$c)
/*  3340*/    /*Scope*/ 8, /*->3349*/
/*  3341*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::SHR_3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
                // Dst: (SHR_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  3349*/    0, /*End of Scope*/
/*  3350*/  /*SwitchOpcode*/ 39, TARGET_VAL(XCoreISD::STWSP),// ->3392
/*  3353*/    OPC_RecordNode, // #0 = 'XCoreStwsp' chained node
/*  3354*/    OPC_RecordChild1, // #1 = $a
/*  3355*/    OPC_CheckChild1Type, MVT::i32,
/*  3357*/    OPC_RecordChild2, // #2 = $b
/*  3358*/    OPC_MoveChild2,
/*  3359*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3362*/    OPC_Scope, 13, /*->3377*/ // 2 children in Scope
/*  3364*/      OPC_CheckPredicate, 18, // Predicate_immU6
/*  3366*/      OPC_MoveParent,
/*  3367*/      OPC_EmitMergeInputChains1_0,
/*  3368*/      OPC_EmitConvertToTarget, 2,
/*  3370*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::STWSP_ru6), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 3, 
                // Src: (XCoreStwsp RRegs:{ *:[i32] }:$a, (imm:{ *:[i32] })<<P:Predicate_immU6>>:$b) - Complexity = 7
                // Dst: (STWSP_ru6 RRegs:{ *:[i32] }:$a, (imm:{ *:[i32] }):$b)
/*  3377*/    /*Scope*/ 13, /*->3391*/
/*  3378*/      OPC_CheckPredicate, 19, // Predicate_immU16
/*  3380*/      OPC_MoveParent,
/*  3381*/      OPC_EmitMergeInputChains1_0,
/*  3382*/      OPC_EmitConvertToTarget, 2,
/*  3384*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::STWSP_lru6), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 3, 
                // Src: (XCoreStwsp RRegs:{ *:[i32] }:$a, (imm:{ *:[i32] })<<P:Predicate_immU16>>:$b) - Complexity = 7
                // Dst: (STWSP_lru6 RRegs:{ *:[i32] }:$a, (imm:{ *:[i32] }):$b)
/*  3391*/    0, /*End of Scope*/
/*  3392*/  /*SwitchOpcode*/ 40, TARGET_VAL(XCoreISD::LDWSP),// ->3435
/*  3395*/    OPC_RecordNode, // #0 = 'XCoreLdwsp' chained node
/*  3396*/    OPC_RecordChild1, // #1 = $b
/*  3397*/    OPC_MoveChild1,
/*  3398*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3401*/    OPC_Scope, 15, /*->3418*/ // 2 children in Scope
/*  3403*/      OPC_CheckPredicate, 18, // Predicate_immU6
/*  3405*/      OPC_MoveParent,
/*  3406*/      OPC_CheckType, MVT::i32,
/*  3408*/      OPC_EmitMergeInputChains1_0,
/*  3409*/      OPC_EmitConvertToTarget, 1,
/*  3411*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWSP_ru6), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (XCoreLdwsp:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_immU6>>:$b) - Complexity = 7
                // Dst: (LDWSP_ru6:{ *:[i32] } (imm:{ *:[i32] }):$b)
/*  3418*/    /*Scope*/ 15, /*->3434*/
/*  3419*/      OPC_CheckPredicate, 19, // Predicate_immU16
/*  3421*/      OPC_MoveParent,
/*  3422*/      OPC_CheckType, MVT::i32,
/*  3424*/      OPC_EmitMergeInputChains1_0,
/*  3425*/      OPC_EmitConvertToTarget, 1,
/*  3427*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWSP_lru6), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (XCoreLdwsp:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_immU16>>:$b) - Complexity = 7
                // Dst: (LDWSP_lru6:{ *:[i32] } (imm:{ *:[i32] }):$b)
/*  3434*/    0, /*End of Scope*/
/*  3435*/  /*SwitchOpcode*/ 37, TARGET_VAL(XCoreISD::RETSP),// ->3475
/*  3438*/    OPC_RecordNode, // #0 = 'XCoreRetsp' chained node
/*  3439*/    OPC_CaptureGlueInput,
/*  3440*/    OPC_RecordChild1, // #1 = $a
/*  3441*/    OPC_MoveChild1,
/*  3442*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3445*/    OPC_Scope, 13, /*->3460*/ // 2 children in Scope
/*  3447*/      OPC_CheckPredicate, 18, // Predicate_immU6
/*  3449*/      OPC_MoveParent,
/*  3450*/      OPC_EmitMergeInputChains1_0,
/*  3451*/      OPC_EmitConvertToTarget, 1,
/*  3453*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::RETSP_u6), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (XCoreRetsp (imm:{ *:[i32] })<<P:Predicate_immU6>>:$a) - Complexity = 7
                // Dst: (RETSP_u6:{ *:[i32] } (imm:{ *:[i32] }):$a)
/*  3460*/    /*Scope*/ 13, /*->3474*/
/*  3461*/      OPC_CheckPredicate, 19, // Predicate_immU16
/*  3463*/      OPC_MoveParent,
/*  3464*/      OPC_EmitMergeInputChains1_0,
/*  3465*/      OPC_EmitConvertToTarget, 1,
/*  3467*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::RETSP_lu6), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (XCoreRetsp (imm:{ *:[i32] })<<P:Predicate_immU16>>:$a) - Complexity = 7
                // Dst: (RETSP_lu6:{ *:[i32] } (imm:{ *:[i32] }):$a)
/*  3474*/    0, /*End of Scope*/
/*  3475*/  /*SwitchOpcode*/ 15, TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->3493
/*  3478*/    OPC_RecordChild0, // #0 = $b
/*  3479*/    OPC_MoveChild0,
/*  3480*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*  3483*/    OPC_MoveParent,
/*  3484*/    OPC_CheckType, MVT::i32,
/*  3486*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWDP_lru6), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (dprelwrapper:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$b) - Complexity = 6
              // Dst: (LDAWDP_lru6:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$b)
/*  3493*/  /*SwitchOpcode*/ 30, TARGET_VAL(XCoreISD::CPRelativeWrapper),// ->3526
/*  3496*/    OPC_RecordChild0, // #0 = $a
/*  3497*/    OPC_MoveChild0,
/*  3498*/    OPC_SwitchOpcode /*2 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->3512
/*  3502*/      OPC_MoveParent,
/*  3503*/      OPC_CheckType, MVT::i32,
/*  3505*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (cprelwrapper:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$a) - Complexity = 6
                // Dst: (LDAWCP_lu6:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$a)
/*  3512*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetConstantPool),// ->3525
/*  3515*/      OPC_MoveParent,
/*  3516*/      OPC_CheckType, MVT::i32,
/*  3518*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (cprelwrapper:{ *:[i32] } (tconstpool:{ *:[i32] }):$b) - Complexity = 6
                // Dst: (LDAWCP_lu6:{ *:[i32] } (tconstpool:{ *:[i32] }):$b)
/*  3525*/    0, // EndSwitchOpcode
/*  3526*/  /*SwitchOpcode*/ 41, TARGET_VAL(XCoreISD::PCRelativeWrapper),// ->3570
/*  3529*/    OPC_RecordChild0, // #0 = $a
/*  3530*/    OPC_MoveChild0,
/*  3531*/    OPC_SwitchOpcode /*2 cases */, 21, TARGET_VAL(ISD::TargetGlobalAddress),// ->3556
/*  3535*/      OPC_MoveParent,
/*  3536*/      OPC_CheckType, MVT::i32,
/*  3538*/      OPC_Scope, 7, /*->3547*/ // 2 children in Scope
/*  3540*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAPF_lu10), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (pcrelwrapper:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$a) - Complexity = 6
                  // Dst: (LDAPF_lu10:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$a)
/*  3547*/      /*Scope*/ 7, /*->3555*/
/*  3548*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAPB_lu10), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (pcrelwrapper:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$a) - Complexity = 6
                  // Dst: (LDAPB_lu10:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$a)
/*  3555*/      0, /*End of Scope*/
/*  3556*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->3569
/*  3559*/      OPC_MoveParent,
/*  3560*/      OPC_CheckType, MVT::i32,
/*  3562*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAPF_lu10_ba), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (pcrelwrapper:{ *:[i32] } (tblockaddress:{ *:[i32] }):$a) - Complexity = 6
                // Dst: (LDAPF_lu10_ba:{ *:[i32] } (tblockaddress:{ *:[i32] }):$a)
/*  3569*/    0, // EndSwitchOpcode
/*  3570*/  /*SwitchOpcode*/ 44, TARGET_VAL(XCoreISD::BL),// ->3617
/*  3573*/    OPC_RecordNode, // #0 = 'XCoreBranchLink' chained node
/*  3574*/    OPC_CaptureGlueInput,
/*  3575*/    OPC_RecordChild1, // #1 = $a
/*  3576*/    OPC_Scope, 27, /*->3605*/ // 2 children in Scope
/*  3578*/      OPC_MoveChild1,
/*  3579*/      OPC_SwitchOpcode /*2 cases */, 9, TARGET_VAL(ISD::TargetGlobalAddress),// ->3592
/*  3583*/        OPC_MoveParent,
/*  3584*/        OPC_EmitMergeInputChains1_0,
/*  3585*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::BLRF_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (XCoreBranchLink (tglobaladdr:{ *:[iPTR] }):$a) - Complexity = 6
                  // Dst: (BLRF_lu10:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$a)
/*  3592*/      /*SwitchOpcode*/ 9, TARGET_VAL(ISD::TargetExternalSymbol),// ->3604
/*  3595*/        OPC_MoveParent,
/*  3596*/        OPC_EmitMergeInputChains1_0,
/*  3597*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::BLRF_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (XCoreBranchLink (texternalsym:{ *:[iPTR] }):$addr) - Complexity = 6
                  // Dst: (BLRF_lu10:{ *:[i32] } (texternalsym:{ *:[i32] }):$addr)
/*  3604*/      0, // EndSwitchOpcode
/*  3605*/    /*Scope*/ 10, /*->3616*/
/*  3606*/      OPC_CheckChild1Type, MVT::i32,
/*  3608*/      OPC_EmitMergeInputChains1_0,
/*  3609*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::BLA_1r), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink GRRegs:{ *:[i32] }:$a) - Complexity = 3
                // Dst: (BLA_1r:{ *:[i32] } GRRegs:{ *:[i32] }:$a)
/*  3616*/    0, /*End of Scope*/
/*  3617*/  /*SwitchOpcode*/ 16, TARGET_VAL(XCoreISD::BR_JT),// ->3636
/*  3620*/    OPC_RecordNode, // #0 = 'XCoreBR_JT' chained node
/*  3621*/    OPC_RecordChild1, // #1 = $t
/*  3622*/    OPC_MoveChild1,
/*  3623*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*  3626*/    OPC_MoveParent,
/*  3627*/    OPC_RecordChild2, // #2 = $i
/*  3628*/    OPC_EmitMergeInputChains1_0,
/*  3629*/    OPC_MorphNodeTo0, TARGET_VAL(XCore::BR_JT), 0|OPFL_Chain,
                  2/*#Ops*/, 1, 2, 
              // Src: (XCoreBR_JT (tjumptable:{ *:[i32] }):$t, GRRegs:{ *:[i32] }:$i) - Complexity = 6
              // Dst: (BR_JT (tjumptable:{ *:[i32] }):$t, GRRegs:{ *:[i32] }:$i)
/*  3636*/  /*SwitchOpcode*/ 16, TARGET_VAL(XCoreISD::BR_JT32),// ->3655
/*  3639*/    OPC_RecordNode, // #0 = 'XCoreBR_JT32' chained node
/*  3640*/    OPC_RecordChild1, // #1 = $t
/*  3641*/    OPC_MoveChild1,
/*  3642*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*  3645*/    OPC_MoveParent,
/*  3646*/    OPC_RecordChild2, // #2 = $i
/*  3647*/    OPC_EmitMergeInputChains1_0,
/*  3648*/    OPC_MorphNodeTo0, TARGET_VAL(XCore::BR_JT32), 0|OPFL_Chain,
                  2/*#Ops*/, 1, 2, 
              // Src: (XCoreBR_JT32 (tjumptable:{ *:[i32] }):$t, GRRegs:{ *:[i32] }:$i) - Complexity = 6
              // Dst: (BR_JT32 (tjumptable:{ *:[i32] }):$t, GRRegs:{ *:[i32] }:$i)
/*  3655*/  /*SwitchOpcode*/ 27, TARGET_VAL(ISD::Constant),// ->3685
/*  3658*/    OPC_RecordNode, // #0 = $b
/*  3659*/    OPC_Scope, 11, /*->3672*/ // 2 children in Scope
/*  3661*/      OPC_CheckPredicate, 18, // Predicate_immU6
/*  3663*/      OPC_EmitConvertToTarget, 0,
/*  3665*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDC_ru6), 0,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_immU6>>:$b - Complexity = 4
                // Dst: (LDC_ru6:{ *:[i32] } (imm:{ *:[i32] }):$b)
/*  3672*/    /*Scope*/ 11, /*->3684*/
/*  3673*/      OPC_CheckPredicate, 19, // Predicate_immU16
/*  3675*/      OPC_EmitConvertToTarget, 0,
/*  3677*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDC_lru6), 0,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_immU16>>:$b - Complexity = 4
                // Dst: (LDC_lru6:{ *:[i32] } (imm:{ *:[i32] }):$b)
/*  3684*/    0, /*End of Scope*/
/*  3685*/  /*SwitchOpcode*/ 6, TARGET_VAL(XCoreISD::FRAME_TO_ARGS_OFFSET),// ->3694
/*  3688*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::FRAME_TO_ARGS_OFFSET), 0,
                  MVT::i32, 0/*#Ops*/, 
              // Src: (frametoargsoffset:{ *:[i32] }) - Complexity = 3
              // Dst: (FRAME_TO_ARGS_OFFSET:{ *:[i32] })
/*  3694*/  /*SwitchOpcode*/ 14, TARGET_VAL(XCoreISD::EH_RETURN),// ->3711
/*  3697*/    OPC_RecordNode, // #0 = 'XCoreEhRet' chained node
/*  3698*/    OPC_CaptureGlueInput,
/*  3699*/    OPC_RecordChild1, // #1 = $s
/*  3700*/    OPC_CheckChild1Type, MVT::i32,
/*  3702*/    OPC_RecordChild2, // #2 = $handler
/*  3703*/    OPC_EmitMergeInputChains1_0,
/*  3704*/    OPC_MorphNodeTo0, TARGET_VAL(XCore::EH_RETURN), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 2, 
              // Src: (XCoreEhRet GRRegs:{ *:[i32] }:$s, GRRegs:{ *:[i32] }:$handler) - Complexity = 3
              // Dst: (EH_RETURN GRRegs:{ *:[i32] }:$s, GRRegs:{ *:[i32] }:$handler)
/*  3711*/  /*SwitchOpcode*/ 7, TARGET_VAL(XCoreISD::MEMBARRIER),// ->3721
/*  3714*/    OPC_RecordNode, // #0 = 'XCoreMemBarrier' chained node
/*  3715*/    OPC_EmitMergeInputChains1_0,
/*  3716*/    OPC_MorphNodeTo0, TARGET_VAL(XCore::Int_MemBarrier), 0|OPFL_Chain,
                  0/*#Ops*/, 
              // Src: (XCoreMemBarrier) - Complexity = 3
              // Dst: (Int_MemBarrier)
/*  3721*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::OR),// ->3734
/*  3724*/    OPC_RecordChild0, // #0 = $b
/*  3725*/    OPC_RecordChild1, // #1 = $c
/*  3726*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::OR_3r), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (or:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
              // Dst: (OR_3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  3734*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::SDIV),// ->3747
/*  3737*/    OPC_RecordChild0, // #0 = $b
/*  3738*/    OPC_RecordChild1, // #1 = $c
/*  3739*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::DIVS_l3r), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
              // Dst: (DIVS_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  3747*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::UDIV),// ->3760
/*  3750*/    OPC_RecordChild0, // #0 = $b
/*  3751*/    OPC_RecordChild1, // #1 = $c
/*  3752*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::DIVU_l3r), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
              // Dst: (DIVU_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  3760*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::SREM),// ->3773
/*  3763*/    OPC_RecordChild0, // #0 = $b
/*  3764*/    OPC_RecordChild1, // #1 = $c
/*  3765*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::REMS_l3r), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srem:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
              // Dst: (REMS_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  3773*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::UREM),// ->3786
/*  3776*/    OPC_RecordChild0, // #0 = $b
/*  3777*/    OPC_RecordChild1, // #1 = $c
/*  3778*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::REMU_l3r), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (urem:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c) - Complexity = 3
              // Dst: (REMU_l3r:{ *:[i32] } GRRegs:{ *:[i32] }:$b, GRRegs:{ *:[i32] }:$c)
/*  3786*/  /*SwitchOpcode*/ 8, TARGET_VAL(ISD::BSWAP),// ->3797
/*  3789*/    OPC_RecordChild0, // #0 = $src
/*  3790*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::BYTEREV_l2r), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bswap:{ *:[i32] } GRRegs:{ *:[i32] }:$src) - Complexity = 3
              // Dst: (BYTEREV_l2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src)
/*  3797*/  /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTLZ),// ->3808
/*  3800*/    OPC_RecordChild0, // #0 = $src
/*  3801*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::CLZ_l2r), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:{ *:[i32] } GRRegs:{ *:[i32] }:$src) - Complexity = 3
              // Dst: (CLZ_l2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src)
/*  3808*/  /*SwitchOpcode*/ 49, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->3860
/*  3811*/    OPC_RecordChild0, // #0 = $b
/*  3812*/    OPC_MoveChild1,
/*  3813*/    OPC_Scope, 14, /*->3829*/ // 3 children in Scope
/*  3815*/      OPC_CheckValueType, MVT::i1,
/*  3817*/      OPC_MoveParent,
/*  3818*/      OPC_EmitInteger, MVT::i32, 1, 
/*  3821*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sext_inreg:{ *:[i32] } GRRegs:{ *:[i32] }:$b, i1:{ *:[Other] }) - Complexity = 3
                // Dst: (SEXT_rus:{ *:[i32] } GRRegs:{ *:[i32] }:$b, 1:{ *:[i32] })
/*  3829*/    /*Scope*/ 14, /*->3844*/
/*  3830*/      OPC_CheckValueType, MVT::i8,
/*  3832*/      OPC_MoveParent,
/*  3833*/      OPC_EmitInteger, MVT::i32, 8, 
/*  3836*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sext_inreg:{ *:[i32] } GRRegs:{ *:[i32] }:$b, i8:{ *:[Other] }) - Complexity = 3
                // Dst: (SEXT_rus:{ *:[i32] } GRRegs:{ *:[i32] }:$b, 8:{ *:[i32] })
/*  3844*/    /*Scope*/ 14, /*->3859*/
/*  3845*/      OPC_CheckValueType, MVT::i16,
/*  3847*/      OPC_MoveParent,
/*  3848*/      OPC_EmitInteger, MVT::i32, 16, 
/*  3851*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sext_inreg:{ *:[i32] } GRRegs:{ *:[i32] }:$b, i16:{ *:[Other] }) - Complexity = 3
                // Dst: (SEXT_rus:{ *:[i32] } GRRegs:{ *:[i32] }:$b, 16:{ *:[i32] })
/*  3859*/    0, /*End of Scope*/
/*  3860*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->3877
/*  3863*/    OPC_RecordNode, // #0 = 'br' chained node
/*  3864*/    OPC_RecordChild1, // #1 = $addr
/*  3865*/    OPC_MoveChild1,
/*  3866*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  3869*/    OPC_MoveParent,
/*  3870*/    OPC_EmitMergeInputChains1_0,
/*  3871*/    OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFU_lu6), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$addr) - Complexity = 3
              // Dst: (BRFU_lu6 (bb:{ *:[Other] }):$addr)
/*  3877*/  /*SwitchOpcode*/ 15, TARGET_VAL(ISD::CTTZ),// ->3895
/*  3880*/    OPC_RecordChild0, // #0 = $src
/*  3881*/    OPC_EmitNode1, TARGET_VAL(XCore::BITREV_l2r), 0,
                  MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*  3888*/    OPC_MorphNodeTo1, TARGET_VAL(XCore::CLZ_l2r), 0,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (cttz:{ *:[i32] } GRRegs:{ *:[i32] }:$src) - Complexity = 3
              // Dst: (CLZ_l2r:{ *:[i32] } (BITREV_l2r:{ *:[i32] } GRRegs:{ *:[i32] }:$src))
/*  3895*/  /*SwitchOpcode*/ 18, TARGET_VAL(ISD::TRAP),// ->3916
/*  3898*/    OPC_RecordNode, // #0 = 'trap' chained node
/*  3899*/    OPC_EmitMergeInputChains1_0,
/*  3900*/    OPC_EmitInteger, MVT::i32, 0, 
/*  3903*/    OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                  MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*  3910*/    OPC_MorphNodeTo0, TARGET_VAL(XCore::ECALLF_1r), 0|OPFL_Chain,
                  1/*#Ops*/, 2, 
              // Src: (trap) - Complexity = 3
              // Dst: (ECALLF_1r (LDC_ru6:{ *:[i32] } 0:{ *:[i32] }))
/*  3916*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 3918 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 65
  // #OPC_RecordNode                           = 22
  // #OPC_RecordChild                          = 201
  // #OPC_RecordMemRef                         = 2
  // #OPC_CaptureGlueInput                     = 4
  // #OPC_MoveChild                            = 78
  // #OPC_MoveParent                           = 153
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 1
  // #OPC_CheckPatternPredicate                = 0
  // #OPC_CheckPredicate                       = 97
  // #OPC_CheckOpcode                          = 60
  // #OPC_SwitchOpcode                         = 7
  // #OPC_CheckType                            = 33
  // #OPC_SwitchType                           = 0
  // #OPC_CheckChildType                       = 57
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 80
  // #OPC_CheckCondCode                        = 33
  // #OPC_CheckValueType                       = 3
  // #OPC_CheckComplexPat                      = 4
  // #OPC_CheckAndImm                          = 0
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckFoldableChainNode               = 1
  // #OPC_EmitInteger                          = 25
  // #OPC_EmitStringInteger                    = 0
  // #OPC_EmitRegister                         = 0
  // #OPC_EmitConvertToTarget                  = 36
  // #OPC_EmitMergeInputChains                 = 110
  // #OPC_EmitCopyToReg                        = 2
  // #OPC_EmitNode                             = 31
  // #OPC_EmitNodeXForm                        = 8
  // #OPC_CompleteMatch                        = 0
  // #OPC_MorphNodeTo                          = 197

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
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
    // Predicate_immUs
    auto *N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() <= 11;

  }
  case 1: { 
    // Predicate_immUs4
    auto *N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return value%4 == 0 && value/4 <= 11;

  }
  case 2: { 
    // Predicate_immUsNeg
    auto *N = cast<ConstantSDNode>(Node);

  return -((uint32_t)N->getZExtValue()) <= 11;

  }
  case 3: { 
    // Predicate_immUs4Neg
    auto *N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (-value)%4 == 0 && (-value)/4 <= 11;

  }
  case 4: { 
    // Predicate_unindexedload
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 5: { 
    // Predicate_sextload
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::SEXTLOAD) return false;
return true;

  }
  case 6: { 
    // Predicate_sextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 7: { 
    // Predicate_extload
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::EXTLOAD) return false;
return true;

  }
  case 8: { 
    // Predicate_load
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 9: { 
    // Predicate_zextload
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::ZEXTLOAD) return false;
return true;

  }
  case 10: { 
    // Predicate_zextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 11: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 12: { 
    // Predicate_truncstore
    SDNode *N = Node;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 13: { 
    // Predicate_truncstorei16
    SDNode *N = Node;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 14: { 
    // Predicate_store
    SDNode *N = Node;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 15: { 
    // Predicate_truncstorei8
    SDNode *N = Node;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 16: { 
    // Predicate_immBpwSubBitp
    auto *N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 24 && value <= 31)
          || value == 16
          || value == 8
          || value == 0;

  }
  case 17: { 
    // Predicate_immBitp
    auto *N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 1 && value <= 8)
          || value == 16
          || value == 24
          || value == 32;

  }
  case 18: { 
    // Predicate_immU6
    auto *N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 6);

  }
  case 19: { 
    // Predicate_immU16
    auto *N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 16);

  }
  case 20: { 
    // Predicate_immMskBitp
    auto *N = cast<ConstantSDNode>(Node);
 return immMskBitp(N); 
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
  return SelectADDRspii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
SDValue DAGISEL_CLASS_COLONCOLON RunSDNodeXForm(SDValue V, unsigned XFormNo)
#if DAGISEL_INLINE
  override
#endif
{
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // div4_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: imm/4
  assert(N->getZExtValue() % 4 == 0);
  return getI32Imm(N->getZExtValue()/4, SDLoc(N));

  }
  case 1: {  // neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(-value, SDLoc(N));

  }
  case 2: {  // div4neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm/4
  uint32_t value = N->getZExtValue();
  assert(-value % 4 == 0);
  return getI32Imm(-value/4, SDLoc(N));

  }
  case 3: {  // bpwsub_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32-imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(32 - value, SDLoc(N));

  }
  case 4: {  // msksize_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the size of a mask
  assert(isMask_32(N->getZExtValue()));
  // look for the first non-zero bit
  return getI32Imm(32 - countLeadingZeros((uint32_t)N->getZExtValue()),
                   SDLoc(N));

  }
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
