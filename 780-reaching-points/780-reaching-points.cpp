class Solution {
public:
    bool ans=false;
//     void recurse(long long int a,long long int b,long long int c,long long int d)
//     {
//         if(a>c || b>d)
//             return;
//         if(a==c && b==d)
//         {ans=true;
//          return;}
        
//         recurse(a+b,b,c,d);
//         recurse(a,a+b,c,d);
//     }
    bool reachingPoints(long long int sx,long long int sy,long long int tx,long long int ty)    {
        // recurse(sx,sy,tx,ty);
        
        while (sx < tx && sy < ty)
            if (tx < ty)
                ty %= tx;
            else
                tx %= ty;

      if(sx == tx && sy <= ty && (ty - sy) % sx == 0)
            return true; 
        
         return sy == ty && sx <= tx && (tx - sx) % sy == 0;
    }
};