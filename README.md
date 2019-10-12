# HW2---Q1
The answers to the second homework for Computer Security

Step 1: My project file is named PE-Import, my c file is named main.c, and my executable file is called PE-Import.exe. 
The file the program creates is called PE-1.txt.

Step 2: The contents of the import table is shown in the pdf labaled "ExeInfo ImportTable Screenshots" in the before packing section. 

Step 3.1: The packing process can be shown by the image labeled "UPX packing and unpacking."

Step 3.2: The Import Tables from this step are shown in the pdf labeled "ExeInfo ImportTable Screenshots." After packing the tables change slighly. Since we are packing the file the the Dllnames are not changed and the exe still uses the same dlls, but the FirstThunk and OriginalFirstThunk as well as the Name value changes. This is because we are compressing the file. Also the Thunk RVA, Thunk Offset, Thunk Value, and API Names change when the file is packed.

Step 3.3: The packing process can be shown by the pdf labeled "ExeInfo ImportTable Screenshots." The import tables from this step is shown in the image labeled "Import Tables After Unpacking." After unpacking the FirstThunk and Name values return to what they were before packing in the first place. The OriginalFirstThunk value does not, however, and remains what is was after packing. The Thunk RVA, Thunk offset do not return to their original values, but the Thunk Value and API values do go back to their original values before packing. 

Step 4: I encrypted the file using a program called cryptainer and after the antivirus did not detect any problem with my exe. Prior to encrypting the antivirus website did have mutiple flags associated with my file. These can be found in "After Encrypting the PE-Import File To Fool AnitVirus" and "Before Trying to Fool Antivirus."
