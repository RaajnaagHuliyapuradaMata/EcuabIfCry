/******************************************************************************/
/* File   : EcuabCryIf.cpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "EcuabCryIf.hpp"
#include "infEcuabCryIf_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_EcuabCryIf, ECUABCRYIF_VAR) EcuabCryIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABCRYIF_CONST,       ECUABCRYIF_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABCRYIF_CONFIG_DATA, ECUABCRYIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabCryIf_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == EcuabCryIf_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EcuabCryIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EcuabCryIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABCRYIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::DeInitFunction(
   void
){
#if(STD_ON == EcuabCryIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabCryIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EcuabCryIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABCRYIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::MainFunction(
   void
){
#if(STD_ON == EcuabCryIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabCryIf_InitCheck)
   }
   else{
#if(STD_ON == EcuabCryIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABCRYIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::ProcessJob(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::McalCancelJob(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::KeyElementSet(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::KeySetValid(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::KeyElementGet(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::KeyElementCopy(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::KeyElementCopyPartial(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::KeyCopy(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::RandomSeed(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::KeyGenerate(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::KeyDerive(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::KeyExchangeCalcPubVal(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::KeyExchangeCalcSecret(
   void
){
}

FUNC(void, ECUABCRYIF_CODE) module_EcuabCryIf::CbNotification(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

