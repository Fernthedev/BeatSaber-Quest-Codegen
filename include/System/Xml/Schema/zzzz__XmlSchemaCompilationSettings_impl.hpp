#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCompilationSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaCompilationSettings::*)()>(&::System::Xml::Schema::XmlSchemaCompilationSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28c72e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::XmlSchemaCompilationSettings::__set_enableUpaCheck(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::Schema::XmlSchemaCompilationSettings::__get_enableUpaCheck()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Xml::Schema::XmlSchemaCompilationSettings::__get_enableUpaCheck() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::System::Xml::Schema::XmlSchemaCompilationSettings* System::Xml::Schema::XmlSchemaCompilationSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlSchemaCompilationSettings*>());
}
inline void System::Xml::Schema::XmlSchemaCompilationSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
