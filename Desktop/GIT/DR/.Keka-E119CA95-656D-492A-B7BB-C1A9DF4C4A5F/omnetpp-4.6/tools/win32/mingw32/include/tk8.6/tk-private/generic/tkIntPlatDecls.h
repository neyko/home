/*
 * tkIntPlatDecls.h --
 *
 *	This file contains the declarations for all platform dependent
 *	unsupported functions that are exported by the Tk library.  These
 *	interfaces are not guaranteed to remain the same between
 *	versions.  Use at your own risk.
 *
 * Copyright (c) 1998-1999 by Scriptics Corporation.
 * All rights reserved.
 */

#ifndef _TKINTPLATDECLS
#define _TKINTPLATDECLS

#ifdef BUILD_tk
#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLEXPORT
#endif

/*
 * WARNING: This file is automatically generated by the tools/genStubs.tcl
 * script.  Any modifications to the function declarations below should be made
 * in the generic/tkInt.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Exported function declarations:
 */

#if defined(_WIN32) || defined(__CYGWIN__) /* WIN */
/* 0 */
EXTERN char *		TkAlignImageData(XImage *image, int alignment,
				int bitOrder);
/* Slot 1 is reserved */
/* 2 */
EXTERN void		TkGenerateActivateEvents(TkWindow *winPtr,
				int active);
/* 3 */
EXTERN unsigned long	TkpGetMS(void);
/* 4 */
EXTERN void		TkPointerDeadWindow(TkWindow *winPtr);
/* 5 */
EXTERN void		TkpPrintWindowId(char *buf, Window window);
/* 6 */
EXTERN int		TkpScanWindowId(Tcl_Interp *interp,
				const char *string, Window *idPtr);
/* 7 */
EXTERN void		TkpSetCapture(TkWindow *winPtr);
/* 8 */
EXTERN void		TkpSetCursor(TkpCursor cursor);
/* 9 */
EXTERN int		TkpWmSetState(TkWindow *winPtr, int state);
/* 10 */
EXTERN void		TkSetPixmapColormap(Pixmap pixmap, Colormap colormap);
/* 11 */
EXTERN void		TkWinCancelMouseTimer(void);
/* 12 */
EXTERN void		TkWinClipboardRender(TkDisplay *dispPtr, UINT format);
/* 13 */
EXTERN LRESULT		TkWinEmbeddedEventProc(HWND hwnd, UINT message,
				WPARAM wParam, LPARAM lParam);
/* 14 */
EXTERN void		TkWinFillRect(HDC dc, int x, int y, int width,
				int height, int pixel);
/* 15 */
EXTERN COLORREF		TkWinGetBorderPixels(Tk_Window tkwin,
				Tk_3DBorder border, int which);
/* 16 */
EXTERN HDC		TkWinGetDrawableDC(Display *display, Drawable d,
				TkWinDCState *state);
/* 17 */
EXTERN int		TkWinGetModifierState(void);
/* 18 */
EXTERN HPALETTE		TkWinGetSystemPalette(void);
/* 19 */
EXTERN HWND		TkWinGetWrapperWindow(Tk_Window tkwin);
/* 20 */
EXTERN int		TkWinHandleMenuEvent(HWND *phwnd, UINT *pMessage,
				WPARAM *pwParam, LPARAM *plParam,
				LRESULT *plResult);
/* 21 */
EXTERN int		TkWinIndexOfColor(XColor *colorPtr);
/* 22 */
EXTERN void		TkWinReleaseDrawableDC(Drawable d, HDC hdc,
				TkWinDCState *state);
/* 23 */
EXTERN LRESULT		TkWinResendEvent(WNDPROC wndproc, HWND hwnd,
				XEvent *eventPtr);
/* 24 */
EXTERN HPALETTE		TkWinSelectPalette(HDC dc, Colormap colormap);
/* 25 */
EXTERN void		TkWinSetMenu(Tk_Window tkwin, HMENU hMenu);
/* 26 */
EXTERN void		TkWinSetWindowPos(HWND hwnd, HWND siblingHwnd,
				int pos);
/* 27 */
EXTERN void		TkWinWmCleanup(HINSTANCE hInstance);
/* 28 */
EXTERN void		TkWinXCleanup(ClientData clientData);
/* 29 */
EXTERN void		TkWinXInit(HINSTANCE hInstance);
/* 30 */
EXTERN void		TkWinSetForegroundWindow(TkWindow *winPtr);
/* 31 */
EXTERN void		TkWinDialogDebug(int debug);
/* 32 */
EXTERN Tcl_Obj *	TkWinGetMenuSystemDefault(Tk_Window tkwin,
				const char *dbName, const char *className);
