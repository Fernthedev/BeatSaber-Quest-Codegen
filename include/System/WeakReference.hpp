// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.WeakReference
  // [ComVisibleAttribute] Offset: D7B440
  class WeakReference : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.Boolean isLongReference
    // Size: 0x1
    // Offset: 0x10
    bool isLongReference;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isLongReference and: gcHandle
    char __padding0[0x3] = {};
    // private System.Runtime.InteropServices.GCHandle gcHandle
    // Size: 0x4
    // Offset: 0x14
    System::Runtime::InteropServices::GCHandle gcHandle;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::GCHandle) == 0x4);
    // Creating value type constructor for type: WeakReference
    WeakReference(bool isLongReference_ = {}, System::Runtime::InteropServices::GCHandle gcHandle_ = {}) noexcept : isLongReference{isLongReference_}, gcHandle{gcHandle_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // private System.Void AllocateHandle(System.Object target)
    // Offset: 0x2333834
    void AllocateHandle(::Il2CppObject* target);
    // public System.Void .ctor(System.Object target)
    // Offset: 0x2333870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakReference* New_ctor(::Il2CppObject* target) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakReference*, creationType>(target)));
    }
    // public System.Void .ctor(System.Object target, System.Boolean trackResurrection)
    // Offset: 0x23338A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakReference* New_ctor(::Il2CppObject* target, bool trackResurrection) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakReference*, creationType>(target, trackResurrection)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x23338E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakReference* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakReference*, creationType>(info, context)));
    }
    // public System.Object get_Target()
    // Offset: 0x23339F8
    ::Il2CppObject* get_Target();
    // public System.Boolean get_TrackResurrection()
    // Offset: 0x2333A3C
    bool get_TrackResurrection();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2333AB4
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // protected System.Void .ctor()
    // Offset: 0x2333868
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakReference*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2333A44
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.WeakReference
  #pragma pack(pop)
  static check_size<sizeof(WeakReference), 20 + sizeof(System::Runtime::InteropServices::GCHandle)> __System_WeakReferenceSizeCheck;
  static_assert(sizeof(WeakReference) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::WeakReference*, "System", "WeakReference");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::WeakReference::AllocateHandle
// Il2CppName: AllocateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::WeakReference::*)(::Il2CppObject*)>(&System::WeakReference::AllocateHandle)> {
  const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::WeakReference*), "AllocateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::WeakReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::WeakReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::WeakReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::WeakReference::get_Target
// Il2CppName: get_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::WeakReference::*)()>(&System::WeakReference::get_Target)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::WeakReference*), "get_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::WeakReference::get_TrackResurrection
// Il2CppName: get_TrackResurrection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::WeakReference::*)()>(&System::WeakReference::get_TrackResurrection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::WeakReference*), "get_TrackResurrection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::WeakReference::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::WeakReference::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::WeakReference::GetObjectData)> {
  const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::WeakReference*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::WeakReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::WeakReference::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::WeakReference::*)()>(&System::WeakReference::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::WeakReference*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
