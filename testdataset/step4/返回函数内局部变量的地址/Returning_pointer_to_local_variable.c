int *Foo ( )
{
    int i = 0 ;
    return & i ;
}


int main ( )
{
    int *p = Foo ( ) ;
}