// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRDriverManager
#include "Valve/VR/IVRDriverManager.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRDriverManager
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRDriverManager : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRDriverManager FnTable
    // Size: 0x10
    // Offset: 0x10
    Valve::VR::IVRDriverManager FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRDriverManager) == 0x10);
    // Creating value type constructor for type: CVRDriverManager
    CVRDriverManager(Valve::VR::IVRDriverManager FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRDriverManager
    constexpr operator Valve::VR::IVRDriverManager() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private Valve.VR.IVRDriverManager FnTable
    Valve::VR::IVRDriverManager& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x17120A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRDriverManager* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRDriverManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRDriverManager*, creationType>(pInterface)));
    }
    // public System.UInt32 GetDriverCount()
    // Offset: 0x17121A0
    uint GetDriverCount();
    // public System.UInt32 GetDriverName(System.UInt32 nDriver, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x17121BC
    uint GetDriverName(uint nDriver, System::Text::StringBuilder* pchValue, uint unBufferSize);
  }; // Valve.VR.CVRDriverManager
  #pragma pack(pop)
  static check_size<sizeof(CVRDriverManager), 16 + sizeof(Valve::VR::IVRDriverManager)> __Valve_VR_CVRDriverManagerSizeCheck;
  static_assert(sizeof(CVRDriverManager) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRDriverManager*, "Valve.VR", "CVRDriverManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRDriverManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRDriverManager::GetDriverCount
// Il2CppName: GetDriverCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRDriverManager::*)()>(&Valve::VR::CVRDriverManager::GetDriverCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRDriverManager*), "GetDriverCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRDriverManager::GetDriverName
// Il2CppName: GetDriverName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRDriverManager::*)(uint, System::Text::StringBuilder*, uint)>(&Valve::VR::CVRDriverManager::GetDriverName)> {
  static const MethodInfo* get() {
    static auto* nDriver = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRDriverManager*), "GetDriverName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDriver, pchValue, unBufferSize});
  }
};
