/*******************************************************************
*               Exemplo de tratamento de excecoes                  *
*------------------------------------------------------------------*/
import javax.swing.*;

class AlgarismoEsperado extends Exception
{ AlgarismoEsperado (char c)
  { super ("Caractere digitado: " + c + "\n" +
            "Era esperado um algarismo."); }
}

class ExemploExcecao
{ static int charPraNum (char c) throws AlgarismoEsperado
  { if (c>='0' && c<='9') return (c-'0');
    else throw new AlgarismoEsperado(c); }

  static int maiorInt2Alg (int d1, int d2)
  { return (d1>d2 ? d1*10 + d2 : d2*10 + d1); }
 
  static void dialog ()
  { try
       { char c1 = ((String) JOptionPane.showInputDialog
                          ("Digite um algarismo (0..9): ")).charAt(0);
         int  d1 = charPraNum(c1);
         char c2 = ((String) JOptionPane.showInputDialog
                          ("Digite outro algarismo (0..9): ")).charAt(0);
         int  d2 = charPraNum(c2);
 
         int  v  = maiorInt2Alg(d1,d2);
       
         JOptionPane.showMessageDialog
               (null,"Maior inteiro formado com os 2 algarismos " +
                c1 + " e " + c2 + " = " + v,  "Resultado",
                JOptionPane.INFORMATION_MESSAGE);
       }
    catch (AlgarismoEsperado exc)
       { JOptionPane.showMessageDialog(null, exc.getMessage(),
                                       "Erro", JOptionPane.ERROR_MESSAGE);
         dialog(); }
       }

  public static void main(String[] a)
  { dialog(); System.exit(0); }
}