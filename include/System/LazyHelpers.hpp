// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.LazyHelpers
  class LazyHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: LazyHelpers
    LazyHelpers() noexcept {}
    // Get static field: static readonly System.Object PUBLICATION_ONLY_SENTINEL
    static ::Il2CppObject* _get_PUBLICATION_ONLY_SENTINEL();
    // Set static field: static readonly System.Object PUBLICATION_ONLY_SENTINEL
    static void _set_PUBLICATION_ONLY_SENTINEL(::Il2CppObject* value);
    // static private System.Void .cctor()
    // Offset: 0x18205A4
    static void _cctor();
  }; // System.LazyHelpers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::LazyHelpers*, "System", "LazyHelpers");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::LazyHelpers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::LazyHelpers::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LazyHelpers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
