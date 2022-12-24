program many_cases_d;

{$APPTYPE CONSOLE}

{$R *.res}

uses
  System.SysUtils;

var
a : LongInt;
begin
a := 6;
  case a of
      2 : WriteLn('a == 2');
      4, 6 : WriteLn('a == 4 | 6 ');
      10..100 : WriteLn('a == [10,100]');
  end;
end.
