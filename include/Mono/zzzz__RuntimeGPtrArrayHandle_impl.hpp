#pragma once
#include "Mono/zzzz__RuntimeGPtrArrayHandle_def.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::RuntimeGPtrArrayHandle::*)(::cordl_internals::intptr_t)>(&::Mono::RuntimeGPtrArrayHandle::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2412a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::RuntimeGPtrArrayHandle::*)()>(&::Mono::RuntimeGPtrArrayHandle::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2412a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::Mono::RuntimeGPtrArrayHandle::*)(int32_t)>(&::Mono::RuntimeGPtrArrayHandle::get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2412aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.Lookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::Mono::RuntimeGPtrArrayHandle::*)(int32_t)>(&::Mono::RuntimeGPtrArrayHandle::Lookup)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2412aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "Lookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.GPtrArrayFree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>)>(&::Mono::RuntimeGPtrArrayHandle::GPtrArrayFree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2412b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "GPtrArrayFree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.DestroyAndFree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Mono::RuntimeGPtrArrayHandle>)>(&::Mono::RuntimeGPtrArrayHandle::DestroyAndFree)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2412b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "DestroyAndFree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::RuntimeGPtrArrayHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::RuntimeGPtrArrayHandle::__set_value(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>>(value));
}
constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>& Mono::RuntimeGPtrArrayHandle::__get_value()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray> const& Mono::RuntimeGPtrArrayHandle::__get_value() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void Mono::RuntimeGPtrArrayHandle::_ctor(::cordl_internals::intptr_t  ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ptr);
}
inline int32_t Mono::RuntimeGPtrArrayHandle::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::cordl_internals::intptr_t Mono::RuntimeGPtrArrayHandle::get_Item(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(*this, ___internal_method, i);
}
inline ::cordl_internals::intptr_t Mono::RuntimeGPtrArrayHandle::Lookup(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "Lookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(*this, ___internal_method, i);
}
inline void Mono::RuntimeGPtrArrayHandle::GPtrArrayFree(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "GPtrArrayFree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Mono::RuntimeGPtrArrayHandle::DestroyAndFree(ByRef<::Mono::RuntimeGPtrArrayHandle>  h)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "DestroyAndFree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::RuntimeGPtrArrayHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, h);
}
// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>", modifiers: "", def_value: Some("csnull") }]
constexpr ::Mono::RuntimeGPtrArrayHandle::RuntimeGPtrArrayHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->value = value;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