/* 33 */
EXTERN int		TkWinGetPlatformId(void);
/* 34 */
EXTERN void		TkWinSetHINSTANCE(HINSTANCE hInstance);
/* 35 */
EXTERN int		TkWinGetPlatformTheme(void);
/* 36 */
EXTERN LRESULT __stdcall TkWinChildProc(HWND hwnd, UINT message,
				WPARAM wParam, LPARAM lParam);
/* 37 */
EXTERN void		TkCreateXEventSource(void);
/* 38 */
EXTERN int		TkpCmapStressed(Tk_Window tkwin, Colormap colormap);
/* 39 */
EXTERN void		TkpSync(Display *display);
/* 40 */
EXTERN Window		TkUnixContainerId(TkWindow *winPtr);
/* 41 */
EXTERN int		TkUnixDoOneXEvent(Tcl_Time *timePtr);
/* 42 */
EXTERN void		TkUnixSetMenubar(Tk_Window tkwin, Tk_Window menubar);
/* 43 */
EXTERN void		TkWmCleanup(TkDisplay *dispPtr);
/* 44 */
EXTERN void		TkSendCleanup(TkDisplay *dispPtr);
/* 45 */
EXTERN int		TkpTestsendCmd(ClientData clientData,
				Tcl_Interp *interp, int objc,
				Tcl_Obj *const objv[]);
#endif /* WIN */
#ifdef MAC_OSX_TK /* AQUA */
/* 0 */
EXTERN void		TkGenerateActivateEvents(TkWindow *winPtr,
				int active);
/* Slot 1 is reserved */
/* Slot 2 is reserved */
/* 3 */
EXTERN void		TkPointerDeadWindow(TkWindow *winPtr);
/* 4 */
EXTERN void		TkpSetCapture(TkWindow *winPtr);
/* 5 */
EXTERN void		TkpSetCursor(TkpCursor cursor);
/* 6 */
EXTERN void		TkpWmSetState(TkWindow *winPtr, int state);
/* 7 */
EXTERN void		TkAboutDlg(void);
/* 8 */
EXTERN unsigned int	TkMacOSXButtonKeyState(void);
/* 9 */
EXTERN void		TkMacOSXClearMenubarActive(void);
/* 10 */
EXTERN int		TkMacOSXDispatchMenuEvent(int menuID, int index);
/* 11 */
EXTERN void		TkMacOSXInstallCursor(int resizeOverride);
/* 12 */
EXTERN void		TkMacOSXHandleTearoffMenu(void);
/* Slot 13 is reserved */
/* 14 */
EXTERN int		TkMacOSXDoHLEvent(void *theEvent);
/* Slot 15 is reserved */
/* 16 */
EXTERN Window		TkMacOSXGetXWindow(void *macWinPtr);
/* 17 */
EXTERN int		TkMacOSXGrowToplevel(void *whichWindow, XPoint start);
/* 18 */
EXTERN void		TkMacOSXHandleMenuSelect(short theMenu,
				unsigned short theItem, int optionKeyPressed);
/* Slot 19 is reserved */
/* Slot 20 is reserved */
/* 21 */
EXTERN void		TkMacOSXInvalidateWindow(MacDrawable *macWin,
				int flag);
/* 22 */
EXTERN int		TkMacOSXIsCharacterMissing(Tk_Font tkfont,
				unsigned int searchChar);
/* 23 */
EXTERN void		TkMacOSXMakeRealWindowExist(TkWindow *winPtr);
/* 24 */
EXTERN void *		TkMacOSXMakeStippleMap(Drawable d1, Drawable d2);
/* 25 */
EXTERN void		TkMacOSXMenuClick(void);
/* 26 */
EXTERN void		TkMacOSXRegisterOffScreenWindow(Window window,
				void *portPtr);
/* 27 */
EXTERN int		TkMacOSXResizable(TkWindow *winPtr);
/* 28 */
EXTERN void		TkMacOSXSetHelpMenuItemCount(void);
/* 29 */
EXTERN void		TkMacOSXSetScrollbarGrow(TkWindow *winPtr, int flag);
/* 30 */
EXTERN void		TkMacOSXSetUpClippingRgn(Drawable drawable);
/* 31 */
EXTERN void		TkMacOSXSetUpGraphicsPort(GC gc, void *destPort);
/* 32 */
EXTERN void		TkMacOSXUpdateClipRgn(TkWindow *winPtr);
/* 33 */
EXTERN void		TkMacOSXUnregisterMacWindow(void *portPtr);
/* 34 */
EXTERN int		TkMacOSXUseMenuID(short macID);
/* 35 */
EXTERN TkRegion		TkMacOSXVisableClipRgn(TkWindow *winPtr);
/* 36 */
EXTERN void		TkMacOSXWinBounds(TkWindow *winPtr, void *geometry);
/* 37 */
EXTERN void		TkMacOSXWindowOffset(void *wRef, int *xOffset,
				int *yOffset);
