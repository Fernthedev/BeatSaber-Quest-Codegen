// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassBackgroundColorsGradientElementWithLightId
#include "GlobalNamespace/BloomPrePassBackgroundColorsGradientElementWithLightId.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradientElementWithLightId/Elements
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundColorsGradientElementWithLightId::Elements : public ::Il2CppObject {
    public:
    // public System.Int32 elementNumber
    // Size: 0x4
    // Offset: 0x10
    int elementNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single intensity
    // Size: 0x4
    // Offset: 0x14
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minIntensity
    // Size: 0x4
    // Offset: 0x18
    float minIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Elements
    Elements(int elementNumber_ = {}, float intensity_ = {}, float minIntensity_ = {}) noexcept : elementNumber{elementNumber_}, intensity{intensity_}, minIntensity{minIntensity_} {}
    // Get instance field reference: public System.Int32 elementNumber
    int& dyn_elementNumber();
    // Get instance field reference: public System.Single intensity
    float& dyn_intensity();
    // Get instance field reference: public System.Single minIntensity
    float& dyn_minIntensity();
    // public System.Void .ctor()
    // Offset: 0x1E1358C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradientElementWithLightId::Elements* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*, creationType>()));
    }
  }; // BloomPrePassBackgroundColorsGradientElementWithLightId/Elements
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradientElementWithLightId::Elements), 24 + sizeof(float)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientElementWithLightId_ElementsSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradientElementWithLightId::Elements) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*, "", "BloomPrePassBackgroundColorsGradientElementWithLightId/Elements");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
