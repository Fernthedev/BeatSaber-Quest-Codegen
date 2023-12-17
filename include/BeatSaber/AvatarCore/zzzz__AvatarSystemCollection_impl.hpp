#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystem_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarSystemCollection____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::__AvatarSystemCollection____c::*)()>(&::BeatSaber::AvatarCore::__AvatarSystemCollection____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0ddf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarSystemCollection____c._get_anyAvatarCreated_b__14_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::AvatarCore::__AvatarSystemCollection____c::*)(::BeatSaber::AvatarCore::IAvatarSystem*)>(&::BeatSaber::AvatarCore::__AvatarSystemCollection____c::_get_anyAvatarCreated_b__14_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe0ddf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get(),
                            "<get_anyAvatarCreated>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::__AvatarSystemCollection____c::setStaticF___9(::BeatSaber::AvatarCore::__AvatarSystemCollection____c*  value)  {
::cordl_internals::setStaticField<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get>(std::forward<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>(value));
}
inline ::BeatSaber::AvatarCore::__AvatarSystemCollection____c* BeatSaber::AvatarCore::__AvatarSystemCollection____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get>();
}
inline void BeatSaber::AvatarCore::__AvatarSystemCollection____c::setStaticF___9__14_0(::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*,::System::Threading::Tasks::Task_1<bool>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*,::System::Threading::Tasks::Task_1<bool>*>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get>(std::forward<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*,::System::Threading::Tasks::Task_1<bool>*>*>(value));
}
inline ::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*,::System::Threading::Tasks::Task_1<bool>*>* BeatSaber::AvatarCore::__AvatarSystemCollection____c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*,::System::Threading::Tasks::Task_1<bool>*>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get>();
}
inline ::BeatSaber::AvatarCore::__AvatarSystemCollection____c* BeatSaber::AvatarCore::__AvatarSystemCollection____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>());
}
inline void BeatSaber::AvatarCore::__AvatarSystemCollection____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::__AvatarSystemCollection____c::_get_anyAvatarCreated_b__14_0(::BeatSaber::AvatarCore::IAvatarSystem*  avatarSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get(),
                            "<get_anyAvatarCreated>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(*this, ___internal_method, avatarSystem);
}
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::*)()>(&::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x89c;
  constexpr static std::size_t addrs = 0xe0de98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe0e734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>& BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData> const& BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__set___4__this(::BeatSaber::AvatarCore::AvatarSystemCollection*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BeatSaber::AvatarCore::AvatarSystemCollection*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__get___4__this()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__get___4__this() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__set_selectedAvatarTypeIdentifier(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__get_selectedAvatarTypeIdentifier()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__get_selectedAvatarTypeIdentifier() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>& BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>> const& BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::AvatarCore::AvatarSystemCollection*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "selectedAvatarTypeIdentifier", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>  __t__builder, ::BeatSaber::AvatarCore::AvatarSystemCollection*  __4__this, ::StringW  selectedAvatarTypeIdentifier, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->selectedAvatarTypeIdentifier = selectedAvatarTypeIdentifier;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_selectableAvatarSystems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_selectableAvatarSystems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0cbe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "get_selectableAvatarSystems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_availableAvatarSystems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_availableAvatarSystems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0cbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "get_availableAvatarSystems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_supportedOptionalAvatarDataType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_supportedOptionalAvatarDataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0cbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "get_supportedOptionalAvatarDataType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::_ctor)> {
  constexpr static std::size_t size = 0xae8;
  constexpr static std::size_t addrs = 0xe0cc00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.AvatarSystemBySelectionSortOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::BeatSaber::AvatarCore::IAvatarSystem*, ::BeatSaber::AvatarCore::IAvatarSystem*)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::AvatarSystemBySelectionSortOrder)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe0d6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "AvatarSystemBySelectionSortOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_anyAvatarCreated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_anyAvatarCreated)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xe0d810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "get_anyAvatarCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.HasAvatarSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(uint32_t)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::HasAvatarSystem)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe0b40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "HasAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetMultiplayerAvatarsData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xe0d930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetMultiplayerAvatarsData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetMultiplayerAvatarOptionalDataProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarOptionalDataProvider)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe0da34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetMultiplayerAvatarOptionalDataProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xe0db20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe0dcd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::BeatSaber::AvatarCore::AvatarSystemIdentifier)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0dd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarSystemIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe0daf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(uint32_t)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe0b464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__set__availableAvatarSystems(::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::IAvatarSystem*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::IAvatarSystem*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::IAvatarSystem*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::IAvatarSystem*>* BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableAvatarSystems()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::IAvatarSystem*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::IAvatarSystem*>*> BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableAvatarSystems() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::IAvatarSystem*>*, 0x10>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__set__availableUserSelectableAvatarSystems(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableUserSelectableAvatarSystems()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*> BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableUserSelectableAvatarSystems() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*, 0x18>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__set__supportedOptionalAvatarDataTypes(::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*, 0x20>(this, std::forward<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* BeatSaber::AvatarCore::AvatarSystemCollection::__get__supportedOptionalAvatarDataTypes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*> BeatSaber::AvatarCore::AvatarSystemCollection::__get__supportedOptionalAvatarDataTypes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*, 0x20>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__set__fallbackAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystem*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IAvatarSystem*, 0x28>(this, std::forward<::BeatSaber::AvatarCore::IAvatarSystem*>(value));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::__get__fallbackAvatarSystem()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystem*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystem*> BeatSaber::AvatarCore::AvatarSystemCollection::__get__fallbackAvatarSystem() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystem*, 0x28>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__set__availableAvatarSystemList(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*, 0x30>(this, std::forward<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableAvatarSystemList()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*> BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableAvatarSystemList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*, 0x30>(this);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* BeatSaber::AvatarCore::AvatarSystemCollection::get_selectableAvatarSystems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "get_selectableAvatarSystems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* BeatSaber::AvatarCore::AvatarSystemCollection::get_availableAvatarSystems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "get_availableAvatarSystems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* BeatSaber::AvatarCore::AvatarSystemCollection::get_supportedOptionalAvatarDataType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "get_supportedOptionalAvatarDataType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*, false>(*this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::AvatarSystemCollection* BeatSaber::AvatarCore::AvatarSystemCollection::New_ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*  boundAvatarSystems)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::AvatarSystemCollection*>(boundAvatarSystems));
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection::_ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*  boundAvatarSystems)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, boundAvatarSystems);
}
inline int32_t BeatSaber::AvatarCore::AvatarSystemCollection::AvatarSystemBySelectionSortOrder(::BeatSaber::AvatarCore::IAvatarSystem*  system1, ::BeatSaber::AvatarCore::IAvatarSystem*  system2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "AvatarSystemBySelectionSortOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, system1, system2);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::AvatarSystemCollection::get_anyAvatarCreated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "get_anyAvatarCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(*this, ___internal_method);
}
inline bool BeatSaber::AvatarCore::AvatarSystemCollection::HasAvatarSystem(uint32_t  avatarTypeIdentifierHash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "HasAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, avatarTypeIdentifierHash);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarsData(::StringW  selectedAvatarTypeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetMultiplayerAvatarsData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*, false>(*this, ___internal_method, selectedAvatarTypeIdentifier);
}
inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarOptionalDataProvider(::StringW  selectedAvatarTypeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetMultiplayerAvatarOptionalDataProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*, false>(*this, ___internal_method, selectedAvatarTypeIdentifier);
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection::CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystemMetadata)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(*this, ___internal_method, avatarSystemMetadata);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::BeatSaber::AvatarCore::AvatarSystemIdentifier  avatarSystemIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarSystemIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(*this, ___internal_method, avatarSystemIdentifier);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::StringW  avatarTypeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(*this, ___internal_method, avatarTypeIdentifier);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(uint32_t  avatarTypeIdentifierHash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                            "GetAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(*this, ___internal_method, avatarTypeIdentifierHash);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
