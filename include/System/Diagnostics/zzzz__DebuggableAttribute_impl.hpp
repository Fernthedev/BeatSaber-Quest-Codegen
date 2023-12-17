#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggableAttribute_def.hpp"
#include "System/Diagnostics/zzzz__DebuggableAttribute_def.hpp"
constexpr void System::Diagnostics::__DebuggableAttribute__DebuggingModes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Diagnostics::__DebuggableAttribute__DebuggingModes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Diagnostics::__DebuggableAttribute__DebuggingModes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes::__DebuggableAttribute__DebuggingModes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes  System::Diagnostics::__DebuggableAttribute__DebuggingModes::None{static_cast<int32_t>(0x0)};
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes  System::Diagnostics::__DebuggableAttribute__DebuggingModes::Default{static_cast<int32_t>(0x1)};
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes  System::Diagnostics::__DebuggableAttribute__DebuggingModes::DisableOptimizations{static_cast<int32_t>(0x100)};
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes  System::Diagnostics::__DebuggableAttribute__DebuggingModes::IgnoreSymbolStoreSequencePoints{static_cast<int32_t>(0x2)};
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes  System::Diagnostics::__DebuggableAttribute__DebuggingModes::EnableEditAndContinue{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::System::Diagnostics::DebuggableAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DebuggableAttribute::*)(::System::Diagnostics::__DebuggableAttribute__DebuggingModes)>(&::System::Diagnostics::DebuggableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2579c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggableAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__DebuggableAttribute__DebuggingModes>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::DebuggableAttribute::__set_m_debuggingModes(::System::Diagnostics::__DebuggableAttribute__DebuggingModes  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::__DebuggableAttribute__DebuggingModes, 0x10>(this, std::forward<::System::Diagnostics::__DebuggableAttribute__DebuggingModes>(value));
}
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes& System::Diagnostics::DebuggableAttribute::__get_m_debuggingModes()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::__DebuggableAttribute__DebuggingModes, 0x10>(this);
}
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const& System::Diagnostics::DebuggableAttribute::__get_m_debuggingModes() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::__DebuggableAttribute__DebuggingModes, 0x10>(this);
}
inline ::System::Diagnostics::DebuggableAttribute* System::Diagnostics::DebuggableAttribute::New_ctor(::System::Diagnostics::__DebuggableAttribute__DebuggingModes  modes)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::DebuggableAttribute*>(modes));
}
inline void System::Diagnostics::DebuggableAttribute::_ctor(::System::Diagnostics::__DebuggableAttribute__DebuggingModes  modes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggableAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__DebuggableAttribute__DebuggingModes>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, modes);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
