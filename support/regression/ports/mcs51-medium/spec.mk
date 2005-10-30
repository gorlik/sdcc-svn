# Port specification for the mcs51 port running with uCsim
#
# model medium

SDCCFLAGS +=--model-medium

# copy support.c
$(PORTS_DIR)/$(PORT)/%.c: $(PORTS_DIR)/mcs51/%.c
	cp $< $@

include $(PORTS_DIR)/mcs51/spec.mk

LIBDIR = $(SDCC_DIR)/device/lib/build/medium
