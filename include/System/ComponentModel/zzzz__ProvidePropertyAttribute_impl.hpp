#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ProvidePropertyAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ProvidePropertyAttribute.get_PropertyName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::ProvidePropertyAttribute::*)()>(&::System::ComponentModel::ProvidePropertyAttribute::get_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29155a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProvidePropertyAttribute*>::get(),
                            "get_PropertyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProvidePropertyAttribute.get_ReceiverTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::ProvidePropertyAttribute::*)()>(&::System::ComponentModel::ProvidePropertyAttribute::get_ReceiverTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29155ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProvidePropertyAttribute*>::get(),
                            "get_ReceiverTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::ProvidePropertyAttribute::__set__PropertyName_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::ComponentModel::ProvidePropertyAttribute::__get__PropertyName_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::ComponentModel::ProvidePropertyAttribute::__get__PropertyName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::ComponentModel::ProvidePropertyAttribute::__set__ReceiverTypeName_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::ComponentModel::ProvidePropertyAttribute::__get__ReceiverTypeName_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::ComponentModel::ProvidePropertyAttribute::__get__ReceiverTypeName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::StringW System::ComponentModel::ProvidePropertyAttribute::get_PropertyName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProvidePropertyAttribute*>::get(),
                            "get_PropertyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::ComponentModel::ProvidePropertyAttribute::get_ReceiverTypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProvidePropertyAttribute*>::get(),
                            "get_ReceiverTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