/* 38 */
EXTERN int		TkSetMacColor(unsigned long pixel, void *macColor);
/* 39 */
EXTERN void		TkSetWMName(TkWindow *winPtr, Tk_Uid titleUid);
/* 40 */
EXTERN void		TkSuspendClipboard(void);
/* 41 */
EXTERN int		TkMacOSXZoomToplevel(void *whichWindow,
				short zoomPart);
/* 42 */
EXTERN Tk_Window	Tk_TopCoordsToWindow(Tk_Window tkwin, int rootX,
				int rootY, int *newX, int *newY);
/* 43 */
EXTERN MacDrawable *	TkMacOSXContainerId(TkWindow *winPtr);
/* 44 */
EXTERN MacDrawable *	TkMacOSXGetHostToplevel(TkWindow *winPtr);
/* 45 */
EXTERN void		TkMacOSXPreprocessMenu(void);
/* 46 */
EXTERN int		TkpIsWindowFloating(void *window);
/* 47 */
EXTERN Tk_Window	TkMacOSXGetCapture(void);
/* Slot 48 is reserved */
/* 49 */
EXTERN Window		TkGetTransientMaster(TkWindow *winPtr);
/* 50 */
EXTERN int		TkGenerateButtonEvent(int x, int y, Window window,
				unsigned int state);
/* 51 */
EXTERN void		TkGenWMDestroyEvent(Tk_Window tkwin);
/* Slot 52 is reserved */
/* 53 */
EXTERN unsigned long	TkpGetMS(void);
/* 54 */
EXTERN void *		TkMacOSXDrawable(Drawable drawable);
#endif /* AQUA */
#if !(defined(_WIN32) || defined(__CYGWIN__) || defined(MAC_OSX_TK)) /* X11 */
/* 0 */
EXTERN void		TkCreateXEventSource(void);
/* Slot 1 is reserved */
/* Slot 2 is reserved */
/* 3 */
EXTERN int		TkpCmapStressed(Tk_Window tkwin, Colormap colormap);
/* 4 */
EXTERN void		TkpSync(Display *display);
/* 5 */
EXTERN Window		TkUnixContainerId(TkWindow *winPtr);
/* 6 */
EXTERN int		TkUnixDoOneXEvent(Tcl_Time *timePtr);
/* 7 */
EXTERN void		TkUnixSetMenubar(Tk_Window tkwin, Tk_Window menubar);
/* 8 */
EXTERN int		TkpScanWindowId(Tcl_Interp *interp,
				const char *string, Window *idPtr);
/* 9 */
EXTERN void		TkWmCleanup(TkDisplay *dispPtr);
/* 10 */
EXTERN void		TkSendCleanup(TkDisplay *dispPtr);
/* Slot 11 is reserved */
/* 12 */
EXTERN int		TkpWmSetState(TkWindow *winPtr, int state);
/* 13 */
EXTERN int		TkpTestsendCmd(ClientData clientData,
				Tcl_Interp *interp, int objc,
				Tcl_Obj *const objv[]);
#endif /* X11 */

