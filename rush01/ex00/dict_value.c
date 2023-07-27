const int	dic4[1] = {1234};
const int	dic3[6] = {1243, 1324, 1342, 2134, 2314, 2341};
const int	dic2[11] = {1423, 1432, 2143, 2413, 2431, 3124, 3142, 3214, 3241, 
                        3412, 3421};
const int	dic1[6] = {4123, 4132, 4213, 4231, 4312, 4321};

int	dict_value( int it, int car, int view)
{
    int value;
    if(view == 1)
    {

        value = (dic1[it] % 10 ^ car)/ 10 
    }
}
