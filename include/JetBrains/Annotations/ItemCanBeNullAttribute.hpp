// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.ItemCanBeNullAttribute
  // [AttributeUsageAttribute] Offset: DCA92C
  class ItemCanBeNullAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: ItemCanBeNullAttribute
    ItemCanBeNullAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23DB404
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ItemCanBeNullAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::ItemCanBeNullAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ItemCanBeNullAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.ItemCanBeNullAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::ItemCanBeNullAttribute*, "JetBrains.Annotations", "ItemCanBeNullAttribute");
// Writing includes for template specializations
// Writing MetadataGetter for method: JetBrains::Annotations::ItemCanBeNullAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
