#include<bits/stdc++.h>
using namespace std;
int main()
{
    int status;
    char file_name[10000];
    printf("Enter the name of file you wish to delete(with extension - like \"abc.txt\" (without quotes )) :\n");
    gets(file_name);
    status=remove(file_name);
    if(status==0)
        printf("%s file deleted successfully.\n",file_name);
    else
    {
        printf("\n\n");
        printf("Unable to delete \"%s\"\n\n",file_name);
        perror("Error");
        printf("\n\n");
    }
    return 0;
}
