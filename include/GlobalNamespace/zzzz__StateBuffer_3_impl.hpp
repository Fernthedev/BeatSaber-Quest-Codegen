#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>"
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr  GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*()  {
return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set_isValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr bool& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get_isValid()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr bool const& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get_isValid() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set_id(::GlobalNamespace::SyncStateId  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SyncStateId, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SyncStateId>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::SyncStateId& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get_id()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SyncStateId, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::SyncStateId const& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get_id() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SyncStateId, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set_time(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get_time()  {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t const& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get_time() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set_state(::GlobalNamespace::StandardScoreSyncState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardScoreSyncState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::StandardScoreSyncState>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::StandardScoreSyncState& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get_state()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardScoreSyncState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::StandardScoreSyncState const& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get_state() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardScoreSyncState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline bool GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::Equals(ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::_ctor(::GlobalNamespace::SyncStateId  id, int64_t  time, ::GlobalNamespace::StandardScoreSyncState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardScoreSyncState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, id, time, state);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::_ctor(int64_t  time, ::GlobalNamespace::StandardScoreSyncState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardScoreSyncState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, state);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline bool GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::IEquatableByReference_StateBuffer_TStateTable_TType_TState__TimestampedStateTable__Equals(ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>::get(),
                            "IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "id", ty: "::GlobalNamespace::SyncStateId", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "state", ty: "::GlobalNamespace::StandardScoreSyncState", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__StateBuffer_3__TimestampedStateTable(bool  isValid, ::GlobalNamespace::SyncStateId  id, int64_t  time, ::GlobalNamespace::StandardScoreSyncState  state) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->isValid = isValid;
this->id = id;
this->time = time;
this->state = state;
}
/// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>"
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr  GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*()  {
return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set_isValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr bool& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get_isValid()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr bool const& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get_isValid() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set_id(::GlobalNamespace::SyncStateId  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SyncStateId, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SyncStateId>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::SyncStateId& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get_id()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SyncStateId, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::SyncStateId const& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get_id() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SyncStateId, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set_time(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get_time()  {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t const& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get_time() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set_state(::GlobalNamespace::NodePoseSyncState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NodePoseSyncState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::NodePoseSyncState>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::NodePoseSyncState& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get_state()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NodePoseSyncState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::NodePoseSyncState const& GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get_state() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NodePoseSyncState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline bool GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::Equals(ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::_ctor(::GlobalNamespace::SyncStateId  id, int64_t  time, ::GlobalNamespace::NodePoseSyncState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, id, time, state);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::_ctor(int64_t  time, ::GlobalNamespace::NodePoseSyncState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, state);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline bool GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::IEquatableByReference_StateBuffer_TStateTable_TType_TState__TimestampedStateTable__Equals(ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>::get(),
                            "IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "id", ty: "::GlobalNamespace::SyncStateId", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "state", ty: "::GlobalNamespace::NodePoseSyncState", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__StateBuffer_3__TimestampedStateTable(bool  isValid, ::GlobalNamespace::SyncStateId  id, int64_t  time, ::GlobalNamespace::NodePoseSyncState  state) noexcept : ::bs_hook::ValueTypeWrapper<0x58>() {this->isValid = isValid;
this->id = id;
this->time = time;
this->state = state;
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>(object, method));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::Invoke(int32_t  a, int64_t  timeA, int32_t  b, int64_t  timeB, int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, a, timeA, b, timeB, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::System::IAsyncResult* GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::BeginInvoke(int32_t  a, int64_t  timeA, int32_t  b, int64_t  timeB, int64_t  time, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, a, timeA, b, timeB, time, callback, object);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, result);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>(object, method));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::Invoke(::GlobalNamespace::PoseSerializable  a, int64_t  timeA, ::GlobalNamespace::PoseSerializable  b, int64_t  timeB, int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(*this, ___internal_method, a, timeA, b, timeB, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::System::IAsyncResult* GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::BeginInvoke(::GlobalNamespace::PoseSerializable  a, int64_t  timeA, ::GlobalNamespace::PoseSerializable  b, int64_t  timeB, int64_t  time, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, a, timeA, b, timeB, time, callback, object);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(*this, ___internal_method, result);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>(object, method));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::Invoke(int32_t  a, int32_t  b, float_t  smooth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, a, b, smooth);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::System::IAsyncResult* GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::BeginInvoke(int32_t  a, int32_t  b, float_t  smooth, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, a, b, smooth, callback, object);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, result);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>(object, method));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::Invoke(::GlobalNamespace::PoseSerializable  a, ::GlobalNamespace::PoseSerializable  b, float_t  smooth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(*this, ___internal_method, a, b, smooth);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::System::IAsyncResult* GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::BeginInvoke(::GlobalNamespace::PoseSerializable  a, ::GlobalNamespace::PoseSerializable  b, float_t  smooth, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, a, b, smooth, callback, object);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(*this, ___internal_method, result);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__currentIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__currentIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__currentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__buffer(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>& GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__buffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*> const& GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__interpolator(::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x20>(this, std::forward<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__interpolator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*> GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__interpolator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__smoother(::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x28>(this, std::forward<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__smoother()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x28>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*> GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__smoother() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x28>(this);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::New_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>(size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size, interpolator, smoother);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::GetPreviousIndex(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "GetPreviousIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, offset);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::InsertState(ByRef<::GlobalNamespace::StandardScoreSyncState>  state, int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "InsertState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::GetState(TType  type, int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, type, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::GetLatestState(TType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "GetLatestState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, type);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int64_t GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::GetLatestTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "GetLatestTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__currentIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__currentIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__currentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__buffer(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>& GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__buffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*> const& GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__interpolator(::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x20>(this, std::forward<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__interpolator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*> GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__interpolator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__smoother(::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x28>(this, std::forward<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__smoother()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x28>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*> GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__smoother() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x28>(this);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::New_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>(size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size, interpolator, smoother);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::GetPreviousIndex(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "GetPreviousIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, offset);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::InsertState(ByRef<::GlobalNamespace::NodePoseSyncState>  state, int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "InsertState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::GetState(TType  type, int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(*this, ___internal_method, type, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::GetLatestState(TType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "GetLatestState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(*this, ___internal_method, type);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int64_t GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::GetLatestTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "GetLatestTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
