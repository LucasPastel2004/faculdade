/*******************************************************************
*            Exemplo de uso da clausula finally                    *
*------------------------------------------------------------------*/

class Exemplo_finally
{ public static void m1 () throws Ex2
  { try  { throw new Ex1(); } finally { throw new Ex2(); } }

  public static void m2 () throws Ex1
  { try { throw new Ex1(); } finally { return; } }

  public static void m3 () throws Ex3
  { try     { throw new Ex1(); }
    catch   (Ex1 e) { throw new Ex2(); }
    finally { throw new Ex3(); } }
  
  public static void m4 () throws Ex2
  { try     { throw new Ex1(); }
    catch   (Ex1 e) { throw new Ex2(); }
    finally { ; /* nada */ } }

  public static void main (String[] a) throws Ex1
  { try { m1(); } catch (Ex2 e) { System.out.println("Ex2"); }
    try { m2(); } catch (Ex1 e) { System.out.println("Ex1"); }
    try { m3(); } catch (Ex3 e) { System.out.println("Ex3"); }
    try { m4(); } catch (Ex2 e) { System.out.println("Ex2"); }
  }
}

class Ex1 extends Exception { }
class Ex2 extends Exception { }
class Ex3 extends Exception { }