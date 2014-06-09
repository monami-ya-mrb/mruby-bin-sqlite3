#include "mruby.h"

void
mrb_mruby_bin_sqlite3_gem_init(mrb_state *mrb)
{
  int a = 10000;
  mrb_bool_value(a & 256);
}

void
mrb_mruby_bin_sqlite3_gem_final(mrb_state *mrb)
{
}

