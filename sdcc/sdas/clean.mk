clean:
	rm -f *core *[%~] *.[oa]
	rm -f .[a-z]*~
	rm -f *.dep *.depcc *.depcxx
	rm -rf obj

distclean:
	rm -f Makefile
