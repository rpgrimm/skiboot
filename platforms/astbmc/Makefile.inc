SUBDIRS += $(PLATDIR)/astbmc

ASTBMC_OBJS = palmetto.o habanero.o firestone.o p8dtu.o garrison.o barreleye.o pnor.o common.o slots.o zaius.o
ASTBMC = $(PLATDIR)/astbmc/built-in.o
$(ASTBMC): $(ASTBMC_OBJS:%=$(PLATDIR)/astbmc/%)

