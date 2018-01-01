open CommonTypes;

[@bs.module "date-fns"]
external closestIndexTo :
  (
    [@bs.unwrap] [ | `Date(jsDate) | `String(string) | `Int(int)],
    [@bs.unwrap] [ | `Dates(jsDates) | `Strings(strings) | `Ints(ints)]
  ) =>
  int =
  "closestIndexTo";

[@bs.module "date-fns"]
external closestTo :
  (
    [@bs.unwrap] [ | `Date(jsDate) | `String(string) | `Int(int)],
    [@bs.unwrap] [ | `Dates(jsDates) | `Strings(strings) | `Ints(ints)]
  ) =>
  int =
  "closestTo";
