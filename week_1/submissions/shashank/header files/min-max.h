int max(int a,int b , int c , int d, int e) {
  if(a>=b&&a>=c&&a>=d&&a>=e){
return a;
  }
  else if(b>=a&&b>=c&&b>=d&&b>=e){
return b;
  }
  else if(c>=a&&c>=b&&c>=d&&c>=e){
return c;
  }
  else if(d>=a&&d>=c&&d>=b&&d>=e){
return d;
  }
  else if(e>=a&&e>=c&&e>=d&&e>=b){
return e;
  }
  return 0;
}

int min(int a,int b , int c , int d, int e) {
  if(a<=b && a<=c && a<=d && a<=e){
return a;
  }
  else if(b<=a&&b<=c&&b<=d&&b<=e){
return b;
  }
  else if(c<=a&&c<=b&&c<=d&&c<=e){
return c;
  }
  else if(d<=a&&d<=c&&d<=b&&d<=e){
return d;
  }
  else if(e<=a&&e<=c&&e<=d&&e<=b){
return e;
  }
  return 0;
}