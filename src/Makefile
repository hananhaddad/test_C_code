IDIR=../include
CC=gcc
EXEC=helloc

CFLAGS=-I$(IDIR)
SFLAGS=

ODIR=obj
LIBS=

_DEPS = *.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o calcul.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(SFLAGS) $(LIBS)

$(EXEC): $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(SFLAGS) $(LIBS)
	chmod +x $(EXEC)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ 
mrproper: clean
	rm -rf $(EXEC)
