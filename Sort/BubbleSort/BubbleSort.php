function bubbleSort($arr) {
    for ($k = 0; $k < count($arr) - 1; $k++) {
        for ($i = 0; $i < count($arr) - 1 - $k; $i++) {
            if ($arr[$i] > $arr[$i + 1]) {
                $temp = $arr[$i];
                $arr[$i] = $arr[$i+1];
                $arr[$i+1] = $temp;
            }
        }
    }
}

$arr = array( 31, 6, 15, 1, -12, 10, 20 );

bubbleSort($arr);

print_r($arr);