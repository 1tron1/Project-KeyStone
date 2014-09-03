#for use if a modification function is necessary

use DBI;
$namefile#declare open
path (STDIN, ">$namefile")
while ($text=<STDIN>) {
	chomp($text);
	eval=sin($text)#sin(x) can be replaced by any function
}
close STDOUT