typedef struct TkIntPlatStubs {
    int magic;
    void *hooks;

#if defined(_WIN32) || defined(__CYGWIN__) /* WIN */
    char * (*tkAlignImageData) (XImage *image, int alignment, int bitOrder); /* 0 */
    void (*reserved1)(void);
    void (*tkGenerateActivateEvents) (TkWindow *winPtr, int active); /* 2 */
    unsigned long (*tkpGetMS) (void); /* 3 */
    void (*tkPointerDeadWindow) (TkWindow *winPtr); /* 4 */
    void (*tkpPrintWindowId) (char *buf, Window window); /* 5 */
    int (*tkpScanWindowId) (Tcl_Interp *interp, const char *string, Window *idPtr); /* 6 */
    void (*tkpSetCapture) (TkWindow *winPtr); /* 7 */
    void (*tkpSetCursor) (TkpCursor cursor); /* 8 */
    int (*tkpWmSetState) (TkWindow *winPtr, int state); /* 9 */
    void (*tkSetPixmapColormap) (Pixmap pixmap, Colormap colormap); /* 10 */
    void (*tkWinCancelMouseTimer) (void); /* 11 */
    void (*tkWinClipboardRender) (TkDisplay *dispPtr, UINT format); /* 12 */
    LRESULT (*tkWinEmbeddedEventProc) (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam); /* 13 */
    void (*tkWinFillRect) (HDC dc, int x, int y, int width, int height, int pixel); /* 14 */
    COLORREF (*tkWinGetBorderPixels) (Tk_Window tkwin, Tk_3DBorder border, int which); /* 15 */
    HDC (*tkWinGetDrawableDC) (Display *display, Drawable d, TkWinDCState *state); /* 16 */
    int (*tkWinGetModifierState) (void); /* 17 */
    HPALETTE (*tkWinGetSystemPalette) (void); /* 18 */
    HWND (*tkWinGetWrapperWindow) (Tk_Window tkwin); /* 19 */
    int (*tkWinHandleMenuEvent) (HWND *phwnd, UINT *pMessage, WPARAM *pwParam, LPARAM *plParam, LRESULT *plResult); /* 20 */
    int (*tkWinIndexOfColor) (XColor *colorPtr); /* 21 */
    void (*tkWinReleaseDrawableDC) (Drawable d, HDC hdc, TkWinDCState *state); /* 22 */
    LRESULT (*tkWinResendEvent) (WNDPROC wndproc, HWND hwnd, XEvent *eventPtr); /* 23 */
    HPALETTE (*tkWinSelectPalette) (HDC dc, Colormap colormap); /* 24 */
    void (*tkWinSetMenu) (Tk_Window tkwin, HMENU hMenu); /* 25 */
    void (*tkWinSetWindowPos) (HWND hwnd, HWND siblingHwnd, int pos); /* 26 */
    void (*tkWinWmCleanup) (HINSTANCE hInstance); /* 27 */
    void (*tkWinXCleanup) (ClientData clientData); /* 28 */
    void (*tkWinXInit) (HINSTANCE hInstance); /* 29 */
    void (*tkWinSetForegroundWindow) (TkWindow *winPtr); /* 30 */
    void (*tkWinDialogDebug) (int debug); /* 31 */
    Tcl_Obj * (*tkWinGetMenuSystemDefault) (Tk_Window tkwin, const char *dbName, const char *className); /* 32 */
    int (*tkWinGetPlatformId) (void); /* 33 */
    void (*tkWinSetHINSTANCE) (HINSTANCE hInstance); /* 34 */
    int (*tkWinGetPlatformTheme) (void); /* 35 */
    LRESULT (__stdcall *tkWinChildProc) (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam); /* 36 */
    void (*tkCreateXEventSource) (void); /* 37 */
    int (*tkpCmapStressed) (Tk_Window tkwin, Colormap colormap); /* 38 */
    void (*tkpSync) (Display *display); /* 39 */
    Window (*tkUnixContainerId) (TkWindow *winPtr); /* 40 */
    int (*tkUnixDoOneXEvent) (Tcl_Time *timePtr); /* 41 */
    void (*tkUnixSetMenubar) (Tk_Window tkwin, Tk_Window menubar); /* 42 */
    void (*tkWmCleanup) (TkDisplay *dispPtr); /* 43 */
    void (*tkSendCleanup) (TkDisplay *dispPtr); /* 44 */
    int (*tkpTestsendCmd) (ClientData clientData, Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]); /* 45 */
