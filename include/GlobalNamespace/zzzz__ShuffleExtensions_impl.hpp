#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ShuffleExtensions_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "GlobalNamespace/zzzz__ShuffleExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::ShuffleExtensions::Shuffle(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Random*  random)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions*>::get(),
                        "Shuffle",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, source, random);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::ShuffleExtensions::PickRandomElementsWithTombstone(::System::Collections::Generic::IEnumerable_1<T>*  source, int32_t  limit, int32_t  count, ::System::Random*  random, T  tombstone)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions*>::get(),
                        "PickRandomElementsWithTombstone",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, source, limit, count, random, tombstone);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::ShuffleExtensions::TakeWithTombstone(::System::Collections::Generic::IEnumerable_1<T>*  source, int32_t  limit, T  tombstone)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions*>::get(),
                        "TakeWithTombstone",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, source, limit, tombstone);
}
template<typename T1,typename T2>
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>* GlobalNamespace::ShuffleExtensions::ZipSkipTombstone(::System::Collections::Generic::IEnumerable_1<T1>*  collection1, ::System::Collections::Generic::IEnumerable_1<T2>*  collection2, T2  collection2Tombstone)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions*>::get(),
                        "ZipSkipTombstone",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T1>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>*, false>(nullptr, ___internal_method, collection1, collection2, collection2Tombstone);
}
template<typename T>
inline void GlobalNamespace::ShuffleExtensions::ShuffleInPlace(::System::Collections::Generic::IList_1<T>*  list, ::System::Random*  random)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions*>::get(),
                        "ShuffleInPlace",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list, random);
}
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)(int32_t)>(&::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__m__Finally1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_Collections_Generic_IEnumerator_T__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_Generic_IEnumerator_T__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr  GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr  GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::operator ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___2__current(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___2__current()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___2__current() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set_source(::System::Collections::Generic::IEnumerable_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x20>(this, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_source()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x20>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___3__source(::System::Collections::Generic::IEnumerable_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x28>(this, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__source()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x28>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___3__count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set_random(::System::Random*  value)  {
::cordl_internals::setInstanceField<::System::Random*, 0x38>(this, std::forward<::System::Random*>(value));
}
constexpr ::System::Random* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_random()  {
return ::cordl_internals::getInstanceField<::System::Random*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Random*> GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_random() const {
return ::cordl_internals::getInstanceField<::System::Random*, 0x38>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___3__random(::System::Random*  value)  {
::cordl_internals::setInstanceField<::System::Random*, 0x40>(this, std::forward<::System::Random*>(value));
}
constexpr ::System::Random* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__random()  {
return ::cordl_internals::getInstanceField<::System::Random*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Random*> GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__random() const {
return ::cordl_internals::getInstanceField<::System::Random*, 0x40>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set_limit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_limit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___3__limit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__limit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set_tombstone(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_tombstone()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___3__tombstone(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__tombstone()  {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set__index_5__2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get__index_5__2()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get__index_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set__picked_5__3(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get__picked_5__3()  {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get__picked_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___7__wrap3(::System::Collections::Generic::IEnumerator_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x60>(this, std::forward<::System::Collections::Generic::IEnumerator_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___7__wrap3()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x60>(this);
}
inline ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>(__1__state));
}
inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___2__current(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___2__current()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_source(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x28>(this, std::forward<::System::Collections::Generic::IEnumerable_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_source()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__source(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x30>(this, std::forward<::System::Collections::Generic::IEnumerable_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__source()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_random(::System::Random*  value)  {
::cordl_internals::setInstanceField<::System::Random*, 0x40>(this, std::forward<::System::Random*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Random* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_random()  {
return ::cordl_internals::getInstanceField<::System::Random*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Random*> GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_random() const {
return ::cordl_internals::getInstanceField<::System::Random*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__random(::System::Random*  value)  {
::cordl_internals::setInstanceField<::System::Random*, 0x48>(this, std::forward<::System::Random*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Random* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__random()  {
return ::cordl_internals::getInstanceField<::System::Random*, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Random*> GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__random() const {
return ::cordl_internals::getInstanceField<::System::Random*, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_limit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_limit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__limit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__limit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_tombstone(T  value)  {
::cordl_internals::setInstanceField<T, 0x58>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_tombstone()  {
return ::cordl_internals::getInstanceField<T, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__tombstone(T  value)  {
::cordl_internals::setInstanceField<T, 0x60>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__tombstone()  {
return ::cordl_internals::getInstanceField<T, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set__index_5__2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__index_5__2()  {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__index_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set__picked_5__3(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__picked_5__3()  {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__picked_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___7__wrap3(::System::Collections::Generic::IEnumerator_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x70>(this, std::forward<::System::Collections::Generic::IEnumerator_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___7__wrap3()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x70>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x70>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)(int32_t)>(&::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__m__Finally1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_Collections_Generic_IEnumerator_T__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_Generic_IEnumerator_T__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr  GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr  GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::operator ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___2__current(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___2__current()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___2__current() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set_source(::System::Collections::Generic::IEnumerable_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x20>(this, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get_source()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get_source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x20>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___3__source(::System::Collections::Generic::IEnumerable_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x28>(this, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___3__source()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___3__source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x28>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set_limit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get_limit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___3__limit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___3__limit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set_tombstone(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get_tombstone()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get_tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___3__tombstone(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___3__tombstone()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set__enumerator_5__2(::System::Collections::Generic::IEnumerator_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x40>(this, std::forward<::System::Collections::Generic::IEnumerator_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get__enumerator_5__2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get__enumerator_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x40>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set__index_5__3(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get__index_5__3()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get__index_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
inline ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>(__1__state));
}
inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___2__current(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___2__current()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_source(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x28>(this, std::forward<::System::Collections::Generic::IEnumerable_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_source()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__source(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x30>(this, std::forward<::System::Collections::Generic::IEnumerable_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__source()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_limit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_limit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__limit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__limit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_tombstone(T  value)  {
::cordl_internals::setInstanceField<T, 0x40>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_tombstone()  {
return ::cordl_internals::getInstanceField<T, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__tombstone(T  value)  {
::cordl_internals::setInstanceField<T, 0x48>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__tombstone()  {
return ::cordl_internals::getInstanceField<T, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set__enumerator_5__2(::System::Collections::Generic::IEnumerator_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x50>(this, std::forward<::System::Collections::Generic::IEnumerator_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__enumerator_5__2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__enumerator_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set__index_5__3(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__index_5__3()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__index_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)(int32_t)>(&::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__m__Finally1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__m__Finally2)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_Collections_Generic_IEnumerator__T1_T2___get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,int32_t> (::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_Generic_IEnumerator__T1_T2___get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_Collections_Generic_IEnumerable__T1_T2___GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>* (::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_Generic_IEnumerable__T1_T2___GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>"
constexpr  GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>"
constexpr  GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___2__current(::System::ValueTuple_2<int32_t,int32_t>  value)  {
::cordl_internals::setInstanceField<::System::ValueTuple_2<int32_t,int32_t>, 0x14>(this, std::forward<::System::ValueTuple_2<int32_t,int32_t>>(value));
}
constexpr ::System::ValueTuple_2<int32_t,int32_t>& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<int32_t,int32_t>, 0x14>(this);
}
constexpr ::System::ValueTuple_2<int32_t,int32_t> const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<int32_t,int32_t>, 0x14>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set_collection1(::System::Collections::Generic::IEnumerable_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x20>(this, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get_collection1()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get_collection1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x20>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___3__collection1(::System::Collections::Generic::IEnumerable_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x28>(this, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___3__collection1()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___3__collection1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x28>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set_collection2(::System::Collections::Generic::IEnumerable_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x30>(this, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get_collection2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get_collection2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x30>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___3__collection2(::System::Collections::Generic::IEnumerable_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x38>(this, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___3__collection2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___3__collection2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>*, 0x38>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set_collection2Tombstone(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get_collection2Tombstone()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get_collection2Tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___3__collection2Tombstone(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___3__collection2Tombstone()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___3__collection2Tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set__enum1_5__2(::System::Collections::Generic::IEnumerator_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x48>(this, std::forward<::System::Collections::Generic::IEnumerator_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get__enum1_5__2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get__enum1_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x48>(this);
}
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set__enum2_5__3(::System::Collections::Generic::IEnumerator_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x50>(this, std::forward<::System::Collections::Generic::IEnumerator_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get__enum2_5__3()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<int32_t>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get__enum2_5__3() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>*, 0x50>(this);
}
inline ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>(__1__state));
}
inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::ValueTuple_2<int32_t,int32_t> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_Generic_IEnumerator__T1_T2___get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,int32_t>, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_Generic_IEnumerable__T1_T2___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr  GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___2__current(::System::ValueTuple_2<T1,T2>  value)  {
::cordl_internals::setInstanceField<::System::ValueTuple_2<T1,T2>, 0x18>(this, std::forward<::System::ValueTuple_2<T1,T2>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::ValueTuple_2<T1,T2>& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<T1,T2>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::ValueTuple_2<T1,T2> const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<T1,T2>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr int32_t& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set_collection1(::System::Collections::Generic::IEnumerable_1<T1>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T1>*, 0x30>(this, std::forward<::System::Collections::Generic::IEnumerable_1<T1>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::Collections::Generic::IEnumerable_1<T1>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection1()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T1>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T1>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T1>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___3__collection1(::System::Collections::Generic::IEnumerable_1<T1>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T1>*, 0x38>(this, std::forward<::System::Collections::Generic::IEnumerable_1<T1>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::Collections::Generic::IEnumerable_1<T1>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection1()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T1>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T1>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T1>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set_collection2(::System::Collections::Generic::IEnumerable_1<T2>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T2>*, 0x40>(this, std::forward<::System::Collections::Generic::IEnumerable_1<T2>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::Collections::Generic::IEnumerable_1<T2>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T2>*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T2>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T2>*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___3__collection2(::System::Collections::Generic::IEnumerable_1<T2>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T2>*, 0x48>(this, std::forward<::System::Collections::Generic::IEnumerable_1<T2>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::Collections::Generic::IEnumerable_1<T2>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T2>*, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T2>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T2>*, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set_collection2Tombstone(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x50>(this, std::forward<T2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection2Tombstone()  {
return ::cordl_internals::getInstanceField<T2, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection2Tombstone() const {
return ::cordl_internals::getInstanceField<T2, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___3__collection2Tombstone(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x58>(this, std::forward<T2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection2Tombstone()  {
return ::cordl_internals::getInstanceField<T2, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection2Tombstone() const {
return ::cordl_internals::getInstanceField<T2, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set__enum1_5__2(::System::Collections::Generic::IEnumerator_1<T1>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<T1>*, 0x60>(this, std::forward<::System::Collections::Generic::IEnumerator_1<T1>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::Collections::Generic::IEnumerator_1<T1>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get__enum1_5__2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T1>*, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T1>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get__enum1_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T1>*, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set__enum2_5__3(::System::Collections::Generic::IEnumerator_1<T2>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<T2>*, 0x68>(this, std::forward<::System::Collections::Generic::IEnumerator_1<T2>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::System::Collections::Generic::IEnumerator_1<T2>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get__enum2_5__3()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T2>*, 0x68>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T2>*> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get__enum2_5__3() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T2>*, 0x68>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>*>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::ValueTuple_2<T1,T2> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_Generic_IEnumerator__T1_T2___get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>*>::get(),
                            "System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T1,T2>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Object* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_Generic_IEnumerable__T1_T2___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>*>::get(),
                            "System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Collections::IEnumerator* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
