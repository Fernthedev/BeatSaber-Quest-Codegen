#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
constexpr void GlobalNamespace::__NullAllowed__Context::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__NullAllowed__Context::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__NullAllowed__Context::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__NullAllowed__Context::__NullAllowed__Context(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__NullAllowed__Context  GlobalNamespace::__NullAllowed__Context::Everywhere{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__NullAllowed__Context  GlobalNamespace::__NullAllowed__Context::Prefab{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::NullAllowed._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NullAllowed::*)(::GlobalNamespace::__NullAllowed__Context)>(&::GlobalNamespace::NullAllowed::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21010b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowed.IsNullAllowedFor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NullAllowed::*)(::GlobalNamespace::__NullAllowed__Context)>(&::GlobalNamespace::NullAllowed::IsNullAllowedFor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21010e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(),
                            "IsNullAllowedFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NullAllowed::__set__context(::GlobalNamespace::__NullAllowed__Context  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__NullAllowed__Context, 0x10>(this, std::forward<::GlobalNamespace::__NullAllowed__Context>(value));
}
constexpr ::GlobalNamespace::__NullAllowed__Context& GlobalNamespace::NullAllowed::__get__context()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NullAllowed__Context, 0x10>(this);
}
constexpr ::GlobalNamespace::__NullAllowed__Context const& GlobalNamespace::NullAllowed::__get__context() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NullAllowed__Context, 0x10>(this);
}
/// @param context: ::GlobalNamespace::__NullAllowed__Context (default: static_cast<int32_t>(0x0))
inline ::GlobalNamespace::NullAllowed* GlobalNamespace::NullAllowed::New_ctor(::GlobalNamespace::__NullAllowed__Context  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NullAllowed*>(context));
}
/// @param context: ::GlobalNamespace::__NullAllowed__Context (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::NullAllowed::_ctor(::GlobalNamespace::__NullAllowed__Context  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline bool GlobalNamespace::NullAllowed::IsNullAllowedFor(::GlobalNamespace::__NullAllowed__Context  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(),
                            "IsNullAllowedFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
