#!/usr/bin/php
<?PHP

$content = file_get_contents("page.dump");
if (($ret = preg_match_all("/(.*[ '-].*\n)/U", $content, $match, PREG_PATTERN_ORDER)) === FALSE)
	print("FAILED!".PHP_EOL);
else if ($ret === 0)
	print("NO MATCH FOUND".PHP_EOL);
else
{
	foreach ($match[1] as $word)
	{
		print($word.PHP_EOL);
	}
}
?>
