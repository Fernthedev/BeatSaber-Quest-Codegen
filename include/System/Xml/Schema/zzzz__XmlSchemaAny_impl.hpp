#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAny_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.set_ProcessContents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAny::*)(::System::Xml::Schema::XmlSchemaContentProcessing)>(&::System::Xml::Schema::XmlSchemaAny::set_ProcessContents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c70d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(),
                            "set_ProcessContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentProcessing>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.get_NamespaceList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::NamespaceList* (::System::Xml::Schema::XmlSchemaAny::*)()>(&::System::Xml::Schema::XmlSchemaAny::get_NamespaceList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c70dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(),
                            "get_NamespaceList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.BuildNamespaceList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAny::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaAny::BuildNamespaceList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28c70e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(),
                            "BuildNamespaceList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAny::*)()>(&::System::Xml::Schema::XmlSchemaAny::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28c7174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::XmlSchemaAny::__set_ns(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaAny::__get_ns()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaAny::__get_ns() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void System::Xml::Schema::XmlSchemaAny::__set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaContentProcessing, 0x40>(this, std::forward<::System::Xml::Schema::XmlSchemaContentProcessing>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& System::Xml::Schema::XmlSchemaAny::__get_processContents()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaContentProcessing, 0x40>(this);
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& System::Xml::Schema::XmlSchemaAny::__get_processContents() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaContentProcessing, 0x40>(this);
}
constexpr void System::Xml::Schema::XmlSchemaAny::__set_namespaceList(::System::Xml::Schema::NamespaceList*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::NamespaceList*, 0x48>(this, std::forward<::System::Xml::Schema::NamespaceList*>(value));
}
constexpr ::System::Xml::Schema::NamespaceList* System::Xml::Schema::XmlSchemaAny::__get_namespaceList()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::NamespaceList*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::NamespaceList*> System::Xml::Schema::XmlSchemaAny::__get_namespaceList() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::NamespaceList*, 0x48>(this);
}
inline void System::Xml::Schema::XmlSchemaAny::set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(),
                            "set_ProcessContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentProcessing>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::XmlSchemaAny::get_NamespaceList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(),
                            "get_NamespaceList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList*, false>(*this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAny::BuildNamespaceList(::StringW  targetNamespace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(),
                            "BuildNamespaceList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, targetNamespace);
}
inline ::System::Xml::Schema::XmlSchemaAny* System::Xml::Schema::XmlSchemaAny::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlSchemaAny*>());
}
inline void System::Xml::Schema::XmlSchemaAny::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
