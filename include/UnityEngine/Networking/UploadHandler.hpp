// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.UploadHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DFF660
  class UploadHandler : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: UploadHandler
    UploadHandler(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    System::IntPtr& dyn_m_Ptr();
    // private System.Void Release()
    // Offset: 0x23F2EC0
    void Release();
    // public System.Void Dispose()
    // Offset: 0x23F17E8
    void Dispose();
    // System.Void .ctor()
    // Offset: 0x23F2F00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UploadHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::UploadHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UploadHandler*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x23F2F08
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.Networking.UploadHandler
  #pragma pack(pop)
  static check_size<sizeof(UploadHandler), 16 + sizeof(System::IntPtr)> __UnityEngine_Networking_UploadHandlerSizeCheck;
  static_assert(sizeof(UploadHandler) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UploadHandler*, "UnityEngine.Networking", "UploadHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::UploadHandler::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UploadHandler::*)()>(&UnityEngine::Networking::UploadHandler::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UploadHandler*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::UploadHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UploadHandler::*)()>(&UnityEngine::Networking::UploadHandler::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UploadHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::UploadHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::UploadHandler::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UploadHandler::*)()>(&UnityEngine::Networking::UploadHandler::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UploadHandler*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
