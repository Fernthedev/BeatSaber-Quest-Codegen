#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
constexpr void BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction::__AvatarEditorFlowCoordinator__FinishAction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction  BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction::Cancel{static_cast<int32_t>(0x0)};
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction  BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction::Apply{static_cast<int32_t>(0x1)};
constexpr void BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode::__AvatarEditorFlowCoordinator__EditMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode  BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode::Create{static_cast<int32_t>(0x0)};
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode  BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode::Edit{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe0b598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe0b648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.add_didSetupEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_didSetupEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe0b6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "add_didSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.remove_didSetupEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_didSetupEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe0b7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "remove_didSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.add_randomizeAllButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::System::Action*)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_randomizeAllButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe0b858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "add_randomizeAllButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.remove_randomizeAllButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::System::Action*)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_randomizeAllButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe0b8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "remove_randomizeAllButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe0b990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.SetAvatarSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::SetAvatarSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0b9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "SetAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.OneTimeInitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)()>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::OneTimeInitialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.Finish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::Finish)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe0b9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.HandleBeatAvatarEditorRandomizeAllButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)()>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::HandleBeatAvatarEditorRandomizeAllButtonWasPressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe0ba24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "HandleBeatAvatarEditorRandomizeAllButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)()>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0ba40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__set_didFinishEvent(::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*  value)  {
::cordl_internals::setInstanceField<::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*, 0xa8>(this, std::forward<::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*>(value));
}
constexpr ::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>* BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*> BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*, 0xa8>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__set_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*, 0xb0>(this, std::forward<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*>(value));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>* BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__get_didSetupEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*> BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__get_didSetupEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*, 0xb0>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__set_randomizeAllButtonWasPressedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xb8>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__get_randomizeAllButtonWasPressedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__get_randomizeAllButtonWasPressedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xb8>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__set__selectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0xc0>(this, std::forward<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(value));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__get__selectedAvatarSystem()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__get__selectedAvatarSystem() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0xc0>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__set__initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this, std::forward<bool>(value));
}
constexpr bool& BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__get__initialized()  {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr bool const& BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_didFinishEvent(::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_didFinishEvent(::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "add_didSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "remove_didSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_randomizeAllButtonWasPressedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "add_randomizeAllButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_randomizeAllButtonWasPressedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "remove_randomizeAllButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::Setup(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode  editMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, editMode);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::SetAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "SetAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystem);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::OneTimeInitialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "OneTimeInitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::Finish(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction  finishAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, finishAction);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::HandleBeatAvatarEditorRandomizeAllButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            "HandleBeatAvatarEditorRandomizeAllButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>());
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
