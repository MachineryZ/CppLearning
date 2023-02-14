#ifndef MYTINYSTL_VECTOR_H_
#define MUTINYSTL_VECTOR_H_

#include <initializer_list>
#include "iterator.h"
#include "memory.h"
#include  "util.h"
#include"exceptdef.h"
#include "algo.h"

namespace mystl {
    #ifdef max
    #pragma message("#undefing marco max")
    #undef max
    #endif //max

    #ifdef min
    #pragma message("#undefing marco min")
    #undef min
    #endif

    template <class T>
    class vector {
        static_assert(!std::is_same<bool, T>::value, "vector<bool> is abandoned in mystl");
    public:
        typedef mystl::allocator<T> allocator_type;
        typedef mystl::allocator<T> data_allocator;
        typedef typename allocator_type::value_type value_type;
        typedef typename allocator_type::pointer pointer;
        typedef typename allocator_type::const_point const_pointer;
        typedef typename allocator_type::reference reference;
        typedef typename allocator_type::size_type size_type;
        typedef typename allocator_type::difference_type difference_type;

        typedef value_type* iterator;
        typedef const value_type* const_iterator;
        typedef mystl::reverse_iterator<iterator> reverse_iterator;
        typedef mystl::reverse_iterator<const_iterator> const_reverse_iterator;

        allocator_type get_allocator() { return data_allocator();}

    private:
        iterator begin_;
        iterator end_;
        iterator cap_;

    public:
        vector() noexcept
        { try_init(); }

        explicit vector(size_type n)
        { fill_init(n, value_type()); }

        vector(size_type n, const value_type& value)
        { fill_init(n, value); }

        
    }

}

#endif