#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Xml/Serialization/zzzz__XmlAttributeAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlAttributeAttribute::*)(::StringW)>(&::System::Xml::Serialization::XmlAttributeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2718564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAttributeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::Serialization::XmlAttributeAttribute::__set_attributeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Xml::Serialization::XmlAttributeAttribute::__get_attributeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "attributeName", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Xml::Serialization::XmlAttributeAttribute::XmlAttributeAttribute(::StringW attributeName)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<XmlAttributeAttribute>(attributeName))) {}
 void ::System::Xml::Serialization::XmlAttributeAttribute::_ctor(::StringW attributeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAttributeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attributeName);
}
} // end anonymous namespace
