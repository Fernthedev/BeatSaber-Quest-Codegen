#pragma once
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::TypeValuePair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TypeValuePair::*)(::System::Type*, ::System::Object*)>(&::Zenject::TypeValuePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eeb834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TypeValuePair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::TypeValuePair::__set_Type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* Zenject::TypeValuePair::__get_Type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> Zenject::TypeValuePair::__get_Type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Zenject::TypeValuePair::__set_Value(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* Zenject::TypeValuePair::__get_Value()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Zenject::TypeValuePair::__get_Value() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void Zenject::TypeValuePair::_ctor(::System::Type*  type, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TypeValuePair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, value);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::System::Type*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }]
constexpr ::Zenject::TypeValuePair::TypeValuePair(::System::Type*  Type, ::System::Object*  Value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Type = Type;
this->Value = Value;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
