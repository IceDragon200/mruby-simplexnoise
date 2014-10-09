#include <mruby.h>
#include <mruby/class.h>
#include <mruby/array.h>
#include <mruby/string.h>
#include <mruby/data.h>
#include <mruby/variable.h>
#include <mruby/numeric.h>
#include "cellular.h"
#include "noise1234.h"
#include "sdnoise1234.h"
#include "simplexnoise1234.h"
#include "srdnoise23.h"

static mrb_value
sn_worley(mrb_state *mrb, mrb_value self)
{
  return mrb_nil_value();
}

static mrb_value
sn_noise1(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_get_args(mrb, "f", &x);
  return mrb_float_value(mrb, noise1(x));
}

static mrb_value
sn_noise2(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_get_args(mrb, "ff", &x, &y);
  return mrb_float_value(mrb, noise2(x, y));
}

static mrb_value
sn_noise3(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_float z;
  mrb_get_args(mrb, "fff", &x, &y, &z);
  return mrb_float_value(mrb, noise3(x, y, z));
}

static mrb_value
sn_noise4(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_float z;
  mrb_float w;
  mrb_get_args(mrb, "ffff", &x, &y, &z, &w);
  return mrb_float_value(mrb, noise4(x, y, z, w));
}

static mrb_value
sn_pnoise1(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_int   px;
  mrb_get_args(mrb, "fi", &x, &px);
  return mrb_float_value(mrb, pnoise1(x, px));
}

static mrb_value
sn_pnoise2(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_int   px;
  mrb_int   py;
  mrb_get_args(mrb, "ffii", &x, &y, &px, &py);
  return mrb_float_value(mrb, pnoise2(x, y, px, py));
}

static mrb_value
sn_pnoise3(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_float z;
  mrb_int   px;
  mrb_int   py;
  mrb_int   pz;
  mrb_get_args(mrb, "fffiii", &x, &y, &z, &px, &py, &pz);
  return mrb_float_value(mrb, pnoise3(x, y, z, px, py, pz));
}

static mrb_value
sn_pnoise4(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_float z;
  mrb_float w;
  mrb_int   px;
  mrb_int   py;
  mrb_int   pz;
  mrb_int   pw;
  mrb_get_args(mrb, "ffffiiii", &x, &y, &z, &w, &px, &py, &pz, &pw);
  return mrb_float_value(mrb, pnoise4(x, y, z, w, px, py, pz, pw));
}

/*
static mrb_value
sn_sdnoise1(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float px;
  mrb_get_args(mrb, "ff", &x, &px);
  return mrb_float_value(mrb, sdnoise1(x, px));
}

static mrb_value
sn_sdnoise2(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_float px;
  mrb_float py;
  mrb_get_args(mrb, "ffff", &x, &y, &px, &py);
  return mrb_float_value(mrb, sdnoise2(x, y, px, py));
}

static mrb_value
sn_sdnoise3(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_float z;
  mrb_float px;
  mrb_float py;
  mrb_float pz;
  mrb_get_args(mrb, "ffffff", &x, &y, &z, &px, &py, &pz);
  return mrb_float_value(mrb, sdnoise3(x, y, z, px, py, pz));
}

static mrb_value
sn_sdnoise4(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_float z;
  mrb_float w;
  mrb_float px;
  mrb_float py;
  mrb_float pz;
  mrb_float pw;
  mrb_get_args(mrb, "ffffffff", &x, &y, &z, &w, &px, &py, &pz, &pw);
  return mrb_float_value(mrb, sdnoise4(x, y, z, w, px, py, pz, pw));
}*/

static mrb_value
sn_snoise1(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_get_args(mrb, "f", &x);
  return mrb_float_value(mrb, snoise1(x));
}

static mrb_value
sn_snoise2(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_get_args(mrb, "ff", &x, &y);
  return mrb_float_value(mrb, snoise2(x, y));
}

