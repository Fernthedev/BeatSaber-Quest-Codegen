#pragma once
#include "System/Runtime/CompilerServices/zzzz__CustomConstantAttribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__DateTimeConstantAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::DateTimeConstantAttribute.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::CompilerServices::DateTimeConstantAttribute::*)()>(&::System::Runtime::CompilerServices::DateTimeConstantAttribute::get_Value)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24daf38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DateTimeConstantAttribute*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DateTimeConstantAttribute*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::DateTimeConstantAttribute::__set__date(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x10>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& System::Runtime::CompilerServices::DateTimeConstantAttribute::__get__date()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x10>(this);
}
constexpr ::System::DateTime const& System::Runtime::CompilerServices::DateTimeConstantAttribute::__get__date() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x10>(this);
}
inline ::System::Object* System::Runtime::CompilerServices::DateTimeConstantAttribute::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DateTimeConstantAttribute*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
