#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventArgs_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::PropertyChangedEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::PropertyChangedEventArgs::*)(::StringW)>(&::System::ComponentModel::PropertyChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29199b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangedEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::PropertyChangedEventArgs::__set__propertyName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::ComponentModel::PropertyChangedEventArgs::__get__propertyName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::ComponentModel::PropertyChangedEventArgs::__get__propertyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::System::ComponentModel::PropertyChangedEventArgs* System::ComponentModel::PropertyChangedEventArgs::New_ctor(::StringW  propertyName)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::PropertyChangedEventArgs*>(propertyName));
}
inline void System::ComponentModel::PropertyChangedEventArgs::_ctor(::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangedEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, propertyName);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
