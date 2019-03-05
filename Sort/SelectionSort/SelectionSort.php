function selectionSort($arr) {
    for ($i = 0; $i < count($arr) - 1; $i++) {
        $min = $i;

        for ($j = $i + 1; $j < count($arr); $j++) {
            if ($arr[$j] < $arr[$min]) {
                $min = $j;
            }
        }

		$temp = $arr[$min];
        $arr[$min] = $arr[$i];
        $arr[$i] = $temp;
    }
}

$arr = array( 3, 1, 5, 9, 15, 1, -4 );

selectionSort($arr);

print_r($arr);