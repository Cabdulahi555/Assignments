//implement strcpy (dest, source)
       
void myStrcpy( char dest[], const char source[] )
{
  int i;
  for (int i = 0; source[i] != '\0'; i++)
    dest [i] = source[i];
  dest[i] = '\0';


}

//implement  char  toupper(char)
//  toupper(‘a’) returns ‘A’
//  toupper(‘A’) return ‘A’ 

char  myToUpper( char c )
{

  if(c >= 'a' && c <= 'z')
    c-=('a' - 'A');
  return c;

} 


//implement int starlen(char[]) 

int myStrlen( const char cstr[] )
{
  int i;
  for(int i = 0; cstr[i] != '\0'; i++)
    ;
  return i;
}

