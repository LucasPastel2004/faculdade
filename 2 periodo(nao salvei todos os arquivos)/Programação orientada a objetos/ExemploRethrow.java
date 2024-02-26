/*******************************************************************
*   Exemplo de ocorrencia de excecao em um tratador de excecao     *
*------------------------------------------------------------------*/

class ExemploRethrow
{ public static void main (String[] a)
  { try   { testExc(); }
    catch (ExemploExc e) {System.out.println("Tratamento 3"); }
  }

  static void testExc() throws ExemploExc
  { try {
         try { throw new ExemploExc(); }
         catch (ExemploExc e)
             { System.out.println("Tratamento 1");
               throw new ExemploExc(); } 
             }
    catch (ExemploExc e) 
        { System.out.println("Tratamento 2");
          throw new ExemploExc(); }
  }
}

class ExemploExc extends Exception { }