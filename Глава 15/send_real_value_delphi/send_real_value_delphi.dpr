program send_real_value_delphi;

{$APPTYPE CONSOLE}

{$R *.res}

uses
  System.SysUtils, Math;

procedure MyProc(a : Real);
begin
  WriteLn(FloatToStr(RoundTo(a,-2)));
end;

var
  a: Real;
  b: Real;
begin
  a := 6.66;
  b := 7.77;

  MyProc(a + b);
end.
