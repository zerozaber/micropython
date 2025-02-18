#define MP_MAX_UNCOMPRESSED_TEXT_LEN (73)
MP_COMPRESSED_DATA("can'\364'%q\247objec\364functio\356forma\364argumen\364argument\363no\364mus\364positiona\354keywor\344t\357'%s\247specifie\362conver\364invali\344strin\347typ\345o\346require\344fo\362b\345inde\370ar\347attribut\345%\344empt\371implemente\344i\356isn'\364unsupporte\344wit\350assignmen\364\341outsid\345erro\362generato\362lengt\350expecte\344fro\355comple\370doesn'\364missin\347rang\345unknow\356conversio\356identifie\362a\356n\357synta\370bu\364expectin\347ha\363in\364nam\345supporte\344to\357afte\362fiel\344give\356multipl\345need\363nonloca\354overflo\367sequenc\345tupl\345allowe\344indice\363ou\364struct\272%\363dic\364i\363lis\364o\362zer\357impor\364nativ\345numbe\362shoul\344specificatio\356value\363incompatibl\345issubclass(\251%\361an\344byte\363clas\363foun\344ke\371loca\354stor\345take\363valu\345allocatio\356expressio\356implicitl\371incomplet\345unexpecte\344.mp\371arg\363automati\343cod\345hea\360integers\254numberin\347operatio\356redefine\344sel\346negativ\345require\363defaul\364failed\254go\364intege\362se\364suppor\364befor\345binar\371buffe\362close\344divid\345inden\364manua\354memor\371mktim\345modul\345retur\356")
MP_MATCH_COMPRESSED("%c needs int or char", "\377%c\275\265\312char")
MP_MATCH_COMPRESSED("%q index out of range", "\377\324\226\304\222\253")
MP_MATCH_COMPRESSED("%q indices must be integers, not %s", "\377\324\303\210\225\350\207\306")
MP_MATCH_COMPRESSED("%q() takes %d positional arguments but %d were given", "\377%q()\334\231\211\206\262\231were\273")
MP_MATCH_COMPRESSED("%s", "\377\306")
MP_MATCH_COMPRESSED("'%q' argument required", "\377\201\205\223")
MP_MATCH_COMPRESSED("'%s' object doesn't support item assignment", "\377\214\202\251\364item\240")
MP_MATCH_COMPRESSED("'%s' object doesn't support item deletion", "\377\214\202\251\364item deletion")
MP_MATCH_COMPRESSED("'%s' object has no attribute '%q'", "\377\214\202\264\260\230\201")
MP_MATCH_COMPRESSED("'%s' object isn't an iterator", "\377\214\202\235\257iterator")
MP_MATCH_COMPRESSED("'%s' object isn't callable", "\377\214\202\235callable")
MP_MATCH_COMPRESSED("'%s' object isn't iterable", "\377\214\202\235iterable")
MP_MATCH_COMPRESSED("'%s' object isn't subscriptable", "\377\214\202\235subscriptable")
MP_MATCH_COMPRESSED("'=' alignment not allowed in string format specifier", "\377'=' alignment\207\302\234\220\204\215")
MP_MATCH_COMPRESSED("'await' outside function", "\377'await'\242\203")
MP_MATCH_COMPRESSED("'break'/'continue' outside loop", "\377'break'/'continue'\242loop")
MP_MATCH_COMPRESSED("'not' not implemented", "\377'not'\207\233")
MP_MATCH_COMPRESSED("'return' outside function", "\377'return'\242\203")
MP_MATCH_COMPRESSED("'yield' outside function", "\377'yield'\242\203")
MP_MATCH_COMPRESSED("* arg after **", "\377*\227\271**")
MP_MATCH_COMPRESSED("*x must be assignment target", "\377*x\210\225\240target")
MP_MATCH_COMPRESSED("0.0 to a complex power", "\3770.0\213\241\250power")
MP_MATCH_COMPRESSED("CERT_REQUIRED requires server_hostname", "\377CERT_REQUIRED\356server_hostname")
MP_MATCH_COMPRESSED("I/O operation on closed file", "\377I/O\352on\370file")
MP_MATCH_COMPRESSED("IV", "IV")
MP_MATCH_COMPRESSED("LHS of keyword arg must be an id", "\377LHS\222\212\227\210\225\257id")
MP_MATCH_COMPRESSED("[addrinfo error %d]", "\377[addrinfo\243%d]")
MP_MATCH_COMPRESSED("__init__() should return None, not '%s'", "\377__init__()\317\377None,\207\214")
MP_MATCH_COMPRESSED("abort() called", "abort() called")
MP_MATCH_COMPRESSED("address %08x is not aligned to %d bytes", "\377address %08x\310\207aligned\213\231\326")
MP_MATCH_COMPRESSED("annotation must be an identifier", "\377annotation\210\225\257\256")
MP_MATCH_COMPRESSED("arg is an empty sequence", "\377\227\310\257\232\300")
MP_MATCH_COMPRESSED("arg must be user-type", "\377\227\210\225user-type")
MP_MATCH_COMPRESSED("argument name reused", "\377\205\266reused")
MP_MATCH_COMPRESSED("argument num/types mismatch", "\377\205num/types mismatch")
MP_MATCH_COMPRESSED("argument should be a '%q' not a '%q'", "\377\205\317\225\241\201\207\241\201")
MP_MATCH_COMPRESSED("array/bytes required on right side", "\377array/bytes\223on right side")
MP_MATCH_COMPRESSED("async for/with outside async function", "\377async for/with\242async\203")
MP_MATCH_COMPRESSED("attributes not supported", "\377attributes\207\267")
MP_MATCH_COMPRESSED("bad compile mode", "bad compile mode")
MP_MATCH_COMPRESSED("bad typecode", "bad typecode")
MP_MATCH_COMPRESSED("binary op %q not implemented", "\377\366op\324\207\233")
MP_MATCH_COMPRESSED("bits must be 32 or less", "\377bits\210\22532\312less")
MP_MATCH_COMPRESSED("blksize % 16", "blksize % 16")
MP_MATCH_COMPRESSED("buffer too small", "\377\367\270small")
MP_MATCH_COMPRESSED("bytecode overflow", "\377bytecode\277")
MP_MATCH_COMPRESSED("bytes value out of range", "\377\326\335\304\222\253")
MP_MATCH_COMPRESSED("call super().__init__() first", "call super().__init__() first")
MP_MATCH_COMPRESSED("can't add special method to already-subclassed class", "\377\200add special method\213already-subclassed\327")
MP_MATCH_COMPRESSED("can't assign to expression", "\377\200assign\213\337")
MP_MATCH_COMPRESSED("can't cancel self", "\377\200cancel\354")
MP_MATCH_COMPRESSED("can't convert %s to complex", "\377\200\216\306\213\250")
MP_MATCH_COMPRESSED("can't convert %s to float", "\377\200\216\306\213float")
MP_MATCH_COMPRESSED("can't convert %s to int", "\377\200\216\306\213\265")
MP_MATCH_COMPRESSED("can't convert '%q' object to %q implicitly", "\377\200\216\201\202\213\324\340")
MP_MATCH_COMPRESSED("can't convert NaN to int", "\377\200\216NaN\213\265")
MP_MATCH_COMPRESSED("can't convert inf to int", "\377\200\216inf\213\265")
MP_MATCH_COMPRESSED("can't create '%q' instances", "\377\200create\201instances")
MP_MATCH_COMPRESSED("can't declare nonlocal in outer code", "\377\200declare\276\234outer\346")
MP_MATCH_COMPRESSED("can't delete expression", "\377\200delete\337")
MP_MATCH_COMPRESSED("can't do binary op between '%q' and '%q'", "\377\200do\366op between\201\325\201")
MP_MATCH_COMPRESSED("can't do unary op of '%q'", "\377\200do unary op\222\201")
MP_MATCH_COMPRESSED("can't encrypt & decrypt", "\377\200encrypt & decrypt")
MP_MATCH_COMPRESSED("can't implicitly convert '%q' to 'bool'", "\377\200\340\216\201\213'bool'")
MP_MATCH_COMPRESSED("can't import name %q", "\377\200\314\266\324")
MP_MATCH_COMPRESSED("can't load from '%q'", "\377\200load\247\201")
MP_MATCH_COMPRESSED("can't load with '%q' index", "\377\200load\237\201\226")
MP_MATCH_COMPRESSED("can't perform relative import", "\377\200perform relative\314")
MP_MATCH_COMPRESSED("can't send non-None value to a just-started generator", "\377\200send non-None\335\213\241just-started\244")
MP_MATCH_COMPRESSED("can't set attribute", "\377\200\363\230")
MP_MATCH_COMPRESSED("can't store '%q'", "\377\200\333\201")
MP_MATCH_COMPRESSED("can't store to '%q'", "\377\200\333\213\201")
MP_MATCH_COMPRESSED("can't store with '%q' index", "\377\200\333\237\201\226")
MP_MATCH_COMPRESSED("can't switch from automatic field numbering to manual field specification", "\377\200switch\247\345\272\351\213\373\272\320")
MP_MATCH_COMPRESSED("can't switch from manual field specification to automatic field numbering", "\377\200switch\247\373\272\320\213\345\272\351")
MP_MATCH_COMPRESSED("can't truncate-divide a complex number", "\377\200truncate-divide\241\250\316")
MP_MATCH_COMPRESSED("can't unambiguously get sizeof scalar", "\377\200unambiguously get sizeof scalar")
MP_MATCH_COMPRESSED("can't wait", "\377\200wait")
MP_MATCH_COMPRESSED("casting", "casting")
MP_MATCH_COMPRESSED("chr() arg not in range(0x110000)", "\377chr()\227\207\234range(0x110000)")
MP_MATCH_COMPRESSED("comparison of int and uint", "\377comparison\222\265\325uint")
MP_MATCH_COMPRESSED("complex divide by zero", "\377\250\371by\313")
MP_MATCH_COMPRESSED("conversion to object", "\377\255\213\202")
MP_MATCH_COMPRESSED("database closed", "\377database\370")
MP_MATCH_COMPRESSED("default 'except' must be last", "\377\357'except'\210\225last")
MP_MATCH_COMPRESSED("dict update sequence has wrong length", "\377\307update\300\264wrong\245")
MP_MATCH_COMPRESSED("div/mod not implemented for uint", "\377div/mod\207\233\224uint")
MP_MATCH_COMPRESSED("divide by zero", "\377\371by\313")
MP_MATCH_COMPRESSED("don't know how to pass object to native function", "\377don't know how\213pass\202\213\315\203")
MP_MATCH_COMPRESSED("empty", "\377\232")
MP_MATCH_COMPRESSED("empty heap", "\377\232\347")
MP_MATCH_COMPRESSED("empty separator", "\377\232separator")
MP_MATCH_COMPRESSED("end of format while looking for conversion specifier", "\377end\222\204while looking\224\255\215")
MP_MATCH_COMPRESSED("error in ffi_prep_cif", "\377\243\234ffi_prep_cif")
MP_MATCH_COMPRESSED("error in regex", "\377\243\234regex")
MP_MATCH_COMPRESSED("exceptions must derive from BaseException", "\377exceptions\210derive\247BaseException")
MP_MATCH_COMPRESSED("expected ':' after format specifier", "\377\246':'\271\204\215")
MP_MATCH_COMPRESSED("expecting a dict for keyword args", "\377\263\241\307\224\212\344")
MP_MATCH_COMPRESSED("expecting just a value for set", "\377\263just\241\335\224\363")
MP_MATCH_COMPRESSED("expecting key:value for dict", "\377\263key:value\224\307")
MP_MATCH_COMPRESSED("extra keyword arguments given", "\377extra\212\206\273")
MP_MATCH_COMPRESSED("extra positional arguments given", "\377extra\211\206\273")
MP_MATCH_COMPRESSED("ffi_prep_closure_loc", "ffi_prep_closure_loc")
MP_MATCH_COMPRESSED("format", "\377\204")
MP_MATCH_COMPRESSED("format needs a dict", "\377\204\275\241\307")
MP_MATCH_COMPRESSED("format string didn't convert all arguments", "\377\204\220didn't\216all\206")
MP_MATCH_COMPRESSED("format string needs more arguments", "\377\204\220\275more\206")
MP_MATCH_COMPRESSED("full", "full")
MP_MATCH_COMPRESSED("function doesn't take keyword arguments", "\377\203\251take\212\206")
MP_MATCH_COMPRESSED("function expected at most %d arguments, got %d", "\377\203\246at most\231arguments,\361\231")
MP_MATCH_COMPRESSED("function got multiple values for argument '%q'", "\377\203\361\274\321\224\205\201")
MP_MATCH_COMPRESSED("function missing %d required positional arguments", "\377\203\252\231\223\211\206")
MP_MATCH_COMPRESSED("function missing keyword-only argument", "\377\203\252keyword-only\205")
MP_MATCH_COMPRESSED("function missing required keyword argument '%q'", "\377\203\252\223\212\205\201")
MP_MATCH_COMPRESSED("function missing required positional argument #%d", "\377\203\252\223\211\205#%d")
MP_MATCH_COMPRESSED("function takes %d positional arguments but %d were given", "\377\203\334\231\211\206\262\231were\273")
MP_MATCH_COMPRESSED("generator already executing", "\377\244already executing")
MP_MATCH_COMPRESSED("generator ignored GeneratorExit", "\377\244ignored GeneratorExit")
MP_MATCH_COMPRESSED("generator raised StopIteration", "\377\244raised StopIteration")
MP_MATCH_COMPRESSED("hash is final", "\377hash\310final")
MP_MATCH_COMPRESSED("heap must be a list", "\377\347\210\225\241\311")
MP_MATCH_COMPRESSED("identifier redefined as global", "\377\256\353as global")
MP_MATCH_COMPRESSED("identifier redefined as nonlocal", "\377\256\353as\276")
MP_MATCH_COMPRESSED("import * not at module level", "\377\314*\207at\376level")
MP_MATCH_COMPRESSED("incompatible .mpy arch", "\377\322\343arch")
MP_MATCH_COMPRESSED("incompatible .mpy file", "\377\322\343file")
MP_MATCH_COMPRESSED("incomplete format", "\377\341\204")
MP_MATCH_COMPRESSED("incomplete format key", "\377\341\204\331")
MP_MATCH_COMPRESSED("incorrect padding", "incorrect padding")
MP_MATCH_COMPRESSED("int() arg 2 must be >= 2 and <= 36", "\377int()\2272\210\225>= 2\325<= 36")
MP_MATCH_COMPRESSED("integer needed", "\377\362needed")
MP_MATCH_COMPRESSED("invalid cert", "\377\217cert")
MP_MATCH_COMPRESSED("invalid format", "\377\217\204")
MP_MATCH_COMPRESSED("invalid format specifier", "\377\217\204\215")
MP_MATCH_COMPRESSED("invalid key", "\377\217\331")
MP_MATCH_COMPRESSED("invalid micropython decorator", "\377\217micropython decorator")
MP_MATCH_COMPRESSED("invalid mktime usage", "\377\217\375usage")
MP_MATCH_COMPRESSED("invalid syntax", "\377\217\261")
MP_MATCH_COMPRESSED("invalid syntax for number", "\377\217\261\224\316")
MP_MATCH_COMPRESSED("issubclass() arg 1 must be a class", "\377\323\2271\210\225\241\327")
MP_MATCH_COMPRESSED("issubclass() arg 2 must be a class or a tuple of classes", "\377\323\2272\210\225\241\327\312\241\301\222classes")
MP_MATCH_COMPRESSED("join expects a list of str/bytes objects consistent with self object", "\377join expects\241\311\222str/bytes objects consistent\237\354\202")
MP_MATCH_COMPRESSED("key", "\377\331")
MP_MATCH_COMPRESSED("keyword argument(s) not implemented - use normal args instead", "\377\212argument(s)\207\233- use normal\344instead")
MP_MATCH_COMPRESSED("lhs and rhs should be compatible", "\377lhs\325rhs\317\225compatible")
MP_MATCH_COMPRESSED("local '%q' has type '%q' but source is '%q'", "\377\332\201\264\221\201\262source\310\201")
MP_MATCH_COMPRESSED("local '%q' used before type known", "\377\332\201used\365\221known")
MP_MATCH_COMPRESSED("local variable referenced before assignment", "\377\332variable referenced\365\240")
MP_MATCH_COMPRESSED("malformed f-string", "malformed f-string")
MP_MATCH_COMPRESSED("math domain error", "\377math domain\243")
MP_MATCH_COMPRESSED("memory allocation failed, allocating %u bytes", "\377\374\336\360allocating %u\326")
MP_MATCH_COMPRESSED("memory allocation failed, heap is locked", "\377\374\336\360\347\310locked")
MP_MATCH_COMPRESSED("memoryview offset too large", "\377memoryview offset\270large")
MP_MATCH_COMPRESSED("mktime needs a tuple of length 8 or 9", "\377\375\275\241\301\222\2458\3129")
MP_MATCH_COMPRESSED("mode", "mode")
MP_MATCH_COMPRESSED("multiple *x in assignment", "\377\274*x\234\240")
MP_MATCH_COMPRESSED("multiple bases have instance lay-out conflict", "\377\274bases have instance lay-out conflict")
MP_MATCH_COMPRESSED("must raise an object", "\377\210raise\257\202")
MP_MATCH_COMPRESSED("must use keyword argument for key function", "\377\210use\212\205\224\331\203")
MP_MATCH_COMPRESSED("name '%q' isn't defined", "\377\266\201\235defined")
MP_MATCH_COMPRESSED("name too long", "\377\266\270long")
MP_MATCH_COMPRESSED("native code in .mpy unsupported", "\377\315\346\234\343\236")
MP_MATCH_COMPRESSED("native yield", "\377\315yield")
MP_MATCH_COMPRESSED("need more than %d values to unpack", "\377need more than\231\321\213unpack")
MP_MATCH_COMPRESSED("negative factorial", "\377\355factorial")
MP_MATCH_COMPRESSED("negative shift count", "\377\355shift count")
MP_MATCH_COMPRESSED("no active exception to reraise", "\377\260active exception\213reraise")
MP_MATCH_COMPRESSED("no binding for nonlocal found", "\377\260binding\224\276\330")
MP_MATCH_COMPRESSED("no module named '%q'", "\377\260\376named\201")
MP_MATCH_COMPRESSED("no such attribute", "\377\260such\230")
MP_MATCH_COMPRESSED("non-default argument follows default argument", "\377non-default\205follows\357\205")
MP_MATCH_COMPRESSED("non-hex digit", "non-hex digit")
MP_MATCH_COMPRESSED("not a constant", "\377\207\241constant")
MP_MATCH_COMPRESSED("object '%s' isn't a tuple or list", "\377\202\214\235\241\301\312\311")
MP_MATCH_COMPRESSED("object not in sequence", "\377\202\207\234\300")
MP_MATCH_COMPRESSED("object of type '%s' has no len()", "\377\202\222\221\214\264\260len()")
MP_MATCH_COMPRESSED("object with buffer protocol required", "\377\202\237\367protocol\223")
MP_MATCH_COMPRESSED("only slices with step=1 (aka None) are supported", "\377only slices\237step=1 (aka None) are\267")
MP_MATCH_COMPRESSED("opcode", "opcode")
MP_MATCH_COMPRESSED("ord() expected a character, but string of length %d found", "\377ord()\246\241character,\262\220\222\245\231\330")
MP_MATCH_COMPRESSED("output too small", "\377output\270small")
MP_MATCH_COMPRESSED("overflow converting long int to machine word", "\377\277converting long\265\213machine word")
MP_MATCH_COMPRESSED("pop from an empty set", "\377pop\247\257\232\363")
MP_MATCH_COMPRESSED("pop from empty list", "\377pop\247\232\311")
MP_MATCH_COMPRESSED("popitem(): dictionary is empty", "\377popitem(): dictionary\310\232")
MP_MATCH_COMPRESSED("positional arg after **", "\377\211\227\271**")
MP_MATCH_COMPRESSED("positional arg after keyword arg", "\377\211\227\271\212\227")
MP_MATCH_COMPRESSED("pow() with 3 arguments requires integers", "\377pow()\2373\206\356integers")
MP_MATCH_COMPRESSED("requested length %d but object has length %d", "\377requested\245\231\262\202\264\245\231")
MP_MATCH_COMPRESSED("return expected '%q' but got '%q'", "\377\377\246\201\262\361\201")
MP_MATCH_COMPRESSED("rsplit(None,n)", "rsplit(None,n)")
MP_MATCH_COMPRESSED("schedule queue full", "schedule queue full")
MP_MATCH_COMPRESSED("sign not allowed in string format specifier", "\377sign\207\302\234\220\204\215")
MP_MATCH_COMPRESSED("sign not allowed with integer format specifier 'c'", "\377sign\207\302\237\362\204\215'c'")
MP_MATCH_COMPRESSED("single '}' encountered in format string", "\377single '}' encountered\234\204\220")
MP_MATCH_COMPRESSED("slice step can't be zero", "\377slice step\200\225\313")
MP_MATCH_COMPRESSED("splitting with sub-captures", "\377splitting\237sub-captures")
MP_MATCH_COMPRESSED("start/end indices", "\377start/end\303")
MP_MATCH_COMPRESSED("stream operation not supported", "\377stream\352\207\267")
MP_MATCH_COMPRESSED("string argument without an encoding", "\377\220\205without\257encoding")
MP_MATCH_COMPRESSED("string index out of range", "\377\220\226\304\222\253")
MP_MATCH_COMPRESSED("string indices must be integers, not %s", "\377\220\303\210\225\350\207\306")
MP_MATCH_COMPRESSED("struct: can't index", "\377\305\200\226")
MP_MATCH_COMPRESSED("struct: index out of range", "\377\305\226\304\222\253")
MP_MATCH_COMPRESSED("struct: no fields", "\377\305\260fields")
MP_MATCH_COMPRESSED("substring not found", "\377substring\207\330")
MP_MATCH_COMPRESSED("super() can't find self", "\377super()\200find\354")
MP_MATCH_COMPRESSED("syntax error in JSON", "\377\261\243\234JSON")
MP_MATCH_COMPRESSED("syntax error in uctypes descriptor", "\377\261\243\234uctypes descriptor")
MP_MATCH_COMPRESSED("ticks interval overflow", "\377ticks interval\277")
MP_MATCH_COMPRESSED("too many args", "\377\270many\344")
MP_MATCH_COMPRESSED("too many values to unpack (expected %d)", "\377\270many\321\213unpack (expected %d)")
MP_MATCH_COMPRESSED("tuple index out of range", "\377\301\226\304\222\253")
MP_MATCH_COMPRESSED("type '%q' isn't an acceptable base type", "\377\221\201\235\257acceptable base\221")
MP_MATCH_COMPRESSED("type object '%q' has no attribute '%q'", "\377\221\202\201\264\260\230\201")
MP_MATCH_COMPRESSED("type takes 1 or 3 arguments", "\377\221\3341\3123\206")
MP_MATCH_COMPRESSED("unexpected indent", "\377\342\372")
MP_MATCH_COMPRESSED("unexpected keyword argument '%q'", "\377\342\212\205\201")
MP_MATCH_COMPRESSED("unicode name escapes", "\377unicode\266escapes")
MP_MATCH_COMPRESSED("unindent doesn't match any outer indent level", "\377unindent\251match any outer\372level")
MP_MATCH_COMPRESSED("unknown conversion specifier %c", "\377\254\255\215%c")
MP_MATCH_COMPRESSED("unknown format code '%c' for object of type '%s'", "\377\254\204\346'%c'\224\202\222\221\214")
MP_MATCH_COMPRESSED("unknown type", "\377\254\221")
MP_MATCH_COMPRESSED("unknown type '%q'", "\377\254\221\201")
MP_MATCH_COMPRESSED("unmatched '{' in format", "\377unmatched '{'\234\204")
MP_MATCH_COMPRESSED("unreadable attribute", "\377unreadable\230")
MP_MATCH_COMPRESSED("unsupported format character '%c' (0x%x) at index %d", "\377\236\204character '%c' (0x%x) at\226\231")
MP_MATCH_COMPRESSED("unsupported type for %q: '%s'", "\377\236\221\224%q:\214")
MP_MATCH_COMPRESSED("unsupported types for %q: '%s', '%s'", "\377\236types\224%q: '%s',\214")
MP_MATCH_COMPRESSED("wbits", "wbits")
MP_MATCH_COMPRESSED("wrong number of arguments", "\377wrong\316\222\206")
MP_MATCH_COMPRESSED("zero step", "\377\313step")
// Total input length:      6750
// Total compressed length: 3231
// Total data length:       1153
// Predicted saving:        2366

// gzip length:             3804
// Percentage of gzip:      115.2%
// zlib length:             3792
// Percentage of zlib:      115.6%
