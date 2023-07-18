//
// Created by fierg on 7/18/23.
//
template <class Iterator>
void merge(Iterator a, Iterator b, Iterator c, Iterator d, Iterator e){
    while (a!=b && c!=d){
        if (c == d || *a < *c)
            *e++ = *a++;
        else
            *e++ = *c++;
    }
}