#ifndef utils_h
#define utils_h

#import <Foundation/Foundation.h>

extern const char** environ;

uint64_t jbrand();

uint64_t jbrand_new();

NSString* find_jbroot();

NSString* jbroot(NSString *path);

int is_jbroot_name(const char* name);

NSString* getBootSession();

int spawn(const char* path, const char** argv, const char** envp, void(^std_out)(char*), void(^std_err)(char*));

int spawnBootstrap(const char** argv, NSString** stdOut, NSString** stdErr);

int spawnRoot(NSString* path, NSArray* args, NSString** stdOut, NSString** stdErr);

void machoGetInfo(FILE* candidateFile, bool *isMachoOut, bool *isLibraryOut);

BOOL isDefaultInstallationPath(NSString* _path);

void killAllForApp(const char* bundlePath);


#endif /* utils_h */
