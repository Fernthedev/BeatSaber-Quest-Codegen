#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventArgs_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs.get_Severity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSeverityType (::System::Xml::Schema::ValidationEventArgs::*)()>(&::System::Xml::Schema::ValidationEventArgs::get_Severity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c5bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(),
                            "get_Severity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs.get_Exception
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaException* (::System::Xml::Schema::ValidationEventArgs::*)()>(&::System::Xml::Schema::ValidationEventArgs::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c5bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(),
                            "get_Exception",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::ValidationEventArgs::__set_ex(::System::Xml::Schema::XmlSchemaException*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaException*, 0x10>(this, std::forward<::System::Xml::Schema::XmlSchemaException*>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaException* System::Xml::Schema::ValidationEventArgs::__get_ex()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaException*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaException*> System::Xml::Schema::ValidationEventArgs::__get_ex() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaException*, 0x10>(this);
}
constexpr void System::Xml::Schema::ValidationEventArgs::__set_severity(::System::Xml::Schema::XmlSeverityType  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSeverityType, 0x18>(this, std::forward<::System::Xml::Schema::XmlSeverityType>(value));
}
constexpr ::System::Xml::Schema::XmlSeverityType& System::Xml::Schema::ValidationEventArgs::__get_severity()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSeverityType, 0x18>(this);
}
constexpr ::System::Xml::Schema::XmlSeverityType const& System::Xml::Schema::ValidationEventArgs::__get_severity() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSeverityType, 0x18>(this);
}
inline ::System::Xml::Schema::XmlSeverityType System::Xml::Schema::ValidationEventArgs::get_Severity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(),
                            "get_Severity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSeverityType, false>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaException* System::Xml::Schema::ValidationEventArgs::get_Exception()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(),
                            "get_Exception",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaException*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
