// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ConditionalSpriteSwitcher
  class ConditionalSpriteSwitcher;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DateConditionalSpriteSwitcher
  class DateConditionalSpriteSwitcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DateConditionalSpriteSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DateConditionalSpriteSwitcher*, "", "DateConditionalSpriteSwitcher");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: DateConditionalSpriteSwitcher
  // [TokenAttribute] Offset: FFFFFFFF
  class DateConditionalSpriteSwitcher : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Int32 _day
    // Size: 0x4
    // Offset: 0x18
    int day;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _month
    // Size: 0x4
    // Offset: 0x1C
    int month;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [SpaceAttribute] Offset: 0x10EDF44
    // private UnityEngine.Sprite _falseSprite
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Sprite* falseSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _trueSprite
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Sprite* trueSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // [SpaceAttribute] Offset: 0x10EDF8C
    // private ConditionalSpriteSwitcher _conditionalSpriteSwitcher
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::ConditionalSpriteSwitcher* conditionalSpriteSwitcher;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ConditionalSpriteSwitcher*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _day
    [[deprecated("Use field access instead!")]] int& dyn__day();
    // Get instance field reference: private System.Int32 _month
    [[deprecated("Use field access instead!")]] int& dyn__month();
    // Get instance field reference: private UnityEngine.Sprite _falseSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__falseSprite();
    // Get instance field reference: private UnityEngine.Sprite _trueSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__trueSprite();
    // Get instance field reference: private ConditionalSpriteSwitcher _conditionalSpriteSwitcher
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ConditionalSpriteSwitcher*& dyn__conditionalSpriteSwitcher();
    // public System.Void .ctor()
    // Offset: 0x14980A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateConditionalSpriteSwitcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DateConditionalSpriteSwitcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateConditionalSpriteSwitcher*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1497FD0
    void Awake();
  }; // DateConditionalSpriteSwitcher
  #pragma pack(pop)
  static check_size<sizeof(DateConditionalSpriteSwitcher), 48 + sizeof(::GlobalNamespace::ConditionalSpriteSwitcher*)> __GlobalNamespace_DateConditionalSpriteSwitcherSizeCheck;
  static_assert(sizeof(DateConditionalSpriteSwitcher) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DateConditionalSpriteSwitcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DateConditionalSpriteSwitcher::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DateConditionalSpriteSwitcher::*)()>(&GlobalNamespace::DateConditionalSpriteSwitcher::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DateConditionalSpriteSwitcher*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
