// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ReferenceConverter
  class ReferenceConverter : public System::ComponentModel::TypeConverter {
    public:
    // Creating value type constructor for type: ReferenceConverter
    ReferenceConverter() noexcept {}
    // Get static field: static private readonly System.String none
    static ::Il2CppString* _get_none();
    // Set static field: static private readonly System.String none
    static void _set_none(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x1867EB8
    static void _cctor();
  }; // System.ComponentModel.ReferenceConverter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ReferenceConverter*, "System.ComponentModel", "ReferenceConverter");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::ComponentModel::ReferenceConverter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::ReferenceConverter::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReferenceConverter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
