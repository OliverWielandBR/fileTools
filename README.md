IEC 6-1131 functions for getting informations about file names

# Functions
The library currently includes three functions:

## basename
Returns the file name without the path and file extension.

Example:
```structured
filename := "path/to/file/myFile.txt";
result := fileTools.basename(filename);
(* Output: "myFile" *)
```

## getfileext
Returns the file extension

Example:
```structured
filename := "myFile.txt";
result := fileTools.getfileext(filename);
(* Output: "txt" *)
```

## hasExtension
Checks if the file name has the specified extension

Example:
```structured
filename := "myFile.txt";
extension := "txt";
result := fileTools.hasExtension(filename, extension);
(* Output: TRUE *)
```
