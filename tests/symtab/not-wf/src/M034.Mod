MODULE M;

TYPE
  R0 = RECORD END;
  R1 = RECORD (R0) END;

PROCEDURE (VAR r: R0) a(x: CHAR);
  END a;
  
PROCEDURE (VAR r: R1) a(VAR x: CHAR);
  END a;
  
END M.