#endif /* WIN */
#ifdef MAC_OSX_TK /* AQUA */
    void (*tkGenerateActivateEvents) (TkWindow *winPtr, int active); /* 0 */
    void (*reserved1)(void);
    void (*reserved2)(void);
    void (*tkPointerDeadWindow) (TkWindow *winPtr); /* 3 */
    void (*tkpSetCapture) (TkWindow *winPtr); /* 4 */
    void (*tkpSetCursor) (TkpCursor cursor); /* 5 */
    void (*tkpWmSetState) (TkWindow *winPtr, int state); /* 6 */
    void (*tkAboutDlg) (void); /* 7 */
    unsigned int (*tkMacOSXButtonKeyState) (void); /* 8 */
    void (*tkMacOSXClearMenubarActive) (void); /* 9 */
    int (*tkMacOSXDispatchMenuEvent) (int menuID, int index); /* 10 */
    void (*tkMacOSXInstallCursor) (int resizeOverride); /* 11 */
    void (*tkMacOSXHandleTearoffMenu) (void); /* 12 */
    void (*reserved13)(void);
    int (*tkMacOSXDoHLEvent) (void *theEvent); /* 14 */
    void (*reserved15)(void);
    Window (*tkMacOSXGetXWindow) (void *macWinPtr); /* 16 */
    int (*tkMacOSXGrowToplevel) (void *whichWindow, XPoint start); /* 17 */
    void (*tkMacOSXHandleMenuSelect) (short theMenu, unsigned short theItem, int optionKeyPressed); /* 18 */
    void (*reserved19)(void);
    void (*reserved20)(void);
    void (*tkMacOSXInvalidateWindow) (MacDrawable *macWin, int flag); /* 21 */
    int (*tkMacOSXIsCharacterMissing) (Tk_Font tkfont, unsigned int searchChar); /* 22 */
    void (*tkMacOSXMakeRealWindowExist) (TkWindow *winPtr); /* 23 */
    void * (*tkMacOSXMakeStippleMap) (Drawable d1, Drawable d2); /* 24 */
    void (*tkMacOSXMenuClick) (void); /* 25 */
    void (*tkMacOSXRegisterOffScreenWindow) (Window window, void *portPtr); /* 26 */
    int (*tkMacOSXResizable) (TkWindow *winPtr); /* 27 */
    void (*tkMacOSXSetHelpMenuItemCount) (void); /* 28 */
    void (*tkMacOSXSetScrollbarGrow) (TkWindow *winPtr, int flag); /* 29 */
    void (*tkMacOSXSetUpClippingRgn) (Drawable drawable); /* 30 */
    void (*tkMacOSXSetUpGraphicsPort) (GC gc, void *destPort); /* 31 */
    void (*tkMacOSXUpdateClipRgn) (TkWindow *winPtr); /* 32 */
    void (*tkMacOSXUnregisterMacWindow) (void *portPtr); /* 33 */
    int (*tkMacOSXUseMenuID) (short macID); /* 34 */
    TkRegion (*tkMacOSXVisableClipRgn) (TkWindow *winPtr); /* 35 */
    void (*tkMacOSXWinBounds) (TkWindow *winPtr, void *geometry); /* 36 */
    void (*tkMacOSXWindowOffset) (void *wRef, int *xOffset, int *yOffset); /* 37 */
    int (*tkSetMacColor) (unsigned long pixel, void *macColor); /* 38 */
    void (*tkSetWMName) (TkWindow *winPtr, Tk_Uid titleUid); /* 39 */
    void (*tkSuspendClipboard) (void); /* 40 */
    int (*tkMacOSXZoomToplevel) (void *whichWindow, short zoomPart); /* 41 */
    Tk_Window (*tk_TopCoordsToWindow) (Tk_Window tkwin, int rootX, int rootY, int *newX, int *newY); /* 42 */
    MacDrawable * (*tkMacOSXContainerId) (TkWindow *winPtr); /* 43 */
    MacDrawable * (*tkMacOSXGetHostToplevel) (TkWindow *winPtr); /* 44 */
    void (*tkMacOSXPreprocessMenu) (void); /* 45 */
    int (*tkpIsWindowFloating) (void *window); /* 46 */
    Tk_Window (*tkMacOSXGetCapture) (void); /* 47 */
    void (*reserved48)(void);
    Window (*tkGetTransientMaster) (TkWindow *winPtr); /* 49 */
    int (*tkGenerateButtonEvent) (int x, int y, Window window, unsigned int state); /* 50 */
    void (*tkGenWMDestroyEvent) (Tk_Window tkwin); /* 51 */
    void (*reserved52)(void);
    unsigned long (*tkpGetMS) (void); /* 53 */
    void * (*tkMacOSXDrawable) (Drawable drawable); /* 54 */
#endif /* AQUA */
#if !(defined(_WIN32) || defined(__CYGWIN__) || defined(MAC_OSX_TK)) /* X11 */
    void (*tkCreateXEventSource) (void); /* 0 */
    void (*reserved1)(void);
    void (*reserved2)(void);
    int (*tkpCmapStressed) (Tk_Window tkwin, Colormap colormap); /* 3 */
    void (*tkpSync) (Display *display); /* 4 */
    Window (*tkUnixContainerId) (TkWindow *winPtr); /* 5 */
    int (*tkUnixDoOneXEvent) (Tcl_Time *timePtr); /* 6 */
    void (*tkUnixSetMenubar) (Tk_Window tkwin, Tk_Window menubar); /* 7 */
    int (*tkpScanWindowId) (Tcl_Interp *interp, const char *string, Window *idPtr); /* 8 */
    void (*tkWmCleanup) (TkDisplay *dispPtr); /* 9 */
    void (*tkSendCleanup) (TkDisplay *dispPtr); /* 10 */
    void (*reserved11)(void);
    int (*tkpWmSetState) (TkWindow *winPtr, int state); /* 12 */
    int (*tkpTestsendCmd) (ClientData clientData, Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]); /* 13 */
#endif /* X11 */
} TkIntPlatStubs;

extern const TkIntPlatStubs *tkIntPlatStubsPtr;

#ifdef __cplusplus
}
#endif

#if defined(USE_TK_STUBS)

/*
 * Inline function declarations:
 */

