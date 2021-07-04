// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRRenderModels
  class CVRRenderModels : public ::Il2CppObject {
    public:
    // Nested type: Valve::VR::CVRRenderModels::_GetComponentStatePacked
    class _GetComponentStatePacked;
    // Nested type: Valve::VR::CVRRenderModels::GetComponentStateUnion
    struct GetComponentStateUnion;
    // private Valve.VR.IVRRenderModels FnTable
    // Size: 0x90
    // Offset: 0x10
    Valve::VR::IVRRenderModels FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRRenderModels) == 0x90);
    // Creating value type constructor for type: CVRRenderModels
    CVRRenderModels(Valve::VR::IVRRenderModels FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRRenderModels
    constexpr operator Valve::VR::IVRRenderModels() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x16D5228
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRRenderModels* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRRenderModels::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRRenderModels*, creationType>(pInterface)));
    }
    // public Valve.VR.EVRRenderModelError LoadRenderModel_Async(System.String pchRenderModelName, ref System.IntPtr ppRenderModel)
    // Offset: 0x16D5330
    Valve::VR::EVRRenderModelError LoadRenderModel_Async(::Il2CppString* pchRenderModelName, System::IntPtr& ppRenderModel);
    // public System.Void FreeRenderModel(System.IntPtr pRenderModel)
    // Offset: 0x16D534C
    void FreeRenderModel(System::IntPtr pRenderModel);
    // public Valve.VR.EVRRenderModelError LoadTexture_Async(System.Int32 textureId, ref System.IntPtr ppTexture)
    // Offset: 0x16D5368
    Valve::VR::EVRRenderModelError LoadTexture_Async(int textureId, System::IntPtr& ppTexture);
    // public System.Void FreeTexture(System.IntPtr pTexture)
    // Offset: 0x16D5384
    void FreeTexture(System::IntPtr pTexture);
    // public Valve.VR.EVRRenderModelError LoadTextureD3D11_Async(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D)
    // Offset: 0x16D53A0
    Valve::VR::EVRRenderModelError LoadTextureD3D11_Async(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D);
    // public Valve.VR.EVRRenderModelError LoadIntoTextureD3D11_Async(System.Int32 textureId, System.IntPtr pDstTexture)
    // Offset: 0x16D53BC
    Valve::VR::EVRRenderModelError LoadIntoTextureD3D11_Async(int textureId, System::IntPtr pDstTexture);
    // public System.Void FreeTextureD3D11(System.IntPtr pD3D11Texture2D)
    // Offset: 0x16D53D8
    void FreeTextureD3D11(System::IntPtr pD3D11Texture2D);
    // public System.UInt32 GetRenderModelName(System.UInt32 unRenderModelIndex, System.Text.StringBuilder pchRenderModelName, System.UInt32 unRenderModelNameLen)
    // Offset: 0x16D53F4
    uint GetRenderModelName(uint unRenderModelIndex, System::Text::StringBuilder* pchRenderModelName, uint unRenderModelNameLen);
    // public System.UInt32 GetRenderModelCount()
    // Offset: 0x16D5410
    uint GetRenderModelCount();
    // public System.UInt32 GetComponentCount(System.String pchRenderModelName)
    // Offset: 0x16D542C
    uint GetComponentCount(::Il2CppString* pchRenderModelName);
    // public System.UInt32 GetComponentName(System.String pchRenderModelName, System.UInt32 unComponentIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameLen)
    // Offset: 0x16D5448
    uint GetComponentName(::Il2CppString* pchRenderModelName, uint unComponentIndex, System::Text::StringBuilder* pchComponentName, uint unComponentNameLen);
    // public System.UInt64 GetComponentButtonMask(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x16D5464
    uint64_t GetComponentButtonMask(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName);
    // public System.UInt32 GetComponentRenderModelName(System.String pchRenderModelName, System.String pchComponentName, System.Text.StringBuilder pchComponentRenderModelName, System.UInt32 unComponentRenderModelNameLen)
    // Offset: 0x16D5480
    uint GetComponentRenderModelName(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, System::Text::StringBuilder* pchComponentRenderModelName, uint unComponentRenderModelNameLen);
    // public System.Boolean GetComponentState(System.String pchRenderModelName, System.String pchComponentName, ref Valve.VR.VRControllerState_t pControllerState, ref Valve.VR.RenderModel_ControllerMode_State_t pState, ref Valve.VR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x16D549C
    bool GetComponentState(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, Valve::VR::VRControllerState_t& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState);
    // public System.Boolean RenderModelHasComponent(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x16D5A28
    bool RenderModelHasComponent(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName);
    // public System.UInt32 GetRenderModelThumbnailURL(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, ref Valve.VR.EVRRenderModelError peError)
    // Offset: 0x16D5A44
    uint GetRenderModelThumbnailURL(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, Valve::VR::EVRRenderModelError& peError);
    // public System.UInt32 GetRenderModelOriginalPath(System.String pchRenderModelName, System.Text.StringBuilder pchOriginalPath, System.UInt32 unOriginalPathLen, ref Valve.VR.EVRRenderModelError peError)
    // Offset: 0x16D5A60
    uint GetRenderModelOriginalPath(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchOriginalPath, uint unOriginalPathLen, Valve::VR::EVRRenderModelError& peError);
    // public System.String GetRenderModelErrorNameFromEnum(Valve.VR.EVRRenderModelError error)
    // Offset: 0x16D5A7C
    ::Il2CppString* GetRenderModelErrorNameFromEnum(Valve::VR::EVRRenderModelError error);
  }; // Valve.VR.CVRRenderModels
  #pragma pack(pop)
  static check_size<sizeof(CVRRenderModels), 16 + sizeof(Valve::VR::IVRRenderModels)> __Valve_VR_CVRRenderModelsSizeCheck;
  static_assert(sizeof(CVRRenderModels) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRRenderModels*, "Valve.VR", "CVRRenderModels");
