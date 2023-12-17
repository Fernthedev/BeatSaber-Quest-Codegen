#pragma once
#include "GlobalNamespace/zzzz__NoteController_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BoxCuttableBySaber_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__INoteMovementProvider_def.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__ICubeNoteControllerInitializable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__INoteVisualModifierTypeProvider_def.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.add_cubeNoteControllerDidInitEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)(::System::Action_1<::GlobalNamespace::GameNoteController*>*)>(&::GlobalNamespace::GameNoteController::add_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23854dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "add_cubeNoteControllerDidInitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::GameNoteController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.remove_cubeNoteControllerDidInitEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)(::System::Action_1<::GlobalNamespace::GameNoteController*>*)>(&::GlobalNamespace::GameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x238558c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "remove_cubeNoteControllerDidInitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::GameNoteController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.get_noteMovement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteMovement* (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::get_noteMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238563c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "get_noteMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.get_noteVisualModifierType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteVisualModifierType (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2385644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "get_noteVisualModifierType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.get_gameplayType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__NoteData__GameplayType (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::get_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238564c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "get_gameplayType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)(::GlobalNamespace::NoteData*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, ::GlobalNamespace::NoteVisualModifierType, float_t, float_t)>(&::GlobalNamespace::GameNoteController::Init)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2378648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteVisualModifierType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2385654;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::OnDestroy)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x23857b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.NoteDidPassMissedMarker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::NoteDidPassMissedMarker)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2385980;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.NoteDidStartDissolving
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::NoteDidStartDissolving)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2385a3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.HandleBigWasCutBySaber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameNoteController::HandleBigWasCutBySaber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2385af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "HandleBigWasCutBySaber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.HandleSmallWasCutBySaber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameNoteController::HandleSmallWasCutBySaber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2385fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "HandleSmallWasCutBySaber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.HandleCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::GameNoteController::HandleCut)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x2385b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "HandleCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.NoteDidStartJump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::NoteDidStartJump)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2385ff4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.HiddenStateDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)(bool)>(&::GlobalNamespace::GameNoteController::HiddenStateDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23860b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.Pause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)(bool)>(&::GlobalNamespace::GameNoteController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23860d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23860e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::GameNoteController*>"
constexpr  GlobalNamespace::GameNoteController::operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::GameNoteController*>*() noexcept {
return static_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::GameNoteController*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
constexpr  GlobalNamespace::GameNoteController::operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept {
return static_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
constexpr  GlobalNamespace::GameNoteController::operator ::GlobalNamespace::INoteMovementProvider*() noexcept {
return static_cast<::GlobalNamespace::INoteMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameNoteMirrorable"
constexpr  GlobalNamespace::GameNoteController::operator ::GlobalNamespace::IGameNoteMirrorable*() noexcept {
return static_cast<::GlobalNamespace::IGameNoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
constexpr  GlobalNamespace::GameNoteController::operator ::GlobalNamespace::INoteMirrorable*() noexcept {
return static_cast<::GlobalNamespace::INoteMirrorable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::GameNoteController::__set__bigCuttableBySaberList(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>, 0x80>(this, std::forward<::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>& GlobalNamespace::GameNoteController::__get__bigCuttableBySaberList()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>, 0x80>(this);
}
constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*> const& GlobalNamespace::GameNoteController::__get__bigCuttableBySaberList() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>, 0x80>(this);
}
constexpr void GlobalNamespace::GameNoteController::__set__smallCuttableBySaberList(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>, 0x88>(this, std::forward<::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>& GlobalNamespace::GameNoteController::__get__smallCuttableBySaberList()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>, 0x88>(this);
}
constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*> const& GlobalNamespace::GameNoteController::__get__smallCuttableBySaberList() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BoxCuttableBySaber*,::Array<::GlobalNamespace::BoxCuttableBySaber*>*>, 0x88>(this);
}
constexpr void GlobalNamespace::GameNoteController::__set__wrapperGO(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x90>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::GameNoteController::__get__wrapperGO()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::GameNoteController::__get__wrapperGO() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x90>(this);
}
constexpr void GlobalNamespace::GameNoteController::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x98>(this, std::forward<::GlobalNamespace::AudioTimeSyncController*>(value));
}
constexpr ::GlobalNamespace::AudioTimeSyncController* GlobalNamespace::GameNoteController::__get__audioTimeSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> GlobalNamespace::GameNoteController::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x98>(this);
}
constexpr void GlobalNamespace::GameNoteController::__set_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::GameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::GameNoteController*>*, 0xa0>(this, std::forward<::System::Action_1<::GlobalNamespace::GameNoteController*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::GameNoteController*>* GlobalNamespace::GameNoteController::__get_cubeNoteControllerDidInitEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::GameNoteController*>*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::GameNoteController*>*> GlobalNamespace::GameNoteController::__get_cubeNoteControllerDidInitEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::GameNoteController*>*, 0xa0>(this);
}
constexpr void GlobalNamespace::GameNoteController::__set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteVisualModifierType, 0xa8>(this, std::forward<::GlobalNamespace::NoteVisualModifierType>(value));
}
constexpr ::GlobalNamespace::NoteVisualModifierType& GlobalNamespace::GameNoteController::__get__noteVisualModifierType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteVisualModifierType, 0xa8>(this);
}
constexpr ::GlobalNamespace::NoteVisualModifierType const& GlobalNamespace::GameNoteController::__get__noteVisualModifierType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteVisualModifierType, 0xa8>(this);
}
constexpr void GlobalNamespace::GameNoteController::__set__gameplayType(::GlobalNamespace::__NoteData__GameplayType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__NoteData__GameplayType, 0xac>(this, std::forward<::GlobalNamespace::__NoteData__GameplayType>(value));
}
constexpr ::GlobalNamespace::__NoteData__GameplayType& GlobalNamespace::GameNoteController::__get__gameplayType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NoteData__GameplayType, 0xac>(this);
}
constexpr ::GlobalNamespace::__NoteData__GameplayType const& GlobalNamespace::GameNoteController::__get__gameplayType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NoteData__GameplayType, 0xac>(this);
}
constexpr void GlobalNamespace::GameNoteController::__set__cutAngleTolerance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb0>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::GameNoteController::__get__cutAngleTolerance()  {
return ::cordl_internals::getInstanceField<float_t, 0xb0>(this);
}
constexpr float_t const& GlobalNamespace::GameNoteController::__get__cutAngleTolerance() const {
return ::cordl_internals::getInstanceField<float_t, 0xb0>(this);
}
inline void GlobalNamespace::GameNoteController::add_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::GameNoteController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "add_cubeNoteControllerDidInitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::GameNoteController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameNoteController::remove_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::GameNoteController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "remove_cubeNoteControllerDidInitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::GameNoteController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteMovement* GlobalNamespace::GameNoteController::get_noteMovement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "get_noteMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteMovement*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::GameNoteController::get_noteVisualModifierType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "get_noteVisualModifierType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteVisualModifierType, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__NoteData__GameplayType GlobalNamespace::GameNoteController::get_gameplayType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "get_gameplayType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__NoteData__GameplayType, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::Init(::GlobalNamespace::NoteData*  noteData, float_t  worldRotation, ::UnityEngine::Vector3  moveStartPos, ::UnityEngine::Vector3  moveEndPos, ::UnityEngine::Vector3  jumpEndPos, float_t  moveDuration, float_t  jumpDuration, float_t  jumpGravity, ::GlobalNamespace::NoteVisualModifierType  noteVisualModifierType, float_t  cutAngleTolerance, float_t  uniformScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteVisualModifierType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteData, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, noteVisualModifierType, cutAngleTolerance, uniformScale);
}
inline void GlobalNamespace::GameNoteController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::NoteDidPassMissedMarker()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "NoteDidPassMissedMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::NoteDidStartDissolving()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "NoteDidStartDissolving",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::HandleBigWasCutBySaber(::GlobalNamespace::Saber*  saber, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  cutDirVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "HandleBigWasCutBySaber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::GameNoteController::HandleSmallWasCutBySaber(::GlobalNamespace::Saber*  saber, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  cutDirVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "HandleSmallWasCutBySaber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::GameNoteController::HandleCut(::GlobalNamespace::Saber*  saber, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  cutDirVec, bool  allowBadCut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "HandleCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, saber, cutPoint, orientation, cutDirVec, allowBadCut);
}
inline void GlobalNamespace::GameNoteController::NoteDidStartJump()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "NoteDidStartJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::HiddenStateDidChange(bool  hide)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "HiddenStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, hide);
}
inline void GlobalNamespace::GameNoteController::Pause(bool  pause)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            "Pause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pause);
}
inline ::GlobalNamespace::GameNoteController* GlobalNamespace::GameNoteController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameNoteController*>());
}
inline void GlobalNamespace::GameNoteController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameNoteController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__GameNoteController__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameNoteController__Pool::*)()>(&::GlobalNamespace::__GameNoteController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23860ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameNoteController__Pool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameNoteController__Pool* GlobalNamespace::__GameNoteController__Pool::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameNoteController__Pool*>());
}
inline void GlobalNamespace::__GameNoteController__Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameNoteController__Pool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
