#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__ArraySortHelper_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::setStaticF_s_defaultArraySortHelper(::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get>(std::forward<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>* System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::getStaticF_s_defaultArraySortHelper()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::Sort(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  index, int32_t  length, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t,::Array<uint64_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint64_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keys, values, index, length, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::SwapIfGreaterWithItems(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get(),
                            "SwapIfGreaterWithItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t,::Array<uint64_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint64_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, comparer, a, b);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::Swap(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  i, int32_t  j)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get(),
                            "Swap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t,::Array<uint64_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, i, j);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::IntrospectiveSort(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  left, int32_t  length, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get(),
                            "IntrospectiveSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t,::Array<uint64_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint64_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, left, length, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::IntroSort(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, int32_t  depthLimit, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get(),
                            "IntroSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t,::Array<uint64_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint64_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, depthLimit, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::PickPivotAndPartition(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get(),
                            "PickPivotAndPartition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t,::Array<uint64_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint64_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::Heapsort(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get(),
                            "Heapsort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t,::Array<uint64_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint64_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::DownHeap(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  i, int32_t  n, int32_t  lo, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get(),
                            "DownHeap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t,::Array<uint64_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint64_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, i, n, lo, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::InsertionSort(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get(),
                            "InsertionSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t,::Array<uint64_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint64_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>* System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::get_Default()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get(),
                            "get_Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>* System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::setStaticF_s_defaultArraySortHelper(::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get>(std::forward<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>* System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::getStaticF_s_defaultArraySortHelper()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Sort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  index, int32_t  length, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keys, values, index, length, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::SwapIfGreaterWithItems(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                            "SwapIfGreaterWithItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, comparer, a, b);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Swap(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  i, int32_t  j)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                            "Swap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, i, j);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::IntrospectiveSort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  left, int32_t  length, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                            "IntrospectiveSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, left, length, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::IntroSort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, int32_t  depthLimit, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                            "IntroSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, depthLimit, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::PickPivotAndPartition(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                            "PickPivotAndPartition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Heapsort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                            "Heapsort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::DownHeap(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  i, int32_t  n, int32_t  lo, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                            "DownHeap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, i, n, lo, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::InsertionSort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                            "InsertionSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>* System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::get_Default()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                            "get_Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>* System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
