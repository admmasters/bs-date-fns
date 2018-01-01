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
  jsDate =
  "closestTo";

[@bs.module "date-fns"]
external compareAsc :
  (
    [@bs.unwrap] [ | `Date(jsDate) | `String(string) | `Int(int)],
    [@bs.unwrap] [ | `Date(jsDate) | `String(string) | `Int(int)]
  ) =>
  int =
  "compareAsc";

[@bs.module "date-fns"]
external compareDesc :
  (
    [@bs.unwrap] [ | `Date(jsDate) | `String(string) | `Int(int)],
    [@bs.unwrap] [ | `Date(jsDate) | `String(string) | `Int(int)]
  ) =>
  int =
  "compareDesc";
