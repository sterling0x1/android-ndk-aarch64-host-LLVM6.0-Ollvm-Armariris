/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the Lanai target                              *|
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
/*     0*/  OPC_SwitchOpcode /*33 cases */, 1|128,2/*257*/, TARGET_VAL(ISD::LOAD),// ->262
/*     5*/    OPC_RecordMemRef,
/*     6*/    OPC_RecordNode, // #0 = 'ld' chained node
/*     7*/    OPC_RecordChild1, // #1 = $src
/*     8*/    OPC_CheckChild1Type, MVT::i32,
/*    10*/    OPC_CheckPredicate, 0, // Predicate_unindexedload
/*    12*/    OPC_CheckType, MVT::i32,
/*    14*/    OPC_Scope, 32, /*->48*/ // 9 children in Scope
/*    16*/      OPC_CheckPredicate, 1, // Predicate_load
/*    18*/      OPC_Scope, 13, /*->33*/ // 2 children in Scope
/*    20*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRi:$src #2 #3 #4
/*    23*/        OPC_EmitMergeInputChains1_0,
/*    24*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDW_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRri:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDW_RI:{ *:[i32] } ADDRri:{ *:[i32] }:$src)
/*    33*/      /*Scope*/ 13, /*->47*/
/*    34*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*    37*/        OPC_EmitMergeInputChains1_0,
/*    38*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDW_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDW_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*    47*/      0, /*End of Scope*/
/*    48*/    /*Scope*/ 52, /*->101*/
/*    49*/      OPC_CheckPredicate, 2, // Predicate_zextload
/*    51*/      OPC_Scope, 15, /*->68*/ // 3 children in Scope
/*    53*/        OPC_CheckPredicate, 3, // Predicate_zextloadi32
/*    55*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*    58*/        OPC_EmitMergeInputChains1_0,
/*    59*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDWz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 16
                  // Dst: (LDWz_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*    68*/      /*Scope*/ 15, /*->84*/
