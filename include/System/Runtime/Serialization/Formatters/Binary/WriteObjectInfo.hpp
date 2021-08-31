// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: IFormatterConverter
  class IFormatterConverter;
  // Forward declaring type: SerializationBinder
  class SerializationBinder;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SerObjectInfoCache
  class SerObjectInfoCache;
  // Forward declaring type: SerObjectInfoInit
  class SerObjectInfoInit;
  // Forward declaring type: ObjectWriter
  class ObjectWriter;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class WriteObjectInfo : public ::Il2CppObject {
    public:
    // System.Int32 objectInfoId
    // Size: 0x4
    // Offset: 0x10
    int objectInfoId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: objectInfoId and: obj
    char __padding0[0x4] = {};
    // System.Object obj
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* obj;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Type objectType
    // Size: 0x8
    // Offset: 0x20
    System::Type* objectType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Boolean isSi
    // Size: 0x1
    // Offset: 0x28
    bool isSi;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isNamed
    // Size: 0x1
    // Offset: 0x29
    bool isNamed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isTyped
    // Size: 0x1
    // Offset: 0x2A
    bool isTyped;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isArray
    // Size: 0x1
    // Offset: 0x2B
    bool isArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isArray and: si
    char __padding6[0x4] = {};
    // System.Runtime.Serialization.SerializationInfo si
    // Size: 0x8
    // Offset: 0x30
    System::Runtime::Serialization::SerializationInfo* si;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::SerializationInfo*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache
    // Size: 0x8
    // Offset: 0x38
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*) == 0x8);
    // System.Object[] memberData
    // Size: 0x8
    // Offset: 0x40
    ::Array<::Il2CppObject*>* memberData;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // System.Runtime.Serialization.ISerializationSurrogate serializationSurrogate
    // Size: 0x8
    // Offset: 0x48
    System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ISerializationSurrogate*) == 0x8);
    // System.Runtime.Serialization.StreamingContext context
    // Size: 0xC
    // Offset: 0x50
    System::Runtime::Serialization::StreamingContext context;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::StreamingContext) == 0xC);
    // Padding between fields: context and: serObjectInfoInit
    char __padding11[0x4] = {};
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*) == 0x8);
    // System.Int64 objectId
    // Size: 0x8
    // Offset: 0x68
    int64_t objectId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 assemId
    // Size: 0x8
    // Offset: 0x70
    int64_t assemId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.String binderTypeName
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* binderTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String binderAssemblyString
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* binderAssemblyString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: WriteObjectInfo
    WriteObjectInfo(int objectInfoId_ = {}, ::Il2CppObject* obj_ = {}, System::Type* objectType_ = {}, bool isSi_ = {}, bool isNamed_ = {}, bool isTyped_ = {}, bool isArray_ = {}, System::Runtime::Serialization::SerializationInfo* si_ = {}, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache_ = {}, ::Array<::Il2CppObject*>* memberData_ = {}, System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate_ = {}, System::Runtime::Serialization::StreamingContext context_ = {}, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit_ = {}, int64_t objectId_ = {}, int64_t assemId_ = {}, ::Il2CppString* binderTypeName_ = {}, ::Il2CppString* binderAssemblyString_ = {}) noexcept : objectInfoId{objectInfoId_}, obj{obj_}, objectType{objectType_}, isSi{isSi_}, isNamed{isNamed_}, isTyped{isTyped_}, isArray{isArray_}, si{si_}, cache{cache_}, memberData{memberData_}, serializationSurrogate{serializationSurrogate_}, context{context_}, serObjectInfoInit{serObjectInfoInit_}, objectId{objectId_}, assemId{assemId_}, binderTypeName{binderTypeName_}, binderAssemblyString{binderAssemblyString_} {}
    // Get instance field: System.Int32 objectInfoId
    int _get_objectInfoId();
    // Set instance field: System.Int32 objectInfoId
    void _set_objectInfoId(int value);
    // Get instance field: System.Object obj
    ::Il2CppObject* _get_obj();
    // Set instance field: System.Object obj
    void _set_obj(::Il2CppObject* value);
    // Get instance field: System.Type objectType
    System::Type* _get_objectType();
    // Set instance field: System.Type objectType
    void _set_objectType(System::Type* value);
    // Get instance field: System.Boolean isSi
    bool _get_isSi();
    // Set instance field: System.Boolean isSi
    void _set_isSi(bool value);
    // Get instance field: System.Boolean isNamed
    bool _get_isNamed();
    // Set instance field: System.Boolean isNamed
    void _set_isNamed(bool value);
    // Get instance field: System.Boolean isTyped
    bool _get_isTyped();
    // Set instance field: System.Boolean isTyped
    void _set_isTyped(bool value);
    // Get instance field: System.Boolean isArray
    bool _get_isArray();
    // Set instance field: System.Boolean isArray
    void _set_isArray(bool value);
    // Get instance field: System.Runtime.Serialization.SerializationInfo si
    System::Runtime::Serialization::SerializationInfo* _get_si();
    // Set instance field: System.Runtime.Serialization.SerializationInfo si
    void _set_si(System::Runtime::Serialization::SerializationInfo* value);
    // Get instance field: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* _get_cache();
    // Set instance field: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache
    void _set_cache(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* value);
    // Get instance field: System.Object[] memberData
    ::Array<::Il2CppObject*>* _get_memberData();
    // Set instance field: System.Object[] memberData
    void _set_memberData(::Array<::Il2CppObject*>* value);
    // Get instance field: System.Runtime.Serialization.ISerializationSurrogate serializationSurrogate
    System::Runtime::Serialization::ISerializationSurrogate* _get_serializationSurrogate();
    // Set instance field: System.Runtime.Serialization.ISerializationSurrogate serializationSurrogate
    void _set_serializationSurrogate(System::Runtime::Serialization::ISerializationSurrogate* value);
    // Get instance field: System.Runtime.Serialization.StreamingContext context
    System::Runtime::Serialization::StreamingContext _get_context();
    // Set instance field: System.Runtime.Serialization.StreamingContext context
    void _set_context(System::Runtime::Serialization::StreamingContext value);
    // Get instance field: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* _get_serObjectInfoInit();
    // Set instance field: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    void _set_serObjectInfoInit(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value);
    // Get instance field: System.Int64 objectId
    int64_t _get_objectId();
    // Set instance field: System.Int64 objectId
    void _set_objectId(int64_t value);
    // Get instance field: System.Int64 assemId
    int64_t _get_assemId();
    // Set instance field: System.Int64 assemId
    void _set_assemId(int64_t value);
    // Get instance field: private System.String binderTypeName
    ::Il2CppString* _get_binderTypeName();
    // Set instance field: private System.String binderTypeName
    void _set_binderTypeName(::Il2CppString* value);
    // Get instance field: private System.String binderAssemblyString
    ::Il2CppString* _get_binderAssemblyString();
    // Set instance field: private System.String binderAssemblyString
    void _set_binderAssemblyString(::Il2CppString* value);
    // System.Void ObjectEnd()
    // Offset: 0x161E518
    void ObjectEnd();
    // private System.Void InternalInit()
    // Offset: 0x1621730
    void InternalInit();
    // static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(System.Object obj, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x161DE44
    static System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(::Il2CppObject* obj, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, System::Runtime::Serialization::SerializationBinder* binder);
    // System.Void InitSerialize(System.Object obj, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x1621824
    void InitSerialize(::Il2CppObject* obj, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, System::Runtime::Serialization::SerializationBinder* binder);
    // static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x161EF48
    static System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(System::Type* objectType, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, System::Runtime::Serialization::SerializationBinder* binder);
    // System.Void InitSerialize(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x1622518
    void InitSerialize(System::Type* objectType, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, System::Runtime::Serialization::SerializationBinder* binder);
    // private System.Void InitSiWrite()
    // Offset: 0x1621E08
    void InitSiWrite();
    // static private System.Void CheckTypeForwardedFrom(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache, System.Type objectType, System.String binderAssemblyString)
    // Offset: 0x16220F0
    static void CheckTypeForwardedFrom(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache, System::Type* objectType, ::Il2CppString* binderAssemblyString);
    // private System.Void InitNoMembers()
    // Offset: 0x1621CF8
    void InitNoMembers();
    // private System.Void InitMemberInfo()
    // Offset: 0x1622254
    void InitMemberInfo();
    // System.String GetTypeFullName()
    // Offset: 0x16136B0
    ::Il2CppString* GetTypeFullName();
    // System.String GetAssemblyString()
    // Offset: 0x1613684
    ::Il2CppString* GetAssemblyString();
    // private System.Void InvokeSerializationBinder(System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x1621DE0
    void InvokeSerializationBinder(System::Runtime::Serialization::SerializationBinder* binder);
    // System.Type GetMemberType(System.Reflection.MemberInfo objMember)
    // Offset: 0x16227E8
    System::Type* GetMemberType(System::Reflection::MemberInfo* objMember);
    // System.Void GetMemberInfo(out System.String[] outMemberNames, out System.Type[] outMemberTypes, out System.Object[] outMemberData)
    // Offset: 0x161EE38
    void GetMemberInfo(ByRef<::Array<::Il2CppString*>*> outMemberNames, ByRef<::Array<System::Type*>*> outMemberTypes, ByRef<::Array<::Il2CppObject*>*> outMemberData);
    // static private System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
    // Offset: 0x162174C
    static System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* GetObjectInfo(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);
    // static private System.Void PutObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
    // Offset: 0x1621710
    static void PutObjectInfo(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);
    // System.Void .ctor()
    // Offset: 0x1621708
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WriteObjectInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WriteObjectInfo*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo
  #pragma pack(pop)
  static check_size<sizeof(WriteObjectInfo), 128 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_Formatters_Binary_WriteObjectInfoSizeCheck;
  static_assert(sizeof(WriteObjectInfo) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::ObjectEnd
// Il2CppName: ObjectEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::ObjectEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "ObjectEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InternalInit
// Il2CppName: InternalInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InternalInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InternalInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* (*)(::Il2CppObject*, System::Runtime::Serialization::ISurrogateSelector*, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, System::Runtime::Serialization::IFormatterConverter*, System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, System::Runtime::Serialization::SerializationBinder*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* objectWriter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "ObjectWriter")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, surrogateSelector, context, serObjectInfoInit, converter, objectWriter, binder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize
// Il2CppName: InitSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(::Il2CppObject*, System::Runtime::Serialization::ISurrogateSelector*, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, System::Runtime::Serialization::IFormatterConverter*, System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, System::Runtime::Serialization::SerializationBinder*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* objectWriter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "ObjectWriter")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InitSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, surrogateSelector, context, serObjectInfoInit, converter, objectWriter, binder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* (*)(System::Type*, System::Runtime::Serialization::ISurrogateSelector*, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, System::Runtime::Serialization::IFormatterConverter*, System::Runtime::Serialization::SerializationBinder*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, surrogateSelector, context, serObjectInfoInit, converter, binder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize
// Il2CppName: InitSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(System::Type*, System::Runtime::Serialization::ISurrogateSelector*, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, System::Runtime::Serialization::IFormatterConverter*, System::Runtime::Serialization::SerializationBinder*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InitSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, surrogateSelector, context, serObjectInfoInit, converter, binder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSiWrite
// Il2CppName: InitSiWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSiWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InitSiWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::CheckTypeForwardedFrom
// Il2CppName: CheckTypeForwardedFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*, System::Type*, ::Il2CppString*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::CheckTypeForwardedFrom)> {
  static const MethodInfo* get() {
    static auto* cache = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoCache")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* binderAssemblyString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "CheckTypeForwardedFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cache, objectType, binderAssemblyString});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitNoMembers
