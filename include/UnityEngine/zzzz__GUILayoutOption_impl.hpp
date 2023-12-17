#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
constexpr void UnityEngine::__GUILayoutOption__Type::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::__GUILayoutOption__Type::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::__GUILayoutOption__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__GUILayoutOption__Type::__GUILayoutOption__Type(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::fixedWidth{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::fixedHeight{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::minWidth{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::maxWidth{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::minHeight{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::maxHeight{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::stretchWidth{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::stretchHeight{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::alignStart{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::alignMiddle{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::alignEnd{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::alignJustify{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::equalSize{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::__GUILayoutOption__Type  UnityEngine::__GUILayoutOption__Type::spacing{static_cast<int32_t>(0xd)};
//  Writing Method size for method: ::UnityEngine::GUILayoutOption._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUILayoutOption::*)(::UnityEngine::__GUILayoutOption__Type, ::System::Object*)>(&::UnityEngine::GUILayoutOption::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d0e124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutOption*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__GUILayoutOption__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::GUILayoutOption::__set_type(::UnityEngine::__GUILayoutOption__Type  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__GUILayoutOption__Type, 0x10>(this, std::forward<::UnityEngine::__GUILayoutOption__Type>(value));
}
constexpr ::UnityEngine::__GUILayoutOption__Type& UnityEngine::GUILayoutOption::__get_type()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__GUILayoutOption__Type, 0x10>(this);
}
constexpr ::UnityEngine::__GUILayoutOption__Type const& UnityEngine::GUILayoutOption::__get_type() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__GUILayoutOption__Type, 0x10>(this);
}
constexpr void UnityEngine::GUILayoutOption::__set_value(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* UnityEngine::GUILayoutOption::__get_value()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> UnityEngine::GUILayoutOption::__get_value() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayoutOption::New_ctor(::UnityEngine::__GUILayoutOption__Type  type, ::System::Object*  value)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::GUILayoutOption*>(type, value));
}
inline void UnityEngine::GUILayoutOption::_ctor(::UnityEngine::__GUILayoutOption__Type  type, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutOption*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__GUILayoutOption__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
