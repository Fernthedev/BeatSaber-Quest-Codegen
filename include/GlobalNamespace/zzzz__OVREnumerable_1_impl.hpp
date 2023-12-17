#pragma once
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
template<typename T>
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename T>
constexpr int32_t& GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr int32_t const& GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::__OVREnumerable_1__Enumerator__CollectionType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
template<typename T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>  GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::None{static_cast<int32_t>(0x0)};
template<typename T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>  GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::List{static_cast<int32_t>(0x1)};
template<typename T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>  GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::Set{static_cast<int32_t>(0x2)};
template<typename T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>  GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::Queue{static_cast<int32_t>(0x3)};
template<typename T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>  GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::Enumerable{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::*)()>(&::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>.MoveNextList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::*)()>(&::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::MoveNextList)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "MoveNextList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::*)()>(&::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::*)()>(&::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::*)()>(&::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::*)()>(&::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>.ValidateAndThrow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::*)()>(&::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::ValidateAndThrow)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "ValidateAndThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Guid>"
constexpr  GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::operator ::System::Collections::Generic::IEnumerator_1<::System::Guid>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Guid>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__set__listIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__listIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__listIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__set__type(::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>>(value));
}
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>& GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__type()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid> const& GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__type() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__set__listCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__listCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__listCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__set__enumerator(::System::Collections::Generic::IEnumerator_1<::System::Guid>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<::System::Guid>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::IEnumerator_1<::System::Guid>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Guid>* GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__enumerator()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::System::Guid>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::Guid>*> GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__enumerator() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::System::Guid>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__set__list(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__list()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*> GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__list() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__set__setEnumerator(::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>>(value));
}
constexpr ::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>& GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__setEnumerator()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid> const& GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__setEnumerator() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__set__queueEnumerator(::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>>(value));
}
constexpr ::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>& GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__queueEnumerator()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid> const& GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__get__queueEnumerator() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::_ctor(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  enumerable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, enumerable);
}
inline bool GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::MoveNextList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "MoveNextList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Guid GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::ValidateAndThrow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>>::get(),
                            "ValidateAndThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_listIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_type", ty: "::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_listCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_enumerator", ty: "::System::Collections::Generic::IEnumerator_1<::System::Guid>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_list", ty: "::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_setEnumerator", ty: "::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_queueEnumerator", ty: "::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>::__OVREnumerable_1__Enumerator(int32_t  _listIndex, ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>  _type, int32_t  _listCount, ::System::Collections::Generic::IEnumerator_1<::System::Guid>*  _enumerator, ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*  _list, ::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>  _setEnumerator, ::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>  _queueEnumerator) noexcept : ::bs_hook::ValueTypeWrapper<0x60>() {this->_listIndex = _listIndex;
