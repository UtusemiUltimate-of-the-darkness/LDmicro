del *.pdb > nul
del *.log
del *.obj
attrib -R -A -S -H Thumbs.db /S
del /S Thumbs.db
del pcports.pas
del acceleration_deceleration.txt
del ldmicro.clp
del ldmicro.tmp
del ldmicro.exe
del ldmicro.res
del ldinterpret.exe
del aaa
md BAK
move  *.bak BAK