/*    69*/        OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*    71*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*    74*/        OPC_EmitMergeInputChains1_0,
/*    75*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LDHz_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*    84*/      /*Scope*/ 15, /*->100*/
/*    85*/        OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*    87*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*    90*/        OPC_EmitMergeInputChains1_0,
/*    91*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LDBz_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*   100*/      0, /*End of Scope*/
/*   101*/    /*Scope*/ 36, /*->138*/
/*   102*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*   104*/      OPC_Scope, 15, /*->121*/ // 2 children in Scope
/*   106*/        OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*   108*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*   111*/        OPC_EmitMergeInputChains1_0,
/*   112*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHs_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (LDHs_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*   121*/      /*Scope*/ 15, /*->137*/
/*   122*/        OPC_CheckPredicate, 5, // Predicate_sextloadi8
/*   124*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*   127*/        OPC_EmitMergeInputChains1_0,
/*   128*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBs_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LDBs_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*   137*/      0, /*End of Scope*/
/*   138*/    /*Scope*/ 17, /*->156*/
/*   139*/      OPC_CheckPredicate, 2, // Predicate_zextload
/*   141*/      OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*   143*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   146*/      OPC_EmitMergeInputChains1_0,
/*   147*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                // Dst: (LDHz_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   156*/    /*Scope*/ 17, /*->174*/
/*   157*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*   159*/      OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*   161*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   164*/      OPC_EmitMergeInputChains1_0,
/*   165*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHs_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                // Dst: (LDHs_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   174*/    /*Scope*/ 17, /*->192*/
/*   175*/      OPC_CheckPredicate, 2, // Predicate_zextload
/*   177*/      OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*   179*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   182*/      OPC_EmitMergeInputChains1_0,
/*   183*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                // Dst: (LDBz_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   192*/    /*Scope*/ 17, /*->210*/
/*   193*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*   195*/      OPC_CheckPredicate, 5, // Predicate_sextloadi8
/*   197*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   200*/      OPC_EmitMergeInputChains1_0,
/*   201*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBs_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                // Dst: (LDBs_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   210*/    /*Scope*/ 36, /*->247*/
/*   211*/      OPC_CheckPredicate, 7, // Predicate_extload
/*   213*/      OPC_Scope, 15, /*->230*/ // 2 children in Scope
/*   215*/        OPC_CheckPredicate, 5, // Predicate_extloadi8
/*   217*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   220*/        OPC_EmitMergeInputChains1_0,
/*   221*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LDBz_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   230*/      /*Scope*/ 15, /*->246*/
/*   231*/        OPC_CheckPredicate, 4, // Predicate_extloadi16
/*   233*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   236*/        OPC_EmitMergeInputChains1_0,
/*   237*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LDHz_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   246*/      0, /*End of Scope*/
/*   247*/    /*Scope*/ 13, /*->261*/
/*   248*/      OPC_CheckPredicate, 1, // Predicate_load
/*   250*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrSls:$src #2
/*   253*/      OPC_EmitMergeInputChains1_0,
/*   254*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDADDR), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:{ *:[i32] } ADDRsls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                // Dst: (LDADDR:{ *:[i32] } ADDRsls:{ *:[i32] }:$src)
/*   261*/    0, /*End of Scope*/
/*   262*/  /*SwitchOpcode*/ 0|128,1/*128*/, TARGET_VAL(ISD::STORE),// ->394
/*   266*/    OPC_RecordMemRef,
/*   267*/    OPC_RecordNode, // #0 = 'st' chained node
/*   268*/    OPC_RecordChild1, // #1 = $Rd
/*   269*/    OPC_CheckChild1Type, MVT::i32,
/*   271*/    OPC_RecordChild2, // #2 = $dst
/*   272*/    OPC_CheckChild2Type, MVT::i32,
/*   274*/    OPC_CheckPredicate, 8, // Predicate_unindexedstore
/*   276*/    OPC_Scope, 32, /*->310*/ // 3 children in Scope
/*   278*/      OPC_CheckPredicate, 9, // Predicate_store
/*   280*/      OPC_Scope, 13, /*->295*/ // 2 children in Scope
/*   282*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*   285*/        OPC_EmitMergeInputChains1_0,
/*   286*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::SW_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SW_RR GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)
/*   295*/      /*Scope*/ 13, /*->309*/
/*   296*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRi:$dst #3 #4 #5
/*   299*/        OPC_EmitMergeInputChains1_0,
/*   300*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::SW_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRri:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SW_RI GPR:{ *:[i32] }:$Rd, ADDRri:{ *:[i32] }:$dst)
/*   309*/      0, /*End of Scope*/
/*   310*/    /*Scope*/ 68, /*->379*/
/*   311*/      OPC_CheckPredicate, 10, // Predicate_truncstore
/*   313*/      OPC_Scope, 15, /*->330*/ // 4 children in Scope
/*   315*/        OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*   317*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*   320*/        OPC_EmitMergeInputChains1_0,
/*   321*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::STH_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (STH_RR GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)
/*   330*/      /*Scope*/ 15, /*->346*/
/*   331*/        OPC_CheckPredicate, 12, // Predicate_truncstorei8
/*   333*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*   336*/        OPC_EmitMergeInputChains1_0,
/*   337*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::STB_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                  // Dst: (STB_RR GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)
/*   346*/      /*Scope*/ 15, /*->362*/
/*   347*/        OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*   349*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectAddrSpls:$dst #3 #4 #5
/*   352*/        OPC_EmitMergeInputChains1_0,
/*   353*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::STH_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRspls:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (STH_RI GPR:{ *:[i32] }:$Rd, ADDRspls:{ *:[i32] }:$dst)
/*   362*/      /*Scope*/ 15, /*->378*/
/*   363*/        OPC_CheckPredicate, 12, // Predicate_truncstorei8
/*   365*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectAddrSpls:$dst #3 #4 #5
/*   368*/        OPC_EmitMergeInputChains1_0,
/*   369*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::STB_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRspls:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                  // Dst: (STB_RI GPR:{ *:[i32] }:$Rd, ADDRspls:{ *:[i32] }:$dst)
/*   378*/      0, /*End of Scope*/
/*   379*/    /*Scope*/ 13, /*->393*/
/*   380*/      OPC_CheckPredicate, 9, // Predicate_store
/*   382*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrSls:$dst #3
/*   385*/      OPC_EmitMergeInputChains1_0,
/*   386*/      OPC_MorphNodeTo0, TARGET_VAL(Lanai::STADDR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#Ops*/, 1, 3, 
                // Src: (st GPR:{ *:[i32] }:$Rd, ADDRsls:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 10
                // Dst: (STADDR GPR:{ *:[i32] }:$Rd, ADDRsls:{ *:[i32] }:$dst)
/*   393*/    0, /*End of Scope*/
/*   394*/  /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_START),// ->419
/*   397*/    OPC_RecordNode, // #0 = 'CallSeqStart' chained node
/*   398*/    OPC_RecordChild1, // #1 = $amt1
/*   399*/    OPC_MoveChild1,
/*   400*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*   403*/    OPC_MoveParent,
/*   404*/    OPC_RecordChild2, // #2 = $amt2
/*   405*/    OPC_MoveChild2,
/*   406*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*   409*/    OPC_MoveParent,
/*   410*/    OPC_EmitMergeInputChains1_0,
/*   411*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (CallSeqStart (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKDOWN:{ *:[i32] } (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2)
/*   419*/  /*SwitchOpcode*/ 23, TARGET_VAL(ISD::CALLSEQ_END),// ->445
/*   422*/    OPC_RecordNode, // #0 = 'CallSeqEnd' chained node
/*   423*/    OPC_CaptureGlueInput,
/*   424*/    OPC_RecordChild1, // #1 = $amt1
/*   425*/    OPC_MoveChild1,
/*   426*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*   429*/    OPC_MoveParent,
/*   430*/    OPC_RecordChild2, // #2 = $amt2
/*   431*/    OPC_MoveChild2,
/*   432*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*   435*/    OPC_MoveParent,
/*   436*/    OPC_EmitMergeInputChains1_0,
/*   437*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (CallSeqEnd (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:{ *:[i32] } (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2)
/*   445*/  /*SwitchOpcode*/ 124|128,2/*380*/, TARGET_VAL(ISD::OR),// ->829
/*   449*/    OPC_Scope, 50|128,1/*178*/, /*->630*/ // 3 children in Scope
/*   452*/      OPC_RecordChild0, // #0 = $hi
/*   453*/      OPC_MoveChild1,
/*   454*/      OPC_SwitchOpcode /*2 cases */, 79, TARGET_VAL(LanaiISD::LO),// ->537
/*   458*/        OPC_RecordChild0, // #1 = $lo
/*   459*/        OPC_MoveChild0,
/*   460*/        OPC_SwitchOpcode /*5 cases */, 12, TARGET_VAL(ISD::TargetGlobalAddress),// ->476
/*   464*/          OPC_MoveParent,
/*   465*/          OPC_MoveParent,
/*   466*/          OPC_CheckType, MVT::i32,
/*   468*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$hi, (LanaiLo:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tglobaladdr:{ *:[i32] }):$lo)
/*   476*/        /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetExternalSymbol),// ->491
/*   479*/          OPC_MoveParent,
/*   480*/          OPC_MoveParent,
/*   481*/          OPC_CheckType, MVT::i32,
/*   483*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$hi, (LanaiLo:{ *:[i32] } (texternalsym:{ *:[i32] }):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (texternalsym:{ *:[i32] }):$lo)
/*   491*/        /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetBlockAddress),// ->506
/*   494*/          OPC_MoveParent,
/*   495*/          OPC_MoveParent,
/*   496*/          OPC_CheckType, MVT::i32,
/*   498*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$hi, (LanaiLo:{ *:[i32] } (tblockaddress:{ *:[i32] }):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tblockaddress:{ *:[i32] }):$lo)
/*   506*/        /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetJumpTable),// ->521
/*   509*/          OPC_MoveParent,
/*   510*/          OPC_MoveParent,
/*   511*/          OPC_CheckType, MVT::i32,
/*   513*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$hi, (LanaiLo:{ *:[i32] } (tjumptable:{ *:[i32] }):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tjumptable:{ *:[i32] }):$lo)
/*   521*/        /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetConstantPool),// ->536
/*   524*/          OPC_MoveParent,
/*   525*/          OPC_MoveParent,
/*   526*/          OPC_CheckType, MVT::i32,
/*   528*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$hi, (LanaiLo:{ *:[i32] } (tconstpool:{ *:[i32] }):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tconstpool:{ *:[i32] }):$lo)
/*   536*/        0, // EndSwitchOpcode
/*   537*/      /*SwitchOpcode*/ 89, TARGET_VAL(LanaiISD::SMALL),// ->629
/*   540*/        OPC_RecordChild0, // #1 = $small
/*   541*/        OPC_MoveChild0,
/*   542*/        OPC_SwitchOpcode /*5 cases */, 14, TARGET_VAL(ISD::TargetGlobalAddress),// ->560
/*   546*/          OPC_MoveParent,
/*   547*/          OPC_MoveParent,
/*   548*/          OPC_CheckType, MVT::i32,
/*   550*/          OPC_EmitCopyToReg, 0, Lanai::R0,
/*   553*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:{ *:[i32] } R0:{ *:[i32] }, (LanaiSmall:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$small)) - Complexity = 9
                    // Dst: (SLI:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$small)
/*   560*/        /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetExternalSymbol),// ->577
/*   563*/          OPC_MoveParent,
/*   564*/          OPC_MoveParent,
/*   565*/          OPC_CheckType, MVT::i32,
/*   567*/          OPC_EmitCopyToReg, 0, Lanai::R0,
/*   570*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:{ *:[i32] } R0:{ *:[i32] }, (LanaiSmall:{ *:[i32] } (texternalsym:{ *:[i32] }):$small)) - Complexity = 9
                    // Dst: (SLI:{ *:[i32] } (texternalsym:{ *:[i32] }):$small)
/*   577*/        /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetBlockAddress),// ->594
/*   580*/          OPC_MoveParent,
/*   581*/          OPC_MoveParent,
/*   582*/          OPC_CheckType, MVT::i32,
/*   584*/          OPC_EmitCopyToReg, 0, Lanai::R0,
/*   587*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:{ *:[i32] } R0:{ *:[i32] }, (LanaiSmall:{ *:[i32] } (tblockaddress:{ *:[i32] }):$small)) - Complexity = 9
                    // Dst: (SLI:{ *:[i32] } (tblockaddress:{ *:[i32] }):$small)
/*   594*/        /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetJumpTable),// ->611
/*   597*/          OPC_MoveParent,
/*   598*/          OPC_MoveParent,
/*   599*/          OPC_CheckType, MVT::i32,
/*   601*/          OPC_EmitCopyToReg, 0, Lanai::R0,
/*   604*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:{ *:[i32] } R0:{ *:[i32] }, (LanaiSmall:{ *:[i32] } (tjumptable:{ *:[i32] }):$small)) - Complexity = 9
                    // Dst: (SLI:{ *:[i32] } (tjumptable:{ *:[i32] }):$small)
/*   611*/        /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetConstantPool),// ->628
/*   614*/          OPC_MoveParent,
/*   615*/          OPC_MoveParent,
/*   616*/          OPC_CheckType, MVT::i32,
/*   618*/          OPC_EmitCopyToReg, 0, Lanai::R0,
/*   621*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:{ *:[i32] } R0:{ *:[i32] }, (LanaiSmall:{ *:[i32] } (tconstpool:{ *:[i32] }):$small)) - Complexity = 9
                    // Dst: (SLI:{ *:[i32] } (tconstpool:{ *:[i32] }):$small)
/*   628*/        0, // EndSwitchOpcode
/*   629*/      0, // EndSwitchOpcode
/*   630*/    /*Scope*/ 88, /*->719*/
/*   631*/      OPC_MoveChild0,
/*   632*/      OPC_CheckOpcode, TARGET_VAL(LanaiISD::LO),
/*   635*/      OPC_RecordChild0, // #0 = $lo
/*   636*/      OPC_MoveChild0,
/*   637*/      OPC_SwitchOpcode /*5 cases */, 13, TARGET_VAL(ISD::TargetGlobalAddress),// ->654
/*   641*/        OPC_MoveParent,
/*   642*/        OPC_MoveParent,
/*   643*/        OPC_RecordChild1, // #1 = $hi
/*   644*/        OPC_CheckType, MVT::i32,
/*   646*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i32] } (LanaiLo:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$lo), GPR:{ *:[i32] }:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tglobaladdr:{ *:[i32] }):$lo)
/*   654*/      /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetExternalSymbol),// ->670
/*   657*/        OPC_MoveParent,
/*   658*/        OPC_MoveParent,
/*   659*/        OPC_RecordChild1, // #1 = $hi
/*   660*/        OPC_CheckType, MVT::i32,
/*   662*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i32] } (LanaiLo:{ *:[i32] } (texternalsym:{ *:[i32] }):$lo), GPR:{ *:[i32] }:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (texternalsym:{ *:[i32] }):$lo)
/*   670*/      /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetBlockAddress),// ->686
/*   673*/        OPC_MoveParent,
/*   674*/        OPC_MoveParent,
/*   675*/        OPC_RecordChild1, // #1 = $hi
/*   676*/        OPC_CheckType, MVT::i32,
/*   678*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i32] } (LanaiLo:{ *:[i32] } (tblockaddress:{ *:[i32] }):$lo), GPR:{ *:[i32] }:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tblockaddress:{ *:[i32] }):$lo)
/*   686*/      /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetJumpTable),// ->702
/*   689*/        OPC_MoveParent,
/*   690*/        OPC_MoveParent,
/*   691*/        OPC_RecordChild1, // #1 = $hi
/*   692*/        OPC_CheckType, MVT::i32,
/*   694*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i32] } (LanaiLo:{ *:[i32] } (tjumptable:{ *:[i32] }):$lo), GPR:{ *:[i32] }:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tjumptable:{ *:[i32] }):$lo)
/*   702*/      /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetConstantPool),// ->718
/*   705*/        OPC_MoveParent,
/*   706*/        OPC_MoveParent,
/*   707*/        OPC_RecordChild1, // #1 = $hi
/*   708*/        OPC_CheckType, MVT::i32,
/*   710*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i32] } (LanaiLo:{ *:[i32] } (tconstpool:{ *:[i32] }):$lo), GPR:{ *:[i32] }:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tconstpool:{ *:[i32] }):$lo)
/*   718*/      0, // EndSwitchOpcode
/*   719*/    /*Scope*/ 108, /*->828*/
/*   720*/      OPC_RecordChild0, // #0 = $Rs1
/*   721*/      OPC_RecordChild1, // #1 = $imm16
/*   722*/      OPC_Scope, 76, /*->800*/ // 2 children in Scope
/*   724*/        OPC_MoveChild1,
/*   725*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   728*/        OPC_Scope, 16, /*->746*/ // 4 children in Scope
/*   730*/          OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*   732*/          OPC_MoveParent,
/*   733*/          OPC_EmitConvertToTarget, 1,
/*   735*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*   738*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   746*/        /*Scope*/ 16, /*->763*/
/*   747*/          OPC_CheckPredicate, 14, // Predicate_i32hi16
/*   749*/          OPC_MoveParent,
/*   750*/          OPC_EmitConvertToTarget, 1,
/*   752*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*   755*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_HI), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                    // Dst: (OR_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   763*/        /*Scope*/ 17, /*->781*/
/*   764*/          OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*   766*/          OPC_MoveParent,
/*   767*/          OPC_EmitConvertToTarget, 1,
/*   769*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*   772*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_I_LO), 0,
                        MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (OR_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   781*/        /*Scope*/ 17, /*->799*/
