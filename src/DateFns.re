type _date = Js_date.t;
type _dates = array(_date);
type _strings = array(string);
type _ints = array(int);

[@bs.module "date-fns"] [@bs.val] external closestIndexTo : [@bs.unwrap] [
  | `Date(Js_date.t)
  | `String(string)
  | `Number(int)
] => [@bs.unwrap] [
  | `Dates(_dates)
  | `Strings(_strings)
  | `Numbers(_ints)
] => int = "";

[@bs.module "date-fns"] [@bs.val] external closestTo : [@bs.unwrap] [
  | `Date(_date)
  | `String(string)
  | `Number(int)
] => [@bs.unwrap] [
  | `Dates(_dates)
  | `Strings(_strings)
  | `Numbers(_ints)
] => _date = "";

[@bs.module "date-fns"] external format: Js_date.t => string = "format";
[@bs.module "date-fns"] external format2: Js_date.t => string => string = "format";

type format3Options = {
  .
  locale: {
    ..
  } as 'a
} as 'a;
[@bs.module "date-fns"] external format3: Js_date.t => string => string => format3Options = "format";
