#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNotation_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeListInfo_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Xml/zzzz__IDtdEntityInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaEntity_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x28c54ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.set_DocTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SchemaInfo::set_DocTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c5698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "set_DocTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.set_InternalDtdSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)(::StringW)>(&::System::Xml::Schema::SchemaInfo::set_InternalDtdSubset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c56a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "set_InternalDtdSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_ElementDecls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>* (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_ElementDecls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c56a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_ElementDecls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_UndeclaredElementDecls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>* (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_UndeclaredElementDecls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c56b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_UndeclaredElementDecls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_GeneralEntities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>* (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_GeneralEntities)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28c56b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_GeneralEntities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_ParameterEntities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>* (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_ParameterEntities)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28c5738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_ParameterEntities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_SchemaType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaType (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c57b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_SchemaType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.set_SchemaType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)(::System::Xml::Schema::SchemaType)>(&::System::Xml::Schema::SchemaInfo::set_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c57c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "set_SchemaType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_Notations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation*>* (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_Notations)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28c57c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_Notations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.Finish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::Finish)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x28c5848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_HasDefaultAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasDefaultAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c59fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.get_HasDefaultAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_HasNonCDataAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasNonCDataAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c5a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.get_HasNonCDataAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_LookupAttributeList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdAttributeListInfo* (::System::Xml::Schema::SchemaInfo::*)(::StringW, ::StringW)>(&::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupAttributeList)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x28c5a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.LookupAttributeList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_LookupEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdEntityInfo* (::System::Xml::Schema::SchemaInfo::*)(::StringW)>(&::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupEntity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28c5ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.LookupEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c5b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_InternalDtdSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_InternalDtdSubset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c5b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.get_InternalDtdSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Xml::IDtdInfo"
constexpr  System::Xml::Schema::SchemaInfo::operator ::System::Xml::IDtdInfo*() noexcept {
return static_cast<::System::Xml::IDtdInfo*>(static_cast<void*>(this));
}
constexpr void System::Xml::Schema::SchemaInfo::__set_elementDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>* System::Xml::Schema::SchemaInfo::__get_elementDecls()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*> System::Xml::Schema::SchemaInfo::__get_elementDecls() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*, 0x10>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_undeclaredElementDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>* System::Xml::Schema::SchemaInfo::__get_undeclaredElementDecls()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*> System::Xml::Schema::SchemaInfo::__get_undeclaredElementDecls() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*, 0x18>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_generalEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*, 0x20>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>* System::Xml::Schema::SchemaInfo::__get_generalEntities()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*> System::Xml::Schema::SchemaInfo::__get_generalEntities() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*, 0x20>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_parameterEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*, 0x28>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>* System::Xml::Schema::SchemaInfo::__get_parameterEntities()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*> System::Xml::Schema::SchemaInfo::__get_parameterEntities() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*, 0x28>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_docTypeName(::System::Xml::XmlQualifiedName*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlQualifiedName*, 0x30>(this, std::forward<::System::Xml::XmlQualifiedName*>(value));
}
constexpr ::System::Xml::XmlQualifiedName* System::Xml::Schema::SchemaInfo::__get_docTypeName()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlQualifiedName*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> System::Xml::Schema::SchemaInfo::__get_docTypeName() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlQualifiedName*, 0x30>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_internalDtdSubset(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::Schema::SchemaInfo::__get_internalDtdSubset()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& System::Xml::Schema::SchemaInfo::__get_internalDtdSubset() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_hasNonCDataAttributes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::Schema::SchemaInfo::__get_hasNonCDataAttributes()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& System::Xml::Schema::SchemaInfo::__get_hasNonCDataAttributes() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_hasDefaultAttributes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::Schema::SchemaInfo::__get_hasDefaultAttributes()  {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr bool const& System::Xml::Schema::SchemaInfo::__get_hasDefaultAttributes() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_targetNamespaces(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,bool>*, 0x48>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,bool>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* System::Xml::Schema::SchemaInfo::__get_targetNamespaces()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,bool>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,bool>*> System::Xml::Schema::SchemaInfo::__get_targetNamespaces() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,bool>*, 0x48>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_attributeDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaAttDef*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaAttDef*>*, 0x50>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaAttDef*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaAttDef*>* System::Xml::Schema::SchemaInfo::__get_attributeDecls()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaAttDef*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaAttDef*>*> System::Xml::Schema::SchemaInfo::__get_attributeDecls() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaAttDef*>*, 0x50>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_schemaType(::System::Xml::Schema::SchemaType  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::SchemaType, 0x58>(this, std::forward<::System::Xml::Schema::SchemaType>(value));
}
constexpr ::System::Xml::Schema::SchemaType& System::Xml::Schema::SchemaInfo::__get_schemaType()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::SchemaType, 0x58>(this);
}
constexpr ::System::Xml::Schema::SchemaType const& System::Xml::Schema::SchemaInfo::__get_schemaType() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::SchemaType, 0x58>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_elementDeclsByType(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*, 0x60>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>* System::Xml::Schema::SchemaInfo::__get_elementDeclsByType()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*> System::Xml::Schema::SchemaInfo::__get_elementDeclsByType() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*, 0x60>(this);
}
constexpr void System::Xml::Schema::SchemaInfo::__set_notations(::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation*>*, 0x68>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation*>* System::Xml::Schema::SchemaInfo::__get_notations()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation*>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation*>*> System::Xml::Schema::SchemaInfo::__get_notations() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation*>*, 0x68>(this);
}
inline ::System::Xml::Schema::SchemaInfo* System::Xml::Schema::SchemaInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::SchemaInfo*>());
}
inline void System::Xml::Schema::SchemaInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::Schema::SchemaInfo::set_DocTypeName(::System::Xml::XmlQualifiedName*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "set_DocTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaInfo::set_InternalDtdSubset(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "set_InternalDtdSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>* System::Xml::Schema::SchemaInfo::get_ElementDecls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_ElementDecls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>* System::Xml::Schema::SchemaInfo::get_UndeclaredElementDecls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_UndeclaredElementDecls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaElementDecl*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>* System::Xml::Schema::SchemaInfo::get_GeneralEntities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_GeneralEntities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>* System::Xml::Schema::SchemaInfo::get_ParameterEntities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_ParameterEntities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::SchemaEntity*>*, false>(*this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaType System::Xml::Schema::SchemaInfo::get_SchemaType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_SchemaType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaType, false>(*this, ___internal_method);
}
inline void System::Xml::Schema::SchemaInfo::set_SchemaType(::System::Xml::Schema::SchemaType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "set_SchemaType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation*>* System::Xml::Schema::SchemaInfo::get_Notations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "get_Notations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation*>*, false>(*this, ___internal_method);
}
inline void System::Xml::Schema::SchemaInfo::Finish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasDefaultAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.get_HasDefaultAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasNonCDataAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.get_HasNonCDataAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Xml::IDtdAttributeListInfo* System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupAttributeList(::StringW  prefix, ::StringW  localName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.LookupAttributeList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdAttributeListInfo*, false>(*this, ___internal_method, prefix, localName);
}
inline ::System::Xml::IDtdEntityInfo* System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupEntity(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.LookupEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdEntityInfo*, false>(*this, ___internal_method, name);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(*this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_InternalDtdSubset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaInfo*>::get(),
                            "System.Xml.IDtdInfo.get_InternalDtdSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