#if defined(_WIN32) || defined(__CYGWIN__) /* WIN */
#define TkAlignImageData \
	(tkIntPlatStubsPtr->tkAlignImageData) /* 0 */
/* Slot 1 is reserved */
#define TkGenerateActivateEvents \
	(tkIntPlatStubsPtr->tkGenerateActivateEvents) /* 2 */
#define TkpGetMS \
	(tkIntPlatStubsPtr->tkpGetMS) /* 3 */
#define TkPointerDeadWindow \
	(tkIntPlatStubsPtr->tkPointerDeadWindow) /* 4 */
#define TkpPrintWindowId \
	(tkIntPlatStubsPtr->tkpPrintWindowId) /* 5 */
#define TkpScanWindowId \
	(tkIntPlatStubsPtr->tkpScanWindowId) /* 6 */
#define TkpSetCapture \
	(tkIntPlatStubsPtr->tkpSetCapture) /* 7 */
#define TkpSetCursor \
	(tkIntPlatStubsPtr->tkpSetCursor) /* 8 */
#define TkpWmSetState \
	(tkIntPlatStubsPtr->tkpWmSetState) /* 9 */
#define TkSetPixmapColormap \
	(tkIntPlatStubsPtr->tkSetPixmapColormap) /* 10 */
#define TkWinCancelMouseTimer \
	(tkIntPlatStubsPtr->tkWinCancelMouseTimer) /* 11 */
#define TkWinClipboardRender \
	(tkIntPlatStubsPtr->tkWinClipboardRender) /* 12 */
#define TkWinEmbeddedEventProc \
	(tkIntPlatStubsPtr->tkWinEmbeddedEventProc) /* 13 */
#define TkWinFillRect \
	(tkIntPlatStubsPtr->tkWinFillRect) /* 14 */
#define TkWinGetBorderPixels \
	(tkIntPlatStubsPtr->tkWinGetBorderPixels) /* 15 */
#define TkWinGetDrawableDC \
	(tkIntPlatStubsPtr->tkWinGetDrawableDC) /* 16 */
#define TkWinGetModifierState \
	(tkIntPlatStubsPtr->tkWinGetModifierState) /* 17 */
#define TkWinGetSystemPalette \
	(tkIntPlatStubsPtr->tkWinGetSystemPalette) /* 18 */
#define TkWinGetWrapperWindow \
	(tkIntPlatStubsPtr->tkWinGetWrapperWindow) /* 19 */
#define TkWinHandleMenuEvent \
	(tkIntPlatStubsPtr->tkWinHandleMenuEvent) /* 20 */
#define TkWinIndexOfColor \
	(tkIntPlatStubsPtr->tkWinIndexOfColor) /* 21 */
#define TkWinReleaseDrawableDC \
	(tkIntPlatStubsPtr->tkWinReleaseDrawableDC) /* 22 */
#define TkWinResendEvent \
	(tkIntPlatStubsPtr->tkWinResendEvent) /* 23 */
#define TkWinSelectPalette \
	(tkIntPlatStubsPtr->tkWinSelectPalette) /* 24 */
#define TkWinSetMenu \
	(tkIntPlatStubsPtr->tkWinSetMenu) /* 25 */
#define TkWinSetWindowPos \
	(tkIntPlatStubsPtr->tkWinSetWindowPos) /* 26 */
#define TkWinWmCleanup \
	(tkIntPlatStubsPtr->tkWinWmCleanup) /* 27 */
#define TkWinXCleanup \
	(tkIntPlatStubsPtr->tkWinXCleanup) /* 28 */
#define TkWinXInit \
	(tkIntPlatStubsPtr->tkWinXInit) /* 29 */
#define TkWinSetForegroundWindow \
	(tkIntPlatStubsPtr->tkWinSetForegroundWindow) /* 30 */
#define TkWinDialogDebug \
	(tkIntPlatStubsPtr->tkWinDialogDebug) /* 31 */
#define TkWinGetMenuSystemDefault \
	(tkIntPlatStubsPtr->tkWinGetMenuSystemDefault) /* 32 */
#define TkWinGetPlatformId \
	(tkIntPlatStubsPtr->tkWinGetPlatformId) /* 33 */
#define TkWinSetHINSTANCE \
	(tkIntPlatStubsPtr->tkWinSetHINSTANCE) /* 34 */
#define TkWinGetPlatformTheme \
	(tkIntPlatStubsPtr->tkWinGetPlatformTheme) /* 35 */
#define TkWinChildProc \
	(tkIntPlatStubsPtr->tkWinChildProc) /* 36 */
#define TkCreateXEventSource \
	(tkIntPlatStubsPtr->tkCreateXEventSource) /* 37 */
#define TkpCmapStressed \
	(tkIntPlatStubsPtr->tkpCmapStressed) /* 38 */