/*   782*/          OPC_CheckPredicate, 14, // Predicate_i32hi16
/*   784*/          OPC_MoveParent,
/*   785*/          OPC_EmitConvertToTarget, 1,
/*   787*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*   790*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_I_HI), 0,
                        MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                    // Dst: (OR_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   799*/        0, /*End of Scope*/
/*   800*/      /*Scope*/ 26, /*->827*/
/*   801*/        OPC_EmitInteger, MVT::i32, 0, 
/*   804*/        OPC_Scope, 9, /*->815*/ // 2 children in Scope
/*   806*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_R), 0,
                        MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                    // Dst: (OR_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*   815*/        /*Scope*/ 10, /*->826*/
/*   816*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_R), 0,
                        MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                    // Dst: (OR_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*   826*/        0, /*End of Scope*/
/*   827*/      0, /*End of Scope*/
/*   828*/    0, /*End of Scope*/
/*   829*/  /*SwitchOpcode*/ 108, TARGET_VAL(ISD::AND),// ->940
/*   832*/    OPC_RecordChild0, // #0 = $Rs1
/*   833*/    OPC_RecordChild1, // #1 = $imm16
/*   834*/    OPC_Scope, 76, /*->912*/ // 2 children in Scope
/*   836*/      OPC_MoveChild1,
/*   837*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   840*/      OPC_Scope, 16, /*->858*/ // 4 children in Scope
/*   842*/        OPC_CheckPredicate, 15, // Predicate_i32lo16and
/*   844*/        OPC_MoveParent,
/*   845*/        OPC_EmitConvertToTarget, 1,
/*   847*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*   850*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16and>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (AND_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   858*/      /*Scope*/ 16, /*->875*/
/*   859*/        OPC_CheckPredicate, 16, // Predicate_i32hi16and
/*   861*/        OPC_MoveParent,
/*   862*/        OPC_EmitConvertToTarget, 1,
/*   864*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*   867*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16and>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (AND_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   875*/      /*Scope*/ 17, /*->893*/
/*   876*/        OPC_CheckPredicate, 15, // Predicate_i32lo16and
/*   878*/        OPC_MoveParent,
/*   879*/        OPC_EmitConvertToTarget, 1,
/*   881*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*   884*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_I_LO), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16and>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (AND_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   893*/      /*Scope*/ 17, /*->911*/
/*   894*/        OPC_CheckPredicate, 16, // Predicate_i32hi16and
/*   896*/        OPC_MoveParent,
/*   897*/        OPC_EmitConvertToTarget, 1,
/*   899*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*   902*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_I_HI), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16and>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (AND_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   911*/      0, /*End of Scope*/
/*   912*/    /*Scope*/ 26, /*->939*/
/*   913*/      OPC_EmitInteger, MVT::i32, 0, 
/*   916*/      OPC_Scope, 9, /*->927*/ // 2 children in Scope
/*   918*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_R), 0,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (AND_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*   927*/      /*Scope*/ 10, /*->938*/
/*   928*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_R), 0,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (AND_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*   938*/      0, /*End of Scope*/
/*   939*/    0, /*End of Scope*/
/*   940*/  /*SwitchOpcode*/ 108, TARGET_VAL(ISD::XOR),// ->1051
/*   943*/    OPC_RecordChild0, // #0 = $Rs1
/*   944*/    OPC_RecordChild1, // #1 = $imm16
/*   945*/    OPC_Scope, 76, /*->1023*/ // 2 children in Scope
/*   947*/      OPC_MoveChild1,
/*   948*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   951*/      OPC_Scope, 16, /*->969*/ // 4 children in Scope
/*   953*/        OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*   955*/        OPC_MoveParent,
/*   956*/        OPC_EmitConvertToTarget, 1,
/*   958*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*   961*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   969*/      /*Scope*/ 16, /*->986*/
/*   970*/        OPC_CheckPredicate, 14, // Predicate_i32hi16
/*   972*/        OPC_MoveParent,
/*   973*/        OPC_EmitConvertToTarget, 1,
/*   975*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*   978*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   986*/      /*Scope*/ 17, /*->1004*/
/*   987*/        OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*   989*/        OPC_MoveParent,
/*   990*/        OPC_EmitConvertToTarget, 1,
/*   992*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*   995*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_I_LO), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*  1004*/      /*Scope*/ 17, /*->1022*/
/*  1005*/        OPC_CheckPredicate, 14, // Predicate_i32hi16
/*  1007*/        OPC_MoveParent,
/*  1008*/        OPC_EmitConvertToTarget, 1,
/*  1010*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1013*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_I_HI), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*  1022*/      0, /*End of Scope*/
/*  1023*/    /*Scope*/ 26, /*->1050*/
/*  1024*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1027*/      OPC_Scope, 9, /*->1038*/ // 2 children in Scope
/*  1029*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_R), 0,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (XOR_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1038*/      /*Scope*/ 10, /*->1049*/
/*  1039*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_R), 0,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (XOR_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1049*/      0, /*End of Scope*/
/*  1050*/    0, /*End of Scope*/
/*  1051*/  /*SwitchOpcode*/ 73, TARGET_VAL(ISD::ADD),// ->1127
/*  1054*/    OPC_RecordChild0, // #0 = $Rs1
/*  1055*/    OPC_RecordChild1, // #1 = $imm
/*  1056*/    OPC_Scope, 55, /*->1113*/ // 2 children in Scope
/*  1058*/      OPC_MoveChild1,
/*  1059*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1062*/      OPC_Scope, 16, /*->1080*/ // 3 children in Scope
/*  1064*/        OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*  1066*/        OPC_MoveParent,
/*  1067*/        OPC_EmitConvertToTarget, 1,
/*  1069*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1072*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1080*/      /*Scope*/ 16, /*->1097*/
/*  1081*/        OPC_CheckPredicate, 14, // Predicate_i32hi16
/*  1083*/        OPC_MoveParent,
/*  1084*/        OPC_EmitConvertToTarget, 1,
/*  1086*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1089*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1097*/      /*Scope*/ 14, /*->1112*/
/*  1098*/        OPC_CheckPredicate, 17, // Predicate_i32neg16
/*  1100*/        OPC_MoveParent,
/*  1101*/        OPC_EmitNodeXForm, 2, 1, // NEG
/*  1104*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32neg16>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (NEG:{ *:[i32] } ?:{ *:[i32] }:$imm))
/*  1112*/      0, /*End of Scope*/
/*  1113*/    /*Scope*/ 12, /*->1126*/
/*  1114*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1117*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (add:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (ADD_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1126*/    0, /*End of Scope*/
/*  1127*/  /*SwitchOpcode*/ 73, TARGET_VAL(ISD::SUB),// ->1203
/*  1130*/    OPC_RecordChild0, // #0 = $Rs1
/*  1131*/    OPC_RecordChild1, // #1 = $imm
/*  1132*/    OPC_Scope, 55, /*->1189*/ // 2 children in Scope
/*  1134*/      OPC_MoveChild1,
/*  1135*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1138*/      OPC_Scope, 16, /*->1156*/ // 3 children in Scope
/*  1140*/        OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*  1142*/        OPC_MoveParent,
/*  1143*/        OPC_EmitConvertToTarget, 1,
/*  1145*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1148*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1156*/      /*Scope*/ 16, /*->1173*/
/*  1157*/        OPC_CheckPredicate, 14, // Predicate_i32hi16
/*  1159*/        OPC_MoveParent,
/*  1160*/        OPC_EmitConvertToTarget, 1,
/*  1162*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1165*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1173*/      /*Scope*/ 14, /*->1188*/
/*  1174*/        OPC_CheckPredicate, 17, // Predicate_i32neg16
/*  1176*/        OPC_MoveParent,
/*  1177*/        OPC_EmitNodeXForm, 2, 1, // NEG
/*  1180*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32neg16>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (NEG:{ *:[i32] } ?:{ *:[i32] }:$imm))
/*  1188*/      0, /*End of Scope*/
/*  1189*/    /*Scope*/ 12, /*->1202*/
/*  1190*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1193*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (sub:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SUB_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1202*/    0, /*End of Scope*/
/*  1203*/  /*SwitchOpcode*/ 61, TARGET_VAL(ISD::ADDC),// ->1267
/*  1206*/    OPC_RecordChild0, // #0 = $Rs1
/*  1207*/    OPC_RecordChild1, // #1 = $imm
/*  1208*/    OPC_Scope, 42, /*->1252*/ // 2 children in Scope
/*  1210*/      OPC_MoveChild1,
/*  1211*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1214*/      OPC_Scope, 17, /*->1233*/ // 2 children in Scope
/*  1216*/        OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*  1218*/        OPC_MoveParent,
/*  1219*/        OPC_EmitConvertToTarget, 1,
/*  1221*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1224*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_I_LO), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1233*/      /*Scope*/ 17, /*->1251*/
/*  1234*/        OPC_CheckPredicate, 14, // Predicate_i32hi16
/*  1236*/        OPC_MoveParent,
/*  1237*/        OPC_EmitConvertToTarget, 1,
/*  1239*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1242*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_I_HI), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADD_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1251*/      0, /*End of Scope*/
/*  1252*/    /*Scope*/ 13, /*->1266*/
/*  1253*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1256*/      OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_R), 0|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (addc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (ADD_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1266*/    0, /*End of Scope*/
/*  1267*/  /*SwitchOpcode*/ 61, TARGET_VAL(ISD::SUBC),// ->1331
/*  1270*/    OPC_RecordChild0, // #0 = $Rs1
/*  1271*/    OPC_RecordChild1, // #1 = $imm
/*  1272*/    OPC_Scope, 42, /*->1316*/ // 2 children in Scope
/*  1274*/      OPC_MoveChild1,
/*  1275*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1278*/      OPC_Scope, 17, /*->1297*/ // 2 children in Scope
/*  1280*/        OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*  1282*/        OPC_MoveParent,
/*  1283*/        OPC_EmitConvertToTarget, 1,
/*  1285*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1288*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_I_LO), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (subc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1297*/      /*Scope*/ 17, /*->1315*/
/*  1298*/        OPC_CheckPredicate, 14, // Predicate_i32hi16
/*  1300*/        OPC_MoveParent,
/*  1301*/        OPC_EmitConvertToTarget, 1,
/*  1303*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1306*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_I_HI), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (subc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUB_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1315*/      0, /*End of Scope*/
/*  1316*/    /*Scope*/ 13, /*->1330*/
/*  1317*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1320*/      OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_R), 0|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (subc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SUB_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1330*/    0, /*End of Scope*/
/*  1331*/  /*SwitchOpcode*/ 73, TARGET_VAL(ISD::ADDE),// ->1407
/*  1334*/    OPC_CaptureGlueInput,
/*  1335*/    OPC_RecordChild0, // #0 = $Rs1
/*  1336*/    OPC_RecordChild1, // #1 = $imm
/*  1337*/    OPC_Scope, 40, /*->1379*/ // 2 children in Scope
/*  1339*/      OPC_MoveChild1,
/*  1340*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1343*/      OPC_Scope, 16, /*->1361*/ // 2 children in Scope
/*  1345*/        OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*  1347*/        OPC_MoveParent,
/*  1348*/        OPC_EmitConvertToTarget, 1,
/*  1350*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1353*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (adde:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADDC_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1361*/      /*Scope*/ 16, /*->1378*/
/*  1362*/        OPC_CheckPredicate, 14, // Predicate_i32hi16
/*  1364*/        OPC_MoveParent,
/*  1365*/        OPC_EmitConvertToTarget, 1,
/*  1367*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1370*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (adde:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDC_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1378*/      0, /*End of Scope*/
/*  1379*/    /*Scope*/ 26, /*->1406*/
/*  1380*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1383*/      OPC_Scope, 9, /*->1394*/ // 2 children in Scope
/*  1385*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (adde:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (ADDC_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1394*/      /*Scope*/ 10, /*->1405*/
/*  1395*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADDC_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (adde:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (ADDC_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1405*/      0, /*End of Scope*/
/*  1406*/    0, /*End of Scope*/
/*  1407*/  /*SwitchOpcode*/ 73, TARGET_VAL(ISD::SUBE),// ->1483
/*  1410*/    OPC_CaptureGlueInput,
/*  1411*/    OPC_RecordChild0, // #0 = $Rs1
/*  1412*/    OPC_RecordChild1, // #1 = $imm
/*  1413*/    OPC_Scope, 40, /*->1455*/ // 2 children in Scope
/*  1415*/      OPC_MoveChild1,
/*  1416*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1419*/      OPC_Scope, 16, /*->1437*/ // 2 children in Scope
/*  1421*/        OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*  1423*/        OPC_MoveParent,
/*  1424*/        OPC_EmitConvertToTarget, 1,
/*  1426*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1429*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sube:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1437*/      /*Scope*/ 16, /*->1454*/
/*  1438*/        OPC_CheckPredicate, 14, // Predicate_i32hi16
/*  1440*/        OPC_MoveParent,
/*  1441*/        OPC_EmitConvertToTarget, 1,
/*  1443*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1446*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sube:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1454*/      0, /*End of Scope*/
/*  1455*/    /*Scope*/ 26, /*->1482*/
/*  1456*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1459*/      OPC_Scope, 9, /*->1470*/ // 2 children in Scope
/*  1461*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (sube:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (SUBB_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1470*/      /*Scope*/ 10, /*->1481*/
/*  1471*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (sube:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (SUBB_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1481*/      0, /*End of Scope*/
/*  1482*/    0, /*End of Scope*/
/*  1483*/  /*SwitchOpcode*/ 65, TARGET_VAL(LanaiISD::SUBBF),// ->1551
/*  1486*/    OPC_CaptureGlueInput,
/*  1487*/    OPC_RecordChild0, // #0 = $Rs1
/*  1488*/    OPC_Scope, 43, /*->1533*/ // 2 children in Scope
/*  1490*/      OPC_RecordChild1, // #1 = $imm
/*  1491*/      OPC_MoveChild1,
/*  1492*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1495*/      OPC_Scope, 17, /*->1514*/ // 2 children in Scope
/*  1497*/        OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*  1499*/        OPC_MoveParent,
/*  1500*/        OPC_EmitConvertToTarget, 1,
/*  1502*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1505*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSubbF GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1514*/      /*Scope*/ 17, /*->1532*/
/*  1515*/        OPC_CheckPredicate, 14, // Predicate_i32hi16
/*  1517*/        OPC_MoveParent,
/*  1518*/        OPC_EmitConvertToTarget, 1,
/*  1520*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1523*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSubbF GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1532*/      0, /*End of Scope*/
/*  1533*/    /*Scope*/ 16, /*->1550*/
/*  1534*/      OPC_CheckChild0Type, MVT::i32,
/*  1536*/      OPC_RecordChild1, // #1 = $Rs2
/*  1537*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1540*/      OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (LanaiSubbF GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SUBB_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1550*/    0, /*End of Scope*/
/*  1551*/  /*SwitchOpcode*/ 35, TARGET_VAL(ISD::SHL),// ->1589
/*  1554*/    OPC_RecordChild0, // #0 = $Rs1
/*  1555*/    OPC_RecordChild1, // #1 = $imm16
/*  1556*/    OPC_Scope, 17, /*->1575*/ // 2 children in Scope
/*  1558*/      OPC_MoveChild1,
/*  1559*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1562*/      OPC_CheckPredicate, 18, // Predicate_immShift
/*  1564*/      OPC_MoveParent,
/*  1565*/      OPC_EmitConvertToTarget, 1,
/*  1567*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SL_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_immShift>>:$imm16) - Complexity = 7
                // Dst: (SL_I:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] }):$imm16)
/*  1575*/    /*Scope*/ 12, /*->1588*/
/*  1576*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1579*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SHL_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (shl:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SHL_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1588*/    0, /*End of Scope*/
/*  1589*/  /*SwitchOpcode*/ 51, TARGET_VAL(ISD::SRL),// ->1643
/*  1592*/    OPC_RecordChild0, // #0 = $Rs1
/*  1593*/    OPC_RecordChild1, // #1 = $imm
/*  1594*/    OPC_Scope, 18, /*->1614*/ // 2 children in Scope
/*  1596*/      OPC_MoveChild1,
/*  1597*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1600*/      OPC_CheckPredicate, 18, // Predicate_immShift
/*  1602*/      OPC_MoveParent,
/*  1603*/      OPC_EmitNodeXForm, 2, 1, // NEG
/*  1606*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SL_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_immShift>>:$imm) - Complexity = 7
                // Dst: (SL_I:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (NEG:{ *:[i32] } ?:{ *:[i32] }:$imm))
/*  1614*/    /*Scope*/ 27, /*->1642*/
/*  1615*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  1618*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1621*/      OPC_EmitNode1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*  1630*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1633*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SRL_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 4, 5, 
                // Src: (srl:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SRL_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (SUB_R:{ *:[i32] } R0:{ *:[i32] }, GPR:{ *:[i32] }:$Rs2))
/*  1642*/    0, /*End of Scope*/
/*  1643*/  /*SwitchOpcode*/ 51, TARGET_VAL(ISD::SRA),// ->1697
/*  1646*/    OPC_RecordChild0, // #0 = $Rs1
/*  1647*/    OPC_RecordChild1, // #1 = $imm
/*  1648*/    OPC_Scope, 18, /*->1668*/ // 2 children in Scope
/*  1650*/      OPC_MoveChild1,
/*  1651*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1654*/      OPC_CheckPredicate, 18, // Predicate_immShift
/*  1656*/      OPC_MoveParent,
/*  1657*/      OPC_EmitNodeXForm, 2, 1, // NEG
/*  1660*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SA_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_immShift>>:$imm) - Complexity = 7
                // Dst: (SA_I:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (NEG:{ *:[i32] } ?:{ *:[i32] }:$imm))
/*  1668*/    /*Scope*/ 27, /*->1696*/
/*  1669*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  1672*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1675*/      OPC_EmitNode1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*  1684*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1687*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SRA_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 4, 5, 
                // Src: (sra:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SRA_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (SUB_R:{ *:[i32] } R0:{ *:[i32] }, GPR:{ *:[i32] }:$Rs2))
/*  1696*/    0, /*End of Scope*/
/*  1697*/  /*SwitchOpcode*/ 57, TARGET_VAL(LanaiISD::SET_FLAG),// ->1757
/*  1700*/    OPC_RecordChild0, // #0 = $Rs1
/*  1701*/    OPC_Scope, 41, /*->1744*/ // 2 children in Scope
/*  1703*/      OPC_RecordChild1, // #1 = $imm16
/*  1704*/      OPC_MoveChild1,
/*  1705*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1708*/      OPC_Scope, 16, /*->1726*/ // 2 children in Scope
/*  1710*/        OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*  1712*/        OPC_MoveParent,
/*  1713*/        OPC_EmitConvertToTarget, 1,
/*  1715*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1718*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RI_LO), 0|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSetFlag GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (SFSUB_F_RI_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*  1726*/      /*Scope*/ 16, /*->1743*/
/*  1727*/        OPC_CheckPredicate, 14, // Predicate_i32hi16
/*  1729*/        OPC_MoveParent,
/*  1730*/        OPC_EmitConvertToTarget, 1,
/*  1732*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1735*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RI_HI), 0|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSetFlag GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (SFSUB_F_RI_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*  1743*/      0, /*End of Scope*/
/*  1744*/    /*Scope*/ 11, /*->1756*/
/*  1745*/      OPC_CheckChild0Type, MVT::i32,
/*  1747*/      OPC_RecordChild1, // #1 = $Rs2
/*  1748*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RR), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (LanaiSetFlag GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SFSUB_F_RR:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1756*/    0, /*End of Scope*/
/*  1757*/  /*SwitchOpcode*/ 24, TARGET_VAL(LanaiISD::BR_CC),// ->1784
/*  1760*/    OPC_RecordNode, // #0 = 'LanaiBrCC' chained node
/*  1761*/    OPC_CaptureGlueInput,
/*  1762*/    OPC_RecordChild1, // #1 = $addr
/*  1763*/    OPC_MoveChild1,
/*  1764*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1767*/    OPC_MoveParent,
/*  1768*/    OPC_RecordChild2, // #2 = $DDDI
/*  1769*/    OPC_MoveChild2,
/*  1770*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1773*/    OPC_MoveParent,
/*  1774*/    OPC_EmitMergeInputChains1_0,
/*  1775*/    OPC_EmitConvertToTarget, 2,
/*  1777*/    OPC_MorphNodeTo0, TARGET_VAL(Lanai::BRCC), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (LanaiBrCC (bb:{ *:[Other] }):$addr, (imm:{ *:[i32] }):$DDDI) - Complexity = 6
              // Dst: (BRCC (bb:{ *:[Other] }):$addr, (imm:{ *:[i32] }):$DDDI)
/*  1784*/  /*SwitchOpcode*/ 16, TARGET_VAL(LanaiISD::SETCC),// ->1803
/*  1787*/    OPC_CaptureGlueInput,
/*  1788*/    OPC_RecordChild0, // #0 = $DDDI
/*  1789*/    OPC_MoveChild0,
/*  1790*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1793*/    OPC_MoveParent,
/*  1794*/    OPC_EmitConvertToTarget, 0,
/*  1796*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SCC), 0|OPFL_GlueInput,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (LanaiSetCC:{ *:[i32] } (imm:{ *:[i32] }):$DDDI) - Complexity = 6
              // Dst: (SCC:{ *:[i32] } (imm:{ *:[i32] }):$DDDI)
/*  1803*/  /*SwitchOpcode*/ 22, TARGET_VAL(LanaiISD::SELECT_CC),// ->1828
/*  1806*/    OPC_CaptureGlueInput,
/*  1807*/    OPC_RecordChild0, // #0 = $Rs1
/*  1808*/    OPC_RecordChild1, // #1 = $Rs2
/*  1809*/    OPC_RecordChild2, // #2 = $DDDI
/*  1810*/    OPC_MoveChild2,
/*  1811*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1814*/    OPC_MoveParent,
/*  1815*/    OPC_CheckType, MVT::i32,
/*  1817*/    OPC_EmitConvertToTarget, 2,
/*  1819*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SELECT), 0|OPFL_GlueInput,
                  MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (LanaiSelectCC:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2, (imm:{ *:[i32] }):$DDDI) - Complexity = 6
              // Dst: (SELECT:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2, (imm:{ *:[i32] }):$DDDI)
/*  1828*/  /*SwitchOpcode*/ 42, TARGET_VAL(LanaiISD::CALL),// ->1873
/*  1831*/    OPC_RecordNode, // #0 = 'Call' chained node
/*  1832*/    OPC_CaptureGlueInput,
/*  1833*/    OPC_RecordChild1, // #1 = $dst
/*  1834*/    OPC_Scope, 27, /*->1863*/ // 2 children in Scope
/*  1836*/      OPC_MoveChild1,
/*  1837*/      OPC_SwitchOpcode /*2 cases */, 9, TARGET_VAL(ISD::TargetGlobalAddress),// ->1850
/*  1841*/        OPC_MoveParent,
/*  1842*/        OPC_EmitMergeInputChains1_0,
/*  1843*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (tglobaladdr:{ *:[i32] }):$dst) - Complexity = 6
                  // Dst: (CALL:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst)
/*  1850*/      /*SwitchOpcode*/ 9, TARGET_VAL(ISD::TargetExternalSymbol),// ->1862
/*  1853*/        OPC_MoveParent,
/*  1854*/        OPC_EmitMergeInputChains1_0,
/*  1855*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (texternalsym:{ *:[i32] }):$dst) - Complexity = 6
                  // Dst: (CALL:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst)
/*  1862*/      0, // EndSwitchOpcode
/*  1863*/    /*Scope*/ 8, /*->1872*/
/*  1864*/      OPC_EmitMergeInputChains1_0,
/*  1865*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (Call GPR:{ *:[i32] }:$Rs1) - Complexity = 3
                // Dst: (CALLR:{ *:[i32] } GPR:{ *:[i32] }:$Rs1)
/*  1872*/    0, /*End of Scope*/
/*  1873*/  /*SwitchOpcode*/ 69, TARGET_VAL(LanaiISD::HI),// ->1945
/*  1876*/    OPC_RecordChild0, // #0 = $dst
/*  1877*/    OPC_MoveChild0,
/*  1878*/    OPC_SwitchOpcode /*5 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->1892
/*  1882*/      OPC_MoveParent,
/*  1883*/      OPC_CheckType, MVT::i32,
/*  1885*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (MOVHI:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst)
/*  1892*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetExternalSymbol),// ->1905
/*  1895*/      OPC_MoveParent,
/*  1896*/      OPC_CheckType, MVT::i32,
/*  1898*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (MOVHI:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst)
/*  1905*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->1918
/*  1908*/      OPC_MoveParent,
/*  1909*/      OPC_CheckType, MVT::i32,
/*  1911*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:{ *:[i32] } (tblockaddress:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (MOVHI:{ *:[i32] } (tblockaddress:{ *:[i32] }):$dst)
/*  1918*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetJumpTable),// ->1931
/*  1921*/      OPC_MoveParent,
/*  1922*/      OPC_CheckType, MVT::i32,
/*  1924*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:{ *:[i32] } (tjumptable:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (MOVHI:{ *:[i32] } (tjumptable:{ *:[i32] }):$dst)
/*  1931*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetConstantPool),// ->1944
/*  1934*/      OPC_MoveParent,
/*  1935*/      OPC_CheckType, MVT::i32,
/*  1937*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:{ *:[i32] } (tconstpool:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (MOVHI:{ *:[i32] } (tconstpool:{ *:[i32] }):$dst)
/*  1944*/    0, // EndSwitchOpcode
/*  1945*/  /*SwitchOpcode*/ 89, TARGET_VAL(LanaiISD::LO),// ->2037
/*  1948*/    OPC_RecordChild0, // #0 = $dst
/*  1949*/    OPC_MoveChild0,
/*  1950*/    OPC_SwitchOpcode /*5 cases */, 14, TARGET_VAL(ISD::TargetGlobalAddress),// ->1968
/*  1954*/      OPC_MoveParent,
/*  1955*/      OPC_CheckType, MVT::i32,
/*  1957*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  1960*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (tglobaladdr:{ *:[i32] }):$dst)
/*  1968*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetExternalSymbol),// ->1985
/*  1971*/      OPC_MoveParent,
/*  1972*/      OPC_CheckType, MVT::i32,
/*  1974*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  1977*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (texternalsym:{ *:[i32] }):$dst)
/*  1985*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetBlockAddress),// ->2002
/*  1988*/      OPC_MoveParent,
/*  1989*/      OPC_CheckType, MVT::i32,
/*  1991*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  1994*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:{ *:[i32] } (tblockaddress:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (tblockaddress:{ *:[i32] }):$dst)
/*  2002*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetJumpTable),// ->2019
/*  2005*/      OPC_MoveParent,
/*  2006*/      OPC_CheckType, MVT::i32,
/*  2008*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  2011*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:{ *:[i32] } (tjumptable:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (tjumptable:{ *:[i32] }):$dst)
/*  2019*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetConstantPool),// ->2036
/*  2022*/      OPC_MoveParent,
/*  2023*/      OPC_CheckType, MVT::i32,
/*  2025*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  2028*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:{ *:[i32] } (tconstpool:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (tconstpool:{ *:[i32] }):$dst)
/*  2036*/    0, // EndSwitchOpcode
/*  2037*/  /*SwitchOpcode*/ 69, TARGET_VAL(LanaiISD::SMALL),// ->2109
/*  2040*/    OPC_RecordChild0, // #0 = $dst
/*  2041*/    OPC_MoveChild0,
/*  2042*/    OPC_SwitchOpcode /*5 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->2056
/*  2046*/      OPC_MoveParent,
/*  2047*/      OPC_CheckType, MVT::i32,
/*  2049*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (SLI:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst)
/*  2056*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetExternalSymbol),// ->2069
/*  2059*/      OPC_MoveParent,
/*  2060*/      OPC_CheckType, MVT::i32,
/*  2062*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (SLI:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst)
/*  2069*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->2082
/*  2072*/      OPC_MoveParent,
/*  2073*/      OPC_CheckType, MVT::i32,
/*  2075*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:{ *:[i32] } (tblockaddress:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (SLI:{ *:[i32] } (tblockaddress:{ *:[i32] }):$dst)
/*  2082*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetJumpTable),// ->2095
/*  2085*/      OPC_MoveParent,
/*  2086*/      OPC_CheckType, MVT::i32,
/*  2088*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:{ *:[i32] } (tjumptable:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (SLI:{ *:[i32] } (tjumptable:{ *:[i32] }):$dst)
/*  2095*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetConstantPool),// ->2108
/*  2098*/      OPC_MoveParent,
/*  2099*/      OPC_CheckType, MVT::i32,
/*  2101*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:{ *:[i32] } (tconstpool:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (SLI:{ *:[i32] } (tconstpool:{ *:[i32] }):$dst)
/*  2108*/    0, // EndSwitchOpcode
/*  2109*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::Constant),// ->2225
/*  2112*/    OPC_RecordNode, // #0 = $imm
/*  2113*/    OPC_Scope, 18, /*->2133*/ // 6 children in Scope
/*  2115*/      OPC_CheckPredicate, 15, // Predicate_i32lo16and
/*  2117*/      OPC_EmitRegister, MVT::i32, Lanai::R1,
/*  2120*/      OPC_EmitConvertToTarget, 0,
/*  2122*/      OPC_EmitNodeXForm, 0, 2, // LO16
/*  2125*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32lo16and>><<X:LO16>>:$imm - Complexity = 4
                // Dst: (AND_I_LO:{ *:[i32] } R1:{ *:[i32] }, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16and>>:$imm))
/*  2133*/    /*Scope*/ 18, /*->2152*/
/*  2134*/      OPC_CheckPredicate, 16, // Predicate_i32hi16and
/*  2136*/      OPC_EmitRegister, MVT::i32, Lanai::R1,
/*  2139*/      OPC_EmitConvertToTarget, 0,
/*  2141*/      OPC_EmitNodeXForm, 1, 2, // HI16
/*  2144*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_HI), 0,
                    MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32hi16and>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (AND_I_HI:{ *:[i32] } R1:{ *:[i32] }, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16and>>:$imm))
/*  2152*/    /*Scope*/ 14, /*->2167*/
/*  2153*/      OPC_CheckPredicate, 14, // Predicate_i32hi16
/*  2155*/      OPC_EmitConvertToTarget, 0,
/*  2157*/      OPC_EmitNodeXForm, 1, 1, // HI16
/*  2160*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16 - Complexity = 4
                // Dst: (MOVHI:{ *:[i32] } (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*  2167*/    /*Scope*/ 14, /*->2182*/
/*  2168*/      OPC_CheckPredicate, 19, // Predicate_i32lo21
/*  2170*/      OPC_EmitConvertToTarget, 0,
/*  2172*/      OPC_EmitNodeXForm, 3, 1, // LO21
/*  2175*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32lo21>><<X:LO21>>:$imm - Complexity = 4
                // Dst: (SLI:{ *:[i32] } (LO21:{ *:[i32] } (imm:{ *:[i32] }):$imm))
/*  2182*/    /*Scope*/ 15, /*->2198*/
/*  2183*/      OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*  2185*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  2188*/      OPC_EmitConvertToTarget, 0,
/*  2190*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm - Complexity = 4
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (imm:{ *:[i32] }):$imm)
/*  2198*/    /*Scope*/ 25, /*->2224*/
/*  2199*/      OPC_EmitConvertToTarget, 0,
/*  2201*/      OPC_EmitNodeXForm, 1, 1, // HI16
/*  2204*/      OPC_EmitNode1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*  2211*/      OPC_EmitConvertToTarget, 0,
/*  2213*/      OPC_EmitNodeXForm, 0, 4, // LO16
/*  2216*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:{ *:[i32] }):$imm - Complexity = 3
                // Dst: (OR_I_LO:{ *:[i32] } (MOVHI:{ *:[i32] } (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm)), (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm))
/*  2224*/    0, /*End of Scope*/
/*  2225*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->2242
/*  2228*/    OPC_RecordNode, // #0 = 'br' chained node
/*  2229*/    OPC_RecordChild1, // #1 = $addr
/*  2230*/    OPC_MoveChild1,
/*  2231*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2234*/    OPC_MoveParent,
/*  2235*/    OPC_EmitMergeInputChains1_0,
/*  2236*/    OPC_MorphNodeTo0, TARGET_VAL(Lanai::BT), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$addr) - Complexity = 3
              // Dst: (BT (bb:{ *:[Other] }):$addr)
/*  2242*/  /*SwitchOpcode*/ 11, TARGET_VAL(ISD::BRIND),// ->2256
/*  2245*/    OPC_RecordNode, // #0 = 'brind' chained node
/*  2246*/    OPC_RecordChild1, // #1 = $Rs2
/*  2247*/    OPC_CheckChild1Type, MVT::i32,
/*  2249*/    OPC_EmitMergeInputChains1_0,
/*  2250*/    OPC_MorphNodeTo0, TARGET_VAL(Lanai::JR), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (brind GPR:{ *:[i32] }:$Rs2) - Complexity = 3
              // Dst: (JR GPR:{ *:[i32] }:$Rs2)
/*  2256*/  /*SwitchOpcode*/ 8, TARGET_VAL(LanaiISD::RET_FLAG),// ->2267
/*  2259*/    OPC_RecordNode, // #0 = 'RetFlag' chained node
/*  2260*/    OPC_CaptureGlueInput,
/*  2261*/    OPC_EmitMergeInputChains1_0,
/*  2262*/    OPC_MorphNodeTo0, TARGET_VAL(Lanai::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (RetFlag) - Complexity = 3
              // Dst: (RET)
/*  2267*/  /*SwitchOpcode*/ 9, TARGET_VAL(LanaiISD::ADJDYNALLOC),// ->2279
/*  2270*/    OPC_RecordChild0, // #0 = $src
/*  2271*/    OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADJDYNALLOC), 0,
                  MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (LanaiAdjDynAlloc:{ *:[i32] } GPR:{ *:[i32] }:$src) - Complexity = 3
              // Dst: (ADJDYNALLOC:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$src)
/*  2279*/  /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTPOP),// ->2290
/*  2282*/    OPC_RecordChild0, // #0 = $Rs1
/*  2283*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::POPC), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctpop:{ *:[i32] } GPR:{ *:[i32] }:$Rs1) - Complexity = 3
              // Dst: (POPC:{ *:[i32] } GPR:{ *:[i32] }:$Rs1)
/*  2290*/  /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTLZ),// ->2301
/*  2293*/    OPC_RecordChild0, // #0 = $Rs1
/*  2294*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LEADZ), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:{ *:[i32] } GPR:{ *:[i32] }:$Rs1) - Complexity = 3
              // Dst: (LEADZ:{ *:[i32] } GPR:{ *:[i32] }:$Rs1)
/*  2301*/  /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTTZ),// ->2312
/*  2304*/    OPC_RecordChild0, // #0 = $Rs1
/*  2305*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::TRAILZ), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (cttz:{ *:[i32] } GPR:{ *:[i32] }:$Rs1) - Complexity = 3
              // Dst: (TRAILZ:{ *:[i32] } GPR:{ *:[i32] }:$Rs1)
/*  2312*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 2314 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 41
  // #OPC_RecordNode                           = 10
  // #OPC_RecordChild                          = 62
  // #OPC_RecordMemRef                         = 2
  // #OPC_CaptureGlueInput                     = 9
  // #OPC_MoveChild                            = 32
  // #OPC_MoveParent                           = 89
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 0
  // #OPC_CheckPatternPredicate                = 0
  // #OPC_CheckPredicate                       = 67
  // #OPC_CheckOpcode                          = 24
  // #OPC_SwitchOpcode                         = 9
  // #OPC_CheckType                            = 32
  // #OPC_SwitchType                           = 0
  // #OPC_CheckChildType                       = 6
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 0
  // #OPC_CheckCondCode                        = 0
  // #OPC_CheckValueType                       = 0
  // #OPC_CheckComplexPat                      = 21
  // #OPC_CheckAndImm                          = 0
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 15
  // #OPC_EmitStringInteger                    = 0
  // #OPC_EmitRegister                         = 10
  // #OPC_EmitConvertToTarget                  = 39
  // #OPC_EmitMergeInputChains                 = 30
  // #OPC_EmitCopyToReg                        = 5
  // #OPC_EmitNode                             = 3
  // #OPC_EmitNodeXForm                        = 38
  // #OPC_CompleteMatch                        = 0
  // #OPC_MorphNodeTo                          = 124

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
    // Predicate_unindexedload
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 1: { 
    // Predicate_load
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 2: { 
    // Predicate_zextload
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::ZEXTLOAD) return false;
return true;

  }
  case 3: { 
    // Predicate_zextloadi32
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 4: { 
    // Predicate_zextloadi16
    // Predicate_sextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 5: { 
    // Predicate_zextloadi8
    // Predicate_sextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 6: { 
    // Predicate_sextload
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::SEXTLOAD) return false;
return true;

  }
  case 7: { 
    // Predicate_extload
    SDNode *N = Node;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::EXTLOAD) return false;
return true;

  }
  case 8: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 9: { 
    // Predicate_store
    SDNode *N = Node;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 10: { 
    // Predicate_truncstore
    SDNode *N = Node;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 11: { 
    // Predicate_truncstorei16
    SDNode *N = Node;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 12: { 
    // Predicate_truncstorei8
    SDNode *N = Node;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 13: { 
    // Predicate_i32lo16z
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo16 predicate - true if the 32-bit immediate has only rightmost 16
    // bits set.
    return ((N->getZExtValue() & 0xFFFFUL) == N->getZExtValue());
  }
  case 14: { 
    // Predicate_i32hi16
    auto *N = cast<ConstantSDNode>(Node);

    // i32hi16 predicate - true if the 32-bit immediate has only leftmost 16
    // bits set.
    return ((N->getZExtValue() & 0xFFFF0000UL) == N->getZExtValue());
  }
  case 15: { 
    // Predicate_i32lo16and
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo16 predicate - true if the 32-bit immediate has the rightmost 16
    // bits set and the leftmost 16 bits 1's.
    return (N->getZExtValue() >= 0xFFFF0000UL);
  }
  case 16: { 
    // Predicate_i32hi16and
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo16 predicate - true if the 32-bit immediate has the leftmost 16
    // bits set and the rightmost 16 bits 1's.
    return ((N->getZExtValue() & 0xFFFFUL) == 0xFFFFUL);
  }
  case 17: { 
    // Predicate_i32neg16
    auto *N = cast<ConstantSDNode>(Node);

    // i32neg16 predicate - true if the 32-bit immediate is negative and can
    // be represented by a 16 bit integer.
    int Imm = N->getSExtValue();
    return (Imm < 0) && (isInt<16>(Imm));
  }
  case 18: { 
    // Predicate_immShift
    auto *N = cast<ConstantSDNode>(Node);

    int Imm = N->getSExtValue();
    return Imm >= -31 && Imm <= 31;
  }
  case 19: { 
    // Predicate_i32lo21
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo21 predicate - true if the 32-bit immediate has only rightmost 21
    // bits set.
    return ((N->getZExtValue() & 0x1FFFFFUL) == N->getZExtValue());
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
    Result.resize(NextRes+3);
  return selectAddrRi(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 1:
    Result.resize(NextRes+3);
  return selectAddrRr(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+3);
  return selectAddrSpls(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 3:
    Result.resize(NextRes+1);
  return selectAddrSls(N, Result[NextRes+0].first);
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
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() & 0xffff,
                                   SDLoc(N), MVT::i32);

  }
  case 1: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() >> 16, SDLoc(N),
                                   MVT::i32);

  }
  case 2: {  // NEG
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(-N->getSExtValue(), SDLoc(N), MVT::i32);

  }
  case 3: {  // LO21
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() & 0x1fffff,
                                   SDLoc(N), MVT::i32);

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
