/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Notification Center
 #	author : miyako
 #	2013/07/20
 #
 # --------------------------------------------------------------------------------*/



// --- Notification Center
void NOTIFICATION_Get_mode(sLONG_PTR *pResult, PackagePtr pParams);
void NOTIFICATION_SET_MODE(sLONG_PTR *pResult, PackagePtr pParams);
void NOTIFICATION_SET_METHOD(sLONG_PTR *pResult, PackagePtr pParams);
void NOTIFICATION_Get_method(sLONG_PTR *pResult, PackagePtr pParams);

// --- Notification
void DELIVER_NOTIFICATION(sLONG_PTR *pResult, PackagePtr pParams);
void SCHEDULE_NOTIFICATION(sLONG_PTR *pResult, PackagePtr pParams);

void listenerLoopFinish();
void listenerLoop();

#ifndef NSFoundationVersionNumber10_8
#define NSFoundationVersionNumber10_8 945.00
#endif