// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StringSignal
  class StringSignal;
  // Forward declaring type: GuestNameButtonsListItemsList
  class GuestNameButtonsListItemsList;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: EnterPlayerGuestNameViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class EnterPlayerGuestNameViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate
    class FinishDelegate;
    // Nested type: GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Nested type: GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1
    class $$c__DisplayClass10_1;
    // [SignalSenderAttribute] Offset: 0xE412CC
    // private StringSignal _playerNameWasEnteredSignal
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::StringSignal* playerNameWasEnteredSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StringSignal*) == 0x8);
    // [SpaceAttribute] Offset: 0xE41304
    // private HMUI.UIKeyboard _uiKeyboard
    // Size: 0x8
    // Offset: 0x78
    HMUI::UIKeyboard* uiKeyboard;
    // Field size check
    static_assert(sizeof(HMUI::UIKeyboard*) == 0x8);
    // private HMUI.InputFieldView _nameInputFieldView
    // Size: 0x8
    // Offset: 0x80
    HMUI::InputFieldView* nameInputFieldView;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // private GuestNameButtonsListItemsList _guestNameButtonsListItemsList
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::GuestNameButtonsListItemsList* guestNameButtonsListItemsList;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GuestNameButtonsListItemsList*) == 0x8);
    // [InjectAttribute] Offset: 0xE4135C
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private EnterPlayerGuestNameViewController/FinishDelegate _didFinishCallback
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate* didFinishCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate*) == 0x8);
    // Creating value type constructor for type: EnterPlayerGuestNameViewController
    EnterPlayerGuestNameViewController(GlobalNamespace::StringSignal* playerNameWasEnteredSignal_ = {}, HMUI::UIKeyboard* uiKeyboard_ = {}, HMUI::InputFieldView* nameInputFieldView_ = {}, GlobalNamespace::GuestNameButtonsListItemsList* guestNameButtonsListItemsList_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate* didFinishCallback_ = {}) noexcept : playerNameWasEnteredSignal{playerNameWasEnteredSignal_}, uiKeyboard{uiKeyboard_}, nameInputFieldView{nameInputFieldView_}, guestNameButtonsListItemsList{guestNameButtonsListItemsList_}, playerDataModel{playerDataModel_}, didFinishCallback{didFinishCallback_} {}
    // static field const value: static private System.Int32 kMaxPlayerNameCompoundLength
    static constexpr const int kMaxPlayerNameCompoundLength = 40;
    // Get static field: static private System.Int32 kMaxPlayerNameCompoundLength
    static int _get_kMaxPlayerNameCompoundLength();
    // Set static field: static private System.Int32 kMaxPlayerNameCompoundLength
    static void _set_kMaxPlayerNameCompoundLength(int value);
    // static field const value: static private System.Int32 kMaxShowPlayer
    static constexpr const int kMaxShowPlayer = 5;
    // Get static field: static private System.Int32 kMaxShowPlayer
    static int _get_kMaxShowPlayer();
    // Set static field: static private System.Int32 kMaxShowPlayer
    static void _set_kMaxShowPlayer(int value);
    // Get instance field: private StringSignal _playerNameWasEnteredSignal
    GlobalNamespace::StringSignal* _get__playerNameWasEnteredSignal();
    // Set instance field: private StringSignal _playerNameWasEnteredSignal
    void _set__playerNameWasEnteredSignal(GlobalNamespace::StringSignal* value);
    // Get instance field: private HMUI.UIKeyboard _uiKeyboard
    HMUI::UIKeyboard* _get__uiKeyboard();
    // Set instance field: private HMUI.UIKeyboard _uiKeyboard
    void _set__uiKeyboard(HMUI::UIKeyboard* value);
    // Get instance field: private HMUI.InputFieldView _nameInputFieldView
    HMUI::InputFieldView* _get__nameInputFieldView();
    // Set instance field: private HMUI.InputFieldView _nameInputFieldView
    void _set__nameInputFieldView(HMUI::InputFieldView* value);
    // Get instance field: private GuestNameButtonsListItemsList _guestNameButtonsListItemsList
    GlobalNamespace::GuestNameButtonsListItemsList* _get__guestNameButtonsListItemsList();
    // Set instance field: private GuestNameButtonsListItemsList _guestNameButtonsListItemsList
    void _set__guestNameButtonsListItemsList(GlobalNamespace::GuestNameButtonsListItemsList* value);
    // Get instance field: private readonly PlayerDataModel _playerDataModel
    GlobalNamespace::PlayerDataModel* _get__playerDataModel();
    // Set instance field: private readonly PlayerDataModel _playerDataModel
    void _set__playerDataModel(GlobalNamespace::PlayerDataModel* value);
    // Get instance field: private EnterPlayerGuestNameViewController/FinishDelegate _didFinishCallback
    GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate* _get__didFinishCallback();
    // Set instance field: private EnterPlayerGuestNameViewController/FinishDelegate _didFinishCallback
    void _set__didFinishCallback(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate* value);
    // public System.Void Init(EnterPlayerGuestNameViewController/FinishDelegate didFinishCallback)
    // Offset: 0x10505D8
    void Init(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate* didFinishCallback);
    // private System.Void OkButtonPressed()
    // Offset: 0x10508E4
    void OkButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x1050D9C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterPlayerGuestNameViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnterPlayerGuestNameViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterPlayerGuestNameViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10505E0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1050834
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // EnterPlayerGuestNameViewController
  #pragma pack(pop)
  static check_size<sizeof(EnterPlayerGuestNameViewController), 152 + sizeof(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate*)> __GlobalNamespace_EnterPlayerGuestNameViewControllerSizeCheck;
  static_assert(sizeof(EnterPlayerGuestNameViewController) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnterPlayerGuestNameViewController*, "", "EnterPlayerGuestNameViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterPlayerGuestNameViewController::*)(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate*)>(&GlobalNamespace::EnterPlayerGuestNameViewController::Init)> {
  static const MethodInfo* get() {
    static auto* didFinishCallback = &::il2cpp_utils::GetClassFromName("", "EnterPlayerGuestNameViewController/FinishDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterPlayerGuestNameViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{didFinishCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::OkButtonPressed
// Il2CppName: OkButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterPlayerGuestNameViewController::*)()>(&GlobalNamespace::EnterPlayerGuestNameViewController::OkButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterPlayerGuestNameViewController*), "OkButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterPlayerGuestNameViewController::*)(bool, bool, bool)>(&GlobalNamespace::EnterPlayerGuestNameViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterPlayerGuestNameViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterPlayerGuestNameViewController::*)(bool, bool)>(&GlobalNamespace::EnterPlayerGuestNameViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterPlayerGuestNameViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
