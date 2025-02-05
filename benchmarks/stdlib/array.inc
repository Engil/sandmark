(executable (name array_bench) (modules array_bench))

(rule
         (targets array_bench.array_forall.1000.100000.bench)
          (deps (:prog array_bench.exe))
           (action (run orun -o %{targets} -- %{prog} array_forall 1000 100000)))

(rule
         (targets array_bench.array_fold.1000.100000.bench)
          (deps (:prog array_bench.exe))
           (action (run orun -o %{targets} -- %{prog} array_fold 1000 100000)))

(rule
         (targets array_bench.array_iter.1000.100000.bench)
          (deps (:prog array_bench.exe))
           (action (run orun -o %{targets} -- %{prog} array_iter 1000 100000)))

(alias (name bench) (deps array_bench.array_forall.1000.100000.bench array_bench.array_fold.1000.100000.bench array_bench.array_iter.1000.100000.bench))
