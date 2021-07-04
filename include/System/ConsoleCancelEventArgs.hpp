// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.ConsoleSpecialKey
#include "System/ConsoleSpecialKey.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: System.ConsoleCancelEventArgs
  class ConsoleCancelEventArgs : public System::EventArgs {
    public:
    // private System.ConsoleSpecialKey _type
    // Size: 0x4
    // Offset: 0x10
    System::ConsoleSpecialKey type;
    // Field size check
    static_assert(sizeof(System::ConsoleSpecialKey) == 0x4);
    // private System.Boolean _cancel
    // Size: 0x1
    // Offset: 0x14
    bool cancel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ConsoleCancelEventArgs
    ConsoleCancelEventArgs(System::ConsoleSpecialKey type_ = {}, bool cancel_ = {}) noexcept : type{type_}, cancel{cancel_} {}
    // System.Void .ctor(System.ConsoleSpecialKey type)
    // Offset: 0x1979E70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConsoleCancelEventArgs* New_ctor(System::ConsoleSpecialKey type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ConsoleCancelEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConsoleCancelEventArgs*, creationType>(type)));
    }
    // public System.Boolean get_Cancel()
    // Offset: 0x197AA30
    bool get_Cancel();
    // System.Void .ctor()
    // Offset: 0x197AA38
    // Implemented from: System.EventArgs
    // Base method: System.Void EventArgs::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConsoleCancelEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ConsoleCancelEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConsoleCancelEventArgs*, creationType>()));
    }
  }; // System.ConsoleCancelEventArgs
  #pragma pack(pop)
  static check_size<sizeof(ConsoleCancelEventArgs), 20 + sizeof(bool)> __System_ConsoleCancelEventArgsSizeCheck;
  static_assert(sizeof(ConsoleCancelEventArgs) == 0x15);
}
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleCancelEventArgs*, "System", "ConsoleCancelEventArgs");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::ConsoleCancelEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ConsoleCancelEventArgs::get_Cancel
// Il2CppName: get_Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ConsoleCancelEventArgs::*)()>(&System::ConsoleCancelEventArgs::get_Cancel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleCancelEventArgs*), "get_Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ConsoleCancelEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
