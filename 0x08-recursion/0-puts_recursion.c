/**
 * _puts_recursion - print string in stdout
 * @s: input string
 * Retun: noting
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
		_putchar(*s++);
		_puts_recursion(s)
}
