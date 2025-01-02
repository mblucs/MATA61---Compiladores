<void>  <id, main> <(> <)> <{>
  <int>  <id, a> <;>
  <id, a>  <=>  <num, 1> <num, 0> <;>
  <if> <(> <id, a>  <>>  <num, 9> <)> <{>
    <id, a>  <=>  <(> <num, 4>  <+>  <num, 5> <)>  <*>  <num, 3> <;>
  <}> <;>
  <id, printf> <(> <str, "Olá mundo\n"> <)> <;>
  <id, printf> <(> <str, "O numero é %d"> <,>  <id, a> <)> <;>