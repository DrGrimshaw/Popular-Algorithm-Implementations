function insertionSort($arr)
{
    for ($i = 1; $i < count($arr); $i++)
    {
        $value = $arr[$i];
        $j = $i;

        while ($j > 0 && $arr[$j - 1] > $value)
        {
            $arr[$j] = $arr[$j - 1];
            $j--;
        }

        $arr[$j] = $value;
    }
}

$arr = array(13, 4, 7, 2, -1, 5, 8);

insertionSort($arr);

print_r($arr); 