static mrb_value
sn_snoise3(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_float z;
  mrb_get_args(mrb, "fff", &x, &y, &z);
  return mrb_float_value(mrb, snoise3(x, y, z));
}

static mrb_value
sn_snoise4(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_float z;
  mrb_float w;
  mrb_get_args(mrb, "ffff", &x, &y, &z, &w);
  return mrb_float_value(mrb, snoise4(x, y, z, w));
}

/*
static mrb_value
sn_srdnoise2(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_float t;
  mrb_float dx;
  mrb_float dy;
  mrb_get_args(mrb, "fffff", &x, &y, &t, &dx, &dy);
  return mrb_float_value(mrb, srdnoise2(x, y, t, dx, dy));
}

static mrb_value
sn_srdnoise3(mrb_state *mrb, mrb_value self)
{
  mrb_float x;
  mrb_float y;
  mrb_float z;
  mrb_float t;
  mrb_float dx;
  mrb_float dy;
  mrb_float dz;
  mrb_get_args(mrb, "fffffff", &x, &y, &z, &t, &dx, &dy, &dz);
  return mrb_float_value(mrb, srdnoise3(x, y, z, t, dx, dy, dz));
}*/

void
mrb_mruby_simplexnoise_gem_init(mrb_state* mrb)
{
  struct RClass *sn_module;
  sn_module = mrb_define_module(mrb, "SimplexNoise");

  mrb_define_class_method(mrb, sn_module, "worley",    sn_worley, MRB_ARGS_REQ(4));

  mrb_define_class_method(mrb, sn_module, "noise1",    sn_noise1, MRB_ARGS_REQ(1));
  mrb_define_class_method(mrb, sn_module, "noise2",    sn_noise2, MRB_ARGS_REQ(2));
  mrb_define_class_method(mrb, sn_module, "noise3",    sn_noise3, MRB_ARGS_REQ(3));
  mrb_define_class_method(mrb, sn_module, "noise4",    sn_noise4, MRB_ARGS_REQ(4));

  mrb_define_class_method(mrb, sn_module, "pnoise1",   sn_pnoise1, MRB_ARGS_REQ(2));
  mrb_define_class_method(mrb, sn_module, "pnoise2",   sn_pnoise2, MRB_ARGS_REQ(4));
  mrb_define_class_method(mrb, sn_module, "pnoise3",   sn_pnoise3, MRB_ARGS_REQ(6));
  mrb_define_class_method(mrb, sn_module, "pnoise4",   sn_pnoise4, MRB_ARGS_REQ(8));

  // mrb_define_class_method(mrb, sn_module, "sdnoise1",  sn_sdnoise1, MRB_ARGS_REQ(2));
  // mrb_define_class_method(mrb, sn_module, "sdnoise2",  sn_sdnoise2, MRB_ARGS_REQ(4));
  // mrb_define_class_method(mrb, sn_module, "sdnoise3",  sn_sdnoise3, MRB_ARGS_REQ(6));
  // mrb_define_class_method(mrb, sn_module, "sdnoise4",  sn_sdnoise4, MRB_ARGS_REQ(8));

  mrb_define_class_method(mrb, sn_module, "snoise1",   sn_snoise1, MRB_ARGS_REQ(1));
  mrb_define_class_method(mrb, sn_module, "snoise2",   sn_snoise2, MRB_ARGS_REQ(2));
  mrb_define_class_method(mrb, sn_module, "snoise3",   sn_snoise3, MRB_ARGS_REQ(3));
  mrb_define_class_method(mrb, sn_module, "snoise4",   sn_snoise4, MRB_ARGS_REQ(4));

  // mrb_define_class_method(mrb, sn_module, "srdnoise2", sn_srdnoise2, MRB_ARGS_REQ(5));
  // mrb_define_class_method(mrb, sn_module, "srdnoise3", sn_srdnoise3, MRB_ARGS_REQ(7));
}

void
mrb_mruby_simplexnoise_gem_final(mrb_state* mrb)
{
  //
}
