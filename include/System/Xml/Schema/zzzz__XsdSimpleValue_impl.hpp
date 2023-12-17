#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XsdSimpleValue_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XsdSimpleValue.get_XmlType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (::System::Xml::Schema::XsdSimpleValue::*)()>(&::System::Xml::Schema::XsdSimpleValue::get_XmlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b0d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue*>::get(),
                            "get_XmlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdSimpleValue.get_TypedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::XsdSimpleValue::*)()>(&::System::Xml::Schema::XsdSimpleValue::get_TypedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b0d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue*>::get(),
                            "get_TypedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::XsdSimpleValue::__set_xmlType(::System::Xml::Schema::XmlSchemaSimpleType*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaSimpleType*, 0x10>(this, std::forward<::System::Xml::Schema::XmlSchemaSimpleType*>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::XsdSimpleValue::__get_xmlType()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaSimpleType*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> System::Xml::Schema::XsdSimpleValue::__get_xmlType() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaSimpleType*, 0x10>(this);
}
constexpr void System::Xml::Schema::XsdSimpleValue::__set_typedValue(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Xml::Schema::XsdSimpleValue::__get_typedValue()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Xml::Schema::XsdSimpleValue::__get_typedValue() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::XsdSimpleValue::get_XmlType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue*>::get(),
                            "get_XmlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*, false>(*this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XsdSimpleValue::get_TypedValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue*>::get(),
                            "get_TypedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
