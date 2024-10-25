package calendar;

import java.util.GregorianCalendar;
import java.text.SimpleDateFormat;
import java.util.Calendar;

public class Form {
		public void calcolaFormato() {
		GregorianCalendar gc = new GregorianCalendar();
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy - HH:mm:ss");
		System.out.println(sdf.format(gc.getTime()));
		}
}
