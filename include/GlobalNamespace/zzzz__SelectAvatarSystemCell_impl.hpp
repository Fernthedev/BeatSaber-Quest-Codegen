#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemCell_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemCell_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::*)()>(&::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x22e8fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22e9570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__set___4__this(::GlobalNamespace::SelectAvatarSystemCell*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SelectAvatarSystemCell*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SelectAvatarSystemCell*>(value));
}
constexpr ::GlobalNamespace::SelectAvatarSystemCell* GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectAvatarSystemCell*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectAvatarSystemCell*> GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectAvatarSystemCell*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__set_avatarSystemMetadata(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(value));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__get_avatarSystemMetadata()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__get_avatarSystemMetadata() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*>& GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*> const& GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SelectAvatarSystemCell*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "avatarSystemMetadata", ty: "::BeatSaber::AvatarCore::IAvatarSystemMetadata*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__SelectAvatarSystemCell___Load_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::SelectAvatarSystemCell*  __4__this, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystemMetadata, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->avatarSystemMetadata = avatarSystemMetadata;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::*)()>(&::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x22e957c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22e982c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__set___4__this(::GlobalNamespace::SelectAvatarSystemCell*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SelectAvatarSystemCell*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SelectAvatarSystemCell*>(value));
}
constexpr ::GlobalNamespace::SelectAvatarSystemCell* GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectAvatarSystemCell*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectAvatarSystemCell*> GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectAvatarSystemCell*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__set___7__wrap1(::BeatSaber::AvatarCore::AvatarSelectionView*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarSelectionView*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BeatSaber::AvatarCore::AvatarSelectionView*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarSelectionView* GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSelectionView*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSelectionView*> GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSelectionView*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SelectAvatarSystemCell*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap1", ty: "::BeatSaber::AvatarCore::AvatarSelectionView*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__SelectAvatarSystemCell___ReloadIsCreated_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::SelectAvatarSystemCell*  __4__this, ::BeatSaber::AvatarCore::AvatarSelectionView*  __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.add_didSetAvatarSystemPreferredEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::add_didSetAvatarSystemPreferredEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e8794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "add_didSetAvatarSystemPreferredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.remove_didSetAvatarSystemPreferredEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::remove_didSetAvatarSystemPreferredEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e8844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "remove_didSetAvatarSystemPreferredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.add_didRequestEditOfAvatarEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::add_didRequestEditOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e88f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "add_didRequestEditOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.remove_didRequestEditOfAvatarEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::remove_didRequestEditOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e89a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "remove_didRequestEditOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.add_didRequestCreationOfAvatarEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::add_didRequestCreationOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e8a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "add_didRequestCreationOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.remove_didRequestCreationOfAvatarEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::remove_didRequestCreationOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e8b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "remove_didRequestCreationOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::SelectAvatarSystemCell::Load)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22e8bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22e8c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.SetSelectedAvatarSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::SelectAvatarSystemCell::SetSelectedAvatarSystem)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22e8ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "SetSelectedAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.ReloadIsCreated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::ReloadIsCreated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22e8d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "ReloadIsCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::Activate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22e8e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.Deactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::Deactivate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22e8ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.TryActivateOnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::TryActivateOnEnable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22e8c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "TryActivateOnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.HandleLoadedSelectionViewDidPressPreferredButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressPreferredButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22e8f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "HandleLoadedSelectionViewDidPressPreferredButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.HandleLoadedSelectionViewDidPressEditButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressEditButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22e8f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "HandleLoadedSelectionViewDidPressEditButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.HandleLoadedSelectionViewDidPressCreateButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressCreateButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22e8f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "HandleLoadedSelectionViewDidPressCreateButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e8fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SelectAvatarSystemCell::__set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x58>(this, std::forward<::BeatSaber::AvatarCore::AvatarSystemCollection*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* GlobalNamespace::SelectAvatarSystemCell::__get__avatarSystemCollection()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> GlobalNamespace::SelectAvatarSystemCell::__get__avatarSystemCollection() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x58>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__set_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x60>(this, std::forward<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(value));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* GlobalNamespace::SelectAvatarSystemCell::__get_didSetAvatarSystemPreferredEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> GlobalNamespace::SelectAvatarSystemCell::__get_didSetAvatarSystemPreferredEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x60>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__set_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x68>(this, std::forward<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(value));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* GlobalNamespace::SelectAvatarSystemCell::__get_didRequestEditOfAvatarEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> GlobalNamespace::SelectAvatarSystemCell::__get_didRequestEditOfAvatarEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x68>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__set_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x70>(this, std::forward<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(value));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* GlobalNamespace::SelectAvatarSystemCell::__get_didRequestCreationOfAvatarEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> GlobalNamespace::SelectAvatarSystemCell::__get_didRequestCreationOfAvatarEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, 0x70>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__set__loadedAvatarSystemMetadata(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x78>(this, std::forward<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(value));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* GlobalNamespace::SelectAvatarSystemCell::__get__loadedAvatarSystemMetadata()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> GlobalNamespace::SelectAvatarSystemCell::__get__loadedAvatarSystemMetadata() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x78>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__set__selectedAvatarSystemMetadata(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x80>(this, std::forward<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(value));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* GlobalNamespace::SelectAvatarSystemCell::__get__selectedAvatarSystemMetadata()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> GlobalNamespace::SelectAvatarSystemCell::__get__selectedAvatarSystemMetadata() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystemMetadata*, 0x80>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__set__loadedSelectionView(::BeatSaber::AvatarCore::AvatarSelectionView*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarSelectionView*, 0x88>(this, std::forward<::BeatSaber::AvatarCore::AvatarSelectionView*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarSelectionView* GlobalNamespace::SelectAvatarSystemCell::__get__loadedSelectionView()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSelectionView*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSelectionView*> GlobalNamespace::SelectAvatarSystemCell::__get__loadedSelectionView() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSelectionView*, 0x88>(this);
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__set__activateViewOnEnable(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SelectAvatarSystemCell::__get__activateViewOnEnable()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& GlobalNamespace::SelectAvatarSystemCell::__get__activateViewOnEnable() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
inline void GlobalNamespace::SelectAvatarSystemCell::add_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "add_didSetAvatarSystemPreferredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::remove_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "remove_didSetAvatarSystemPreferredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::add_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "add_didRequestEditOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::remove_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "remove_didRequestEditOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::add_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "add_didRequestCreationOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::remove_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "remove_didRequestCreationOfAvatarEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::Load(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystemMetadata)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystemMetadata);
}
inline void GlobalNamespace::SelectAvatarSystemCell::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::SetSelectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "SetSelectedAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemCell::ReloadIsCreated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "ReloadIsCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::Activate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::TryActivateOnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "TryActivateOnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressPreferredButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "HandleLoadedSelectionViewDidPressPreferredButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressEditButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "HandleLoadedSelectionViewDidPressEditButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressCreateButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            "HandleLoadedSelectionViewDidPressCreateButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SelectAvatarSystemCell* GlobalNamespace::SelectAvatarSystemCell::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectAvatarSystemCell*>());
}
inline void GlobalNamespace::SelectAvatarSystemCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