#define TkpSync \
	(tkIntPlatStubsPtr->tkpSync) /* 39 */
#define TkUnixContainerId \
	(tkIntPlatStubsPtr->tkUnixContainerId) /* 40 */
#define TkUnixDoOneXEvent \
	(tkIntPlatStubsPtr->tkUnixDoOneXEvent) /* 41 */
#define TkUnixSetMenubar \
	(tkIntPlatStubsPtr->tkUnixSetMenubar) /* 42 */
#define TkWmCleanup \
	(tkIntPlatStubsPtr->tkWmCleanup) /* 43 */
#define TkSendCleanup \
	(tkIntPlatStubsPtr->tkSendCleanup) /* 44 */
#define TkpTestsendCmd \
	(tkIntPlatStubsPtr->tkpTestsendCmd) /* 45 */
#endif /* WIN */
#ifdef MAC_OSX_TK /* AQUA */
#define TkGenerateActivateEvents \
	(tkIntPlatStubsPtr->tkGenerateActivateEvents) /* 0 */
/* Slot 1 is reserved */
/* Slot 2 is reserved */
#define TkPointerDeadWindow \
	(tkIntPlatStubsPtr->tkPointerDeadWindow) /* 3 */
#define TkpSetCapture \
	(tkIntPlatStubsPtr->tkpSetCapture) /* 4 */
#define TkpSetCursor \
	(tkIntPlatStubsPtr->tkpSetCursor) /* 5 */
#define TkpWmSetState \
	(tkIntPlatStubsPtr->tkpWmSetState) /* 6 */
#define TkAboutDlg \
	(tkIntPlatStubsPtr->tkAboutDlg) /* 7 */
#define TkMacOSXButtonKeyState \
	(tkIntPlatStubsPtr->tkMacOSXButtonKeyState) /* 8 */
#define TkMacOSXClearMenubarActive \
	(tkIntPlatStubsPtr->tkMacOSXClearMenubarActive) /* 9 */
#define TkMacOSXDispatchMenuEvent \
	(tkIntPlatStubsPtr->tkMacOSXDispatchMenuEvent) /* 10 */
#define TkMacOSXInstallCursor \
	(tkIntPlatStubsPtr->tkMacOSXInstallCursor) /* 11 */
#define TkMacOSXHandleTearoffMenu \
	(tkIntPlatStubsPtr->tkMacOSXHandleTearoffMenu) /* 12 */
/* Slot 13 is reserved */
#define TkMacOSXDoHLEvent \
	(tkIntPlatStubsPtr->tkMacOSXDoHLEvent) /* 14 */
/* Slot 15 is reserved */
#define TkMacOSXGetXWindow \
	(tkIntPlatStubsPtr->tkMacOSXGetXWindow) /* 16 */
#define TkMacOSXGrowToplevel \
	(tkIntPlatStubsPtr->tkMacOSXGrowToplevel) /* 17 */
#define TkMacOSXHandleMenuSelect \
	(tkIntPlatStubsPtr->tkMacOSXHandleMenuSelect) /* 18 */
/* Slot 19 is reserved */
/* Slot 20 is reserved */
#define TkMacOSXInvalidateWindow \
	(tkIntPlatStubsPtr->tkMacOSXInvalidateWindow) /* 21 */
#define TkMacOSXIsCharacterMissing \
	(tkIntPlatStubsPtr->tkMacOSXIsCharacterMissing) /* 22 */
#define TkMacOSXMakeRealWindowExist \
	(tkIntPlatStubsPtr->tkMacOSXMakeRealWindowExist) /* 23 */
#define TkMacOSXMakeStippleMap \
	(tkIntPlatStubsPtr->tkMacOSXMakeStippleMap) /* 24 */
#define TkMacOSXMenuClick \
	(tkIntPlatStubsPtr->tkMacOSXMenuClick) /* 25 */
#define TkMacOSXRegisterOffScreenWindow \
	(tkIntPlatStubsPtr->tkMacOSXRegisterOffScreenWindow) /* 26 */
#define TkMacOSXResizable \
	(tkIntPlatStubsPtr->tkMacOSXResizable) /* 27 */
#define TkMacOSXSetHelpMenuItemCount \
	(tkIntPlatStubsPtr->tkMacOSXSetHelpMenuItemCount) /* 28 */
#define TkMacOSXSetScrollbarGrow \
	(tkIntPlatStubsPtr->tkMacOSXSetScrollbarGrow) /* 29 */
#define TkMacOSXSetUpClippingRgn \
	(tkIntPlatStubsPtr->tkMacOSXSetUpClippingRgn) /* 30 */