// Il2CppName: InitNoMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitNoMembers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InitNoMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitMemberInfo
// Il2CppName: InitMemberInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitMemberInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InitMemberInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetTypeFullName
// Il2CppName: GetTypeFullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetTypeFullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "GetTypeFullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetAssemblyString
// Il2CppName: GetAssemblyString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetAssemblyString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "GetAssemblyString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InvokeSerializationBinder
// Il2CppName: InvokeSerializationBinder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(System::Runtime::Serialization::SerializationBinder*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InvokeSerializationBinder)> {
  static const MethodInfo* get() {
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InvokeSerializationBinder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberType
// Il2CppName: GetMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(System::Reflection::MemberInfo*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberType)> {
  static const MethodInfo* get() {
    static auto* objMember = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "GetMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objMember});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberInfo
// Il2CppName: GetMemberInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(ByRef<::Array<::Il2CppString*>*>, ByRef<::Array<System::Type*>*>, ByRef<::Array<::Il2CppObject*>*>)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberInfo)> {
  static const MethodInfo* get() {
    static auto* outMemberNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    static auto* outMemberTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->this_arg;
    static auto* outMemberData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "GetMemberInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outMemberNames, outMemberTypes, outMemberData});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetObjectInfo
// Il2CppName: GetObjectInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* (*)(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetObjectInfo)> {
  static const MethodInfo* get() {
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "GetObjectInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serObjectInfoInit});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::PutObjectInfo
// Il2CppName: PutObjectInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::PutObjectInfo)> {
  static const MethodInfo* get() {
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* objectInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "PutObjectInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serObjectInfoInit, objectInfo});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
