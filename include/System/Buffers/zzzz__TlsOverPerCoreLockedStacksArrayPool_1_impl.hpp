#pragma once
#include "System/Buffers/zzzz__ArrayPool_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__TlsOverPerCoreLockedStacksArrayPool_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Buffers/zzzz__TlsOverPerCoreLockedStacksArrayPool_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
template<typename T>
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename T>
constexpr int32_t& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr int32_t const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
template<typename T>
constexpr ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>  System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::Low{static_cast<int32_t>(0x0)};
template<typename T>
constexpr ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>  System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::Medium{static_cast<int32_t>(0x1)};
template<typename T>
constexpr ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>  System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>::High{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::*)(uint32_t, int32_t, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::__set__perCoreStacks(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>*>, 0x10>(this, std::forward<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>*>>(value));
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>*>& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::__get__perCoreStacks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>*>, 0x10>(this);
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>*> const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::__get__perCoreStacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>*>, 0x10>(this);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>* System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>());
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::TryPush(::ArrayW<uint8_t,::Array<uint8_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline bool System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>  pressure, ::ArrayW<int32_t,::Array<int32_t>*>  bucketSizes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, tickCount, id, pressure, bucketSizes);
}
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::*)(::ArrayW<char16_t,::Array<char16_t>*>)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t,::Array<char16_t>*> (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::*)(uint32_t, int32_t, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::__set__perCoreStacks(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>*>, 0x10>(this, std::forward<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>*>>(value));
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>*>& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::__get__perCoreStacks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>*>, 0x10>(this);
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>*> const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::__get__perCoreStacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>*>, 0x10>(this);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>* System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>());
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::TryPush(::ArrayW<char16_t,::Array<char16_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array);
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t,::Array<char16_t>*>, false>(*this, ___internal_method);
}
inline bool System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>  pressure, ::ArrayW<int32_t,::Array<int32_t>*>  bucketSizes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, tickCount, id, pressure, bucketSizes);
}
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::*)(::ArrayW<int32_t,::Array<int32_t>*>)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t,::Array<int32_t>*> (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::*)(uint32_t, int32_t, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::__set__perCoreStacks(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>*>, 0x10>(this, std::forward<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>*>>(value));
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>*>& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::__get__perCoreStacks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>*>, 0x10>(this);
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>*> const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::__get__perCoreStacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>*>, 0x10>(this);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>* System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>());
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::TryPush(::ArrayW<int32_t,::Array<int32_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array);
}
inline ::ArrayW<int32_t,::Array<int32_t>*> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(*this, ___internal_method);
}
inline bool System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>  pressure, ::ArrayW<int32_t,::Array<int32_t>*>  bucketSizes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, tickCount, id, pressure, bucketSizes);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::__set__perCoreStacks(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*>, 0x10>(this, std::forward<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*>& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::__get__perCoreStacks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*> const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::__get__perCoreStacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>* System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::TryPush(::ArrayW<T,::Array<T>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<T,::Array<T>*> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>::Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>  pressure, ::ArrayW<int32_t,::Array<int32_t>*>  bucketSizes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, tickCount, id, pressure, bucketSizes);
}
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::*)(uint32_t, int32_t, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>, int32_t)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__set__arrays(::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, 0x10>(this, std::forward<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>>(value));
}
constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__get__arrays()  {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, 0x10>(this);
}
constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*> const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__get__arrays() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, 0x10>(this);
}
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__set__count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__get__count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__set__firstStackItemMS(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__get__firstStackItemMS()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
constexpr uint32_t const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__get__firstStackItemMS() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
inline bool System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::TryPush(::ArrayW<uint8_t,::Array<uint8_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, array);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>  pressure, int32_t  bucketSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tickCount, id, pressure, bucketSize);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>* System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>());
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::*)(::ArrayW<char16_t,::Array<char16_t>*>)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t,::Array<char16_t>*> (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::*)(uint32_t, int32_t, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>, int32_t)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__set__arrays(::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>, 0x10>(this, std::forward<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>>(value));
}
constexpr ::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__get__arrays()  {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>, 0x10>(this);
}
constexpr ::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*> const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__get__arrays() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>, 0x10>(this);
}
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__set__count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__get__count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__set__firstStackItemMS(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__get__firstStackItemMS()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
constexpr uint32_t const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__get__firstStackItemMS() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
inline bool System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::TryPush(::ArrayW<char16_t,::Array<char16_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, array);
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t,::Array<char16_t>*>, false>(*this, ___internal_method);
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>  pressure, int32_t  bucketSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tickCount, id, pressure, bucketSize);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>* System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>());
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::*)(::ArrayW<int32_t,::Array<int32_t>*>)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t,::Array<int32_t>*> (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::*)(uint32_t, int32_t, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>, int32_t)>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::*)()>(&::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__set__arrays(::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>, 0x10>(this, std::forward<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>>(value));
}
constexpr ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__get__arrays()  {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>, 0x10>(this);
}
constexpr ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*> const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__get__arrays() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>, 0x10>(this);
}
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__set__count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__get__count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__set__firstStackItemMS(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__get__firstStackItemMS()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
constexpr uint32_t const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__get__firstStackItemMS() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
inline bool System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::TryPush(::ArrayW<int32_t,::Array<int32_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, array);
}
inline ::ArrayW<int32_t,::Array<int32_t>*> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(*this, ___internal_method);
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>  pressure, int32_t  bucketSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tickCount, id, pressure, bucketSize);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>* System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>());
}
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__set__arrays(::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>, 0x10>(this, std::forward<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__arrays()  {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*> const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__arrays() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__set__count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__set__firstStackItemMS(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this, std::forward<uint32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr uint32_t& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__firstStackItemMS()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr uint32_t const& System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::__get__firstStackItemMS() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::TryPush(::ArrayW<T,::Array<T>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, array);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<T,::Array<T>*> System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>  pressure, int32_t  bucketSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tickCount, id, pressure, bucketSize);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>* System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.CreatePerCoreLockedStacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>* (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::CreatePerCoreLockedStacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::get_Id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, bool)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.Gen2GcCallbackFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Gen2GcCallbackFunc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.GetMemoryPressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t> (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::GetMemoryPressure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.GetTrimBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::GetTrimBuffers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__set__bucketArraySizes(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get__bucketArraySizes()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get__bucketArraySizes() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__set__buckets(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>*>, 0x18>(this, std::forward<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>*>>(value));
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get__buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>*>, 0x18>(this);
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>*> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>*>, 0x18>(this);
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::setStaticF_t_tlsBuckets(::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get>(std::forward<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::getStaticF_t_tlsBuckets()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get>();
}
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__set__callbackCreated(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get__callbackCreated()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get__callbackCreated() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::setStaticF_s_trimBuffers(bool  value)  {
::cordl_internals::setStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get>(std::forward<bool>(value));
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::getStaticF_s_trimBuffers()  {
return ::cordl_internals::getStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get>();
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::setStaticF_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>,::System::Object*>*, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get>(std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>,::System::Object*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>,::System::Object*>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::getStaticF_s_allTlsBuckets()  {
return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>,::System::Object*>*, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get>();
}
inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>());
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::CreatePerCoreLockedStacks(int32_t  bucketIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*, false>(*this, ___internal_method, bucketIndex);
}
inline int32_t System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Rent(int32_t  minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Return(::ArrayW<uint8_t,::Array<uint8_t>*>  array, bool  clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, clearArray);
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Trim()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Gen2GcCallbackFunc(::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, target);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::GetMemoryPressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>, false>(nullptr, ___internal_method);
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::GetTrimBuffers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>*>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.CreatePerCoreLockedStacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>* (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::CreatePerCoreLockedStacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::get_Id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t,::Array<char16_t>*> (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)(::ArrayW<char16_t,::Array<char16_t>*>, bool)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.Gen2GcCallbackFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Gen2GcCallbackFunc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.GetMemoryPressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t> (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::GetMemoryPressure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.GetTrimBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::GetTrimBuffers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__set__bucketArraySizes(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get__bucketArraySizes()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get__bucketArraySizes() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__set__buckets(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>*>, 0x18>(this, std::forward<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>*>>(value));
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get__buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>*>, 0x18>(this);
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>*> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>*>, 0x18>(this);
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::setStaticF_t_tlsBuckets(::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get>(std::forward<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::getStaticF_t_tlsBuckets()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get>();
}
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__set__callbackCreated(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get__callbackCreated()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get__callbackCreated() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::setStaticF_s_trimBuffers(bool  value)  {
::cordl_internals::setStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get>(std::forward<bool>(value));
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::getStaticF_s_trimBuffers()  {
return ::cordl_internals::getStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get>();
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::setStaticF_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>,::System::Object*>*, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get>(std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>,::System::Object*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>,::System::Object*>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::getStaticF_s_allTlsBuckets()  {
return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>,::System::Object*>*, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get>();
}
inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>());
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::CreatePerCoreLockedStacks(int32_t  bucketIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*, false>(*this, ___internal_method, bucketIndex);
}
inline int32_t System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Rent(int32_t  minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t,::Array<char16_t>*>, false>(*this, ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Return(::ArrayW<char16_t,::Array<char16_t>*>  array, bool  clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, clearArray);
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Trim()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Gen2GcCallbackFunc(::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, target);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::GetMemoryPressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>, false>(nullptr, ___internal_method);
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::GetTrimBuffers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>*>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.CreatePerCoreLockedStacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>* (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::CreatePerCoreLockedStacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::get_Id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t,::Array<int32_t>*> (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)(::ArrayW<int32_t,::Array<int32_t>*>, bool)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.Gen2GcCallbackFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Gen2GcCallbackFunc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.GetMemoryPressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t> (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::GetMemoryPressure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.GetTrimBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::GetTrimBuffers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__set__bucketArraySizes(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get__bucketArraySizes()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get__bucketArraySizes() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__set__buckets(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>*>, 0x18>(this, std::forward<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>*>>(value));
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get__buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>*>, 0x18>(this);
}
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>*> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>*>, 0x18>(this);
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::setStaticF_t_tlsBuckets(::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get>(std::forward<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::getStaticF_t_tlsBuckets()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get>();
}
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__set__callbackCreated(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get__callbackCreated()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get__callbackCreated() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::setStaticF_s_trimBuffers(bool  value)  {
::cordl_internals::setStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get>(std::forward<bool>(value));
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::getStaticF_s_trimBuffers()  {
return ::cordl_internals::getStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get>();
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::setStaticF_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>,::System::Object*>*, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get>(std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>,::System::Object*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>,::System::Object*>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::getStaticF_s_allTlsBuckets()  {
return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>,::System::Object*>*, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get>();
}
inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>());
}
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::CreatePerCoreLockedStacks(int32_t  bucketIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*, false>(*this, ___internal_method, bucketIndex);
}
inline int32_t System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::ArrayW<int32_t,::Array<int32_t>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Rent(int32_t  minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(*this, ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Return(::ArrayW<int32_t,::Array<int32_t>*>  array, bool  clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, clearArray);
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Trim()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Gen2GcCallbackFunc(::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, target);
}
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::GetMemoryPressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>, false>(nullptr, ___internal_method);
}
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::GetTrimBuffers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>*>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__set__bucketArraySizes(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__bucketArraySizes()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__bucketArraySizes() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__set__buckets(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>, 0x18>(this, std::forward<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*> const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::setStaticF_t_tlsBuckets(::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>(std::forward<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::getStaticF_t_tlsBuckets()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__set__callbackCreated(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__callbackCreated()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::__get__callbackCreated() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::setStaticF_s_trimBuffers(bool  value)  {
::cordl_internals::setStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>(std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::getStaticF_s_trimBuffers()  {
return ::cordl_internals::getStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::setStaticF_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>,::System::Object*>*, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>(std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>,::System::Object*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>,::System::Object*>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::getStaticF_s_allTlsBuckets()  {
return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>,::System::Object*>*, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>* System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::CreatePerCoreLockedStacks(int32_t  bucketIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*, false>(*this, ___internal_method, bucketIndex);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<T,::Array<T>*> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Rent(int32_t  minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(*this, ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Return(::ArrayW<T,::Array<T>*>  array, bool  clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, clearArray);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Trim()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::Gen2GcCallbackFunc(::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, target);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::GetMemoryPressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::GetTrimBuffers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
