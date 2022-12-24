program stringTypes;

{$APPTYPE CONSOLE}

{$R *.res}

VAR
s0, s1 : String;

BEGIN
s0 := 'Hello, Sailor!';
s1 := 'Hello, World!';
IF s0 = s1 THEN Writeln('OK')
ELSE Writeln('Woozl');
END.

