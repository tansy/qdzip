int BrowseForFolder(HWND);
void CenterDialog(HWND);
int CheckDirectory(HWND);
int CheckForValidFilename (char *, int);
void CreateDirectories(char *);
HANDLE CreateNewFile(char *);
int DateTimeToString(UINT date, int, int, char *);
void *Dzip_calloc(void *opaque, UINT items, UINT size);
void Dzip_free(void *opaque, void *address);
void *Dzip_malloc(UINT);
void *Dzip_realloc(void *, UINT);
char *Dzip_strdup(const char *);
void error(const char *, ...);
void errorWithSysError(int, const char *, ...);
int FileExists(const char *);
char *FileExtension(char *);
char *GetFileFromPath(char *);
void GuiProgress(int, int);
void GuiProgressMsg(const char *, ...);
int IsAnArchive (char *);
int LoadDLL (char *);
void make_crc(void *, int);
int NumberToString(UINT, char *);
int OpenArchive(char *, int);
int ReadRegValue(HKEY, const char *, const char *, char *, int);
int RestoreWindowPosition (HWND, const char *);
void SaveWindowPosition(HWND, const char *);
void SetDir(char *);
void SetNumberFormat();
void SetWindowTextf(HWND, const char *, ...);
void UnloadDLL(void);
int WriteRegValue(HKEY, const char *, const char *, int, const char *, int, int);
int YesNo(const char *, const char *, HWND, int);

extern const char dzipreg[];