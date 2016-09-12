#include "crypto.hpp"
#include <cassert>

using namespace std;

int main() {
  // Results copied from https://caligatio.github.io/jsSHA/
  assert(Crypto::hex(Crypto::sha1("Test")) == "640ab2bae07bedc4c163f679a746f7ab7fb5d1fa");
  assert(Crypto::hex(Crypto::sha1("Test", 2)) == "af31c6cbdecd88726d0a9b3798c71ef41f1624d5");

  // Results copied from http://www.freecodeformat.com/pbkdf2.php
  assert(Crypto::hex(Crypto::pbkdf2("Password", "Salt", 4096, 128 / 8)) == "f66df50f8aaa11e4d9721e1312ff2e66");
  assert(Crypto::hex(Crypto::pbkdf2("Password", "Salt", 8192, 512 / 8)) == "a941ccbc34d1ee8ebbd1d34824a419c3dc4eac9cbc7c36ae6c7ca8725e2b618a6ad22241e787af937b0960cf85aa8ea3a258f243e05d3cc9b08af5dd93be046c");
  
  //Results copied from http://www.md5online.org/md5-encrypt.html
  assert(Crypto::hex(Crypto::md5("Anders", 1)) == "b307360d26704b508dad548d1852c5fa");
  
  //Results copied from http://www.xorbin.com/tools/sha256-hash-calculator
  assert(Crypto::hex(Crypto::sha256("Thon", 1)) == "5be42e729ca798b5fe57b31c065992959067fe3d5ef3f954c223a5c1a2ae6928");
  
  //Results copied from http://www.xorbin.com/tools/sha256-hash-calculator
  assert(Crypto::hex(Crypto::sha512("Kongsberg", 1)) == "de3c2f740b53e35a42f1bf2354040bc8322849be016906b66448a05fc4adcafd033be04d66aa04660dfed0e47aa432012f1d13190f8ee457335d1b2321b0d347");
  
}
  