// Writing includes for template specializations
#include "System/Text/StringBuilder.hpp"
#include "Valve/VR/VRControllerState_t.hpp"
#include "Valve/VR/RenderModel_ControllerMode_State_t.hpp"
#include "Valve/VR/RenderModel_ComponentState_t.hpp"
#include "Valve/VR/EVRRenderModelError.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::LoadRenderModel_Async
// Il2CppName: LoadRenderModel_Async
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRRenderModelError (Valve::VR::CVRRenderModels::*)(::Il2CppString*, System::IntPtr&)>(&Valve::VR::CVRRenderModels::LoadRenderModel_Async)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "LoadRenderModel_Async", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::FreeRenderModel
// Il2CppName: FreeRenderModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRRenderModels::*)(System::IntPtr)>(&Valve::VR::CVRRenderModels::FreeRenderModel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "FreeRenderModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::LoadTexture_Async
// Il2CppName: LoadTexture_Async
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRRenderModelError (Valve::VR::CVRRenderModels::*)(int, System::IntPtr&)>(&Valve::VR::CVRRenderModels::LoadTexture_Async)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "LoadTexture_Async", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::FreeTexture
// Il2CppName: FreeTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRRenderModels::*)(System::IntPtr)>(&Valve::VR::CVRRenderModels::FreeTexture)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "FreeTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::LoadTextureD3D11_Async
// Il2CppName: LoadTextureD3D11_Async
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRRenderModelError (Valve::VR::CVRRenderModels::*)(int, System::IntPtr, System::IntPtr&)>(&Valve::VR::CVRRenderModels::LoadTextureD3D11_Async)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "LoadTextureD3D11_Async", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::LoadIntoTextureD3D11_Async
// Il2CppName: LoadIntoTextureD3D11_Async
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRRenderModelError (Valve::VR::CVRRenderModels::*)(int, System::IntPtr)>(&Valve::VR::CVRRenderModels::LoadIntoTextureD3D11_Async)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "LoadIntoTextureD3D11_Async", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::FreeTextureD3D11
// Il2CppName: FreeTextureD3D11
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRRenderModels::*)(System::IntPtr)>(&Valve::VR::CVRRenderModels::FreeTextureD3D11)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "FreeTextureD3D11", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::GetRenderModelName
// Il2CppName: GetRenderModelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRRenderModels::*)(uint, System::Text::StringBuilder*, uint)>(&Valve::VR::CVRRenderModels::GetRenderModelName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "GetRenderModelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::GetRenderModelCount
// Il2CppName: GetRenderModelCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRRenderModels::*)()>(&Valve::VR::CVRRenderModels::GetRenderModelCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "GetRenderModelCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::GetComponentCount
// Il2CppName: GetComponentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRRenderModels::*)(::Il2CppString*)>(&Valve::VR::CVRRenderModels::GetComponentCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "GetComponentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::GetComponentName
// Il2CppName: GetComponentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRRenderModels::*)(::Il2CppString*, uint, System::Text::StringBuilder*, uint)>(&Valve::VR::CVRRenderModels::GetComponentName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "GetComponentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::GetComponentButtonMask
// Il2CppName: GetComponentButtonMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Valve::VR::CVRRenderModels::*)(::Il2CppString*, ::Il2CppString*)>(&Valve::VR::CVRRenderModels::GetComponentButtonMask)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "GetComponentButtonMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::GetComponentRenderModelName
// Il2CppName: GetComponentRenderModelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRRenderModels::*)(::Il2CppString*, ::Il2CppString*, System::Text::StringBuilder*, uint)>(&Valve::VR::CVRRenderModels::GetComponentRenderModelName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "GetComponentRenderModelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::GetComponentState
// Il2CppName: GetComponentState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRRenderModels::*)(::Il2CppString*, ::Il2CppString*, Valve::VR::VRControllerState_t&, Valve::VR::RenderModel_ControllerMode_State_t&, Valve::VR::RenderModel_ComponentState_t&)>(&Valve::VR::CVRRenderModels::GetComponentState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "GetComponentState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::VRControllerState_t&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::RenderModel_ControllerMode_State_t&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::RenderModel_ComponentState_t&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::RenderModelHasComponent
// Il2CppName: RenderModelHasComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRRenderModels::*)(::Il2CppString*, ::Il2CppString*)>(&Valve::VR::CVRRenderModels::RenderModelHasComponent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "RenderModelHasComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::GetRenderModelThumbnailURL
// Il2CppName: GetRenderModelThumbnailURL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRRenderModels::*)(::Il2CppString*, System::Text::StringBuilder*, uint, Valve::VR::EVRRenderModelError&)>(&Valve::VR::CVRRenderModels::GetRenderModelThumbnailURL)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "GetRenderModelThumbnailURL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRRenderModelError&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::GetRenderModelOriginalPath
// Il2CppName: GetRenderModelOriginalPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRRenderModels::*)(::Il2CppString*, System::Text::StringBuilder*, uint, Valve::VR::EVRRenderModelError&)>(&Valve::VR::CVRRenderModels::GetRenderModelOriginalPath)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "GetRenderModelOriginalPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRRenderModelError&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::GetRenderModelErrorNameFromEnum
// Il2CppName: GetRenderModelErrorNameFromEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Valve::VR::CVRRenderModels::*)(Valve::VR::EVRRenderModelError)>(&Valve::VR::CVRRenderModels::GetRenderModelErrorNameFromEnum)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels*), "GetRenderModelErrorNameFromEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRRenderModelError>()});
  }
};
