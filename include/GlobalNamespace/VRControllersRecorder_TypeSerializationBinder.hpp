// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRControllersRecorder
#include "GlobalNamespace/VRControllersRecorder.hpp"
// Including type: System.Runtime.Serialization.SerializationBinder
#include "System/Runtime/Serialization/SerializationBinder.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorder/TypeSerializationBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorder::TypeSerializationBinder : public System::Runtime::Serialization::SerializationBinder {
    public:
    // Creating value type constructor for type: TypeSerializationBinder
    TypeSerializationBinder() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x135B75C
    // Implemented from: System.Runtime.Serialization.SerializationBinder
    // Base method: System.Void SerializationBinder::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorder::TypeSerializationBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllersRecorder::TypeSerializationBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorder::TypeSerializationBinder*, creationType>()));
    }
    // public override System.Type BindToType(System.String assemblyName, System.String typeName)
    // Offset: 0x135C31C
    // Implemented from: System.Runtime.Serialization.SerializationBinder
    // Base method: System.Type SerializationBinder::BindToType(System.String assemblyName, System.String typeName)
    System::Type* BindToType(::Il2CppString* assemblyName, ::Il2CppString* typeName);
  }; // VRControllersRecorder/TypeSerializationBinder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorder::TypeSerializationBinder*, "", "VRControllersRecorder/TypeSerializationBinder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::TypeSerializationBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::TypeSerializationBinder::BindToType
// Il2CppName: BindToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (GlobalNamespace::VRControllersRecorder::TypeSerializationBinder::*)(::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::VRControllersRecorder::TypeSerializationBinder::BindToType)> {
  static const MethodInfo* get() {
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder::TypeSerializationBinder*), "BindToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblyName, typeName});
  }
};
