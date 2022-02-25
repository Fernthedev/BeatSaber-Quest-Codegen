// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.IReferenceResolver
#include "Newtonsoft/Json/Serialization/IReferenceResolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: BidirectionalDictionary`2<TFirst, TSecond>
  template<typename TFirst, typename TSecond>
  class BidirectionalDictionary_2;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: DefaultReferenceResolver
  class DefaultReferenceResolver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Newtonsoft::Json::Serialization::DefaultReferenceResolver);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::DefaultReferenceResolver*, "Newtonsoft.Json.Serialization", "DefaultReferenceResolver");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.DefaultReferenceResolver
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 1202710
  // [NullableAttribute] Offset: 1202710
  class DefaultReferenceResolver : public ::Il2CppObject/*, public Newtonsoft::Json::Serialization::IReferenceResolver*/ {
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
    // private System.Int32 _referenceCount
    // Size: 0x4
    // Offset: 0x10
    int referenceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator Newtonsoft::Json::Serialization::IReferenceResolver
    operator Newtonsoft::Json::Serialization::IReferenceResolver() noexcept {
      return *reinterpret_cast<Newtonsoft::Json::Serialization::IReferenceResolver*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return referenceCount;
    }
    // Get instance field reference: private System.Int32 _referenceCount
    int& dyn__referenceCount();
    // private Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> GetMappings(System.Object context)
    // Offset: 0x152C35C
    Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::Il2CppObject*>* GetMappings(::Il2CppObject* context);
    // public System.Object ResolveReference(System.Object context, System.String reference)
    // Offset: 0x152C528
    ::Il2CppObject* ResolveReference(::Il2CppObject* context, ::StringW reference);
    // public System.String GetReference(System.Object context, System.Object value)
    // Offset: 0x152C5A4
    ::StringW GetReference(::Il2CppObject* context, ::Il2CppObject* value);
    // public System.Void AddReference(System.Object context, System.String reference, System.Object value)
    // Offset: 0x152C698
    void AddReference(::Il2CppObject* context, ::StringW reference, ::Il2CppObject* value);
    // public System.Boolean IsReferenced(System.Object context, System.Object value)
    // Offset: 0x152C70C
    bool IsReferenced(::Il2CppObject* context, ::Il2CppObject* value);
    // public System.Void .ctor()
    // Offset: 0x152C788
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultReferenceResolver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Serialization::DefaultReferenceResolver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultReferenceResolver*, creationType>()));
    }
  }; // Newtonsoft.Json.Serialization.DefaultReferenceResolver
  #pragma pack(pop)
  static check_size<sizeof(DefaultReferenceResolver), 16 + sizeof(int)> __Newtonsoft_Json_Serialization_DefaultReferenceResolverSizeCheck;
  static_assert(sizeof(DefaultReferenceResolver) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultReferenceResolver::GetMappings
// Il2CppName: GetMappings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::Il2CppObject*>* (Newtonsoft::Json::Serialization::DefaultReferenceResolver::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::DefaultReferenceResolver::GetMappings)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultReferenceResolver*), "GetMappings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultReferenceResolver::ResolveReference
// Il2CppName: ResolveReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Serialization::DefaultReferenceResolver::*)(::Il2CppObject*, ::StringW)>(&Newtonsoft::Json::Serialization::DefaultReferenceResolver::ResolveReference)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* reference = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultReferenceResolver*), "ResolveReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, reference});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultReferenceResolver::GetReference
// Il2CppName: GetReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::DefaultReferenceResolver::*)(::Il2CppObject*, ::Il2CppObject*)>(&Newtonsoft::Json::Serialization::DefaultReferenceResolver::GetReference)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultReferenceResolver*), "GetReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultReferenceResolver::AddReference
// Il2CppName: AddReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::DefaultReferenceResolver::*)(::Il2CppObject*, ::StringW, ::Il2CppObject*)>(&Newtonsoft::Json::Serialization::DefaultReferenceResolver::AddReference)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* reference = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultReferenceResolver*), "AddReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, reference, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultReferenceResolver::IsReferenced
// Il2CppName: IsReferenced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::DefaultReferenceResolver::*)(::Il2CppObject*, ::Il2CppObject*)>(&Newtonsoft::Json::Serialization::DefaultReferenceResolver::IsReferenced)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultReferenceResolver*), "IsReferenced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultReferenceResolver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
