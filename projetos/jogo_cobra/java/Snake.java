import java.nio.charset.Charset;

import com.googlecode.lanterna.TerminalFacade;
import com.googlecode.lanterna.input.Key;
import com.googlecode.lanterna.terminal.Terminal;
import com.googlecode.lanterna.terminal.TerminalSize;

public class Snake {
	public static void main(String[] args) {
		int x, d = 2, cx[] = new int[300], cy[] = new int[300], t = 1, mx, my;
		Key tecla;
		boolean fim = false;

		cx[0] = 1;
		cy[0] = 7;

		Terminal terminal = TerminalFacade.createTerminal(System.in, System.out, Charset.forName("UTF8")); // Cria o terminal (Console)
		terminal.enterPrivateMode(); // Abre o terminal
		terminal.setCursorVisible(false); // Deixa o cursor invisível
		TerminalSize terminalSize = terminal.getTerminalSize(); // Pega o tamanho do terminal

		for (x = 0; x < terminalSize.getRows(); x++) {
			terminal.moveCursor(0, x);
			terminal.putCharacter('#');
		}

		for (x = 0; x < terminalSize.getColumns(); x++) {
			terminal.moveCursor(x, 0);
			terminal.putCharacter('#');
		}

		for (x = 0; x < terminalSize.getRows(); x++) {
			terminal.moveCursor(terminalSize.getColumns(), x);
			terminal.putCharacter('#');
		}

		for (x = 0; x < terminalSize.getColumns(); x++) {
			terminal.moveCursor(x, terminalSize.getRows());
			terminal.putCharacter('#');
		}

		mx = 1 + (int) (Math.random() * (terminalSize.getColumns() - 2));
		my = 1 + (int) (Math.random() * (terminalSize.getRows() - 2));

		while (!fim) {
			tecla = terminal.readInput();
			while (!fim && tecla == null) {
				for (x = t; x > 0; x--) {
					cx[x] = cx[x - 1];
					cy[x] = cy[x - 1];
				}
				if (d == 0)
					cx[0]--;
				if (d == 1)
					cy[0]--;
				if (d == 2)
					cx[0]++;
				if (d == 3)
					cy[0]++;
				terminal.moveCursor(cx[t], cy[t]);
				terminal.putCharacter(' ');
				if (mx == cx[0] && my == cy[0]) {
					t++;
					mx = 1 + (int) (Math.random() * (terminalSize.getColumns() - 2));
					my = 1 + (int) (Math.random() * (terminalSize.getRows() - 2));
				}
				terminal.moveCursor(cx[0], cy[0]);
				terminal.putCharacter('O');
				terminal.moveCursor(mx, my);
				terminal.putCharacter('X');
				try {
					Thread.sleep(150);
				} catch (InterruptedException e) {
					e.printStackTrace();
				}
				for (x = 1; x < t; x++) {
					if (cx[0] == cx[x] && cy[0] == cy[x])
						fim = true;
				}
				if (cy[0] == 0 || cy[0] == (terminalSize.getRows() - 1) || cx[0] == 0
						|| cx[0] == (terminalSize.getColumns() - 1))
					fim = true;
				tecla = terminal.readInput();
			}
			if (tecla != null) {
				if (tecla.getKind() == Key.Kind.ArrowLeft)
					d = 0;
				if (tecla.getKind() == Key.Kind.ArrowUp)
					d = 1;
				if (tecla.getKind() == Key.Kind.ArrowRight)
					d = 2;
				if (tecla.getKind() == Key.Kind.ArrowDown)
					d = 3;
				if (tecla.getKind() == Key.Kind.Escape)
					fim = true;
			}
		}
		System.exit(0);
	}
}
