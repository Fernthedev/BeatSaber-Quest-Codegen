// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.EventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D99868
  class EventArgs : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: EventArgs
    EventArgs() noexcept {}
    // Get static field: static public readonly System.EventArgs Empty
    static System::EventArgs* _get_Empty();
    // Set static field: static public readonly System.EventArgs Empty
    static void _set_Empty(System::EventArgs* value);
    // static private System.Void .cctor()
    // Offset: 0x1801EAC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1801EA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::EventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventArgs*, creationType>()));
    }
  }; // System.EventArgs
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::EventArgs*, "System", "EventArgs");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::EventArgs::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::EventArgs::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::EventArgs*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::EventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
