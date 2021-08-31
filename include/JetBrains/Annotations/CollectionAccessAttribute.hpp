// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.CollectionAccessType
#include "JetBrains/Annotations/CollectionAccessType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.CollectionAccessAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DEB758
  class CollectionAccessAttribute : public System::Attribute {
    public:
    // private JetBrains.Annotations.CollectionAccessType <CollectionAccessType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    JetBrains::Annotations::CollectionAccessType CollectionAccessType;
    // Field size check
    static_assert(sizeof(JetBrains::Annotations::CollectionAccessType) == 0x4);
    // Creating value type constructor for type: CollectionAccessAttribute
    CollectionAccessAttribute(JetBrains::Annotations::CollectionAccessType CollectionAccessType_ = {}) noexcept : CollectionAccessType{CollectionAccessType_} {}
    // Creating conversion operator: operator JetBrains::Annotations::CollectionAccessType
    constexpr operator JetBrains::Annotations::CollectionAccessType() const noexcept {
      return CollectionAccessType;
    }
    // Get instance field: private JetBrains.Annotations.CollectionAccessType <CollectionAccessType>k__BackingField
    JetBrains::Annotations::CollectionAccessType _get_$CollectionAccessType$k__BackingField();
    // Set instance field: private JetBrains.Annotations.CollectionAccessType <CollectionAccessType>k__BackingField
    void _set_$CollectionAccessType$k__BackingField(JetBrains::Annotations::CollectionAccessType value);
    // public JetBrains.Annotations.CollectionAccessType get_CollectionAccessType()
    // Offset: 0x2408390
    JetBrains::Annotations::CollectionAccessType get_CollectionAccessType();
    // private System.Void set_CollectionAccessType(JetBrains.Annotations.CollectionAccessType value)
    // Offset: 0x2408398
    void set_CollectionAccessType(JetBrains::Annotations::CollectionAccessType value);
    // public System.Void .ctor(JetBrains.Annotations.CollectionAccessType collectionAccessType)
    // Offset: 0x2408364
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollectionAccessAttribute* New_ctor(JetBrains::Annotations::CollectionAccessType collectionAccessType) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::CollectionAccessAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollectionAccessAttribute*, creationType>(collectionAccessType)));
    }
  }; // JetBrains.Annotations.CollectionAccessAttribute
  #pragma pack(pop)
  static check_size<sizeof(CollectionAccessAttribute), 16 + sizeof(JetBrains::Annotations::CollectionAccessType)> __JetBrains_Annotations_CollectionAccessAttributeSizeCheck;
  static_assert(sizeof(CollectionAccessAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::CollectionAccessAttribute*, "JetBrains.Annotations", "CollectionAccessAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::CollectionAccessAttribute::get_CollectionAccessType
// Il2CppName: get_CollectionAccessType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<JetBrains::Annotations::CollectionAccessType (JetBrains::Annotations::CollectionAccessAttribute::*)()>(&JetBrains::Annotations::CollectionAccessAttribute::get_CollectionAccessType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::CollectionAccessAttribute*), "get_CollectionAccessType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::CollectionAccessAttribute::set_CollectionAccessType
// Il2CppName: set_CollectionAccessType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::CollectionAccessAttribute::*)(JetBrains::Annotations::CollectionAccessType)>(&JetBrains::Annotations::CollectionAccessAttribute::set_CollectionAccessType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("JetBrains.Annotations", "CollectionAccessType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::CollectionAccessAttribute*), "set_CollectionAccessType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::CollectionAccessAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
