program while_repeat_d;

{$APPTYPE CONSOLE}

{$R *.res}

uses
  System.SysUtils;

var
  a : Integer;
begin
  a := 0;

	while a < 10 do
  begin
		writeln('Оператор цикла while');
    a := a + 1;
  end;

  repeat
		writeln('Оператор цикла repeat/until');
    a := a - 1;
	 until a < 0;
end.
