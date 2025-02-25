// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.RenderModel_TextureMap_t
#include "Valve/VR/RenderModel_TextureMap_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.RenderModel_TextureMap_t_Packed
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderModel_TextureMap_t_Packed/*, public System::ValueType*/ {
    public:
    // public System.Char unWidth
    // Size: 0x2
    // Offset: 0x0
    ::Il2CppChar unWidth;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // public System.Char unHeight
    // Size: 0x2
    // Offset: 0x2
    ::Il2CppChar unHeight;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // public System.IntPtr rubTextureMapData
    // Size: 0x8
    // Offset: 0x4
    System::IntPtr rubTextureMapData;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: RenderModel_TextureMap_t_Packed
    constexpr RenderModel_TextureMap_t_Packed(::Il2CppChar unWidth_ = {}, ::Il2CppChar unHeight_ = {}, System::IntPtr rubTextureMapData_ = {}) noexcept : unWidth{unWidth_}, unHeight{unHeight_}, rubTextureMapData{rubTextureMapData_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Char unWidth
    ::Il2CppChar& dyn_unWidth();
    // Get instance field reference: public System.Char unHeight
    ::Il2CppChar& dyn_unHeight();
    // Get instance field reference: public System.IntPtr rubTextureMapData
    System::IntPtr& dyn_rubTextureMapData();
    // public System.Void .ctor(Valve.VR.RenderModel_TextureMap_t unpacked)
    // Offset: 0x23D0894
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RenderModel_TextureMap_t_Packed(Valve::VR::RenderModel_TextureMap_t unpacked) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::RenderModel_TextureMap_t_Packed::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(unpacked)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, unpacked);
    }
    // public System.Void Unpack(ref Valve.VR.RenderModel_TextureMap_t unpacked)
    // Offset: 0x23D08A8
    void Unpack(ByRef<Valve::VR::RenderModel_TextureMap_t> unpacked);
  }; // Valve.VR.RenderModel_TextureMap_t_Packed
  #pragma pack(pop)
  static check_size<sizeof(RenderModel_TextureMap_t_Packed), 4 + sizeof(System::IntPtr)> __Valve_VR_RenderModel_TextureMap_t_PackedSizeCheck;
  static_assert(sizeof(RenderModel_TextureMap_t_Packed) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::RenderModel_TextureMap_t_Packed, "Valve.VR", "RenderModel_TextureMap_t_Packed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::RenderModel_TextureMap_t_Packed::RenderModel_TextureMap_t_Packed
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::RenderModel_TextureMap_t_Packed::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::RenderModel_TextureMap_t_Packed::*)(ByRef<Valve::VR::RenderModel_TextureMap_t>)>(&Valve::VR::RenderModel_TextureMap_t_Packed::Unpack)> {
  static const MethodInfo* get() {
    static auto* unpacked = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_TextureMap_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::RenderModel_TextureMap_t_Packed), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unpacked});
  }
};
