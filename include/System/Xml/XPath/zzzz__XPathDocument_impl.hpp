#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathDocument_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNodeRef_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::System::Xml::XPath::XPathDocument.get_NameTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XPath::XPathDocument::*)()>(&::System::Xml::XPath::XPathDocument::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a9d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(),
                            "get_NameTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathDocument.GetXmlNamespaceNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XPath::XPathDocument::*)(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>)>(&::System::Xml::XPath::XPathDocument::GetXmlNamespaceNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28a9d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(),
                            "GetXmlNamespaceNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathDocument.LookupNamespaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XPath::XPathDocument::*)(::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>, int32_t, ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>)>(&::System::Xml::XPath::XPathDocument::LookupNamespaces)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28a9d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(),
                            "LookupNamespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::XPath::XPathDocument::__set_pageXmlNmsp(::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>, 0x10>(this, std::forward<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>(value));
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>& System::Xml::XPath::XPathDocument::__get_pageXmlNmsp()  {
return ::cordl_internals::getInstanceField<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>, 0x10>(this);
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& System::Xml::XPath::XPathDocument::__get_pageXmlNmsp() const {
return ::cordl_internals::getInstanceField<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>, 0x10>(this);
}
constexpr void System::Xml::XPath::XPathDocument::__set_idxXmlNmsp(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::XPath::XPathDocument::__get_idxXmlNmsp()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Xml::XPath::XPathDocument::__get_idxXmlNmsp() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Xml::XPath::XPathDocument::__set_nameTable(::System::Xml::XmlNameTable*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlNameTable*, 0x20>(this, std::forward<::System::Xml::XmlNameTable*>(value));
}
constexpr ::System::Xml::XmlNameTable* System::Xml::XPath::XPathDocument::__get_nameTable()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNameTable*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> System::Xml::XPath::XPathDocument::__get_nameTable() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNameTable*, 0x20>(this);
}
constexpr void System::Xml::XPath::XPathDocument::__set_mapNmsp(::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>*, 0x28>(this, std::forward<::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>* System::Xml::XPath::XPathDocument::__get_mapNmsp()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>*> System::Xml::XPath::XPathDocument::__get_mapNmsp() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>*, 0x28>(this);
}
inline ::System::Xml::XmlNameTable* System::Xml::XPath::XPathDocument::get_NameTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(),
                            "get_NameTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(*this, ___internal_method);
}
inline int32_t System::Xml::XPath::XPathDocument::GetXmlNamespaceNode(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>  pageXmlNmsp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(),
                            "GetXmlNamespaceNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, pageXmlNmsp);
}
inline int32_t System::Xml::XPath::XPathDocument::LookupNamespaces(::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  pageElem, int32_t  idxElem, ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>  pageNmsp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(),
                            "LookupNamespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, pageElem, idxElem, pageNmsp);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
