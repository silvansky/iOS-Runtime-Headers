/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFXPreferencesCompatibilitySource : CFXPreferencesSource  {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } accessLock;
}


- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)dealloc;
- (id)init;
- (void)finalize;
- (unsigned char)synchronize;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (void*)getValueForKey:(struct __CFString { }*)arg1;

@end
