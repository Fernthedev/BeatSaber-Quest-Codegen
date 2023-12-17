#pragma once
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__BeatAvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarDataModel_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__AvatarTweenController_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__EditAvatarColorViewController_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__BeatAvatarVisualController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__BeatAvatarEditorViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode)>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe11c90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0xe11d58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xe12aa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleBeatAvatarViewControllerDidRequestColorChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t)>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarViewControllerDidRequestColorChange)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xe132a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleBeatAvatarViewControllerDidRequestColorChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Color>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPart>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleBeatAvatarViewControllerChangedAvatarPart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(::BeatSaber::BeatAvatarSDK::AvatarPart)>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarViewControllerChangedAvatarPart)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe1337c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleBeatAvatarViewControllerChangedAvatarPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPart>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleBeatAvatarEditorViewCancelButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)()>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarEditorViewCancelButtonWasPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe1341c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleBeatAvatarEditorViewCancelButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleBeatAvatarEditorViewOkButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)()>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarEditorViewOkButtonWasPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe13428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleBeatAvatarEditorViewOkButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleEditColorViewControllerDidChangedColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(::UnityEngine::Color)>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleEditColorViewControllerDidChangedColor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe13434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleEditColorViewControllerDidChangedColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleEditColorViewControllerControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(bool)>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleEditColorViewControllerControllerDidFinish)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe1345c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleEditColorViewControllerControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.OneTimeInitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)()>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::OneTimeInitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe1350c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)()>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe13510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__set__avatarTweenController(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*, 0xd0>(this, std::forward<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(value));
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__avatarTweenController()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*> GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__avatarTweenController() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*, 0xd0>(this);
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__set__avatarContainerGameObject(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0xd8>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__avatarContainerGameObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__avatarContainerGameObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xd8>(this);
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__set__avatarVisualController(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*, 0xe0>(this, std::forward<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(value));
}
constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController* GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__avatarVisualController()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*> GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__avatarVisualController() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*, 0xe0>(this);
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__set__beatAvatarEditorViewController(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*, 0xe8>(this, std::forward<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(value));
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__beatAvatarEditorViewController()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*> GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__beatAvatarEditorViewController() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*, 0xe8>(this);
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__set__editAvatarColorViewController(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*, 0xf0>(this, std::forward<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(value));
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__editAvatarColorViewController()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*> GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__editAvatarColorViewController() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*, 0xf0>(this);
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarSDK::AvatarDataModel*, 0xf8>(this, std::forward<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(value));
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel* GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__avatarDataModel()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::AvatarDataModel*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__avatarDataModel() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::AvatarDataModel*, 0xf8>(this);
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__set__parameterChangedAnimationCallbacks(::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart,::System::Action*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart,::System::Action*>*, 0x100>(this, std::forward<::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart,::System::Action*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart,::System::Action*>* GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__parameterChangedAnimationCallbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart,::System::Action*>*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart,::System::Action*>*> GlobalNamespace::BeatAvatarEditorFlowCoordinator::__get__parameterChangedAnimationCallbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart,::System::Action*>*, 0x100>(this);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::Setup(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode  editMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, editMode);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarViewControllerDidRequestColorChange(::System::Action_1<::UnityEngine::Color>*  colorCallback, ::UnityEngine::Color  currentColor, ::BeatSaber::BeatAvatarSDK::AvatarPart  editPart, int32_t  uvSegment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleBeatAvatarViewControllerDidRequestColorChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Color>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPart>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colorCallback, currentColor, editPart, uvSegment);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarViewControllerChangedAvatarPart(::BeatSaber::BeatAvatarSDK::AvatarPart  avatarPart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleBeatAvatarViewControllerChangedAvatarPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPart>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarPart);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarEditorViewCancelButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleBeatAvatarEditorViewCancelButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarEditorViewOkButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleBeatAvatarEditorViewOkButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleEditColorViewControllerDidChangedColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleEditColorViewControllerDidChangedColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, color);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleEditColorViewControllerControllerDidFinish(bool  apply)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "HandleEditColorViewControllerControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, apply);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::OneTimeInitialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            "OneTimeInitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatAvatarEditorFlowCoordinator* GlobalNamespace::BeatAvatarEditorFlowCoordinator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>());
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
