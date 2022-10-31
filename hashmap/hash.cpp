
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class mapnode{
    public:
        string key;
        T value;
        mapnode* next;

        mapnode(string key, T value){
            this->key=key;
            this->value=value;
            next=NULL:
        }

        ~mapnode(){
            delete next;
        }
};
template<typename T>
class ourmap{
    mapnode<T>** buckets;
    int size;
    int numbuckets;
    public:
        ourmap(){
            count=0;
            numbuckets=5;
            buckets=new mapnode<T>*[numbuckets];
            for(int i=0;i<numbuckets;i++){
                buckets[i]=NULL;
            }
        }
        ~ourmap(){
            for(int i=0;i<numbuckets;i++){
                delete buckets[i];
            }
            delete [] buckets;
        }

        int size(){
            return count;
        }

        T getvalue(string key){

        }
    private:
        int getbucketindex(string key){
            int hashcode=0;
            int coeff=1;
            for(int i=key.length()-1;i>=0;i--){
                hashcode+=key[i]*coeff;
                coeff*=37;
                coeff=coeff%numbuckets;
            }
            return hashcode%numbuckets;
        }

    public:
        void insert(string key, T value){
            int bucketindex=getbucketindex(string key);
            mapnode<T> *node=new mapnode<T>
        }

        T remove(string key){

        }

};
int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif



}
