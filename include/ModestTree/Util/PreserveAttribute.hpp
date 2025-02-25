// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Util.PreserveAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: E00E70
  class PreserveAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: PreserveAttribute
    PreserveAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x13DE630
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreserveAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::PreserveAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreserveAttribute*, creationType>()));
    }
  }; // ModestTree.Util.PreserveAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::PreserveAttribute*, "ModestTree.Util", "PreserveAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::Util::PreserveAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
