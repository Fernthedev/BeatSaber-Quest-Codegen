#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__ClassInterfaceAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__ClassInterfaceType_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ClassInterfaceAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::ClassInterfaceAttribute::*)(::System::Runtime::InteropServices::ClassInterfaceType)>(&::System::Runtime::InteropServices::ClassInterfaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24d7248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ClassInterfaceAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::ClassInterfaceType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::InteropServices::ClassInterfaceAttribute::__set__val(::System::Runtime::InteropServices::ClassInterfaceType  value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::ClassInterfaceType, 0x10>(this, std::forward<::System::Runtime::InteropServices::ClassInterfaceType>(value));
}
constexpr ::System::Runtime::InteropServices::ClassInterfaceType& System::Runtime::InteropServices::ClassInterfaceAttribute::__get__val()  {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::ClassInterfaceType, 0x10>(this);
}
constexpr ::System::Runtime::InteropServices::ClassInterfaceType const& System::Runtime::InteropServices::ClassInterfaceAttribute::__get__val() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::ClassInterfaceType, 0x10>(this);
}
inline ::System::Runtime::InteropServices::ClassInterfaceAttribute* System::Runtime::InteropServices::ClassInterfaceAttribute::New_ctor(::System::Runtime::InteropServices::ClassInterfaceType  classInterfaceType)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::InteropServices::ClassInterfaceAttribute*>(classInterfaceType));
}
inline void System::Runtime::InteropServices::ClassInterfaceAttribute::_ctor(::System::Runtime::InteropServices::ClassInterfaceType  classInterfaceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ClassInterfaceAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::ClassInterfaceType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, classInterfaceType);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
