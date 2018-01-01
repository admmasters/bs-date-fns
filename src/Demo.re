[@bs.new] external createDate : unit => Js.Date.t = "Date";

let date1 = createDate();

let date2 = createDate();

let date3 = createDate();

let dates = [|date2, date3|];

let closestIndexTo = DateFns.closestIndexTo(`Date(date1), `Dates(dates));

Js.log(closestIndexTo);

let closestTo = DateFns.closestTo(`Date(date1), `Dates(dates));

Js.log(closestTo);

let compareAsc = DateFns.compareAsc(`Date(date1), `Date(date2));
