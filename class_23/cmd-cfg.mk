
AR := ar
ARFLAGS := crs

CC := gcc
LFLAGS :=
CFLAGS := -I$(DIR_COMMON_INC) -I$(DIR_INC)

ifeq ($(DEBUG),true)
CFLAGS += -g
endif

MKDIR := mkdir
RM := rm -rf


