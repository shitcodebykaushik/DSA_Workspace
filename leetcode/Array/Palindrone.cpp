bool isPalindrome(int x) {
    // Step 1: Edge cases
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int reversed = 0;
    while (x > reversed) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    // Step 2: Compare halves
    return (x == reversed) || (x == reversed / 10);
}
