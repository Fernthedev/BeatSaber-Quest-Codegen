#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__AmbientValueAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AmbientValueAttribute.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::AmbientValueAttribute::*)()>(&::System::ComponentModel::AmbientValueAttribute::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2905164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AmbientValueAttribute*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::AmbientValueAttribute::__set__Value_k__BackingField(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::ComponentModel::AmbientValueAttribute::__get__Value_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::ComponentModel::AmbientValueAttribute::__get__Value_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
inline ::System::Object* System::ComponentModel::AmbientValueAttribute::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AmbientValueAttribute*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
