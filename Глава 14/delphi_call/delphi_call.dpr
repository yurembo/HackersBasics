program delphi_call;

{$APPTYPE CONSOLE}

{$R *.res}

uses
  System.SysUtils;

procedure MyProc(a:Word; b:Byte; c:String);
begin
  writeLn(a+b, ' ' ,c);
end;

begin
  MyProc($666, $77, 'Hello,Sailor!');
end.

