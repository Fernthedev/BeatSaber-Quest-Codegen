#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarSystemSelectionFlowCoordinator_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemViewController_def.hpp"
#include "GlobalNamespace/zzzz__AvatarSystemSelectionFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
constexpr void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction::__AvatarSystemSelectionFlowCoordinator__FinishAction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction  GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction::Continue{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction  GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction::Back{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::*)()>(&::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x2286774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2286e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__set_avatarSystemsMetadata(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get_avatarSystemsMetadata()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get_avatarSystemsMetadata() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__set___4__this(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*> GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__set__selectableAvatarSystemMetadata_5__3(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(value));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get__selectableAvatarSystemMetadata_5__3()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get__selectableAvatarSystemMetadata_5__3() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>& GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*> const& GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "avatarSystemsMetadata", ty: "::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_selectableAvatarSystemMetadata_5__3", ty: "::BeatSaber::AvatarCore::IAvatarSystemMetadata*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  avatarSystemsMetadata, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*  __4__this, ::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  __7__wrap1, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*  _selectableAvatarSystemMetadata_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->avatarSystemsMetadata = avatarSystemsMetadata;
this->__4__this = __4__this;
this->__7__wrap1 = __7__wrap1;
this->_selectableAvatarSystemMetadata_5__3 = _selectableAvatarSystemMetadata_5__3;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2285aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2285b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Initialize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2285c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(bool)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2285cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2285cf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2285efc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.TopViewControllerWillChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2286088;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.SetAvatarSystemPreferred
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::SetAvatarSystemPreferred)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2286108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "SetAvatarSystemPreferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22861ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x22861f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2286364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleAvatarEditorFlowCoordinatorDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*, ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleAvatarEditorFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22864d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "HandleAvatarEditorFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidPressContinueButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)()>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidPressContinueButton)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22865f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "HandleSelectAvatarSystemViewControllerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.BackButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::HMUI::ViewController*)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2286618;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)()>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x228663c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator._Initialize_b__10_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_Initialize_b__10_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22866b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "<Initialize>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__selectAvatarSystemViewController(::GlobalNamespace::SelectAvatarSystemViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SelectAvatarSystemViewController*, 0xa8>(this, std::forward<::GlobalNamespace::SelectAvatarSystemViewController*>(value));
}
constexpr ::GlobalNamespace::SelectAvatarSystemViewController* GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__selectAvatarSystemViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectAvatarSystemViewController*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectAvatarSystemViewController*> GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__selectAvatarSystemViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectAvatarSystemViewController*, 0xa8>(this);
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0xb0>(this, std::forward<::BeatSaber::AvatarCore::AvatarSystemCollection*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__avatarSystemCollection()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__avatarSystemCollection() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0xb0>(this);
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0xb8>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0xb8>(this);
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0xc0>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0xc0>(this);
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set_didFinishEvent(::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*, 0xc8>(this, std::forward<::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>* GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*> GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*, 0xc8>(this);
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__avatarFlowCoordinators(::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>*, 0xd0>(this, std::forward<::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>* GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__avatarFlowCoordinators()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>*> GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__avatarFlowCoordinators() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier,::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>*, 0xd0>(this);
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__continueButtonVisible(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xd8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__continueButtonVisible()  {
return ::cordl_internals::getInstanceField<bool, 0xd8>(this);
}
constexpr bool const& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__continueButtonVisible() const {
return ::cordl_internals::getInstanceField<bool, 0xd8>(this);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::add_didFinishEvent(::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::remove_didFinishEvent(::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Initialize(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  avatarSystemsMetadata)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystemsMetadata);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Setup(bool  continueButtonVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, continueButtonVisible);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController*  oldViewController, ::HMUI::ViewController*  newViewController, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "TopViewControllerWillChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::SetAvatarSystemPreferred(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "SetAvatarSystemPreferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*  flowCoordinator, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem, ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction  finishAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "HandleAvatarEditorFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator, avatarSystem, finishAction);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidPressContinueButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "HandleSelectAvatarSystemViewControllerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController*  topViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "BackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, topViewController);
}
inline ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* GlobalNamespace::AvatarSystemSelectionFlowCoordinator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>());
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_Initialize_b__10_0(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                            "<Initialize>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, avatarSystem);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
