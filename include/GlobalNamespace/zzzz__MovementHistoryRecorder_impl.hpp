#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MovementHistoryRecorder_def.hpp"
#include "GlobalNamespace/zzzz__AveragingValueRecorder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder.get_averagingValueRecorer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AveragingValueRecorder* (::GlobalNamespace::MovementHistoryRecorder::*)()>(&::GlobalNamespace::MovementHistoryRecorder::get_averagingValueRecorer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2262f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(),
                            "get_averagingValueRecorer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementHistoryRecorder::*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::MovementHistoryRecorder::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2262f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder.AddMovement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementHistoryRecorder::*)(float_t)>(&::GlobalNamespace::MovementHistoryRecorder::AddMovement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x226302c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(),
                            "AddMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementHistoryRecorder::*)(float_t)>(&::GlobalNamespace::MovementHistoryRecorder::ManualUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2263050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MovementHistoryRecorder::__set__averagingValueRecorer(::GlobalNamespace::AveragingValueRecorder*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AveragingValueRecorder*, 0x10>(this, std::forward<::GlobalNamespace::AveragingValueRecorder*>(value));
}
constexpr ::GlobalNamespace::AveragingValueRecorder* GlobalNamespace::MovementHistoryRecorder::__get__averagingValueRecorer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AveragingValueRecorder*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AveragingValueRecorder*> GlobalNamespace::MovementHistoryRecorder::__get__averagingValueRecorer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AveragingValueRecorder*, 0x10>(this);
}
constexpr void GlobalNamespace::MovementHistoryRecorder::__set__increaseSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MovementHistoryRecorder::__get__increaseSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::MovementHistoryRecorder::__get__increaseSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::MovementHistoryRecorder::__set__decreaseSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MovementHistoryRecorder::__get__decreaseSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::MovementHistoryRecorder::__get__decreaseSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::MovementHistoryRecorder::__set__accum(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MovementHistoryRecorder::__get__accum()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::MovementHistoryRecorder::__get__accum() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
inline ::GlobalNamespace::AveragingValueRecorder* GlobalNamespace::MovementHistoryRecorder::get_averagingValueRecorer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(),
                            "get_averagingValueRecorer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AveragingValueRecorder*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MovementHistoryRecorder* GlobalNamespace::MovementHistoryRecorder::New_ctor(float_t  averageWindowDuration, float_t  historyValuesPerSecond, float_t  increaseSpeed, float_t  decreaseSpeed)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MovementHistoryRecorder*>(averageWindowDuration, historyValuesPerSecond, increaseSpeed, decreaseSpeed));
}
inline void GlobalNamespace::MovementHistoryRecorder::_ctor(float_t  averageWindowDuration, float_t  historyValuesPerSecond, float_t  increaseSpeed, float_t  decreaseSpeed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, averageWindowDuration, historyValuesPerSecond, increaseSpeed, decreaseSpeed);
}
inline void GlobalNamespace::MovementHistoryRecorder::AddMovement(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(),
                            "AddMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, distance);
}
inline void GlobalNamespace::MovementHistoryRecorder::ManualUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementHistoryRecorder*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, deltaTime);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
