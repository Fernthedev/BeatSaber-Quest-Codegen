#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemViewController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemViewController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemCell_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::*)()>(&::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x22d9690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22d98b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__set___4__this(::GlobalNamespace::SelectAvatarSystemViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SelectAvatarSystemViewController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SelectAvatarSystemViewController*>(value));
}
constexpr ::GlobalNamespace::SelectAvatarSystemViewController* GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectAvatarSystemViewController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectAvatarSystemViewController*> GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectAvatarSystemViewController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SelectAvatarSystemViewController*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::SelectAvatarSystemViewController*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.add_didSetAvatarSystemPreferredEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemViewController::add_didSetAvatarSystemPreferredEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d7f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "add_didSetAvatarSystemPreferredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.remove_didSetAvatarSystemPreferredEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemViewController::remove_didSetAvatarSystemPreferredEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d7fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "remove_didSetAvatarSystemPreferredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.add_didRequestEditOfAvatarEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemViewController::add_didRequestEditOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d8060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "add_didRequestEditOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.remove_didRequestEditOfAvatarEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemViewController::remove_didRequestEditOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d8110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "remove_didRequestEditOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.add_didRequestCreationOfAvatarEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemViewController::add_didRequestCreationOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d81c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "add_didRequestCreationOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.remove_didRequestCreationOfAvatarEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemViewController::remove_didRequestCreationOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d8270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "remove_didRequestCreationOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.add_didPressContinueButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action*)>(&::GlobalNamespace::SelectAvatarSystemViewController::add_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22d8320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "add_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.remove_didPressContinueButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action*)>(&::GlobalNamespace::SelectAvatarSystemViewController::remove_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22d83bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "remove_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.get_continueButtonVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SelectAvatarSystemViewController::*)()>(&::GlobalNamespace::SelectAvatarSystemViewController::get_continueButtonVisible)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22d8458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "get_continueButtonVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.set_continueButtonVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(bool)>(&::GlobalNamespace::SelectAvatarSystemViewController::set_continueButtonVisible)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22d8480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "set_continueButtonVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.Prewarm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::SelectAvatarSystemViewController::Prewarm)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22d84b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "Prewarm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(bool, bool, bool)>(&::GlobalNamespace::SelectAvatarSystemViewController::DidActivate)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x22d8b5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(bool, bool)>(&::GlobalNamespace::SelectAvatarSystemViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22d9294;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.SetSelectedAvatarSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::SelectAvatarSystemViewController::SetSelectedAvatarSystem)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x22d84f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "SetSelectedAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.ReloadCreateEditButtonOfAvatarSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::SelectAvatarSystemViewController::ReloadCreateEditButtonOfAvatarSystem)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x22d8ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "ReloadCreateEditButtonOfAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.SetAllCellsActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(bool)>(&::GlobalNamespace::SelectAvatarSystemViewController::SetAllCellsActive)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x22d8820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "SetAllCellsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.ReloadContinueButtonInteractability
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)()>(&::GlobalNamespace::SelectAvatarSystemViewController::ReloadContinueButtonInteractability)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22d9200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "ReloadContinueButtonInteractability",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.CellSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SelectAvatarSystemViewController::*)()>(&::GlobalNamespace::SelectAvatarSystemViewController::CellSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22d92a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.NumberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SelectAvatarSystemViewController::*)()>(&::GlobalNamespace::SelectAvatarSystemViewController::NumberOfCells)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22d92b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.CellForIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (::GlobalNamespace::SelectAvatarSystemViewController::*)(::HMUI::TableView*, int32_t)>(&::GlobalNamespace::SelectAvatarSystemViewController::CellForIdx)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x22d9350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.HandleLoadedSelectionViewDidPressPreferredButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressPreferredButton)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22d9608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "HandleLoadedSelectionViewDidPressPreferredButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.HandleLoadedSelectionViewDidPressEditButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressEditButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22d9634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "HandleLoadedSelectionViewDidPressEditButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.HandleLoadedSelectionViewDidPressCreateButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressCreateButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22d9650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "HandleLoadedSelectionViewDidPressCreateButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)()>(&::GlobalNamespace::SelectAvatarSystemViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d966c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController._DidActivate_b__26_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)()>(&::GlobalNamespace::SelectAvatarSystemViewController::_DidActivate_b__26_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22d9674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "<DidActivate>b__26_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr  GlobalNamespace::SelectAvatarSystemViewController::operator ::HMUI::__TableView__IDataSource*() noexcept {
return static_cast<::HMUI::__TableView__IDataSource*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set__tableView(::HMUI::TableView*  value)  {
::cordl_internals::setInstanceField<::HMUI::TableView*, 0x70>(this, std::forward<::HMUI::TableView*>(value));
}
constexpr ::HMUI::TableView* GlobalNamespace::SelectAvatarSystemViewController::__get__tableView()  {
return ::cordl_internals::getInstanceField<::HMUI::TableView*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> GlobalNamespace::SelectAvatarSystemViewController::__get__tableView() const {
return ::cordl_internals::getInstanceField<::HMUI::TableView*, 0x70>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set__continueButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x78>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::SelectAvatarSystemViewController::__get__continueButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::SelectAvatarSystemViewController::__get__continueButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set__hoverHint(::HMUI::HoverHint*  value)  {
::cordl_internals::setInstanceField<::HMUI::HoverHint*, 0x80>(this, std::forward<::HMUI::HoverHint*>(value));
}
constexpr ::HMUI::HoverHint* GlobalNamespace::SelectAvatarSystemViewController::__get__hoverHint()  {
return ::cordl_internals::getInstanceField<::HMUI::HoverHint*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> GlobalNamespace::SelectAvatarSystemViewController::__get__hoverHint() const {
return ::cordl_internals::getInstanceField<::HMUI::HoverHint*, 0x80>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set__cellPrefab(::GlobalNamespace::SelectAvatarSystemCell*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SelectAvatarSystemCell*, 0x88>(this, std::forward<::GlobalNamespace::SelectAvatarSystemCell*>(value));
}
constexpr ::GlobalNamespace::SelectAvatarSystemCell* GlobalNamespace::SelectAvatarSystemViewController::__get__cellPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectAvatarSystemCell*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectAvatarSystemCell*> GlobalNamespace::SelectAvatarSystemViewController::__get__cellPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectAvatarSystemCell*, 0x88>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x90>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* GlobalNamespace::SelectAvatarSystemViewController::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> GlobalNamespace::SelectAvatarSystemViewController::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x90>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x98>(this, std::forward<::BeatSaber::AvatarCore::AvatarSystemCollection*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* GlobalNamespace::SelectAvatarSystemViewController::__get__avatarSystemCollection()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> GlobalNamespace::SelectAvatarSystemViewController::__get__avatarSystemCollection() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x98>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0xa0>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::SelectAvatarSystemViewController::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::SelectAvatarSystemViewController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0xa0>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xa8>(this, std::forward<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(value));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* GlobalNamespace::SelectAvatarSystemViewController::__get_didSetAvatarSystemPreferredEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> GlobalNamespace::SelectAvatarSystemViewController::__get_didSetAvatarSystemPreferredEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xa8>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xb0>(this, std::forward<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(value));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* GlobalNamespace::SelectAvatarSystemViewController::__get_didRequestEditOfAvatarEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> GlobalNamespace::SelectAvatarSystemViewController::__get_didRequestEditOfAvatarEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xb0>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xb8>(this, std::forward<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(value));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* GlobalNamespace::SelectAvatarSystemViewController::__get_didRequestCreationOfAvatarEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> GlobalNamespace::SelectAvatarSystemViewController::__get_didRequestCreationOfAvatarEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xb8>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set_didPressContinueButtonEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xc0>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::SelectAvatarSystemViewController::__get_didPressContinueButtonEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::SelectAvatarSystemViewController::__get_didPressContinueButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xc0>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set__avatarSystems(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xc8>(this, std::forward<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* GlobalNamespace::SelectAvatarSystemViewController::__get__avatarSystems()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> GlobalNamespace::SelectAvatarSystemViewController::__get__avatarSystems() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0xc8>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__set__selectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0xd0>(this, std::forward<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(value));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* GlobalNamespace::SelectAvatarSystemViewController::__get__selectedAvatarSystem()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> GlobalNamespace::SelectAvatarSystemViewController::__get__selectedAvatarSystem() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0xd0>(this);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::add_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "add_didSetAvatarSystemPreferredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::remove_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "remove_didSetAvatarSystemPreferredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::add_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "add_didRequestEditOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::remove_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "remove_didRequestEditOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::add_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "add_didRequestCreationOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::remove_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "remove_didRequestCreationOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::add_didPressContinueButtonEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "add_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::remove_didPressContinueButtonEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "remove_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::SelectAvatarSystemViewController::get_continueButtonVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "get_continueButtonVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::set_continueButtonVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "set_continueButtonVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::Prewarm(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  avatarSystems, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*  selectedAvatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "Prewarm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystems, selectedAvatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::SetSelectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  selectedAvatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "SetSelectedAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, selectedAvatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::ReloadCreateEditButtonOfAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "ReloadCreateEditButtonOfAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::SetAllCellsActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "SetAllCellsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, active);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::ReloadContinueButtonInteractability()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "ReloadContinueButtonInteractability",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::SelectAvatarSystemViewController::CellSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::SelectAvatarSystemViewController::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::HMUI::TableCell* GlobalNamespace::SelectAvatarSystemViewController::CellForIdx(::HMUI::TableView*  tableView, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(*this, ___internal_method, tableView, idx);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressPreferredButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "HandleLoadedSelectionViewDidPressPreferredButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressEditButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "HandleLoadedSelectionViewDidPressEditButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressCreateButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "HandleLoadedSelectionViewDidPressCreateButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystem);
}
inline ::GlobalNamespace::SelectAvatarSystemViewController* GlobalNamespace::SelectAvatarSystemViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectAvatarSystemViewController*>());
}
inline void GlobalNamespace::SelectAvatarSystemViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::_DidActivate_b__26_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemViewController*>::get(),
                            "<DidActivate>b__26_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
