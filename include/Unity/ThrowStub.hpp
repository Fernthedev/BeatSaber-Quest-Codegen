// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ObjectDisposedException
#include "System/ObjectDisposedException.hpp"
// Completed includes
// Type namespace: Unity
namespace Unity {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Unity.ThrowStub
  class ThrowStub : public System::ObjectDisposedException {
    public:
    // Creating value type constructor for type: ThrowStub
    ThrowStub() noexcept {}
    // static public System.Void ThrowNotSupportedException()
    // Offset: 0x2335B78
    static void ThrowNotSupportedException();
  }; // Unity.ThrowStub
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Unity::ThrowStub*, "Unity", "ThrowStub");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::ThrowStub::ThrowNotSupportedException
// Il2CppName: ThrowNotSupportedException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::ThrowStub::ThrowNotSupportedException)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::ThrowStub*), "ThrowNotSupportedException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
