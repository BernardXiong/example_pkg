from building import *

cwd     = GetCurrentDir()
src     = Glob('*.c')
CPPPATH = [cwd]

group = DefineGroup('Example', src, depend = [''], CPPPATH = CPPPATH)

Return('group')