this->_type = _type;
this->_listCount = _listCount;
this->_enumerator = _enumerator;
this->_list = _list;
this->_setEnumerator = _setEnumerator;
this->_queueEnumerator = _queueEnumerator;
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__OVREnumerable_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__OVREnumerable_1__Enumerator<T>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__OVREnumerable_1__Enumerator<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__set__listIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__listIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__listIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__set__type(::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>& GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__type()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const& GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__type() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__set__listCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__listCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__listCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__set__enumerator(::System::Collections::Generic::IEnumerator_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::IEnumerator_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__enumerator()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__enumerator() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__set__list(::System::Collections::Generic::IReadOnlyList_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<T>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__list()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<T>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<T>*> GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__list() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<T>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__set__setEnumerator(::System::Collections::Generic::__HashSet_1__Enumerator<T>  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__HashSet_1__Enumerator<T>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::__HashSet_1__Enumerator<T>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::__HashSet_1__Enumerator<T>& GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__setEnumerator()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__HashSet_1__Enumerator<T>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::__HashSet_1__Enumerator<T> const& GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__setEnumerator() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__HashSet_1__Enumerator<T>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__set__queueEnumerator(::System::Collections::Generic::__Queue_1__Enumerator<T>  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__Queue_1__Enumerator<T>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::__Queue_1__Enumerator<T>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::__Queue_1__Enumerator<T>& GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__queueEnumerator()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__Queue_1__Enumerator<T>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::__Queue_1__Enumerator<T> const& GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__get__queueEnumerator() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__Queue_1__Enumerator<T>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>*  enumerable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, enumerable);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::__OVREnumerable_1__Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::__OVREnumerable_1__Enumerator<T>::MoveNextList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                            "MoveNextList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::__OVREnumerable_1__Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* GlobalNamespace::__OVREnumerable_1__Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::ValidateAndThrow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                            "ValidateAndThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_listIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_type", ty: "::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_listCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_enumerator", ty: "::System::Collections::Generic::IEnumerator_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_list", ty: "::System::Collections::Generic::IReadOnlyList_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_setEnumerator", ty: "::System::Collections::Generic::__HashSet_1__Enumerator<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_queueEnumerator", ty: "::System::Collections::Generic::__Queue_1__Enumerator<T>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__OVREnumerable_1__Enumerator(int32_t  _listIndex, ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>  _type, int32_t  _listCount, ::System::Collections::Generic::IEnumerator_1<T>*  _enumerator, ::System::Collections::Generic::IReadOnlyList_1<T>*  _list, ::System::Collections::Generic::__HashSet_1__Enumerator<T>  _setEnumerator, ::System::Collections::Generic::__Queue_1__Enumerator<T>  _queueEnumerator) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->_listIndex = _listIndex;
this->_type = _type;
this->_listCount = _listCount;
this->_enumerator = _enumerator;
this->_list = _list;
this->_setEnumerator = _setEnumerator;
this->_queueEnumerator = _queueEnumerator;
}
//  Writing Method size for method: ::GlobalNamespace::OVREnumerable_1<::System::Guid>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREnumerable_1<::System::Guid>::*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVREnumerable_1<::System::Guid>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumerable_1<::System::Guid>.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid> (::GlobalNamespace::OVREnumerable_1<::System::Guid>::*)()>(&::GlobalNamespace::OVREnumerable_1<::System::Guid>::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumerable_1<::System::Guid>.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Guid>* (::GlobalNamespace::OVREnumerable_1<::System::Guid>::*)()>(&::GlobalNamespace::OVREnumerable_1<::System::Guid>::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumerable_1<::System::Guid>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVREnumerable_1<::System::Guid>::*)()>(&::GlobalNamespace::OVREnumerable_1<::System::Guid>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Guid>"
constexpr  GlobalNamespace::OVREnumerable_1<::System::Guid>::operator ::System::Collections::Generic::IEnumerable_1<::System::Guid>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::OVREnumerable_1<::System::Guid>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::OVREnumerable_1<::System::Guid>::__set__enumerable(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::System::Guid>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Guid>* GlobalNamespace::OVREnumerable_1<::System::Guid>::__get__enumerable()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::System::Guid>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::System::Guid>*> GlobalNamespace::OVREnumerable_1<::System::Guid>::__get__enumerable() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::System::Guid>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::OVREnumerable_1<::System::Guid>::_ctor(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  enumerable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, enumerable);
}
inline ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid> GlobalNamespace::OVREnumerable_1<::System::Guid>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Guid>* GlobalNamespace::OVREnumerable_1<::System::Guid>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Guid>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVREnumerable_1<::System::Guid>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::OVREnumerable_1<::System::Guid>::OVREnumerable_1(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  _enumerable) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_enumerable = _enumerable;
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::OVREnumerable_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::OVREnumerable_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::OVREnumerable_1<T>::__set__enumerable(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::IEnumerable_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::OVREnumerable_1<T>::__get__enumerable()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> GlobalNamespace::OVREnumerable_1<T>::__get__enumerable() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OVREnumerable_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>*  enumerable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, enumerable);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__OVREnumerable_1__Enumerator<T> GlobalNamespace::OVREnumerable_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::OVREnumerable_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* GlobalNamespace::OVREnumerable_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::OVREnumerable_1<T>::OVREnumerable_1(::System::Collections::Generic::IEnumerable_1<T>*  _enumerable) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_enumerable = _enumerable;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
