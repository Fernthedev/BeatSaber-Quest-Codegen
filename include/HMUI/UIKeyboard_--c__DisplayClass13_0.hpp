// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.UIKeyboard
#include "HMUI/UIKeyboard.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: UIKeyboardKey
  class UIKeyboardKey;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.UIKeyboard/HMUI.<>c__DisplayClass13_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UIKeyboard::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public HMUI.UIKeyboardKey key
    // Size: 0x8
    // Offset: 0x10
    HMUI::UIKeyboardKey* key;
    // Field size check
    static_assert(sizeof(HMUI::UIKeyboardKey*) == 0x8);
    // public HMUI.UIKeyboard <>4__this
    // Size: 0x8
    // Offset: 0x18
    HMUI::UIKeyboard* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::UIKeyboard*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass13_0
    $$c__DisplayClass13_0(HMUI::UIKeyboardKey* key_ = {}, HMUI::UIKeyboard* $$4__this_ = {}) noexcept : key{key_}, $$4__this{$$4__this_} {}
    // Get instance field reference: public HMUI.UIKeyboardKey key
    HMUI::UIKeyboardKey*& dyn_key();
    // Get instance field reference: public HMUI.UIKeyboard <>4__this
    HMUI::UIKeyboard*& dyn_$$4__this();
    // System.Void <Awake>b__2()
    // Offset: 0x13086AC
    void $Awake$b__2();
    // public System.Void .ctor()
    // Offset: 0x13083A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIKeyboard::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIKeyboard::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIKeyboard::$$c__DisplayClass13_0*, creationType>()));
    }
  }; // HMUI.UIKeyboard/HMUI.<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(UIKeyboard::$$c__DisplayClass13_0), 24 + sizeof(HMUI::UIKeyboard*)> __HMUI_UIKeyboard_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(UIKeyboard::$$c__DisplayClass13_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::UIKeyboard::$$c__DisplayClass13_0*, "HMUI", "UIKeyboard/<>c__DisplayClass13_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::UIKeyboard::$$c__DisplayClass13_0::$Awake$b__2
// Il2CppName: <Awake>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboard::$$c__DisplayClass13_0::*)()>(&HMUI::UIKeyboard::$$c__DisplayClass13_0::$Awake$b__2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboard::$$c__DisplayClass13_0*), "<Awake>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboard::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
