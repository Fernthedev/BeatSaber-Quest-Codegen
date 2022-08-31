// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationEventHandler
  class SerializationEventHandler;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationObjectManager
  class SerializationObjectManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::SerializationObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationObjectManager*, "System.Runtime.Serialization", "SerializationObjectManager");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SerializationObjectManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializationObjectManager : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Hashtable m_objectSeenTable
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* m_objectSeenTable;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Runtime.Serialization.SerializationEventHandler m_onSerializedHandler
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::Serialization::SerializationEventHandler* m_onSerializedHandler;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::SerializationEventHandler*) == 0x8);
    // private System.Runtime.Serialization.StreamingContext m_context
    // Size: 0xC
    // Offset: 0x20
    ::System::Runtime::Serialization::StreamingContext m_context;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::StreamingContext) == 0xC);
    public:
    // Get instance field reference: private System.Collections.Hashtable m_objectSeenTable
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_m_objectSeenTable();
    // Get instance field reference: private System.Runtime.Serialization.SerializationEventHandler m_onSerializedHandler
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::SerializationEventHandler*& dyn_m_onSerializedHandler();
    // Get instance field reference: private System.Runtime.Serialization.StreamingContext m_context
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::StreamingContext& dyn_m_context();
    // public System.Void .ctor(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1639FD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationObjectManager* New_ctor(::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::SerializationObjectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationObjectManager*, creationType>(context)));
    }
    // public System.Void RegisterObject(System.Object obj)
    // Offset: 0x1629FFC
    void RegisterObject(::Il2CppObject* obj);
    // public System.Void RaiseOnSerializedEvent()
    // Offset: 0x163A11C
    void RaiseOnSerializedEvent();
    // private System.Void AddOnSerialized(System.Object obj)
    // Offset: 0x163A078
    void AddOnSerialized(::Il2CppObject* obj);
  }; // System.Runtime.Serialization.SerializationObjectManager
  #pragma pack(pop)
  static check_size<sizeof(SerializationObjectManager), 32 + sizeof(::System::Runtime::Serialization::StreamingContext)> __System_Runtime_Serialization_SerializationObjectManagerSizeCheck;
  static_assert(sizeof(SerializationObjectManager) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationObjectManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationObjectManager::RegisterObject
// Il2CppName: RegisterObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::SerializationObjectManager::RegisterObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationObjectManager*), "RegisterObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationObjectManager::RaiseOnSerializedEvent
// Il2CppName: RaiseOnSerializedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationObjectManager::*)()>(&System::Runtime::Serialization::SerializationObjectManager::RaiseOnSerializedEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationObjectManager*), "RaiseOnSerializedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationObjectManager::AddOnSerialized
// Il2CppName: AddOnSerialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::SerializationObjectManager::AddOnSerialized)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationObjectManager*), "AddOnSerialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
