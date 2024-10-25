package calendar;

import java.util.Calendar;
import java.util.Date;
import java.util.GregorianCalendar;
public class Tempo {
		public void calcolaTempo() {
		//Lavoro di ivan moreschi
		GregorianCalendar gc = new GregorianCalendar() ;
		int anno = gc.get(Calendar.YEAR);
		int mese = gc.get(Calendar.MONTH) + 1;
		int giorno = gc.get(Calendar.DATE);
		int ore = gc.get(Calendar.HOUR);
		int minuti =gc.get(Calendar.MINUTE);
		int secondi = gc.get(Calendar.SECOND);	
		System.out.println(giorno + "/" + mese  + "/" + anno + "/" + ore + ":" +  minuti + ":" + secondi);
	}
}

