#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggerTypeProxyAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DebuggerTypeProxyAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DebuggerTypeProxyAttribute::*)(::System::Type*)>(&::System::Diagnostics::DebuggerTypeProxyAttribute::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2579cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerTypeProxyAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::DebuggerTypeProxyAttribute::__set_typeName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Diagnostics::DebuggerTypeProxyAttribute::__get_typeName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Diagnostics::DebuggerTypeProxyAttribute::__get_typeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::System::Diagnostics::DebuggerTypeProxyAttribute* System::Diagnostics::DebuggerTypeProxyAttribute::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::DebuggerTypeProxyAttribute*>(type));
}
inline void System::Diagnostics::DebuggerTypeProxyAttribute::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerTypeProxyAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
