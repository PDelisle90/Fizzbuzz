int Fizzbuzz(){
  int i = 0;
  while (i < 100) {
    i++;
    if (i % 3 == 0 && i % 5 == 0) {
      printf("Fizzbuzz\n");
    }
    else if (i % 3 == 0) {
      printf("fizz\n");
    }
    else if (i % 5 == 0) {
      printf("buzz\n");
    }
    else {
      printf("%d\n", i);
    }
  }
}
