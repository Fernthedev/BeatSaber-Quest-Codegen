#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/zzzz__LinqExtensions_def.hpp"
#include "ModestTree/zzzz__LinqExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* ModestTree::LinqExtensions::Yield(T  item)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(),
                        "Yield",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, item);
}
template<typename TSource>
inline TSource ModestTree::LinqExtensions::OnlyOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(),
                        "OnlyOrDefault",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template<typename T>
inline bool ModestTree::LinqExtensions::HasAtLeast(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  amount)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(),
                        "HasAtLeast",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template<typename T>
inline bool ModestTree::LinqExtensions::HasMoreThan(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  amount)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(),
                        "HasMoreThan",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template<typename T>
inline bool ModestTree::LinqExtensions::HasLessThan(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  amount)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(),
                        "HasLessThan",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template<typename T>
inline bool ModestTree::LinqExtensions::HasAtMost(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  amount)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(),
                        "HasAtMost",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template<typename T>
inline bool ModestTree::LinqExtensions::IsEmpty(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(),
                        "IsEmpty",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, list);
}
template<typename T>
inline bool ModestTree::LinqExtensions::IsEmpty(::System::Collections::Generic::IEnumerable_1<T>*  enumerable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(),
                        "IsEmpty",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* ModestTree::LinqExtensions::GetDuplicates(::System::Collections::Generic::IEnumerable_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(),
                        "GetDuplicates",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, list);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* ModestTree::LinqExtensions::Except(::System::Collections::Generic::IEnumerable_1<T>*  list, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(),
                        "Except",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, list, item);
}
template<typename T>
inline bool ModestTree::LinqExtensions::ContainsItem(::System::Collections::Generic::IEnumerable_1<T>*  list, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(),
                        "ContainsItem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, list, value);
}
//  Writing Method size for method: ::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)(int32_t)>(&::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_Collections_Generic_IEnumerator_T__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::Scene (::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_Generic_IEnumerator_T__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* (::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>"
constexpr  ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>"
constexpr  ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__set___2__current(::UnityEngine::SceneManagement::Scene  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::Scene, 0x14>(this, std::forward<::UnityEngine::SceneManagement::Scene>(value));
}
constexpr ::UnityEngine::SceneManagement::Scene& ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___2__current()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0x14>(this);
}
constexpr ::UnityEngine::SceneManagement::Scene const& ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0x14>(this);
}
constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__set_item(::UnityEngine::SceneManagement::Scene  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::Scene, 0x1c>(this, std::forward<::UnityEngine::SceneManagement::Scene>(value));
}
constexpr ::UnityEngine::SceneManagement::Scene& ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get_item()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0x1c>(this);
}
constexpr ::UnityEngine::SceneManagement::Scene const& ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get_item() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0x1c>(this);
}
constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__set___3__item(::UnityEngine::SceneManagement::Scene  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::Scene, 0x20>(this, std::forward<::UnityEngine::SceneManagement::Scene>(value));
}
constexpr ::UnityEngine::SceneManagement::Scene& ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___3__item()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0x20>(this);
}
constexpr ::UnityEngine::SceneManagement::Scene const& ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___3__item() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0x20>(this);
}
inline ::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>* ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>(__1__state));
}
inline void ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene, false>(*this, ___internal_method);
}
inline void ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  ModestTree::__LinqExtensions___Yield_d__0_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  ModestTree::__LinqExtensions___Yield_d__0_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  ModestTree::__LinqExtensions___Yield_d__0_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  ModestTree::__LinqExtensions___Yield_d__0_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  ModestTree::__LinqExtensions___Yield_d__0_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<T>::__set___2__current(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___2__current()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<T>::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<T>::__set_item(T  value)  {
::cordl_internals::setInstanceField<T, 0x28>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get_item()  {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get_item() const {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<T>::__set___3__item(T  value)  {
::cordl_internals::setInstanceField<T, 0x30>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___3__item()  {
return ::cordl_internals::getInstanceField<T, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___3__item() const {
return ::cordl_internals::getInstanceField<T, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ModestTree::__LinqExtensions___Yield_d__0_1<T>* ModestTree::__LinqExtensions___Yield_d__0_1<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void ModestTree::__LinqExtensions___Yield_d__0_1<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool ModestTree::__LinqExtensions___Yield_d__0_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void ModestTree::__LinqExtensions____c__8_1<T>::setStaticF___9(::ModestTree::__LinqExtensions____c__8_1<T>*  value)  {
::cordl_internals::setStaticField<::ModestTree::__LinqExtensions____c__8_1<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>(std::forward<::ModestTree::__LinqExtensions____c__8_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ModestTree::__LinqExtensions____c__8_1<T>* ModestTree::__LinqExtensions____c__8_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::ModestTree::__LinqExtensions____c__8_1<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void ModestTree::__LinqExtensions____c__8_1<T>::setStaticF___9__8_0(::System::Func_2<T,T>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<T,T>*, "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>(std::forward<::System::Func_2<T,T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Func_2<T,T>* ModestTree::__LinqExtensions____c__8_1<T>::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<T,T>*, "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void ModestTree::__LinqExtensions____c__8_1<T>::setStaticF___9__8_1(::System::Func_2<::System::Linq::IGrouping_2<T,T>*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Linq::IGrouping_2<T,T>*,bool>*, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>(std::forward<::System::Func_2<::System::Linq::IGrouping_2<T,T>*,bool>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Func_2<::System::Linq::IGrouping_2<T,T>*,bool>* ModestTree::__LinqExtensions____c__8_1<T>::getStaticF___9__8_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::IGrouping_2<T,T>*,bool>*, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void ModestTree::__LinqExtensions____c__8_1<T>::setStaticF___9__8_2(::System::Func_2<::System::Linq::IGrouping_2<T,T>*,T>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Linq::IGrouping_2<T,T>*,T>*, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>(std::forward<::System::Func_2<::System::Linq::IGrouping_2<T,T>*,T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Func_2<::System::Linq::IGrouping_2<T,T>*,T>* ModestTree::__LinqExtensions____c__8_1<T>::getStaticF___9__8_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::IGrouping_2<T,T>*,T>*, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ModestTree::__LinqExtensions____c__8_1<T>* ModestTree::__LinqExtensions____c__8_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::__LinqExtensions____c__8_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void ModestTree::__LinqExtensions____c__8_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T ModestTree::__LinqExtensions____c__8_1<T>::_GetDuplicates_b__8_0(T  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get(),
                            "<GetDuplicates>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, x);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool ModestTree::__LinqExtensions____c__8_1<T>::_GetDuplicates_b__8_1(::System::Linq::IGrouping_2<T,T>*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get(),
                            "<GetDuplicates>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<T,T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T ModestTree::__LinqExtensions____c__8_1<T>::_GetDuplicates_b__8_2(::System::Linq::IGrouping_2<T,T>*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get(),
                            "<GetDuplicates>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<T,T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, x);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::__set_value(T  value)  {
::cordl_internals::setInstanceField<T, 0x10>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::__get_value()  {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::__get_value() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>* ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::_ContainsItem_b__0(T  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>*>::get(),
                            "<ContainsItem>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