#define TkMacOSXSetUpGraphicsPort \
	(tkIntPlatStubsPtr->tkMacOSXSetUpGraphicsPort) /* 31 */
#define TkMacOSXUpdateClipRgn \
	(tkIntPlatStubsPtr->tkMacOSXUpdateClipRgn) /* 32 */
#define TkMacOSXUnregisterMacWindow \
	(tkIntPlatStubsPtr->tkMacOSXUnregisterMacWindow) /* 33 */
#define TkMacOSXUseMenuID \
	(tkIntPlatStubsPtr->tkMacOSXUseMenuID) /* 34 */
#define TkMacOSXVisableClipRgn \
	(tkIntPlatStubsPtr->tkMacOSXVisableClipRgn) /* 35 */
#define TkMacOSXWinBounds \
	(tkIntPlatStubsPtr->tkMacOSXWinBounds) /* 36 */
#define TkMacOSXWindowOffset \
	(tkIntPlatStubsPtr->tkMacOSXWindowOffset) /* 37 */
#define TkSetMacColor \
	(tkIntPlatStubsPtr->tkSetMacColor) /* 38 */
#define TkSetWMName \
	(tkIntPlatStubsPtr->tkSetWMName) /* 39 */
#define TkSuspendClipboard \
	(tkIntPlatStubsPtr->tkSuspendClipboard) /* 40 */
#define TkMacOSXZoomToplevel \
	(tkIntPlatStubsPtr->tkMacOSXZoomToplevel) /* 41 */
#define Tk_TopCoordsToWindow \
	(tkIntPlatStubsPtr->tk_TopCoordsToWindow) /* 42 */
#define TkMacOSXContainerId \
	(tkIntPlatStubsPtr->tkMacOSXContainerId) /* 43 */
#define TkMacOSXGetHostToplevel \
	(tkIntPlatStubsPtr->tkMacOSXGetHostToplevel) /* 44 */
#define TkMacOSXPreprocessMenu \
	(tkIntPlatStubsPtr->tkMacOSXPreprocessMenu) /* 45 */
#define TkpIsWindowFloating \
	(tkIntPlatStubsPtr->tkpIsWindowFloating) /* 46 */
#define TkMacOSXGetCapture \
	(tkIntPlatStubsPtr->tkMacOSXGetCapture) /* 47 */
/* Slot 48 is reserved */
#define TkGetTransientMaster \
	(tkIntPlatStubsPtr->tkGetTransientMaster) /* 49 */
#define TkGenerateButtonEvent \
	(tkIntPlatStubsPtr->tkGenerateButtonEvent) /* 50 */
#define TkGenWMDestroyEvent \
	(tkIntPlatStubsPtr->tkGenWMDestroyEvent) /* 51 */
/* Slot 52 is reserved */
#define TkpGetMS \
	(tkIntPlatStubsPtr->tkpGetMS) /* 53 */
#define TkMacOSXDrawable \
	(tkIntPlatStubsPtr->tkMacOSXDrawable) /* 54 */
#endif /* AQUA */
#if !(defined(_WIN32) || defined(__CYGWIN__) || defined(MAC_OSX_TK)) /* X11 */
#define TkCreateXEventSource \
	(tkIntPlatStubsPtr->tkCreateXEventSource) /* 0 */
/* Slot 1 is reserved */
/* Slot 2 is reserved */
#define TkpCmapStressed \
	(tkIntPlatStubsPtr->tkpCmapStressed) /* 3 */
#define TkpSync \
	(tkIntPlatStubsPtr->tkpSync) /* 4 */
#define TkUnixContainerId \
	(tkIntPlatStubsPtr->tkUnixContainerId) /* 5 */
#define TkUnixDoOneXEvent \
	(tkIntPlatStubsPtr->tkUnixDoOneXEvent) /* 6 */
#define TkUnixSetMenubar \
	(tkIntPlatStubsPtr->tkUnixSetMenubar) /* 7 */
#define TkpScanWindowId \
	(tkIntPlatStubsPtr->tkpScanWindowId) /* 8 */
#define TkWmCleanup \
	(tkIntPlatStubsPtr->tkWmCleanup) /* 9 */
#define TkSendCleanup \
	(tkIntPlatStubsPtr->tkSendCleanup) /* 10 */
/* Slot 11 is reserved */
#define TkpWmSetState \
	(tkIntPlatStubsPtr->tkpWmSetState) /* 12 */
#define TkpTestsendCmd \
	(tkIntPlatStubsPtr->tkpTestsendCmd) /* 13 */
#endif /* X11 */

#endif /* defined(USE_TK_STUBS) */

/* !END!: Do not edit above this line. */

#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLIMPORT

#endif /* _TKINTPLATDECLS */
