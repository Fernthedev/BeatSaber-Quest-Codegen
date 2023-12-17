#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__ComDefaultInterfaceAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ComDefaultInterfaceAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::ComDefaultInterfaceAttribute::*)(::System::Type*)>(&::System::Runtime::InteropServices::ComDefaultInterfaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24d7220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComDefaultInterfaceAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::InteropServices::ComDefaultInterfaceAttribute::__set__val(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Runtime::InteropServices::ComDefaultInterfaceAttribute::__get__val()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Runtime::InteropServices::ComDefaultInterfaceAttribute::__get__val() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
inline ::System::Runtime::InteropServices::ComDefaultInterfaceAttribute* System::Runtime::InteropServices::ComDefaultInterfaceAttribute::New_ctor(::System::Type*  defaultInterface)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::InteropServices::ComDefaultInterfaceAttribute*>(defaultInterface));
}
inline void System::Runtime::InteropServices::ComDefaultInterfaceAttribute::_ctor(::System::Type*  defaultInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComDefaultInterfaceAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, defaultInterface);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
