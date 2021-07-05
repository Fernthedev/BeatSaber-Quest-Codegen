// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.IRemotingTypeInfo
#include "System/Runtime/Remoting/IRemotingTypeInfo.hpp"
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
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.TypeInfo
  class TypeInfo : public ::Il2CppObject/*, public System::Runtime::Remoting::IRemotingTypeInfo*/ {
    public:
    // private System.String serverType
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* serverType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String[] serverHierarchy
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* serverHierarchy;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.String[] interfacesImplemented
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppString*>* interfacesImplemented;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: TypeInfo
    TypeInfo(::Il2CppString* serverType_ = {}, ::Array<::Il2CppString*>* serverHierarchy_ = {}, ::Array<::Il2CppString*>* interfacesImplemented_ = {}) noexcept : serverType{serverType_}, serverHierarchy{serverHierarchy_}, interfacesImplemented{interfacesImplemented_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::IRemotingTypeInfo
    operator System::Runtime::Remoting::IRemotingTypeInfo() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::IRemotingTypeInfo*>(this);
    }
    // public System.Void .ctor(System.Type type)
    // Offset: 0x1600358
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInfo* New_ctor(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::TypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInfo*, creationType>(type)));
    }
    // public System.String get_TypeName()
    // Offset: 0x1602AFC
    ::Il2CppString* get_TypeName();
    // public System.Boolean CanCastTo(System.Type fromType, System.Object o)
    // Offset: 0x1602B04
    bool CanCastTo(System::Type* fromType, ::Il2CppObject* o);
  }; // System.Runtime.Remoting.TypeInfo
  #pragma pack(pop)
  static check_size<sizeof(TypeInfo), 32 + sizeof(::Array<::Il2CppString*>*)> __System_Runtime_Remoting_TypeInfoSizeCheck;
  static_assert(sizeof(TypeInfo) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::TypeInfo*, "System.Runtime.Remoting", "TypeInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::TypeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::TypeInfo::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::TypeInfo::*)()>(&System::Runtime::Remoting::TypeInfo::get_TypeName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::TypeInfo*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::TypeInfo::CanCastTo
// Il2CppName: CanCastTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::TypeInfo::*)(System::Type*, ::Il2CppObject*)>(&System::Runtime::Remoting::TypeInfo::CanCastTo)> {
  const MethodInfo* get() {
    static auto* fromType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::TypeInfo*), "CanCastTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromType, o});
  }
};
