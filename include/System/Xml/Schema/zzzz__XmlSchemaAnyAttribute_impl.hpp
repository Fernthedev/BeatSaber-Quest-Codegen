#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnyAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAnyAttribute.set_ProcessContents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAnyAttribute::*)(::System::Xml::Schema::XmlSchemaContentProcessing)>(&::System::Xml::Schema::XmlSchemaAnyAttribute::set_ProcessContents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c723c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                            "set_ProcessContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentProcessing>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAnyAttribute.BuildNamespaceList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAnyAttribute::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaAnyAttribute::BuildNamespaceList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28c7244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                            "BuildNamespaceList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAnyAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAnyAttribute::*)()>(&::System::Xml::Schema::XmlSchemaAnyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c72d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::XmlSchemaAnyAttribute::__set_ns(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaAnyAttribute::__get_ns()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaAnyAttribute::__get_ns() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Xml::Schema::XmlSchemaAnyAttribute::__set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaContentProcessing, 0x18>(this, std::forward<::System::Xml::Schema::XmlSchemaContentProcessing>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& System::Xml::Schema::XmlSchemaAnyAttribute::__get_processContents()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaContentProcessing, 0x18>(this);
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& System::Xml::Schema::XmlSchemaAnyAttribute::__get_processContents() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaContentProcessing, 0x18>(this);
}
constexpr void System::Xml::Schema::XmlSchemaAnyAttribute::__set_namespaceList(::System::Xml::Schema::NamespaceList*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::NamespaceList*, 0x20>(this, std::forward<::System::Xml::Schema::NamespaceList*>(value));
}
constexpr ::System::Xml::Schema::NamespaceList* System::Xml::Schema::XmlSchemaAnyAttribute::__get_namespaceList()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::NamespaceList*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::NamespaceList*> System::Xml::Schema::XmlSchemaAnyAttribute::__get_namespaceList() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::NamespaceList*, 0x20>(this);
}
inline void System::Xml::Schema::XmlSchemaAnyAttribute::set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                            "set_ProcessContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentProcessing>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaAnyAttribute::BuildNamespaceList(::StringW  targetNamespace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                            "BuildNamespaceList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, targetNamespace);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::XmlSchemaAnyAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlSchemaAnyAttribute*>());
}
inline void System::Xml::Schema::XmlSchemaAnyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
