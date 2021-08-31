// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Networking.UploadHandler
#include "UnityEngine/Networking/UploadHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.UploadHandlerRaw
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DFA728
  class UploadHandlerRaw : public UnityEngine::Networking::UploadHandler {
    public:
    // Creating value type constructor for type: UploadHandlerRaw
    UploadHandlerRaw() noexcept {}
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x23F6274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UploadHandlerRaw* New_ctor(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::UploadHandlerRaw::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UploadHandlerRaw*, creationType>(data)));
    }
    // static private System.IntPtr Create(UnityEngine.Networking.UploadHandlerRaw self, System.Byte[] data)
    // Offset: 0x23F6224
    static System::IntPtr Create(UnityEngine::Networking::UploadHandlerRaw* self, ::Array<uint8_t>* data);
  }; // UnityEngine.Networking.UploadHandlerRaw
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UploadHandlerRaw*, "UnityEngine.Networking", "UploadHandlerRaw");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::UploadHandlerRaw::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::UploadHandlerRaw::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(UnityEngine::Networking::UploadHandlerRaw*, ::Array<uint8_t>*)>(&UnityEngine::Networking::UploadHandlerRaw::Create)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UploadHandlerRaw")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UploadHandlerRaw*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self, data});
  }
};
