// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_RenderModel
#include "GlobalNamespace/SteamVR_RenderModel.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: CVRRenderModels
  class CVRRenderModels;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_RenderModel/RenderModelInterfaceHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_RenderModel::RenderModelInterfaceHolder : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Boolean needsShutdown
    // Size: 0x1
    // Offset: 0x10
    bool needsShutdown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean failedLoadInterface
    // Size: 0x1
    // Offset: 0x11
    bool failedLoadInterface;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: failedLoadInterface and: instance
    char __padding1[0x6] = {};
    // private Valve.VR.CVRRenderModels _instance
    // Size: 0x8
    // Offset: 0x18
    Valve::VR::CVRRenderModels* instance;
    // Field size check
    static_assert(sizeof(Valve::VR::CVRRenderModels*) == 0x8);
    // Creating value type constructor for type: RenderModelInterfaceHolder
    RenderModelInterfaceHolder(bool needsShutdown_ = {}, bool failedLoadInterface_ = {}, Valve::VR::CVRRenderModels* instance_ = {}) noexcept : needsShutdown{needsShutdown_}, failedLoadInterface{failedLoadInterface_}, instance{instance_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get instance field: private System.Boolean needsShutdown
    bool _get_needsShutdown();
    // Set instance field: private System.Boolean needsShutdown
    void _set_needsShutdown(bool value);
    // Get instance field: private System.Boolean failedLoadInterface
    bool _get_failedLoadInterface();
    // Set instance field: private System.Boolean failedLoadInterface
    void _set_failedLoadInterface(bool value);
    // Get instance field: private Valve.VR.CVRRenderModels _instance
    Valve::VR::CVRRenderModels* _get__instance();
    // Set instance field: private Valve.VR.CVRRenderModels _instance
    void _set__instance(Valve::VR::CVRRenderModels* value);
    // public Valve.VR.CVRRenderModels get_instance()
    // Offset: 0x142E984
    Valve::VR::CVRRenderModels* get_instance();
    // public System.Void Dispose()
    // Offset: 0x1430FE8
    void Dispose();
    // public System.Void .ctor()
    // Offset: 0x142E2C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_RenderModel::RenderModelInterfaceHolder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_RenderModel::RenderModelInterfaceHolder*, creationType>()));
    }
  }; // SteamVR_RenderModel/RenderModelInterfaceHolder
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_RenderModel::RenderModelInterfaceHolder), 24 + sizeof(Valve::VR::CVRRenderModels*)> __GlobalNamespace_SteamVR_RenderModel_RenderModelInterfaceHolderSizeCheck;
  static_assert(sizeof(SteamVR_RenderModel::RenderModelInterfaceHolder) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder*, "", "SteamVR_RenderModel/RenderModelInterfaceHolder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::CVRRenderModels* (GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder::*)()>(&GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder::*)()>(&GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
