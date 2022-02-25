// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.IDtdInfo
#include "System/Xml/IDtdInfo.hpp"
// Including type: System.Xml.Schema.SchemaType
#include "System/Xml/Schema/SchemaType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
  // Forward declaring type: IDtdAttributeListInfo
  class IDtdAttributeListInfo;
  // Forward declaring type: IDtdEntityInfo
  class IDtdEntityInfo;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaElementDecl
  class SchemaElementDecl;
  // Forward declaring type: SchemaEntity
  class SchemaEntity;
  // Forward declaring type: SchemaAttDef
  class SchemaAttDef;
  // Forward declaring type: SchemaNotation
  class SchemaNotation;
  // Forward declaring type: XmlSchemaElement
  class XmlSchemaElement;
  // Forward declaring type: XmlSchemaObject
  class XmlSchemaObject;
  // Forward declaring type: AttributeMatchState
  struct AttributeMatchState;
  // Forward declaring type: ValidationEventHandler
  class ValidationEventHandler;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaInfo
  class SchemaInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Xml::Schema::SchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::SchemaInfo*, "System.Xml.Schema", "SchemaInfo");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.SchemaInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class SchemaInfo : public ::Il2CppObject/*, public System::Xml::IDtdInfo*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> elementDecls
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>* elementDecls;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> undeclaredElementDecls
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>* undeclaredElementDecls;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> generalEntities
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaEntity*>* generalEntities;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaEntity*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> parameterEntities
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaEntity*>* parameterEntities;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaEntity*>*) == 0x8);
    // private System.Xml.XmlQualifiedName docTypeName
    // Size: 0x8
    // Offset: 0x30
    System::Xml::XmlQualifiedName* docTypeName;
    // Field size check
    static_assert(sizeof(System::Xml::XmlQualifiedName*) == 0x8);
    // private System.String internalDtdSubset
    // Size: 0x8
    // Offset: 0x38
    ::StringW internalDtdSubset;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean hasNonCDataAttributes
    // Size: 0x1
    // Offset: 0x40
    bool hasNonCDataAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasDefaultAttributes
    // Size: 0x1
    // Offset: 0x41
    bool hasDefaultAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasDefaultAttributes and: targetNamespaces
    char __padding7[0x6] = {};
    // private System.Collections.Generic.Dictionary`2<System.String,System.Boolean> targetNamespaces
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::Dictionary_2<::StringW, bool>* targetNamespaces;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::StringW, bool>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef> attributeDecls
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaAttDef*>* attributeDecls;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaAttDef*>*) == 0x8);
    // private System.Int32 errorCount
    // Size: 0x4
    // Offset: 0x58
    int errorCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Xml.Schema.SchemaType schemaType
    // Size: 0x4
    // Offset: 0x5C
    System::Xml::Schema::SchemaType schemaType;
    // Field size check
    static_assert(sizeof(System::Xml::Schema::SchemaType) == 0x4);
    // private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> elementDeclsByType
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>* elementDeclsByType;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Xml.Schema.SchemaNotation> notations
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Generic::Dictionary_2<::StringW, System::Xml::Schema::SchemaNotation*>* notations;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::StringW, System::Xml::Schema::SchemaNotation*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Xml::IDtdInfo
    operator System::Xml::IDtdInfo() noexcept {
      return *reinterpret_cast<System::Xml::IDtdInfo*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> elementDecls
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>*& dyn_elementDecls();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> undeclaredElementDecls
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>*& dyn_undeclaredElementDecls();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> generalEntities
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaEntity*>*& dyn_generalEntities();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> parameterEntities
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaEntity*>*& dyn_parameterEntities();
    // Get instance field reference: private System.Xml.XmlQualifiedName docTypeName
    System::Xml::XmlQualifiedName*& dyn_docTypeName();
    // Get instance field reference: private System.String internalDtdSubset
    ::StringW& dyn_internalDtdSubset();
    // Get instance field reference: private System.Boolean hasNonCDataAttributes
    bool& dyn_hasNonCDataAttributes();
    // Get instance field reference: private System.Boolean hasDefaultAttributes
    bool& dyn_hasDefaultAttributes();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Boolean> targetNamespaces
    System::Collections::Generic::Dictionary_2<::StringW, bool>*& dyn_targetNamespaces();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef> attributeDecls
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaAttDef*>*& dyn_attributeDecls();
    // Get instance field reference: private System.Int32 errorCount
    int& dyn_errorCount();
    // Get instance field reference: private System.Xml.Schema.SchemaType schemaType
    System::Xml::Schema::SchemaType& dyn_schemaType();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> elementDeclsByType
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>*& dyn_elementDeclsByType();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Xml.Schema.SchemaNotation> notations
    System::Collections::Generic::Dictionary_2<::StringW, System::Xml::Schema::SchemaNotation*>*& dyn_notations();
    // public System.Xml.XmlQualifiedName get_DocTypeName()
    // Offset: 0x169463C
    System::Xml::XmlQualifiedName* get_DocTypeName();
    // public System.Void set_DocTypeName(System.Xml.XmlQualifiedName value)
    // Offset: 0x1694644
    void set_DocTypeName(System::Xml::XmlQualifiedName* value);
    // System.Void set_InternalDtdSubset(System.String value)
    // Offset: 0x169464C
    void set_InternalDtdSubset(::StringW value);
    // System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> get_ElementDecls()
    // Offset: 0x1694654
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>* get_ElementDecls();
    // System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> get_UndeclaredElementDecls()
    // Offset: 0x169465C
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>* get_UndeclaredElementDecls();
    // System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> get_GeneralEntities()
    // Offset: 0x1694664
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaEntity*>* get_GeneralEntities();
    // System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> get_ParameterEntities()
    // Offset: 0x16946D8
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaEntity*>* get_ParameterEntities();
    // System.Xml.Schema.SchemaType get_SchemaType()
    // Offset: 0x169474C
    System::Xml::Schema::SchemaType get_SchemaType();
    // System.Void set_SchemaType(System.Xml.Schema.SchemaType value)
    // Offset: 0x1694754
    void set_SchemaType(System::Xml::Schema::SchemaType value);
    // System.Collections.Generic.Dictionary`2<System.String,System.Boolean> get_TargetNamespaces()
    // Offset: 0x169475C
    System::Collections::Generic::Dictionary_2<::StringW, bool>* get_TargetNamespaces();
    // System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> get_ElementDeclsByType()
    // Offset: 0x1694764
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>* get_ElementDeclsByType();
    // System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef> get_AttributeDecls()
    // Offset: 0x169476C
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaAttDef*>* get_AttributeDecls();
    // System.Collections.Generic.Dictionary`2<System.String,System.Xml.Schema.SchemaNotation> get_Notations()
    // Offset: 0x1694774
    System::Collections::Generic::Dictionary_2<::StringW, System::Xml::Schema::SchemaNotation*>* get_Notations();
    // System.Int32 get_ErrorCount()
    // Offset: 0x16947E8
    int get_ErrorCount();
    // System.Void set_ErrorCount(System.Int32 value)
    // Offset: 0x16947F0
    void set_ErrorCount(int value);
    // private System.Boolean System.Xml.IDtdInfo.get_HasDefaultAttributes()
    // Offset: 0x1695B78
    bool System_Xml_IDtdInfo_get_HasDefaultAttributes();
    // private System.Boolean System.Xml.IDtdInfo.get_HasNonCDataAttributes()
    // Offset: 0x1695B80
    bool System_Xml_IDtdInfo_get_HasNonCDataAttributes();
    // private System.Xml.XmlQualifiedName System.Xml.IDtdInfo.get_Name()
    // Offset: 0x1695CFC
    System::Xml::XmlQualifiedName* System_Xml_IDtdInfo_get_Name();
    // private System.String System.Xml.IDtdInfo.get_InternalDtdSubset()
    // Offset: 0x1695D04
    ::StringW System_Xml_IDtdInfo_get_InternalDtdSubset();
    // System.Xml.Schema.SchemaElementDecl GetElementDecl(System.Xml.XmlQualifiedName qname)
    // Offset: 0x16947F8
    System::Xml::Schema::SchemaElementDecl* GetElementDecl(System::Xml::XmlQualifiedName* qname);
    // System.Xml.Schema.SchemaElementDecl GetTypeDecl(System.Xml.XmlQualifiedName qname)
    // Offset: 0x1694878
    System::Xml::Schema::SchemaElementDecl* GetTypeDecl(System::Xml::XmlQualifiedName* qname);
    // System.Xml.Schema.XmlSchemaElement GetElement(System.Xml.XmlQualifiedName qname)
    // Offset: 0x16948F8
    System::Xml::Schema::XmlSchemaElement* GetElement(System::Xml::XmlQualifiedName* qname);
    // System.Boolean HasSchema(System.String ns)
    // Offset: 0x1694914
    bool HasSchema(::StringW ns);
    // System.Boolean Contains(System.String ns)
    // Offset: 0x169497C
    bool Contains(::StringW ns);
    // System.Xml.Schema.SchemaAttDef GetAttributeXdr(System.Xml.Schema.SchemaElementDecl ed, System.Xml.XmlQualifiedName qname)
    // Offset: 0x16949E4
    System::Xml::Schema::SchemaAttDef* GetAttributeXdr(System::Xml::Schema::SchemaElementDecl* ed, System::Xml::XmlQualifiedName* qname);
    // System.Xml.Schema.SchemaAttDef GetAttributeXsd(System.Xml.Schema.SchemaElementDecl ed, System.Xml.XmlQualifiedName qname, System.Xml.Schema.XmlSchemaObject partialValidationType, out System.Xml.Schema.AttributeMatchState attributeMatchState)
    // Offset: 0x1694B2C
    System::Xml::Schema::SchemaAttDef* GetAttributeXsd(System::Xml::Schema::SchemaElementDecl* ed, System::Xml::XmlQualifiedName* qname, System::Xml::Schema::XmlSchemaObject* partialValidationType, ByRef<System::Xml::Schema::AttributeMatchState> attributeMatchState);
    // System.Xml.Schema.SchemaAttDef GetAttributeXsd(System.Xml.Schema.SchemaElementDecl ed, System.Xml.XmlQualifiedName qname, ref System.Boolean skip)
    // Offset: 0x1694D44
    System::Xml::Schema::SchemaAttDef* GetAttributeXsd(System::Xml::Schema::SchemaElementDecl* ed, System::Xml::XmlQualifiedName* qname, ByRef<bool> skip);
    // System.Void Add(System.Xml.Schema.SchemaInfo sinfo, System.Xml.Schema.ValidationEventHandler eventhandler)
    // Offset: 0x1694E80
    void Add(System::Xml::Schema::SchemaInfo* sinfo, System::Xml::Schema::ValidationEventHandler* eventhandler);
    // System.Void Finish()
    // Offset: 0x16959F0
    void Finish();
    // private System.Xml.IDtdAttributeListInfo System.Xml.IDtdInfo.LookupAttributeList(System.String prefix, System.String localName)
    // Offset: 0x1695B88
    System::Xml::IDtdAttributeListInfo* System_Xml_IDtdInfo_LookupAttributeList(::StringW prefix, ::StringW localName);
    // private System.Xml.IDtdEntityInfo System.Xml.IDtdInfo.LookupEntity(System.String name)
    // Offset: 0x1695C4C
    System::Xml::IDtdEntityInfo* System_Xml_IDtdInfo_LookupEntity(::StringW name);
    // System.Void .ctor()
    // Offset: 0x16944F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchemaInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::Schema::SchemaInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchemaInfo*, creationType>()));
    }
  }; // System.Xml.Schema.SchemaInfo
  #pragma pack(pop)
  static check_size<sizeof(SchemaInfo), 104 + sizeof(System::Collections::Generic::Dictionary_2<::StringW, System::Xml::Schema::SchemaNotation*>*)> __System_Xml_Schema_SchemaInfoSizeCheck;
  static_assert(sizeof(SchemaInfo) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::get_DocTypeName
// Il2CppName: get_DocTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlQualifiedName* (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::get_DocTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "get_DocTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::set_DocTypeName
// Il2CppName: set_DocTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaInfo::*)(System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::SchemaInfo::set_DocTypeName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "set_DocTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::set_InternalDtdSubset
// Il2CppName: set_InternalDtdSubset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaInfo::*)(::StringW)>(&System::Xml::Schema::SchemaInfo::set_InternalDtdSubset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "set_InternalDtdSubset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::get_ElementDecls
// Il2CppName: get_ElementDecls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>* (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::get_ElementDecls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "get_ElementDecls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::get_UndeclaredElementDecls
// Il2CppName: get_UndeclaredElementDecls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>* (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::get_UndeclaredElementDecls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "get_UndeclaredElementDecls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::get_GeneralEntities
// Il2CppName: get_GeneralEntities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaEntity*>* (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::get_GeneralEntities)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "get_GeneralEntities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::get_ParameterEntities
// Il2CppName: get_ParameterEntities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaEntity*>* (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::get_ParameterEntities)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "get_ParameterEntities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::get_SchemaType
// Il2CppName: get_SchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::SchemaType (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::get_SchemaType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "get_SchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::set_SchemaType
// Il2CppName: set_SchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaInfo::*)(System::Xml::Schema::SchemaType)>(&System::Xml::Schema::SchemaInfo::set_SchemaType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "set_SchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::get_TargetNamespaces
// Il2CppName: get_TargetNamespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::StringW, bool>* (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::get_TargetNamespaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "get_TargetNamespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::get_ElementDeclsByType
// Il2CppName: get_ElementDeclsByType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaElementDecl*>* (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::get_ElementDeclsByType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "get_ElementDeclsByType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::get_AttributeDecls
// Il2CppName: get_AttributeDecls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, System::Xml::Schema::SchemaAttDef*>* (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::get_AttributeDecls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "get_AttributeDecls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::get_Notations
// Il2CppName: get_Notations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::StringW, System::Xml::Schema::SchemaNotation*>* (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::get_Notations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "get_Notations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::get_ErrorCount
// Il2CppName: get_ErrorCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::get_ErrorCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "get_ErrorCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::set_ErrorCount
// Il2CppName: set_ErrorCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaInfo::*)(int)>(&System::Xml::Schema::SchemaInfo::set_ErrorCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "set_ErrorCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasDefaultAttributes
// Il2CppName: System.Xml.IDtdInfo.get_HasDefaultAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasDefaultAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "System.Xml.IDtdInfo.get_HasDefaultAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasNonCDataAttributes
// Il2CppName: System.Xml.IDtdInfo.get_HasNonCDataAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasNonCDataAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "System.Xml.IDtdInfo.get_HasNonCDataAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_Name
// Il2CppName: System.Xml.IDtdInfo.get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlQualifiedName* (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "System.Xml.IDtdInfo.get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_InternalDtdSubset
// Il2CppName: System.Xml.IDtdInfo.get_InternalDtdSubset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_InternalDtdSubset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "System.Xml.IDtdInfo.get_InternalDtdSubset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::GetElementDecl
// Il2CppName: GetElementDecl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::SchemaElementDecl* (System::Xml::Schema::SchemaInfo::*)(System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::SchemaInfo::GetElementDecl)> {
  static const MethodInfo* get() {
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "GetElementDecl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qname});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::GetTypeDecl
// Il2CppName: GetTypeDecl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::SchemaElementDecl* (System::Xml::Schema::SchemaInfo::*)(System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::SchemaInfo::GetTypeDecl)> {
  static const MethodInfo* get() {
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "GetTypeDecl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qname});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::GetElement
// Il2CppName: GetElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::XmlSchemaElement* (System::Xml::Schema::SchemaInfo::*)(System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::SchemaInfo::GetElement)> {
  static const MethodInfo* get() {
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "GetElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qname});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::HasSchema
// Il2CppName: HasSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaInfo::*)(::StringW)>(&System::Xml::Schema::SchemaInfo::HasSchema)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "HasSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaInfo::*)(::StringW)>(&System::Xml::Schema::SchemaInfo::Contains)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::GetAttributeXdr
// Il2CppName: GetAttributeXdr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::SchemaAttDef* (System::Xml::Schema::SchemaInfo::*)(System::Xml::Schema::SchemaElementDecl*, System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::SchemaInfo::GetAttributeXdr)> {
  static const MethodInfo* get() {
    static auto* ed = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaElementDecl")->byval_arg;
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "GetAttributeXdr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ed, qname});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::GetAttributeXsd
// Il2CppName: GetAttributeXsd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::SchemaAttDef* (System::Xml::Schema::SchemaInfo::*)(System::Xml::Schema::SchemaElementDecl*, System::Xml::XmlQualifiedName*, System::Xml::Schema::XmlSchemaObject*, ByRef<System::Xml::Schema::AttributeMatchState>)>(&System::Xml::Schema::SchemaInfo::GetAttributeXsd)> {
  static const MethodInfo* get() {
    static auto* ed = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaElementDecl")->byval_arg;
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* partialValidationType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObject")->byval_arg;
    static auto* attributeMatchState = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "AttributeMatchState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "GetAttributeXsd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ed, qname, partialValidationType, attributeMatchState});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::GetAttributeXsd
// Il2CppName: GetAttributeXsd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::SchemaAttDef* (System::Xml::Schema::SchemaInfo::*)(System::Xml::Schema::SchemaElementDecl*, System::Xml::XmlQualifiedName*, ByRef<bool>)>(&System::Xml::Schema::SchemaInfo::GetAttributeXsd)> {
  static const MethodInfo* get() {
    static auto* ed = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaElementDecl")->byval_arg;
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* skip = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "GetAttributeXsd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ed, qname, skip});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaInfo::*)(System::Xml::Schema::SchemaInfo*, System::Xml::Schema::ValidationEventHandler*)>(&System::Xml::Schema::SchemaInfo::Add)> {
  static const MethodInfo* get() {
    static auto* sinfo = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaInfo")->byval_arg;
    static auto* eventhandler = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sinfo, eventhandler});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaInfo::*)()>(&System::Xml::Schema::SchemaInfo::Finish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupAttributeList
// Il2CppName: System.Xml.IDtdInfo.LookupAttributeList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IDtdAttributeListInfo* (System::Xml::Schema::SchemaInfo::*)(::StringW, ::StringW)>(&System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupAttributeList)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "System.Xml.IDtdInfo.LookupAttributeList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupEntity
// Il2CppName: System.Xml.IDtdInfo.LookupEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IDtdEntityInfo* (System::Xml::Schema::SchemaInfo::*)(::StringW)>(&System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupEntity)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaInfo*), "System.Xml.IDtdInfo.LookupEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
