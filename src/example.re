open DateFns;

let firstDate = Js_date.fromString("01/01/2000");
let secondDate = Js_date.fromString("01/02/2000");
let thirdDate = Js_date.fromString("01/03/2000");
let fourthDate = Js_date.fromString("01/04/2000");
let dates = [|secondDate, thirdDate, fourthDate|];

let idx = closestIndexTo(`Date(firstDate), `Dates(dates));

idx |> string_of_int |> print_endline;

Js.log(firstDate);
Js.log(dates);

let res = closestTo(`Date(firstDate), `Dates(dates));

Js.log(res);

print_endline(format2(res, "DD/MM/YYYY"));