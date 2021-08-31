// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Comments
  // [TokenAttribute] Offset: FFFFFFFF
  class Comments : public UnityEngine::MonoBehaviour {
    public:
    // [MultilineAttribute] Offset: 0xE250C4
    // public System.String text
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Comments
    Comments(::Il2CppString* text_ = {}) noexcept : text{text_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: public System.String text
    ::Il2CppString* _get_text();
    // Set instance field: public System.String text
    void _set_text(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1D2E130
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Comments* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Comments::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Comments*, creationType>()));
    }
  }; // RootMotion.Comments
  #pragma pack(pop)
  static check_size<sizeof(Comments), 24 + sizeof(::Il2CppString*)> __RootMotion_CommentsSizeCheck;
  static_assert(sizeof(Comments) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Comments*, "RootMotion", "Comments");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::Comments::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
